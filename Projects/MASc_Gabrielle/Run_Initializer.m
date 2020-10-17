% The following script is the initializer for SPOT 2.0; in this script,
% users define all initials parameters and/or constants required for
% simulation and experiment.

% Version: 3.03 (Beta Release)

% Authors: Alexander Crain
% Legacy: David Rogers & Kirk Hovell

clear;
clc;
close all force;

warning('off','all')

fprintf('|----------------------------------------------------------------|\n')
fprintf('|----------------------------------------------------------------|\n')
fprintf('|                       -------------------                      |\n')
fprintf('|                     | Welcome to SPOT 3.0 |                    |\n')
fprintf('|                       -------------------                      |\n')
fprintf('|                                                                |\n')
fprintf('|Authors (v3.0): Alex Crain                                      |\n')
fprintf('|Authors (v2.0): Alex Crain and Kirk Hovell                      |\n')
fprintf('|Authors (Legacy): Dave Rogers and Kirk Hovell                   |\n')
fprintf('|                                                                |\n')
fprintf('|Current Version: 3.03 (Beta Release)                            |\n')
fprintf('|                                                                |\n')
fprintf('|Last Edit: 2020-04-13                                           |\n')
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

% Initialize the PID gains for the BLUE platform:

Kp_xblue                       = 2;
Kd_xblue                       = 5;

Kp_yblue                       = 2;
Kd_yblue                       = 5;

Kp_tblue                       = 0.1;
Kd_tblue                       = 0.4;

% Set the noise variance level for the RED and BLACK platforms:

noise_variance_RED             = 0;
noise_variance_BLACK           = 0;
noise_variance_BLUE            = 0;

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

%% Set the duration of each major phase in the experiment, in seconds:

Phase0_Duration                = 10;        % [s]
Phase1_Duration                = 5;         % [s]
Phase2_Duration                = 20;        % [s]
Phase3_Duration                = 85;       % [s]
Phase4_Duration                = 20;        % [s]
Phase5_Duration                = 5;         % [s]

% Set the duration of the sub-phases. Sub-phases occur during the
% experiment phase (Phase3_Duration) and must be manually inserted into the
% diagram. The total duration of the sub-phases must equal the length of
% the Phase3_Duration.

Phase3_SubPhase1_Duration      = 5;        % [s]
Phase3_SubPhase2_Duration      = 70;        % [s]
Phase3_SubPhase3_Duration      = 10;        % [s]
Phase3_SubPhase4_Duration      = 0;      % [s]

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

% Define the mass properties for the RED, BLACK, and BLUE platforms:

model_param(1)                 = 16.9478; % RED Mass
model_param(2)                 = 0.2709;  % RED Inertia;
model_param(3)                 = 12.3341; % BLACK Mass
model_param(4)                 = 0.1880;  % BLACK Inertia
model_param(5)                 = 12.7621; % BLUE Mass
model_param(6)                 = 0.1930;  % BLUE Inertia

REDMass = 16.9478;
REDInertia = 0.2709;

% Initialize the thruster positions for the RED, BLACK, and BLUE platforms,
% as well as the expected maximum forces. The expected forces will only 
% affect the simulations.

F_thrusters_RED               = 0.25.*ones(8,1);
F_thrusters_BLACK             = 0.25.*ones(8,1);
F_thrusters_BLUE              = 0.25.*ones(8,1);
thruster_dist2CG_RED          = [49.92;-78.08;70.46;-63.54;81.08;-50.42;57.44;-75.96];
thruster_dist2CG_BLACK        = [83.42;-52.58;55.94;-60.05;54.08;-53.92;77.06;-55.94];
thruster_dist2CG_BLUE         = [83.42;-52.58;55.94;-60.05;54.08;-53.92;77.06;-55.94];

%%  Set the drop, initial, and home positions for each platform:
      
drop_states_RED           = [ 2.114; 1.46; -3.113];          % [m; m; rad]
drop_states_BLACK         = [ 1.19; 1.45; -0.06737];         % [m; m; rad]
drop_states_BLUE          = [ 0.52; 1.45; -0.06737];         % [m; m; rad]

