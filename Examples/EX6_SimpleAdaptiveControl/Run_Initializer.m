% The following script is the initializer for SPOT 2.0; in this script,
% users define all initials parameters and/or constants required for
% simulation and experiment.

% Version: 2.12 (Official Release)

% Authors: Alexander Crain & Kirk Hovell
% Legacy: David Rogers & Kirk Hovell

clear;
clc;
close all force;

warning('off','all')

fprintf('|----------------------------------------------------------------|\n')
fprintf('|----------------------------------------------------------------|\n')
fprintf('|                       -------------------                      |\n')
fprintf('|                     | Welcome to SPOT 2.0 |                    |\n')
fprintf('|                       -------------------                      |\n')
fprintf('|                                                                |\n')
fprintf('|Authors (v2.0+): Alex Crain and Kirk Hovell                     |\n')
fprintf('|Authors (Legacy): Dave Rogers and Kirk Hovell                   |\n')
fprintf('|                                                                |\n')
fprintf('|Current Version: 2.12 (Official Release)                        |\n')
fprintf('|                                                                |\n')
fprintf('|Last Edit: 2018-06-30                                           |\n')
fprintf('|                                                                |\n')
fprintf('|----------------------------------------------------------------|\n')
fprintf('|----------------------------------------------------------------|\n')

%% User-defined constants:

% Converting from degrees to radians and vis versa:

d2r                            = pi/180;
r2d                            = 180/pi;

