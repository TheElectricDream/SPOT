//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Template_v3_04_2020a_data.cpp
//
// Code generated for Simulink model 'Template_v3_04_2020a'.
//
// Model version                  : 1.119
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Oct 24 15:37:19 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "Template_v3_04_2020a.h"
#include "Template_v3_04_2020a_private.h"

// Block parameters (default storage)
P_Template_v3_04_2020a_T Template_v3_04_2020a_P = {
  // Variable: F_thrusters_BLACK
  //  Referenced by:
  //    '<S27>/MATLAB Function'
  //    '<S27>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: F_thrusters_BLUE
  //  Referenced by:
  //    '<S36>/MATLAB Function'
  //    '<S36>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: F_thrusters_RED
  //  Referenced by:
  //    '<S45>/MATLAB Function'
  //    '<S45>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: Kd_tb
  //  Referenced by:
  //    '<S165>/kd_tb'
  //    '<S309>/kd_tb'
  //    '<S352>/kd_tb'
  //    '<S213>/kd_tb'
  //    '<S226>/kd_tb'

  0.4,

  // Variable: Kd_tblue
  //  Referenced by:
  //    '<S178>/kd_tb'
  //    '<S322>/kd_tb'
  //    '<S365>/kd_tb'
  //    '<S244>/kd_tb'
  //    '<S257>/kd_tb'

  0.4,

  // Variable: Kd_tr
  //  Referenced by:
  //    '<S191>/kd_tr'
  //    '<S335>/kd_tr'
  //    '<S378>/kd_tr'
  //    '<S275>/kd_tr'
  //    '<S289>/kd_tr'

  0.4,

  // Variable: Kd_xb
  //  Referenced by:
  //    '<S166>/kd_xb'
  //    '<S310>/kd_xb'
  //    '<S353>/kd_xb'
  //    '<S214>/kd_xb'
  //    '<S227>/kd_xb'

  5.0,

  // Variable: Kd_xblue
  //  Referenced by:
  //    '<S179>/kd_xb'
  //    '<S323>/kd_xb'
  //    '<S366>/kd_xb'
  //    '<S245>/kd_xb'
  //    '<S258>/kd_xb'

  5.0,

  // Variable: Kd_xr
  //  Referenced by:
  //    '<S192>/kd_xr'
  //    '<S336>/kd_xr'
  //    '<S379>/kd_xr'
  //    '<S276>/kd_xr'
  //    '<S290>/kd_xr'

  5.0,

  // Variable: Kd_yb
  //  Referenced by:
  //    '<S167>/kd_yb'
  //    '<S311>/kd_yb'
  //    '<S354>/kd_yb'
  //    '<S215>/kd_yb'
  //    '<S228>/kd_yb'

  5.0,

  // Variable: Kd_yblue
  //  Referenced by:
  //    '<S180>/kd_yb'
  //    '<S324>/kd_yb'
  //    '<S367>/kd_yb'
  //    '<S246>/kd_yb'
  //    '<S259>/kd_yb'

  5.0,

  // Variable: Kd_yr
  //  Referenced by:
  //    '<S193>/kd_yr'
  //    '<S337>/kd_yr'
  //    '<S380>/kd_yr'
  //    '<S277>/kd_yr'
  //    '<S291>/kd_yr'

  5.0,

  // Variable: Kp_tb
  //  Referenced by:
  //    '<S165>/kp_tb'
  //    '<S309>/kp_tb'
  //    '<S352>/kp_tb'
  //    '<S213>/kp_tb'
  //    '<S226>/kp_tb'

  0.1,

  // Variable: Kp_tblue
  //  Referenced by:
  //    '<S178>/kp_tb'
  //    '<S322>/kp_tb'
  //    '<S365>/kp_tb'
  //    '<S244>/kp_tb'
  //    '<S257>/kp_tb'

  0.1,

  // Variable: Kp_tr
  //  Referenced by:
  //    '<S191>/kp_tr'
  //    '<S335>/kp_tr'
  //    '<S378>/kp_tr'
  //    '<S275>/kp_tr'
  //    '<S289>/kp_tr'

  0.1,

  // Variable: Kp_xb
  //  Referenced by:
  //    '<S166>/kp_xb'
  //    '<S310>/kp_xb'
  //    '<S353>/kp_xb'
  //    '<S214>/kp_xb'
  //    '<S227>/kp_xb'

  2.0,

  // Variable: Kp_xblue
  //  Referenced by:
  //    '<S179>/kp_xb'
  //    '<S323>/kp_xb'
  //    '<S366>/kp_xb'
  //    '<S245>/kp_xb'
  //    '<S258>/kp_xb'

  2.0,

  // Variable: Kp_xr
  //  Referenced by:
  //    '<S192>/kp_xr'
  //    '<S336>/kp_xr'
  //    '<S379>/kp_xr'
  //    '<S276>/kp_xr'
  //    '<S290>/kp_xr'

  2.0,

  // Variable: Kp_yb
  //  Referenced by:
  //    '<S167>/kp_yb'
  //    '<S311>/kp_yb'
  //    '<S354>/kp_yb'
  //    '<S215>/kp_yb'
  //    '<S228>/kp_yb'

  2.0,

  // Variable: Kp_yblue
  //  Referenced by:
  //    '<S180>/kp_yb'
  //    '<S324>/kp_yb'
  //    '<S367>/kp_yb'
  //    '<S246>/kp_yb'
  //    '<S259>/kp_yb'

  2.0,

  // Variable: Kp_yr
  //  Referenced by:
  //    '<S193>/kp_yr'
  //    '<S337>/kp_yr'
  //    '<S380>/kp_yr'
  //    '<S277>/kp_yr'
  //    '<S291>/kp_yr'

  2.0,

  // Variable: Phase0_End
  //  Referenced by: '<Root>/Constant4'

  10.0,

  // Variable: Phase1_End
  //  Referenced by: '<Root>/Constant'

  15.0,

  // Variable: Phase2_End
  //  Referenced by: '<Root>/Constant1'

  35.0,

  // Variable: Phase3_End
  //  Referenced by: '<Root>/Constant2'

  61.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by:
  //    '<S204>/Constant4'
  //    '<S205>/Constant4'
  //    '<S206>/Constant4'

  40.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by:
  //    '<S204>/Constant1'
  //    '<S205>/Constant1'
  //    '<S206>/Constant1'

  45.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by:
  //    '<S204>/Constant2'
  //    '<S205>/Constant2'
  //    '<S206>/Constant2'
  //    '<S293>/Constant1'

  46.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by:
  //    '<S204>/Constant3'
  //    '<S205>/Constant3'
  //    '<S206>/Constant3'

  56.0,

  // Variable: Phase4_End
  //  Referenced by: '<Root>/Constant3'

  81.0,

  // Variable: Phase5_End
  //  Referenced by: '<Root>/Constant6'

  86.0,

  // Variable: WhoAmI
  //  Referenced by:
  //    '<S3>/Constant'
  //    '<S4>/Constant'
  //    '<S6>/Constant1'
  //    '<S8>/Constant'
  //    '<S9>/Constant'
  //    '<S10>/Constant'
  //    '<S11>/Constant'
  //    '<S12>/Constant'
  //    '<S13>/Constant'
  //    '<S14>/Constant'
  //    '<S76>/Constant'

  2.0,

  // Variable: drop_states_BLACK
  //  Referenced by: '<S395>/Velocity to Position'

  { 2.655775, 0.70967500000000006, 0.0 },

  // Variable: drop_states_BLUE
  //  Referenced by: '<S396>/Velocity to Position'

  { 0.52, 1.45, -0.06737 },

  // Variable: drop_states_RED
  //  Referenced by: '<S397>/Velocity to Position'

  { 2.114, 1.46, 0.0 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S305>/Desired Attitude (BLACK)'
  //    '<S305>/Desired Px (BLACK)'
  //    '<S305>/Desired Py (BLACK)'
  //    '<S348>/Constant'
  //    '<S348>/Constant2'
  //    '<S348>/Constant3'

  { 0.85577500000000006, 0.70967500000000006, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S306>/Desired Attitude (BLUE)'
  //    '<S306>/Desired Px (BLUE)'
  //    '<S306>/Desired Py (BLUE)'
  //    '<S349>/Desired Attitude (BLUE)'
  //    '<S349>/Desired Px (BLUE)'
  //    '<S349>/Desired Py (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S307>/Constant'
  //    '<S307>/Constant1'
  //    '<S307>/Constant3'
  //    '<S350>/Constant'
  //    '<S350>/Constant2'
  //    '<S350>/Constant3'

  { 2.655775, 1.209675, 0.0 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S161>/Desired Attitude (BLACK)'
  //    '<S161>/Desired Px (BLACK)'
  //    '<S161>/Desired Py (BLACK)'
  //    '<S208>/Desired Attitude (BLACK)'
  //    '<S208>/Desired X-Position (BLACK)'
  //    '<S208>/Desired Y-Position (BLACK)'

  { 2.655775, 0.70967500000000006, 0.0 },

  // Variable: init_states_BLUE
  //  Referenced by:
  //    '<S162>/Desired Attitude (BLUE)'
  //    '<S162>/Desired Px (BLUE)'
  //    '<S162>/Desired Py (BLUE)'
  //    '<S239>/Desired Attitude (BLUE)'
  //    '<S239>/Desired Px (BLUE)'
  //    '<S239>/Desired Py (BLUE)'
  //    '<S242>/Desired Attitude (BLUE)'
  //    '<S242>/Desired Px (BLUE)'
  //    '<S242>/Desired Py (BLUE)'

  { 1.0557750000000001, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S163>/Constant'
  //    '<S163>/Constant1'
  //    '<S163>/Constant3'
  //    '<S270>/Desired Attitude (RED)'
  //    '<S270>/Desired X-Position (RED)'
  //    '<S270>/Desired Y-Position (RED)'
  //    '<S273>/Desired X-Position (RED)'
  //    '<S273>/Desired Y-Position (RED)'

  { 2.455775, 1.209675, 0.0 },

  // Variable: model_param
  //  Referenced by:
  //    '<S395>/MATLAB Function'
  //    '<S396>/MATLAB Function'
  //    '<S397>/MATLAB Function'

  { 16.9478, 0.2709, 12.3341, 0.188, 12.7621, 0.193 },

  // Variable: noise_variance_BLACK
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Variable: noise_variance_BLUE
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Variable: noise_variance_RED
  //  Referenced by: '<S397>/Random Number'

  0.0,

  // Variable: platformSelection
  //  Referenced by:
  //    '<S75>/Which PLATFORM is being used?'
  //    '<S77>/Stream PhaseSpace to Platform'

  2.0,

  // Variable: serverRate
  //  Referenced by:
  //    '<S398>/Constant1'
  //    '<S399>/Constant1'
  //    '<S400>/Constant'
  //    '<S401>/divide by delta T'
  //    '<S402>/divide by delta T'
  //    '<S403>/divide by delta T'
  //    '<S404>/divide by delta T'
  //    '<S405>/divide by delta T'
  //    '<S406>/divide by delta T'
  //    '<S407>/divide by delta T'
  //    '<S408>/divide by delta T'
  //    '<S409>/divide by delta T'
  //    '<S115>/divide by delta T'
  //    '<S116>/divide by delta T'
  //    '<S117>/divide by delta T'
  //    '<S118>/divide by delta T'
  //    '<S119>/divide by delta T'
  //    '<S120>/divide by delta T'
  //    '<S169>/divide by delta T'
  //    '<S171>/divide by delta T'
  //    '<S173>/divide by delta T'
  //    '<S182>/divide by delta T'
  //    '<S184>/divide by delta T'
  //    '<S186>/divide by delta T'
  //    '<S195>/divide by delta T'
  //    '<S197>/divide by delta T'
  //    '<S199>/divide by delta T'
  //    '<S313>/divide by delta T'
  //    '<S315>/divide by delta T'
  //    '<S317>/divide by delta T'
  //    '<S326>/divide by delta T'
  //    '<S328>/divide by delta T'
  //    '<S330>/divide by delta T'
  //    '<S339>/divide by delta T'
  //    '<S341>/divide by delta T'
  //    '<S343>/divide by delta T'
  //    '<S356>/divide by delta T'
  //    '<S358>/divide by delta T'
  //    '<S360>/divide by delta T'
  //    '<S369>/divide by delta T'
  //    '<S371>/divide by delta T'
  //    '<S373>/divide by delta T'
  //    '<S382>/divide by delta T'
  //    '<S384>/divide by delta T'
  //    '<S386>/divide by delta T'
  //    '<S81>/divide by delta T'
  //    '<S82>/divide by delta T'
  //    '<S83>/divide by delta T'
  //    '<S84>/divide by delta T'
  //    '<S85>/divide by delta T'
  //    '<S86>/divide by delta T'
  //    '<S96>/divide by delta T'
  //    '<S97>/divide by delta T'
  //    '<S98>/divide by delta T'
  //    '<S99>/divide by delta T'
  //    '<S100>/divide by delta T'
  //    '<S101>/divide by delta T'
  //    '<S217>/divide by delta T'
  //    '<S219>/divide by delta T'
  //    '<S221>/divide by delta T'
  //    '<S230>/divide by delta T'
  //    '<S232>/divide by delta T'
  //    '<S234>/divide by delta T'
  //    '<S248>/divide by delta T'
  //    '<S250>/divide by delta T'
  //    '<S252>/divide by delta T'
  //    '<S261>/divide by delta T'
  //    '<S263>/divide by delta T'
  //    '<S265>/divide by delta T'
  //    '<S279>/divide by delta T'
  //    '<S281>/divide by delta T'
  //    '<S283>/divide by delta T'
  //    '<S296>/divide by delta T'
  //    '<S298>/divide by delta T'
  //    '<S300>/divide by delta T'

  0.1,

  // Variable: simMode
  //  Referenced by:
  //    '<S7>/Constant'
  //    '<S19>/Constant'
  //    '<S25>/Constant'
  //    '<S57>/Constant'
  //    '<S74>/Constant'
  //    '<S134>/Constant'
  //    '<S156>/Constant'
  //    '<S160>/Constant'
  //    '<S164>/Constant'
  //    '<S207>/Constant'
  //    '<S308>/Constant'
  //    '<S351>/Constant'
  //    '<S394>/Constant'
  //    '<S78>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by:
  //    '<S27>/MATLAB Function'
  //    '<S27>/MATLAB Function1'

  { 83.42, -52.58, 55.94, -60.05, 54.08, -53.92, 77.06, -55.94 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by:
  //    '<S36>/MATLAB Function'
  //    '<S36>/MATLAB Function1'

  { 83.42, -52.58, 55.94, -60.05, 54.08, -53.92, 77.06, -55.94 },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S45>/MATLAB Function'
  //    '<S45>/MATLAB Function1'

  { 49.92, -78.08, 70.46, -63.54, 81.08, -50.42, 57.44, -75.96 },

  // Variable: yLength
  //  Referenced by: '<S211>/Desired Y-Position (BLACK)'

  2.41935,

  // Computed Parameter: BLACKPWM_Y0
  //  Referenced by: '<S22>/BLACK PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S27>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S27>/Remove Negatives'

  0.0,

  // Computed Parameter: BLUEPWM_Y0
  //  Referenced by: '<S23>/BLUE PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S36>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S36>/Remove Negatives'

  0.0,

  // Computed Parameter: REDPWM_Y0
  //  Referenced by: '<S24>/RED PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S45>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S45>/Remove Negatives'

  0.0,

  // Expression: sampleTime
  //  Referenced by: '<S70>/Digital Read'

  0.1,

  // Expression: 0.1
  //  Referenced by: '<S58>/Saturate Torque'

  0.1,

  // Expression: -0.1
  //  Referenced by: '<S58>/Saturate Torque'

  -0.1,

  // Expression: 0.0
  //  Referenced by: '<S58>/Delay'

  0.0,

  // Expression: 3375/64
  //  Referenced by: '<S62>/Gearbox  Ratio'

  52.734375,

  // Expression: 7000
  //  Referenced by: '<S59>/Saturate Motor'

  7000.0,

  // Expression: -7000
  //  Referenced by: '<S59>/Saturate Motor'

  -7000.0,

  // Expression: (7000*64/3375)
  //  Referenced by: '<S58>/Saturate RPM'

  132.74074074074073,

  // Expression: -(7000*64/3375)
  //  Referenced by: '<S58>/Saturate RPM'

  -132.74074074074073,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S122>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_b
  //  Referenced by: '<S114>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S125>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bc
  //  Referenced by: '<S126>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S127>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S128>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_no
  //  Referenced by: '<S129>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_m
  //  Referenced by: '<S130>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S112>/Constant'

  0.0,

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<S77>/Discrete-Time Integrator'

  0.05,

  // Computed Parameter: DiscreteTimeIntegrator1_gainval
  //  Referenced by: '<S77>/Discrete-Time Integrator1'

  0.05,

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S87>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ni
  //  Referenced by: '<S88>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S89>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_dr
  //  Referenced by: '<S90>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S91>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S92>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_as
  //  Referenced by: '<S103>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ap
  //  Referenced by: '<S95>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S106>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S107>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fy
  //  Referenced by: '<S108>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_e2
  //  Referenced by: '<S109>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kz
  //  Referenced by: '<S110>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bg
  //  Referenced by: '<S111>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S93>/Constant'

  0.0,

  // Expression: pi/180
  //  Referenced by: '<S131>/Gain'

  0.017453292519943295,

  // Expression: 9.81
  //  Referenced by: '<S131>/Gain1'

  9.81,

  // Expression: 0
  //  Referenced by: '<S142>/Unit Delay1'

  0.0,

  // Expression: 4
  //  Referenced by: '<S131>/Constant'

  4.0,

  // Expression: zeta
  //  Referenced by: '<S142>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S142>/Constant1'

  0.025,

  // Expression: 0
  //  Referenced by: '<S140>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S140>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S140>/Constant1'

  0.025,

  // Expression: 2
  //  Referenced by: '<S140>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S140>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S142>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S142>/Unit Delay2'

  0.0,

  // Expression: pi/180
  //  Referenced by: '<S132>/Gain'

  0.017453292519943295,

  // Expression: 9.81
  //  Referenced by: '<S132>/Gain1'

  9.81,

  // Expression: pi/180
  //  Referenced by: '<S133>/Gain'

  0.017453292519943295,

  // Expression: 9.81
  //  Referenced by: '<S133>/Gain1'

  9.81,

  // Expression: 0
  //  Referenced by: '<S151>/Unit Delay1'

  0.0,

  // Expression: 4
  //  Referenced by: '<S133>/Constant'

  4.0,

  // Expression: zeta
  //  Referenced by: '<S151>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S151>/Constant1'

  0.025,

  // Expression: 0
  //  Referenced by: '<S149>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S149>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S149>/Constant1'

  0.025,

  // Expression: 2
  //  Referenced by: '<S149>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S149>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S151>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S151>/Unit Delay2'

  0.0,

  // Expression: initCond
  //  Referenced by: '<S414>/ '

  { 2.655775, 0.70967500000000006, 0.0 },

  // Expression: initCond
  //  Referenced by: '<S416>/ '

  { 2.655775, 0.70967500000000006, 0.0 },

  // Expression: initCond
  //  Referenced by: '<S418>/ '

  { 2.114, 1.46, 0.0 },

  // Computed Parameter: Out1_Y0_dj
  //  Referenced by: '<S419>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kb
  //  Referenced by: '<S420>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_pm
  //  Referenced by: '<S421>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S422>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S423>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_l
  //  Referenced by: '<S424>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ia
  //  Referenced by: '<S425>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bgo
  //  Referenced by: '<S426>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kc
  //  Referenced by: '<S427>/Out1'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval
  //  Referenced by: '<S395>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_f
  //  Referenced by: '<S396>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_a
  //  Referenced by: '<S397>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S397>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S397>/Random Number'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainval
  //  Referenced by: '<S395>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S395>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_b
  //  Referenced by: '<S396>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S396>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_k
  //  Referenced by: '<S397>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S397>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: Out1_Y0_mp
  //  Referenced by: '<S170>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_av
  //  Referenced by: '<S172>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S174>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S161>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S183>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_a4
  //  Referenced by: '<S185>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_nv
  //  Referenced by: '<S187>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S162>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_fr
  //  Referenced by: '<S196>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bk
  //  Referenced by: '<S198>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j2
  //  Referenced by: '<S200>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S163>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S163>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_pn
  //  Referenced by: '<S218>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bd
  //  Referenced by: '<S220>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ai
  //  Referenced by: '<S222>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S208>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_ln
  //  Referenced by: '<S231>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bw
  //  Referenced by: '<S233>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ac
  //  Referenced by: '<S235>/Out1'

  0.0,

  // Expression: -0.15
  //  Referenced by: '<S211>/Desired X-Position (BLACK)'

  -0.15,

  // Expression: 0
  //  Referenced by: '<S211>/Desired X-Position (BLACK)1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S211>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_at
  //  Referenced by: '<S280>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_dw
  //  Referenced by: '<S282>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_jd
  //  Referenced by: '<S284>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S270>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S270>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S270>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S270>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S270>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_gm
  //  Referenced by: '<S297>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_eb
  //  Referenced by: '<S299>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_hc
  //  Referenced by: '<S301>/Out1'

  0.0,

  // Expression: 0.104719755/2
  //  Referenced by: '<S288>/Desired Rate (BLACK)'

  0.0523598775,

  // Expression: 0
  //  Referenced by: '<S273>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S273>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S273>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S273>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S273>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_jr
  //  Referenced by: '<S314>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_mr
  //  Referenced by: '<S316>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_i0
  //  Referenced by: '<S318>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S305>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_nf
  //  Referenced by: '<S340>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_gb
  //  Referenced by: '<S342>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_da
  //  Referenced by: '<S344>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S307>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S307>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S307>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S307>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S307>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_gx
  //  Referenced by: '<S357>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fj
  //  Referenced by: '<S359>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bm
  //  Referenced by: '<S361>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S348>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_i3
  //  Referenced by: '<S383>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bs
  //  Referenced by: '<S385>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c5
  //  Referenced by: '<S387>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S350>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S350>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S350>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S350>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S350>/Puck State'

  1.0,

  // Expression: 0
  //  Referenced by: '<S391>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S391>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S391>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S391>/Puck State'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S393>/Puck State'

  0.0,

  // Expression: -1
  //  Referenced by: '<S393>/Gain'

  -1.0,

  // Expression: 0.005
  //  Referenced by: '<S393>/Saturation'

  0.005,

  // Expression: -0.005
  //  Referenced by: '<S393>/Saturation'

  -0.005,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fx_Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fy_Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Tz_Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz4'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz5'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz6'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_RW Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_RW1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fx'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fx1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fx_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fx_Sat2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fy'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fy1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fy_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Fy_Sat2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Px'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Px1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Py'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Py1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Rz'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Rz1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Tz'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Tz1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Tz_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/BLACK_Tz_Sat2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Fx'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Fx_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Fy'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Fy_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px10'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px11'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px12'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px13'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px14'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px15'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px16'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px17'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px18'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px19'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px20'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px21'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px22'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px23'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px24'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px25'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px26'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px3'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px4'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px5'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px6'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px8'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Px9'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Py'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Rz'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz3'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz8'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_RW'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_RW Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_dRz_RW Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time2'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time3'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time4'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time5'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time6'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time7'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time8'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/Universal_Time9'

  0.0,

  // Computed Parameter: UDPReceive_Port
  //  Referenced by: '<S79>/UDP Receive'

  25000,

  // Computed Parameter: SendBLACKStatestoBLACKPlatform_
  //  Referenced by: '<S80>/Send BLACK States to  BLACK Platform'

  25000,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<S15>/UDP Send'

  26000,

  // Computed Parameter: Delay1_InitialCondition
  //  Referenced by: '<S63>/Delay1'

  0,

  // Computed Parameter: Delay2_InitialCondition
  //  Referenced by: '<S63>/Delay2'

  0,

  // Computed Parameter: Delay5_InitialCondition
  //  Referenced by: '<S63>/Delay5'

  0,

  // Computed Parameter: Delay3_InitialCondition
  //  Referenced by: '<S63>/Delay3'

  0,

  // Computed Parameter: Delay4_InitialCondition
  //  Referenced by: '<S63>/Delay4'

  0,

  // Computed Parameter: Delay_InitialCondition_c
  //  Referenced by: '<S121>/Delay'

  1,

  // Computed Parameter: Delay_InitialCondition_n
  //  Referenced by: '<S102>/Delay'

  1,

  // Start of '<S14>/Change BLUE Behavior'
  {
    // Expression: 0
    //  Referenced by: '<S392>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S392>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S392>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S392>/Puck State'

    0.0
  }
  ,

  // End of '<S14>/Change BLUE Behavior'

  // Start of '<S13>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S370>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S372>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S374>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S349>/Puck State'

    1.0
  }
  ,

  // End of '<S13>/Change BLUE Behavior'

  // Start of '<S12>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S327>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S329>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S331>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S306>/Puck State'

    1.0
  }
  ,

  // End of '<S12>/Change BLUE Behavior'

  // Start of '<S206>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S272>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S272>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S272>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S272>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S272>/Constant6'

    0.0,

    // Expression: 1
    //  Referenced by: '<S272>/Puck State'

    1.0
  }
  ,

  // End of '<S206>/Sub-Phase #3 '

  // Start of '<S206>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S271>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S271>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S271>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S271>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S271>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S271>/Puck State'

    0.0
  }
  ,

  // End of '<S206>/Sub-Phase #2 '

  // Start of '<S205>/Sub-Phase #4'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S262>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S264>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S266>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S242>/Puck State'

    1.0
  }
  ,

  // End of '<S205>/Sub-Phase #4'

  // Start of '<S205>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S241>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S241>/Puck State'

    1.0
  }
  ,

  // End of '<S205>/Sub-Phase #3 '

  // Start of '<S205>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S240>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S240>/Puck State'

    0.0
  }
  ,

  // End of '<S205>/Sub-Phase #2 '

  // Start of '<S205>/Sub-Phase #1'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S249>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S251>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S253>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S239>/Puck State'

    1.0
  }
  ,

  // End of '<S205>/Sub-Phase #1'

  // Start of '<S204>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S210>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S210>/Puck State'

    1.0
  }
  ,

  // End of '<S204>/Sub-Phase #3 '

  // Start of '<S204>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S209>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S209>/Puck State'

    0.0
  }
  ,

  // End of '<S204>/Sub-Phase #2 '

  // Start of '<Root>/Phase #1:  Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S157>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S157>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S157>/Constant5'

    0.0,

    // Expression: 1
    //  Referenced by: '<S157>/Puck State'

    1.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S159>/Constant6'

    0.0,

    // Expression: 1
    //  Referenced by: '<S159>/Puck State'

    1.0,

    // Start of '<S8>/Change BLUE Behavior'
    {
      // Expression: 0
      //  Referenced by: '<S158>/Constant3'

      0.0,

      // Expression: 0
      //  Referenced by: '<S158>/Constant4'

      0.0,

      // Expression: 0
      //  Referenced by: '<S158>/Constant5'

      0.0,

      // Expression: 1
      //  Referenced by: '<S158>/Puck State'

      1.0
    }
    // End of '<S8>/Change BLUE Behavior'
  }
  ,

  // End of '<Root>/Phase #1:  Start Floating '

  // Start of '<Root>/Phase #0:  Wait for Synchronization'
  {
    // Expression: 0
    //  Referenced by: '<S153>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S153>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S153>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S153>/Puck State'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S155>/Puck State'

    0.0,

    // Start of '<S8>/Change BLUE Behavior'
    {
      // Expression: 0
      //  Referenced by: '<S154>/Constant3'

      0.0,

      // Expression: 0
      //  Referenced by: '<S154>/Constant4'

      0.0,

      // Expression: 0
      //  Referenced by: '<S154>/Constant5'

      0.0,

      // Expression: 0
      //  Referenced by: '<S154>/Puck State'

      0.0
    }
    // End of '<S8>/Change BLUE Behavior'
  }
  ,

  // End of '<Root>/Phase #0:  Wait for Synchronization'

  // Start of '<S133>/AHRS2'
  {
    // Expression: 0.0001924722
    //  Referenced by: '<S133>/AHRS2'

    0.0001924722,

    // Expression: 9.1385e-5
    //  Referenced by: '<S133>/AHRS2'

    9.1385E-5,

    // Expression: 0.1
    //  Referenced by: '<S133>/AHRS2'

    0.1,

    // Expression: 3.0462e-13
    //  Referenced by: '<S133>/AHRS2'

    3.0462E-13,

    // Expression: 0.0096236100000000012
    //  Referenced by: '<S133>/AHRS2'

    0.0096236100000000012,

    // Expression: 0.5
    //  Referenced by: '<S133>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S133>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S133>/AHRS2'

    0.5,

    // Expression: 33
    //  Referenced by: '<S133>/AHRS2'

    33.0
  }
  ,

  // End of '<S133>/AHRS2'

  // Start of '<S132>/AHRS2'
  {
    // Expression: 0.0001924722
    //  Referenced by: '<S132>/AHRS2'

    0.0001924722,

    // Expression: 9.1385e-5
    //  Referenced by: '<S132>/AHRS2'

    9.1385E-5,

    // Expression: 0.1
    //  Referenced by: '<S132>/AHRS2'

    0.1,

    // Expression: 3.0462e-13
    //  Referenced by: '<S132>/AHRS2'

    3.0462E-13,

    // Expression: 0.0096236100000000012
    //  Referenced by: '<S132>/AHRS2'

    0.0096236100000000012,

    // Expression: 0.5
    //  Referenced by: '<S132>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S132>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S132>/AHRS2'

    0.5,

    // Expression: 33
    //  Referenced by: '<S132>/AHRS2'

    33.0
  }
  ,

  // End of '<S132>/AHRS2'

  // Start of '<S131>/AHRS2'
  {
    // Expression: 0.0001924722
    //  Referenced by: '<S131>/AHRS2'

    0.0001924722,

    // Expression: 9.1385e-5
    //  Referenced by: '<S131>/AHRS2'

    9.1385E-5,

    // Expression: 0.1
    //  Referenced by: '<S131>/AHRS2'

    0.1,

    // Expression: 3.0462e-13
    //  Referenced by: '<S131>/AHRS2'

    3.0462E-13,

    // Expression: 0.0096236100000000012
    //  Referenced by: '<S131>/AHRS2'

    0.0096236100000000012,

    // Expression: 0.5
    //  Referenced by: '<S131>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S131>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S131>/AHRS2'

    0.5,

    // Expression: 33
    //  Referenced by: '<S131>/AHRS2'

    33.0
  }
  // End of '<S131>/AHRS2'
};

//
// File trailer for generated code.
//
// [EOF]
//