init_states_RED           = [ xLength/2+0.7; yLength/2; pi]; % [m; m; rad]
init_states_BLACK         = [ xLength/2; yLength/2; 0];      % [m; m; rad]
init_states_BLUE          = [ xLength/2-0.7; yLength/2; 0];      % [m; m; rad]

home_states_RED           = [ xLength/2+0.4; yLength/2; pi]; % [m; m; rad]
home_states_BLACK         = [ xLength/2; yLength/2; 0];  % [m; m; rad]
home_states_BLUE          = [ xLength/2-0.4; yLength/2; 0];  % [m; m; rad]
   
%% IDVD-SGRA Variables 
dockDist = 0.5;         %[m] distance to the other S/C when docking 
Er = 1e-6;              % Restoration tolerances
Eg = 1e-4;              % Gradient tolerances
tolSGRA = [Er; Eg];  
max_force = F_thrusters_RED(1)*2 * 0.95;     % note: there's two thrusters on each side and they're all taken as equal, applied a correcting factor as well to account for any deviations
max_torque = 0.13*4; % note: 0.13 is a low 'average' of the maximum torque each thruster can do, four alternating thrusters on would give max torque

%% Experiment Trials 
trial = 1; % 1=no obstacles, 2=stat obst., 3 = moving obst.

if trial == 1 
    % #1: Moving Target, No Obstacles -> IDVDSGRA_NoObstacles
    init_states_RED           = [ 3; 2; 0]; % [m; m; rad]
    init_states_BLACK         = [0.5; 0.5; (0/180*pi)];      % [m; m; rad]
    final_states_BLACK = [1,1.5,0];
    moving_BLACK=[(final_states_BLACK(1)-init_states_BLACK(1))/Phase3_SubPhase2_Duration,(final_states_BLACK(2)-init_states_BLACK(2))/Phase3_SubPhase2_Duration,0];
    guess = [8.968203153403679e+02,-2.543974115068790e+03,0.235869606391541,0.474952865321742,0.474987768379695,0.520000000000000,0.485664087948638,0,0,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1];
    fixed_att = init_states_RED(3);

elseif trial == 2
    % #2: Moving Target, Stationary Obstacle (Close Manoeuvre) -> IDVDSGRA_StatObs_Close
    init_states_RED           = [ 3; 2; 0]; % [m; m; rad]
    init_states_BLACK         = [0.5; 0.5; (0/180*pi)];      % [m; m; rad]
    final_states_BLACK = [1,1.5,0];
    moving_BLACK=[(final_states_BLACK(1)-init_states_BLACK(1))/Phase3_SubPhase2_Duration,(final_states_BLACK(2)-init_states_BLACK(2))/Phase3_SubPhase2_Duration,0];
    obstacle                  = [1.85; 2.15; 0.2];  % [x-center, y-center, radius]
    sat_rad = 0.35;
    fixed_att = init_states_RED(3);
    guess = [8.968203153403679e+02,-2.543974115068790e+03,0.235869606391541,0.474952865321742,0.474987768379695,0.520000000000000,0.485664087948638,0,0,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.2];

elseif trial ==3
    % #3: Moving Target, Moving Obstacle -> IDVDSGRA_MovObs
    init_states_RED           = [ 3; 2; 0]; % [m; m; rad]
    init_states_BLACK         = [0.5; 0.5; (0/180*pi)];      % [m; m; rad]
    final_states_BLACK = [1; 0.5; (0/180*pi)];
    moving_BLACK=[(final_states_BLACK(1)-init_states_BLACK(1))/Phase3_SubPhase2_Duration,(final_states_BLACK(2)-init_states_BLACK(2))/Phase3_SubPhase2_Duration,0];
    obstacle                  = [1.85; 2.15; 0.2];  % start position [x-center, y-center, radius]
    obstacle_change           = [-0.2;0.1;-0.01;0;-0.5;0.5];  % different stages of velocity 
    fixed_att = init_states_RED(3);
    guess = [8.968203153403679e+02,-2.543974115068790e+03,0.235869606391541,0.474952865321742,0.474987768379695,0.520000000000000,0.485664087948638,0,0,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.1,.2];
    sat_rad = 0.35;

end

%% Start the graphical user interface:

run('GUI_v3_03');


%% Start UDP receive interface


