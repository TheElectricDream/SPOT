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

% Perturbations:
perturbation_amplitude         = 0.125; %[N]
perturbation_bias              = perturbation_amplitude;
perturbation_frequency         = 2*pi/10;

%% Set the base sampling rate: 

% This variable will change the frequency at which the template runs. If
% the frequency of the template changes, the frequency of the server must
% also be changed, i.e. open the StreamData.sln under the PhaseSpace Server
% folder, and change line 204 from owl.frequency(10) to 
% owl.frequency(serverRate):

baseRate                       = 0.02;      % 20 Hz

%% Set the frequency that the data is being sent up from the PhaseSpace:

% This variable must be less then the baseRate; in simulation, setting this
% equal to the baseRate causes the simulation fail, while in experiment
% setting this equal to or higher then the baseRate causes the data to
% buffer in the UDP send.

serverRate                     = 0.1;       % 10 Hz

%% Set the duration of each major phase in the experiment, in seconds:

Phase0_Duration                = 10;        % [s]
Phase1_Duration                = 5;         % [s]
Phase2_Duration                = 20;        % [s]
Phase3_Duration                = 371;       % [s]
Phase4_Duration                = 20;        % [s]
Phase5_Duration                = 5;         % [s]

% Set the duration of the sub-phases. Sub-phases occur during the
% experiment phase (Phase3_Duration) and must be manually inserted into the
% diagram. The total duration of the sub-phases must equal the length of
% the Phase3_Duration.

Phase3_SubPhase1_Duration      = 5;        % [s]
Phase3_SubPhase2_Duration      = 5;        % [s]
Phase3_SubPhase3_Duration      = 1;        % [s]
Phase3_SubPhase4_Duration      = 360;      % [s]

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
      
drop_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
drop_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]

init_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
init_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]

home_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
home_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]
                                              

%% Define parameters for the L1 adaptive controller:

% Ideal model parameters:
alpha               = 1;
A                   = [zeros(3,3), eye(3,3); zeros(3,3), zeros(3,3)];
Bm                  = [zeros(3,3);(1/REDMass)*eye(3,3)];
Bum                 =[(1/REDMass)*eye(3,3);zeros(3,3)];
D                   = zeros(6,3);
C                   = [(alpha)*eye(3,3),eye(3,3)];

% Uncertain system input gain:
w                   = 1; 
Km                  = 40*[eye(3),eye(3)];
Am                  = A-w*Bm*Km;

% Determining the adaptive control matrix for the adaptive law using
% Lyaponov equation:
P                   = lyap(Am',eye(6));
PBm                 = P*Bm;
PBum                = P*Bum; 

% Control gain matrix that ensures that -w*K is Hurwitz:
K                   = 0.01*eye(3);

% Feedforward gain for achieving the desired steady-state tracking:
Kg                  = -1*inv((C*inv(Am)*Bm)); %#ok<MINV>

% Define the system and filter transfer functions:
S                   = tf('s');
Hx                  = inv((S*eye(6)-Am));
Hm                  = C*Hx*Bm;
Hum                 = C*Hx*Bum;
H                  = inv(Hm)*Hum;
Ds                 = (1/(S*((S/45)+1)*((S/175)+1)*...
                    ((S/150)+1)*((S/115)+1)*((S/255)+1)))*eye(3);
Cs                  = w*K*Ds*(inv(eye(3)+w*K*Ds));

% Check for stability of the system:
CsHs                = Cs*inv(Hm);

% Adaptive control gain:
Gamma               = 1;

n                   = 6;

%% Redefine ideal state-space model:
% Take the continuous transfer functions and convert them to discrete time,
% knowing the rate at which data will be read:

opt                            = c2dOptions('Method','tustin',...
                                'FractDelayApproxOrder',3);
%H                             = c2d(Hc,serverRate,opt);
%Ds                            = c2d(Dsc,serverRate,opt);
                               
%% Start the graphical user interface:

run('GUI_v2_12');
