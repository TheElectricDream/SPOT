//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Template_v3_03_2020a_data.cpp
//
// Code generated for Simulink model 'Template_v3_03_2020a'.
//
// Model version                  : 1.64
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Oct 17 14:27:49 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "Template_v3_03_2020a.h"
#include "Template_v3_03_2020a_private.h"

// Block parameters (default storage)
P_Template_v3_03_2020a_T Template_v3_03_2020a_P = {
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
  //    '<S160>/kd_tb'
  //    '<S308>/kd_tb'
  //    '<S351>/kd_tb'
  //    '<S208>/kd_tb'
  //    '<S222>/kd_tb'

  0.4,

  // Variable: Kd_tblue
  //  Referenced by:
  //    '<S173>/kd_tb'
  //    '<S321>/kd_tb'
  //    '<S364>/kd_tb'
  //    '<S243>/kd_tb'
  //    '<S256>/kd_tb'

  0.4,

  // Variable: Kd_tr
  //  Referenced by:
  //    '<S186>/kd_tr'
  //    '<S334>/kd_tr'
  //    '<S377>/kd_tr'
  //    '<S274>/kd_tr'
  //    '<S288>/kd_tr'

  0.4,

  // Variable: Kd_xb
  //  Referenced by:
  //    '<S161>/kd_xb'
  //    '<S309>/kd_xb'
  //    '<S352>/kd_xb'
  //    '<S209>/kd_xb'
  //    '<S223>/kd_xb'

  5.0,

  // Variable: Kd_xblue
  //  Referenced by:
  //    '<S174>/kd_xb'
  //    '<S322>/kd_xb'
  //    '<S365>/kd_xb'
  //    '<S244>/kd_xb'
  //    '<S257>/kd_xb'

  5.0,

  // Variable: Kd_xr
  //  Referenced by:
  //    '<S187>/kd_xr'
  //    '<S335>/kd_xr'
  //    '<S378>/kd_xr'
  //    '<S275>/kd_xr'
  //    '<S289>/kd_xr'

  5.0,

  // Variable: Kd_yb
  //  Referenced by:
  //    '<S162>/kd_yb'
  //    '<S310>/kd_yb'
  //    '<S353>/kd_yb'
  //    '<S210>/kd_yb'
  //    '<S224>/kd_yb'

  5.0,

  // Variable: Kd_yblue
  //  Referenced by:
  //    '<S175>/kd_yb'
  //    '<S323>/kd_yb'
  //    '<S366>/kd_yb'
  //    '<S245>/kd_yb'
  //    '<S258>/kd_yb'

  5.0,

  // Variable: Kd_yr
  //  Referenced by:
  //    '<S188>/kd_yr'
  //    '<S336>/kd_yr'
  //    '<S379>/kd_yr'
  //    '<S276>/kd_yr'
  //    '<S290>/kd_yr'

  5.0,

  // Variable: Kp_tb
  //  Referenced by:
  //    '<S160>/kp_tb'
  //    '<S308>/kp_tb'
  //    '<S351>/kp_tb'
  //    '<S208>/kp_tb'
  //    '<S222>/kp_tb'

  0.1,

  // Variable: Kp_tblue
  //  Referenced by:
  //    '<S173>/kp_tb'
  //    '<S321>/kp_tb'
  //    '<S364>/kp_tb'
  //    '<S243>/kp_tb'
  //    '<S256>/kp_tb'

  0.1,

  // Variable: Kp_tr
  //  Referenced by:
  //    '<S186>/kp_tr'
  //    '<S334>/kp_tr'
  //    '<S377>/kp_tr'
  //    '<S274>/kp_tr'
  //    '<S288>/kp_tr'

  0.1,

  // Variable: Kp_xb
  //  Referenced by:
  //    '<S161>/kp_xb'
  //    '<S309>/kp_xb'
  //    '<S352>/kp_xb'
  //    '<S209>/kp_xb'
  //    '<S223>/kp_xb'

  2.0,

  // Variable: Kp_xblue
  //  Referenced by:
  //    '<S174>/kp_xb'
  //    '<S322>/kp_xb'
  //    '<S365>/kp_xb'
  //    '<S244>/kp_xb'
  //    '<S257>/kp_xb'

  2.0,

  // Variable: Kp_xr
  //  Referenced by:
  //    '<S187>/kp_xr'
  //    '<S335>/kp_xr'
  //    '<S378>/kp_xr'
  //    '<S275>/kp_xr'
  //    '<S289>/kp_xr'

  2.0,

  // Variable: Kp_yb
  //  Referenced by:
  //    '<S162>/kp_yb'
  //    '<S310>/kp_yb'
  //    '<S353>/kp_yb'
  //    '<S210>/kp_yb'
  //    '<S224>/kp_yb'

  2.0,

  // Variable: Kp_yblue
  //  Referenced by:
  //    '<S175>/kp_yb'
  //    '<S323>/kp_yb'
  //    '<S366>/kp_yb'
  //    '<S245>/kp_yb'
  //    '<S258>/kp_yb'

  2.0,

  // Variable: Kp_yr
  //  Referenced by:
  //    '<S188>/kp_yr'
  //    '<S336>/kp_yr'
  //    '<S379>/kp_yr'
  //    '<S276>/kp_yr'
  //    '<S290>/kp_yr'

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

  166.0,

  // Variable: Phase3_SubPhase1_End
  //  Referenced by:
  //    '<S199>/Constant4'
  //    '<S200>/Constant4'
  //    '<S201>/Constant4'

  40.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by:
  //    '<S199>/Constant1'
  //    '<S200>/Constant1'
  //    '<S201>/Constant1'

  45.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by:
  //    '<S199>/Constant2'
  //    '<S200>/Constant2'
  //    '<S201>/Constant2'
  //    '<S226>/Constant1'
  //    '<S292>/Constant1'

  46.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by:
  //    '<S199>/Constant3'
  //    '<S200>/Constant3'
  //    '<S201>/Constant3'

  166.0,

  // Variable: Phase4_End
  //  Referenced by: '<Root>/Constant3'

  186.0,

  // Variable: Phase5_End
  //  Referenced by: '<Root>/Constant6'

  191.0,

  // Variable: WhoAmI
  //  Referenced by:
  //    '<S3>/Constant'
  //    '<S4>/Constant'
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
  //  Referenced by: '<S394>/Velocity to Position'

  { 1.19, 1.45, -0.06737 },

  // Variable: drop_states_BLUE
  //  Referenced by: '<S395>/Velocity to Position'

  { 0.52, 1.45, -0.06737 },

  // Variable: drop_states_RED
  //  Referenced by: '<S396>/Velocity to Position'

  { 2.114, 1.46, 0.0 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S304>/Desired Attitude (BLACK)'
  //    '<S304>/Desired Px (BLACK)'
  //    '<S304>/Desired Py (BLACK)'
  //    '<S347>/Constant'
  //    '<S347>/Constant2'
  //    '<S347>/Constant3'

  { 1.755775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S305>/Desired Attitude (BLUE)'
  //    '<S305>/Desired Px (BLUE)'
  //    '<S305>/Desired Py (BLUE)'
  //    '<S348>/Desired Attitude (BLUE)'
  //    '<S348>/Desired Px (BLUE)'
  //    '<S348>/Desired Py (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S306>/Constant'
  //    '<S306>/Constant1'
  //    '<S306>/Constant3'
  //    '<S349>/Constant'
  //    '<S349>/Constant2'
  //    '<S349>/Constant3'

  { 2.655775, 1.209675, 0.0 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S156>/Desired Attitude (BLACK)'
  //    '<S156>/Desired Px (BLACK)'
  //    '<S156>/Desired Py (BLACK)'
  //    '<S203>/Desired Attitude (BLACK)'
  //    '<S203>/Desired X-Position (BLACK)'
  //    '<S203>/Desired Y-Position (BLACK)'

  { 1.755775, 1.209675, 0.0 },

  // Variable: init_states_BLUE
  //  Referenced by:
  //    '<S157>/Desired Attitude (BLUE)'
  //    '<S157>/Desired Px (BLUE)'
  //    '<S157>/Desired Py (BLUE)'
  //    '<S238>/Desired Attitude (BLUE)'
  //    '<S238>/Desired Px (BLUE)'
  //    '<S238>/Desired Py (BLUE)'
  //    '<S241>/Desired Attitude (BLUE)'
  //    '<S241>/Desired Px (BLUE)'
  //    '<S241>/Desired Py (BLUE)'

  { 1.0557750000000001, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S158>/Constant'
  //    '<S158>/Constant1'
  //    '<S158>/Constant3'
  //    '<S269>/Desired Attitude (RED)'
  //    '<S269>/Desired X-Position (RED)'
  //    '<S269>/Desired Y-Position (RED)'
  //    '<S272>/Desired X-Position (RED)'
  //    '<S272>/Desired Y-Position (RED)'

  { 2.455775, 1.209675, 0.0 },

  // Variable: model_param
  //  Referenced by:
  //    '<S394>/MATLAB Function'
  //    '<S395>/MATLAB Function'
  //    '<S396>/MATLAB Function'

  { 16.9478, 0.2709, 12.3341, 0.188, 12.7621, 0.193 },

  // Variable: noise_variance_BLACK
  //  Referenced by: '<S394>/Random Number'

  0.0,

  // Variable: noise_variance_BLUE
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Variable: noise_variance_RED
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Variable: platformSelection
  //  Referenced by: '<S75>/Which PLATFORM is being used?'

  3.0,

  // Variable: serverRate
  //  Referenced by:
  //    '<S397>/Constant1'
  //    '<S398>/Constant1'
  //    '<S399>/Constant'
  //    '<S400>/divide by delta T'
  //    '<S401>/divide by delta T'
  //    '<S402>/divide by delta T'
  //    '<S403>/divide by delta T'
  //    '<S404>/divide by delta T'
  //    '<S405>/divide by delta T'
  //    '<S406>/divide by delta T'
  //    '<S407>/divide by delta T'
  //    '<S408>/divide by delta T'
  //    '<S111>/divide by delta T'
  //    '<S112>/divide by delta T'
  //    '<S113>/divide by delta T'
  //    '<S114>/divide by delta T'
  //    '<S115>/divide by delta T'
  //    '<S116>/divide by delta T'
  //    '<S164>/divide by delta T'
  //    '<S166>/divide by delta T'
  //    '<S168>/divide by delta T'
  //    '<S177>/divide by delta T'
  //    '<S179>/divide by delta T'
  //    '<S181>/divide by delta T'
  //    '<S190>/divide by delta T'
  //    '<S192>/divide by delta T'
  //    '<S194>/divide by delta T'
  //    '<S312>/divide by delta T'
  //    '<S314>/divide by delta T'
  //    '<S316>/divide by delta T'
  //    '<S325>/divide by delta T'
  //    '<S327>/divide by delta T'
  //    '<S329>/divide by delta T'
  //    '<S338>/divide by delta T'
  //    '<S340>/divide by delta T'
  //    '<S342>/divide by delta T'
  //    '<S355>/divide by delta T'
  //    '<S357>/divide by delta T'
  //    '<S359>/divide by delta T'
  //    '<S368>/divide by delta T'
  //    '<S370>/divide by delta T'
  //    '<S372>/divide by delta T'
  //    '<S381>/divide by delta T'
  //    '<S383>/divide by delta T'
  //    '<S385>/divide by delta T'
  //    '<S81>/divide by delta T'
  //    '<S82>/divide by delta T'
  //    '<S83>/divide by delta T'
  //    '<S84>/divide by delta T'
  //    '<S85>/divide by delta T'
  //    '<S86>/divide by delta T'
  //    '<S94>/divide by delta T'
  //    '<S95>/divide by delta T'
  //    '<S96>/divide by delta T'
  //    '<S97>/divide by delta T'
  //    '<S98>/divide by delta T'
  //    '<S99>/divide by delta T'
  //    '<S212>/divide by delta T'
  //    '<S214>/divide by delta T'
  //    '<S216>/divide by delta T'
  //    '<S229>/divide by delta T'
  //    '<S231>/divide by delta T'
  //    '<S233>/divide by delta T'
  //    '<S247>/divide by delta T'
  //    '<S249>/divide by delta T'
  //    '<S251>/divide by delta T'
  //    '<S260>/divide by delta T'
  //    '<S262>/divide by delta T'
  //    '<S264>/divide by delta T'
  //    '<S278>/divide by delta T'
  //    '<S280>/divide by delta T'
  //    '<S282>/divide by delta T'
  //    '<S295>/divide by delta T'
  //    '<S297>/divide by delta T'
  //    '<S299>/divide by delta T'

  0.1,

  // Variable: simMode
  //  Referenced by:
  //    '<S7>/Constant'
  //    '<S19>/Constant'
  //    '<S25>/Constant'
  //    '<S57>/Constant'
  //    '<S74>/Constant'
  //    '<S151>/Constant'
  //    '<S155>/Constant'
  //    '<S159>/Constant'
  //    '<S202>/Constant'
  //    '<S307>/Constant'
  //    '<S350>/Constant'
  //    '<S393>/Constant'
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

  // Variable: xLength
  //  Referenced by: '<S206>/Desired X-Position (BLACK)'

  3.51155,

  // Variable: yLength
  //  Referenced by: '<S206>/Desired Y-Position (BLACK)'

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
  //  Referenced by: '<S118>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S121>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_b
  //  Referenced by: '<S122>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S123>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S124>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_no
  //  Referenced by: '<S125>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_m
  //  Referenced by: '<S126>/Out1'

  0.0,

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
  //  Referenced by: '<S101>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S104>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S105>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fy
  //  Referenced by: '<S106>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_e2
  //  Referenced by: '<S107>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kz
  //  Referenced by: '<S108>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bg
  //  Referenced by: '<S109>/Out1'

  0.0,

  // Expression: initCond
  //  Referenced by: '<S413>/ '

  { 1.19, 1.45, -0.06737 },

  // Expression: initCond
  //  Referenced by: '<S415>/ '

  { 1.19, 1.45, -0.06737 },

  // Expression: initCond
  //  Referenced by: '<S417>/ '

  { 2.114, 1.46, 0.0 },

  // Computed Parameter: Out1_Y0_dj
  //  Referenced by: '<S418>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kb
  //  Referenced by: '<S419>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_pm
  //  Referenced by: '<S420>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S421>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S422>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_l
  //  Referenced by: '<S423>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ia
  //  Referenced by: '<S424>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bgo
  //  Referenced by: '<S425>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kc
  //  Referenced by: '<S426>/Out1'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval
  //  Referenced by: '<S394>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S394>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S394>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_f
  //  Referenced by: '<S395>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S395>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_a
  //  Referenced by: '<S396>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S396>/Random Number'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainval
  //  Referenced by: '<S394>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S394>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_b
  //  Referenced by: '<S395>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S395>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_k
  //  Referenced by: '<S396>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S396>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: Out1_Y0_mp
  //  Referenced by: '<S165>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_av
  //  Referenced by: '<S167>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S169>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S156>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S178>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_a4
  //  Referenced by: '<S180>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_nv
  //  Referenced by: '<S182>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S157>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_fr
  //  Referenced by: '<S191>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bk
  //  Referenced by: '<S193>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j2
  //  Referenced by: '<S195>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S158>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S158>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_pn
  //  Referenced by: '<S213>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bd
  //  Referenced by: '<S215>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ai
  //  Referenced by: '<S217>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S203>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_ln
  //  Referenced by: '<S230>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bw
  //  Referenced by: '<S232>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ac
  //  Referenced by: '<S234>/Out1'

  0.0,

  // Expression: 0.104719755/2
  //  Referenced by: '<S221>/Desired Rate (BLACK)'

  0.0523598775,

  // Expression: 1
  //  Referenced by: '<S206>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_at
  //  Referenced by: '<S279>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_dw
  //  Referenced by: '<S281>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_jd
  //  Referenced by: '<S283>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S269>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S269>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_gm
  //  Referenced by: '<S296>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_eb
  //  Referenced by: '<S298>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_hc
  //  Referenced by: '<S300>/Out1'

  0.0,

  // Expression: 0.104719755/2
  //  Referenced by: '<S287>/Desired Rate (BLACK)'

  0.0523598775,

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

  1.0,

  // Computed Parameter: Out1_Y0_jr
  //  Referenced by: '<S313>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_mr
  //  Referenced by: '<S315>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_i0
  //  Referenced by: '<S317>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S304>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_nf
  //  Referenced by: '<S339>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_gb
  //  Referenced by: '<S341>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_da
  //  Referenced by: '<S343>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S306>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S306>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S306>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S306>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S306>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_gx
  //  Referenced by: '<S356>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fj
  //  Referenced by: '<S358>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bm
  //  Referenced by: '<S360>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S347>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_i3
  //  Referenced by: '<S382>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bs
  //  Referenced by: '<S384>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c5
  //  Referenced by: '<S386>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S349>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S349>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S349>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S349>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S349>/Puck State'

  1.0,

  // Expression: 0
  //  Referenced by: '<S390>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S390>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S390>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S390>/Puck State'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S392>/Puck State'

  0.0,

  // Expression: -1
  //  Referenced by: '<S392>/Gain'

  -1.0,

  // Expression: 0.005
  //  Referenced by: '<S392>/Saturation'

  0.005,

  // Expression: -0.005
  //  Referenced by: '<S392>/Saturation'

  -0.005,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz4'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz5'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz6'

  0.0,

  // Expression: 9.81
  //  Referenced by: '<S6>/Gain2'

  9.81,

  // Expression: 0
  //  Referenced by: '<S146>/Unit Delay1'

  0.0,

  // Expression: 4
  //  Referenced by: '<S6>/Constant'

  4.0,

  // Expression: zeta
  //  Referenced by: '<S146>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S146>/Constant1'

  0.025,

  // Expression: pi/180
  //  Referenced by: '<S6>/Gain3'

  0.017453292519943295,

  // Expression: 0
  //  Referenced by: '<S144>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S144>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S144>/Constant1'

  0.025,

  // Expression: 0
  //  Referenced by: '<S142>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S142>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S142>/Constant1'

  0.025,

  // Expression: 9.81
  //  Referenced by: '<S6>/Gain1'

  9.81,

  // Expression: 0
  //  Referenced by: '<S138>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S138>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S138>/Constant1'

  0.025,

  // Expression: pi/180
  //  Referenced by: '<S6>/Gain'

  0.017453292519943295,

  // Expression: 0
  //  Referenced by: '<S140>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S140>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S140>/Constant1'

  0.025,

  // Expression: 0
  //  Referenced by: '<S136>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S136>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S136>/Constant1'

  0.025,

  // Expression: pi/180
  //  Referenced by: '<S6>/Gain6'

  0.017453292519943295,

  // Expression: pi/180
  //  Referenced by: '<S6>/Gain7'

  0.017453292519943295,

  // Expression: pi/180
  //  Referenced by: '<S6>/Gain8'

  0.017453292519943295,

  // Expression: 2
  //  Referenced by: '<S136>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S136>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S138>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S138>/Unit Delay2'

  0.0,

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

  // Expression: 2
  //  Referenced by: '<S144>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S144>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S146>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S146>/Unit Delay2'

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
  //  Referenced by: '<Root>/BLACK_Fx_Sat1'

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
  //  Referenced by: '<Root>/BLACK_Fy_Sat1'

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
  //  Referenced by: '<Root>/BLACK_Tz_Sat1'

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
  //  Referenced by: '<Root>/RED_Px2'

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
  //  Referenced by: '<Root>/RED_Tz_RW Sat1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_RW1'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_Sat'

  0.0,

  // Expression: 0
  //  Referenced by: '<Root>/RED_Tz_Sat1'

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

  // Computed Parameter: UDPReceive1_Port
  //  Referenced by: '<S6>/UDP Receive1'

  5002,

  // Computed Parameter: UDPReceive_Port_e
  //  Referenced by: '<S6>/UDP Receive'

  5001,

  // Computed Parameter: UDPReceive2_Port
  //  Referenced by: '<S6>/UDP Receive2'

  5003,

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

  // Computed Parameter: Delay_InitialCondition_d
  //  Referenced by: '<S117>/Delay'

  1,

  // Computed Parameter: Delay_InitialCondition_n
  //  Referenced by: '<S100>/Delay'

  1,

  // Start of '<S14>/Change BLUE Behavior'
  {
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

    0.0
  }
  ,

  // End of '<S14>/Change BLUE Behavior'

  // Start of '<S13>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S369>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S371>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S373>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S348>/Puck State'

    1.0
  }
  ,

  // End of '<S13>/Change BLUE Behavior'

  // Start of '<S12>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S326>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S328>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S330>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S305>/Puck State'

    1.0
  }
  ,

  // End of '<S12>/Change BLUE Behavior'

  // Start of '<S201>/Sub-Phase #3 '
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

    // Expression: 1
    //  Referenced by: '<S271>/Puck State'

    1.0
  }
  ,

  // End of '<S201>/Sub-Phase #3 '

  // Start of '<S201>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S270>/Constant'

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

    // Expression: 0
    //  Referenced by: '<S270>/Puck State'

    0.0
  }
  ,

  // End of '<S201>/Sub-Phase #2 '

  // Start of '<S200>/Sub-Phase #4'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S261>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S263>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S265>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S241>/Puck State'

    1.0
  }
  ,

  // End of '<S200>/Sub-Phase #4'

  // Start of '<S200>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S240>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S240>/Puck State'

    1.0
  }
  ,

  // End of '<S200>/Sub-Phase #3 '

  // Start of '<S200>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S239>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S239>/Puck State'

    0.0
  }
  ,

  // End of '<S200>/Sub-Phase #2 '

  // Start of '<S200>/Sub-Phase #1'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S248>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S250>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S252>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S238>/Puck State'

    1.0
  }
  ,

  // End of '<S200>/Sub-Phase #1'

  // Start of '<S199>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S205>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S205>/Puck State'

    1.0
  }
  ,

  // End of '<S199>/Sub-Phase #3 '

  // Start of '<S199>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S204>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S204>/Puck State'

    0.0
  }
  ,

  // End of '<S199>/Sub-Phase #2 '

  // Start of '<Root>/Phase #1:  Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S152>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S152>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S152>/Constant5'

    0.0,

    // Expression: 1
    //  Referenced by: '<S152>/Puck State'

    1.0,

    // Expression: 0
    //  Referenced by: '<S154>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S154>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S154>/Constant2'

    0.0,

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
    //  Referenced by: '<S154>/Constant6'

    0.0,

    // Expression: 1
    //  Referenced by: '<S154>/Puck State'

    1.0,

    // Start of '<S8>/Change BLUE Behavior'
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

      // Expression: 1
      //  Referenced by: '<S153>/Puck State'

      1.0
    }
    // End of '<S8>/Change BLUE Behavior'
  }
  ,

  // End of '<Root>/Phase #1:  Start Floating '

  // Start of '<Root>/Phase #0:  Wait for Synchronization'
  {
    // Expression: 0
    //  Referenced by: '<S148>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S148>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S148>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S148>/Puck State'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S150>/Puck State'

    0.0,

    // Start of '<S8>/Change BLUE Behavior'
    {
      // Expression: 0
      //  Referenced by: '<S149>/Constant3'

      0.0,

      // Expression: 0
      //  Referenced by: '<S149>/Constant4'

      0.0,

      // Expression: 0
      //  Referenced by: '<S149>/Constant5'

      0.0,

      // Expression: 0
      //  Referenced by: '<S149>/Puck State'

      0.0
    }
    // End of '<S8>/Change BLUE Behavior'
  }
  ,

  // End of '<Root>/Phase #0:  Wait for Synchronization'

  // Start of '<S6>/AHRS1'
  {
    // Expression: 0.0001924722
    //  Referenced by: '<S6>/AHRS1'

    0.0001924722,

    // Expression: 9.1385e-5
    //  Referenced by: '<S6>/AHRS1'

    9.1385E-5,

    // Expression: 0.1
    //  Referenced by: '<S6>/AHRS1'

    0.1,

    // Expression: 3.0462e-13
    //  Referenced by: '<S6>/AHRS1'

    3.0462E-13,

    // Expression: 0.0096236100000000012
    //  Referenced by: '<S6>/AHRS1'

    0.0096236100000000012,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS1'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS1'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS1'

    0.5,

    // Expression: 33
    //  Referenced by: '<S6>/AHRS1'

    33.0
  }
  ,

  // End of '<S6>/AHRS1'

  // Start of '<S6>/AHRS2'
  {
    // Expression: 0.0001924722
    //  Referenced by: '<S6>/AHRS2'

    0.0001924722,

    // Expression: 9.1385e-5
    //  Referenced by: '<S6>/AHRS2'

    9.1385E-5,

    // Expression: 0.1
    //  Referenced by: '<S6>/AHRS2'

    0.1,

    // Expression: 3.0462e-13
    //  Referenced by: '<S6>/AHRS2'

    3.0462E-13,

    // Expression: 0.0096236100000000012
    //  Referenced by: '<S6>/AHRS2'

    0.0096236100000000012,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS2'

    0.5,

    // Expression: 0.5
    //  Referenced by: '<S6>/AHRS2'

    0.5,

    // Expression: 33
    //  Referenced by: '<S6>/AHRS2'

    33.0
  }
  // End of '<S6>/AHRS2'
};

//
// File trailer for generated code.
//
// [EOF]
//
