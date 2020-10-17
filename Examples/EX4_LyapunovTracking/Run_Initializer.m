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

Kp_xr                          = 9;
Kd_xr                          = 15;

Kp_yr                          = 9;
Kd_yr                          = 15;

Kp_tr                          = 0.2;
Kd_tr                          = 0.5;

% Initialize the PID gains for the BLACK platform:

Kp_xb                          = 5;
Kd_xb                          = 15;

Kp_yb                          = 5;
Kd_yb                          = 15;

Kp_tb                          = 0.2;
Kd_tb                          = 0.5;

% Set the noise variance level for the RED and BLACK platforms:

noise_variance_RED             = 0;
noise_variance_BLACK           = 0;

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

%% Define constants for Lyapunov tracking experiment:

m                              = 16.9478;  

order                          = 2;

freq_c                         = 20;
freq_t                         = 20;
q                              = 3*10^(-4);

X                              = xLength;
Y                              = yLength;

x0                             = X/2;
y0                             = Y/2;

k1                             = 0.8;
k2                             = 1.2;
k3                             = 1.8;
k10                            = 0;

a                              = 0.2;
T_orbit                        = 150;
n_orbit                        = 2;
w                              = (2*pi)/(T_orbit);
T                              = T_orbit*n_orbit;

rI_t0                          = [a + x0; y0; 0];

eta                            = 0.75;
v                              = ((2)*(2*pi)*(eta))/T_orbit;
n_comp                         = [0; 0; -1];
n                              = n_comp./norm(n_comp);

p                              = 30;
rI_c0                          = rI_t0 + eta.*[cosd(p); sind(p); 0];
vI_c0                          = [0; 0; 0];
rT_c0                          = rI_c0 - rI_t0;

IC                             = [0;0;0]; 


%% Set the duration of each major phase in the experiment, in seconds:

Phase0_Duration                = 10;        % [s]
Phase1_Duration                = 5;         % [s]
Phase2_Duration                = 20;        % [s]
Phase3_Duration                = 5+5+1+T;   % [s]
Phase4_Duration                = 20;        % [s]
Phase5_Duration                = 5;         % [s]

% Set the duration of the sub-phases. Sub-phases occur during the
% experiment phase (Phase3_Duration) and must be manually inserted into the
% diagram. The total duration of the sub-phases must equal the length of
% the Phase3_Duration.

Phase3_SubPhase1_Duration      = 5;        % [s]
Phase3_SubPhase2_Duration      = 5;        % [s]
Phase3_SubPhase3_Duration      = 1;        % [s]
Phase3_SubPhase4_Duration      = T;       % [s]

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
      
drop_states_RED           = [2.26811987304688,1.59047058105469,-0.0240784641355276];                       % [m; m; rad]
drop_states_BLACK         = [1.56925720214844,1.14645117187500,-0.00223022140562534];                       % [m; m; rad]

init_states_RED           = rI_c0;                       % [m; m; rad]
init_states_BLACK         = rI_t0;                       % [m; m; rad]

home_states_RED           = [ 2; 0.5; 0];                % [m; m; rad]
home_states_BLACK         = rI_t0;                       % [m; m; rad]
                                              
%% Start the graphical user interface:

run('GUI_v2_12');