% Initialize the table size for use in the GUI (don't delete):

xLength                        = 3.51155;   % [m]
yLength                        = 2.41935;   % [m]

% Initialize the PID gains for the RED platform:

Kp_xr                          = 2;
Kd_xr                          = 5;

Kp_yr                          = 2;
Kd_yr                          = 5;

Kp_tr                          = 0.1;
Kd_tr                          = 0.4;

% Initialize the PID gains for the BLACK platform:

Kp_xb                          = 2;
Kd_xb                          = 5;

Kp_yb                          = 2;
Kd_yb                          = 5;

Kp_tb                          = 0.1;
Kd_tb                          = 0.4;

% Set the noise variance level for the RED and BLACK platforms:

noise_variance_RED             = 0;
noise_variance_BLACK           = 0;

%% User defined constants for simple adaptive controller:

% Parameters for the ideal model:
ts                             = 0.1; 
zeta                           = 0.90; 
wn                             = 4/(ts*zeta);
alpha                          = 1;
Am                             = [zeros(3,3), eye(3,3);...
                                -wn^2*eye(3,3), -2*zeta*wn*eye(3,3)];
Bm                             = [zeros(3,3);wn^2*eye(3,3)];
Cm                             = eye(6,6); 
Dm                             = zeros(6,3);

% To calculate the real ideal model output:
Cmout                          = [alpha*eye(3,3),eye(3,3)]; 

% Initial pos. & vel. of RED:
xm_ini                         = [xLength/2+0.7, yLength/2, 0, 0, 0, 0]'; 

% Initialize the adaptive gains:
KeI0           = (1e-4).*[   0.1063   -0.0058         0
                            -0.0058    0.0003         0
                             0         0              0 ];
                         
KxI0           = [  -0.0060   -0.0020         0   -0.0001   -0.0001     0
                     0.0003    0.0001         0    0.0000    0.0000     0
                     0         0         0         0         0          0 ];
                 
KuI0           = [  -0.0066   -0.0031         0
                     0.0004    0.0002         0
                     0         0              0 ];

% Initialize the learning rates for the adaptive controller:
GeP                            = 1e-0*eye(3,3);
GxP                            = 8e-0*eye(6,6);
GuP                            = 8e-0*eye(3,3);
GeI                            = 2e-2*eye(3,3); 
GxI                            = 1e-2*eye(6,6); 
GuI                            = 1e-2*eye(3,3); 

% Set the forgetting rates. Higher values increase robustness to unknown
% disturbances:
sigma_eI                       = 0.4;
sigma_xI                       = 0.4;
sigma_uI                       = 0.4;

%% Set the base sampling rate: 

% This variable will change the frequency at which the template runs. If
% the frequency of the template changes, the frequency of the server must
% also be changed, i.e. open the StreamData.sln under the PhaseSpace Server
% folder, and change line 204 from owl.frequency(10) to 
% owl.frequency(serverRate):

baseRate                       = 0.05;      % 20 Hz

%% Set the frequency that the data is being sent up from the PhaseSpace:

% This variable must be less then the baseRate; in simulation, setting this
% equal to the baseRate causes the simulation fail, while in experiment
% setting this equal to or higher then the baseRate causes the data to
% buffer in the UDP send.

serverRate                     = 0.1;       % 10 Hz

%% Redefine ideal state-space model:
% Take the continuous state-space model and convert it to discrete time,
% knowing the rate at which data will be read:
sys                            = ss(Am, Bm, Cm, Dm);

opt                            = c2dOptions('Method','tustin',...
                                'FractDelayApproxOrder',3);
sysd1                          = c2d(sys,serverRate,opt);

%% Set the duration of each major phase in the experiment, in seconds:

Phase0_Duration                = 10;        % [s]
Phase1_Duration                = 5;         % [s]
Phase2_Duration                = 20;        % [s]
Phase3_Duration                = 131;       % [s]
Phase4_Duration                = 20;        % [s]
Phase5_Duration                = 5;         % [s]

% Set the duration of the sub-phases. Sub-phases occur during the
% experiment phase (Phase3_Duration) and must be manually inserted into the
% diagram. The total duration of the sub-phases must equal the length of
% the Phase3_Duration.

Phase3_SubPhase1_Duration      = 5;        % [s]
Phase3_SubPhase2_Duration      = 5;        % [s]
Phase3_SubPhase3_Duration      = 1;        % [s]
Phase3_SubPhase4_Duration      = 120;       % [s]

% Determine the total experiment time from the durations:

tsim                           = Phase0_Duration + Phase1_Duration + ...
                                 Phase2_Duration + Phase3_Duration + ...
                                 Phase4_Duration + Phase5_Duration;        

% Determine the start time of each phase based on the duration:

Phase0_End                     = Phase0_Duration;
Phase1_End                     = Phase0_Duration + Phase1_Duration;           
Phase2_End                     = Phase0_Duration + Phase1_Duration + ...
                                 Phase2_Duration;         
Phase3_End                     = Phase0_Duration + Phase1_Duration + ...
                                 Phase2_Duration + Phase3_Duration;      
Phase4_End                     = Phase0_Duration + Phase1_Duration + ...
                                 Phase2_Duration + Phase3_Duration + ...
                                 Phase4_Duration; 
Phase5_End                     = Phase0_Duration + Phase1_Duration + ...
                                 Phase2_Duration + Phase3_Duration + ...
                                 Phase4_Duration + Phase5_Duration;                              
                             
% Determine the start time of each sub-phase based on the duration:  

Phase3_SubPhase1_End           = Phase2_End + Phase3_SubPhase1_Duration;
Phase3_SubPhase2_End           = Phase2_End + Phase3_SubPhase1_Duration + ...
                                 Phase3_SubPhase2_Duration;
Phase3_SubPhase3_End           = Phase2_End + Phase3_SubPhase1_Duration + ...
                                 Phase3_SubPhase2_Duration +...
                                 Phase3_SubPhase3_Duration;
Phase3_SubPhase4_End           = Phase2_End + Phase3_SubPhase1_Duration + ...
                                 Phase3_SubPhase2_Duration +...
                                 Phase3_SubPhase3_Duration +...
                                 Phase3_SubPhase4_Duration;                             
                          
%% Load in any required data:

% Define the mass properties for the RED and BLACK platforms:

load('model_param.mat'); 

model_param(1)                 = REDMass;
model_param(2)                 = REDInertia;
model_param(3)                 = BLACKMass;
model_param(4)                 = BLACKInertia;

% Initialize the thruster positions for the RED and BLACK platforms, as
% well as the expected maximum forces. The expected forces will only affect 
% the simulations.

load('thruster_param.mat');

%%  Set the drop, initial, and home positions for each platform:
      
drop_states_RED           = [2.60644311523438,1.21791186523438,3.08142089843750]; % [m; m; rad]
drop_states_BLACK         = [1.79313305664063,1.22521911621094,0.176047682762146];      % [m; m; rad]

init_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
init_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]

home_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
home_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]
                                              
%% Start the graphical user interface:

run('GUI_v2_12');