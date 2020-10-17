//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Template_v3_03_2020a_data.cpp
//
// Code generated for Simulink model 'Template_v3_03_2020a'.
//
// Model version                  : 1.34
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Jun 20 11:37:52 2020
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
  //    '<S25>/MATLAB Function'
  //    '<S25>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: F_thrusters_BLUE
  //  Referenced by:
  //    '<S34>/MATLAB Function'
  //    '<S34>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: F_thrusters_RED
  //  Referenced by:
  //    '<S43>/MATLAB Function'
  //    '<S43>/MATLAB Function1'

  { 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25, 0.25 },

  // Variable: Kd_tb
  //  Referenced by:
  //    '<S137>/kd_tb'
  //    '<S270>/kd_tb'
  //    '<S313>/kd_tb'
  //    '<S185>/kd_tb'
  //    '<S199>/kd_tb'

  0.4,

  // Variable: Kd_tblue
  //  Referenced by:
  //    '<S150>/kd_tb'
  //    '<S283>/kd_tb'
  //    '<S326>/kd_tb'
  //    '<S220>/kd_tb'
  //    '<S233>/kd_tb'

  0.4,

  // Variable: Kd_tr
  //  Referenced by:
  //    '<S163>/kd_tr'
  //    '<S296>/kd_tr'
  //    '<S339>/kd_tr'
  //    '<S251>/kd_tr'

  0.4,

  // Variable: Kd_xb
  //  Referenced by:
  //    '<S138>/kd_xb'
  //    '<S271>/kd_xb'
  //    '<S314>/kd_xb'
  //    '<S186>/kd_xb'
  //    '<S200>/kd_xb'

  5.0,

  // Variable: Kd_xblue
  //  Referenced by:
  //    '<S151>/kd_xb'
  //    '<S284>/kd_xb'
  //    '<S327>/kd_xb'
  //    '<S221>/kd_xb'
  //    '<S234>/kd_xb'

  5.0,

  // Variable: Kd_xr
  //  Referenced by:
  //    '<S164>/kd_xr'
  //    '<S297>/kd_xr'
  //    '<S340>/kd_xr'
  //    '<S252>/kd_xr'

  5.0,

  // Variable: Kd_yb
  //  Referenced by:
  //    '<S139>/kd_yb'
  //    '<S272>/kd_yb'
  //    '<S315>/kd_yb'
  //    '<S187>/kd_yb'
  //    '<S201>/kd_yb'

  5.0,

  // Variable: Kd_yblue
  //  Referenced by:
  //    '<S152>/kd_yb'
  //    '<S285>/kd_yb'
  //    '<S328>/kd_yb'
  //    '<S222>/kd_yb'
  //    '<S235>/kd_yb'

  5.0,

  // Variable: Kd_yr
  //  Referenced by:
  //    '<S165>/kd_yr'
  //    '<S298>/kd_yr'
  //    '<S341>/kd_yr'
  //    '<S253>/kd_yr'

  5.0,

  // Variable: Kp_tb
  //  Referenced by:
  //    '<S137>/kp_tb'
  //    '<S270>/kp_tb'
  //    '<S313>/kp_tb'
  //    '<S185>/kp_tb'
  //    '<S199>/kp_tb'

  0.1,

  // Variable: Kp_tblue
  //  Referenced by:
  //    '<S150>/kp_tb'
  //    '<S283>/kp_tb'
  //    '<S326>/kp_tb'
  //    '<S220>/kp_tb'
  //    '<S233>/kp_tb'

  0.1,

  // Variable: Kp_tr
  //  Referenced by:
  //    '<S163>/kp_tr'
  //    '<S296>/kp_tr'
  //    '<S339>/kp_tr'
  //    '<S251>/kp_tr'

  0.1,

  // Variable: Kp_xb
  //  Referenced by:
  //    '<S138>/kp_xb'
  //    '<S271>/kp_xb'
  //    '<S314>/kp_xb'
  //    '<S186>/kp_xb'
  //    '<S200>/kp_xb'

  2.0,

  // Variable: Kp_xblue
  //  Referenced by:
  //    '<S151>/kp_xb'
  //    '<S284>/kp_xb'
  //    '<S327>/kp_xb'
  //    '<S221>/kp_xb'
  //    '<S234>/kp_xb'

  2.0,

  // Variable: Kp_xr
  //  Referenced by:
  //    '<S164>/kp_xr'
  //    '<S297>/kp_xr'
  //    '<S340>/kp_xr'
  //    '<S252>/kp_xr'

  2.0,

  // Variable: Kp_yb
  //  Referenced by:
  //    '<S139>/kp_yb'
  //    '<S272>/kp_yb'
  //    '<S315>/kp_yb'
  //    '<S187>/kp_yb'
  //    '<S201>/kp_yb'

  2.0,

  // Variable: Kp_yblue
  //  Referenced by:
  //    '<S152>/kp_yb'
  //    '<S285>/kp_yb'
  //    '<S328>/kp_yb'
  //    '<S222>/kp_yb'
  //    '<S235>/kp_yb'

  2.0,

  // Variable: Kp_yr
  //  Referenced by:
  //    '<S165>/kp_yr'
  //    '<S298>/kp_yr'
  //    '<S341>/kp_yr'
  //    '<S253>/kp_yr'

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
  //    '<S176>/Constant4'
  //    '<S177>/Constant4'
  //    '<S178>/Constant4'

  40.0,

  // Variable: Phase3_SubPhase2_End
  //  Referenced by:
  //    '<S176>/Constant1'
  //    '<S177>/Constant1'
  //    '<S178>/Constant1'

  45.0,

  // Variable: Phase3_SubPhase3_End
  //  Referenced by:
  //    '<S176>/Constant2'
  //    '<S177>/Constant2'
  //    '<S178>/Constant2'
  //    '<S203>/Constant1'

  46.0,

  // Variable: Phase3_SubPhase4_End
  //  Referenced by:
  //    '<S176>/Constant3'
  //    '<S177>/Constant3'
  //    '<S178>/Constant3'

  166.0,

  // Variable: Phase4_End
  //  Referenced by: '<Root>/Constant3'

  196.0,

  // Variable: Phase5_End
  //  Referenced by: '<Root>/Constant6'

  201.0,

  // Variable: WhoAmI
  //  Referenced by:
  //    '<S3>/Constant'
  //    '<S4>/Constant'
  //    '<S7>/Constant'
  //    '<S8>/Constant'
  //    '<S9>/Constant'
  //    '<S10>/Constant'
  //    '<S11>/Constant'
  //    '<S12>/Constant'
  //    '<S13>/Constant'
  //    '<S74>/Constant'

  2.0,

  // Variable: drop_states_BLACK
  //  Referenced by: '<S356>/Velocity to Position'

  { 2.25, 0.5, 0.0 },

  // Variable: drop_states_BLUE
  //  Referenced by: '<S357>/Velocity to Position'

  { 3.0, 0.5, 3.1415926535897931 },

  // Variable: drop_states_RED
  //  Referenced by: '<S358>/Velocity to Position'

  { 3.0, 0.5, 3.1415926535897931 },

  // Variable: home_states_BLACK
  //  Referenced by:
  //    '<S266>/Desired Attitude (BLACK)'
  //    '<S266>/Desired Px (BLACK)'
  //    '<S266>/Desired Py (BLACK)'
  //    '<S309>/Constant'
  //    '<S309>/Constant2'
  //    '<S309>/Constant3'

  { 1.355775, 1.209675, 0.0 },

  // Variable: home_states_BLUE
  //  Referenced by:
  //    '<S267>/Desired Attitude (BLUE)'
  //    '<S267>/Desired Px (BLUE)'
  //    '<S267>/Desired Py (BLUE)'
  //    '<S310>/Desired Attitude (BLUE)'
  //    '<S310>/Desired Px (BLUE)'
  //    '<S310>/Desired Py (BLUE)'

  { 0.85577500000000006, 1.209675, 0.0 },

  // Variable: home_states_RED
  //  Referenced by:
  //    '<S268>/Constant'
  //    '<S268>/Constant1'
  //    '<S268>/Constant3'
  //    '<S311>/Constant'
  //    '<S311>/Constant2'
  //    '<S311>/Constant3'

  { 2.155775, 1.209675, 3.1415926535897931 },

  // Variable: init_states_BLACK
  //  Referenced by:
  //    '<S133>/Desired Attitude (BLACK)'
  //    '<S133>/Desired Px (BLACK)'
  //    '<S133>/Desired Py (BLACK)'
  //    '<S180>/Desired Attitude (BLACK)'
  //    '<S180>/Desired X-Position (BLACK)'
  //    '<S180>/Desired Y-Position (BLACK)'

  { 1.355775, 1.209675, 0.0 },

  // Variable: init_states_BLUE
  //  Referenced by:
  //    '<S134>/Desired Attitude (BLUE)'
  //    '<S134>/Desired Px (BLUE)'
  //    '<S134>/Desired Py (BLUE)'
  //    '<S215>/Desired Attitude (BLUE)'
  //    '<S215>/Desired Px (BLUE)'
  //    '<S215>/Desired Py (BLUE)'
  //    '<S218>/Desired Attitude (BLUE)'
  //    '<S218>/Desired Px (BLUE)'
  //    '<S218>/Desired Py (BLUE)'

  { 1.0557750000000001, 1.209675, 0.0 },

  // Variable: init_states_RED
  //  Referenced by:
  //    '<S135>/Constant'
  //    '<S135>/Constant1'
  //    '<S135>/Constant3'
  //    '<S246>/Desired Attitude (RED)'
  //    '<S246>/Desired X-Position (RED)'
  //    '<S246>/Desired Y-Position (RED)'

  { 2.155775, 1.209675, 3.1415926535897931 },

  // Variable: model_param
  //  Referenced by:
  //    '<S356>/MATLAB Function'
  //    '<S357>/MATLAB Function'
  //    '<S358>/MATLAB Function'
  //    '<S249>/Control Block'

  { 16.9478, 0.2709, 12.3341, 0.188, 12.7621, 0.193 },

  // Variable: noise_variance_BLACK
  //  Referenced by: '<S356>/Random Number'

  1.0E-7,

  // Variable: noise_variance_BLUE
  //  Referenced by: '<S357>/Random Number'

  1.0E-7,

  // Variable: noise_variance_RED
  //  Referenced by: '<S358>/Random Number'

  1.0E-7,

  // Variable: platformSelection
  //  Referenced by: '<S73>/Which PLATFORM is being used?'

  3.0,

  // Variable: serverRate
  //  Referenced by:
  //    '<S359>/Constant1'
  //    '<S360>/Constant1'
  //    '<S361>/Constant'
  //    '<S362>/divide by delta T'
  //    '<S363>/divide by delta T'
  //    '<S364>/divide by delta T'
  //    '<S365>/divide by delta T'
  //    '<S366>/divide by delta T'
  //    '<S367>/divide by delta T'
  //    '<S368>/divide by delta T'
  //    '<S369>/divide by delta T'
  //    '<S370>/divide by delta T'
  //    '<S109>/divide by delta T'
  //    '<S110>/divide by delta T'
  //    '<S111>/divide by delta T'
  //    '<S112>/divide by delta T'
  //    '<S113>/divide by delta T'
  //    '<S114>/divide by delta T'
  //    '<S141>/divide by delta T'
  //    '<S143>/divide by delta T'
  //    '<S145>/divide by delta T'
  //    '<S154>/divide by delta T'
  //    '<S156>/divide by delta T'
  //    '<S158>/divide by delta T'
  //    '<S167>/divide by delta T'
  //    '<S169>/divide by delta T'
  //    '<S171>/divide by delta T'
  //    '<S274>/divide by delta T'
  //    '<S276>/divide by delta T'
  //    '<S278>/divide by delta T'
  //    '<S287>/divide by delta T'
  //    '<S289>/divide by delta T'
  //    '<S291>/divide by delta T'
  //    '<S300>/divide by delta T'
  //    '<S302>/divide by delta T'
  //    '<S304>/divide by delta T'
  //    '<S317>/divide by delta T'
  //    '<S319>/divide by delta T'
  //    '<S321>/divide by delta T'
  //    '<S330>/divide by delta T'
  //    '<S332>/divide by delta T'
  //    '<S334>/divide by delta T'
  //    '<S343>/divide by delta T'
  //    '<S345>/divide by delta T'
  //    '<S347>/divide by delta T'
  //    '<S79>/divide by delta T'
  //    '<S80>/divide by delta T'
  //    '<S81>/divide by delta T'
  //    '<S82>/divide by delta T'
  //    '<S83>/divide by delta T'
  //    '<S84>/divide by delta T'
  //    '<S92>/divide by delta T'
  //    '<S93>/divide by delta T'
  //    '<S94>/divide by delta T'
  //    '<S95>/divide by delta T'
  //    '<S96>/divide by delta T'
  //    '<S97>/divide by delta T'
  //    '<S189>/divide by delta T'
  //    '<S191>/divide by delta T'
  //    '<S193>/divide by delta T'
  //    '<S206>/divide by delta T'
  //    '<S208>/divide by delta T'
  //    '<S210>/divide by delta T'
  //    '<S224>/divide by delta T'
  //    '<S226>/divide by delta T'
  //    '<S228>/divide by delta T'
  //    '<S237>/divide by delta T'
  //    '<S239>/divide by delta T'
  //    '<S241>/divide by delta T'
  //    '<S255>/divide by delta T'
  //    '<S257>/divide by delta T'
  //    '<S259>/divide by delta T'

  0.1,

  // Variable: simMode
  //  Referenced by:
  //    '<S6>/Constant'
  //    '<S17>/Constant'
  //    '<S23>/Constant'
  //    '<S55>/Constant'
  //    '<S72>/Constant'
  //    '<S128>/Constant'
  //    '<S132>/Constant'
  //    '<S136>/Constant'
  //    '<S179>/Constant'
  //    '<S269>/Constant'
  //    '<S312>/Constant'
  //    '<S355>/Constant'
  //    '<S76>/Constant'

  0.0,

  // Variable: thruster_dist2CG_BLACK
  //  Referenced by:
  //    '<S25>/MATLAB Function'
  //    '<S25>/MATLAB Function1'

  { 83.42, -52.58, 55.94, -60.05, 54.08, -53.92, 77.06, -55.94 },

  // Variable: thruster_dist2CG_BLUE
  //  Referenced by:
  //    '<S34>/MATLAB Function'
  //    '<S34>/MATLAB Function1'

  { 83.42, -52.58, 55.94, -60.05, 54.08, -53.92, 77.06, -55.94 },

  // Variable: thruster_dist2CG_RED
  //  Referenced by:
  //    '<S43>/MATLAB Function'
  //    '<S43>/MATLAB Function1'

  { 49.92, -78.08, 70.46, -63.54, 81.08, -50.42, 57.44, -75.96 },

  // Variable: xLength
  //  Referenced by: '<S183>/Desired X-Position (BLACK)'

  3.51155,

  // Variable: yLength
  //  Referenced by: '<S183>/Desired Y-Position (BLACK)'

  2.41935,

  // Computed Parameter: BLACKPWM_Y0
  //  Referenced by: '<S20>/BLACK PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S25>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S25>/Remove Negatives'

  0.0,

  // Computed Parameter: BLUEPWM_Y0
  //  Referenced by: '<S21>/BLUE PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S34>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S34>/Remove Negatives'

  0.0,

  // Computed Parameter: REDPWM_Y0
  //  Referenced by: '<S22>/RED PWM'

  0.0,

  // Expression: 1000
  //  Referenced by: '<S43>/Remove Negatives'

  1000.0,

  // Expression: 0
  //  Referenced by: '<S43>/Remove Negatives'

  0.0,

  // Expression: sampleTime
  //  Referenced by: '<S68>/Digital Read'

  0.1,

  // Expression: 0.1
  //  Referenced by: '<S56>/Saturate Torque'

  0.1,

  // Expression: -0.1
  //  Referenced by: '<S56>/Saturate Torque'

  -0.1,

  // Expression: 0.0
  //  Referenced by: '<S56>/Delay'

  0.0,

  // Expression: 3375/64
  //  Referenced by: '<S60>/Gearbox  Ratio'

  52.734375,

  // Expression: 7000
  //  Referenced by: '<S57>/Saturate Motor'

  7000.0,

  // Expression: -7000
  //  Referenced by: '<S57>/Saturate Motor'

  -7000.0,

  // Expression: (7000*64/3375)
  //  Referenced by: '<S56>/Saturate RPM'

  132.74074074074073,

  // Expression: -(7000*64/3375)
  //  Referenced by: '<S56>/Saturate RPM'

  -132.74074074074073,

  // Computed Parameter: Out1_Y0
  //  Referenced by: '<S116>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_k
  //  Referenced by: '<S119>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_b
  //  Referenced by: '<S120>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_d
  //  Referenced by: '<S121>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_n
  //  Referenced by: '<S122>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_no
  //  Referenced by: '<S123>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_m
  //  Referenced by: '<S124>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_a
  //  Referenced by: '<S85>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ni
  //  Referenced by: '<S86>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_e
  //  Referenced by: '<S87>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_dr
  //  Referenced by: '<S88>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_h
  //  Referenced by: '<S89>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_i
  //  Referenced by: '<S90>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_as
  //  Referenced by: '<S99>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_p
  //  Referenced by: '<S102>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_f
  //  Referenced by: '<S103>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fy
  //  Referenced by: '<S104>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_e2
  //  Referenced by: '<S105>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kz
  //  Referenced by: '<S106>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bg
  //  Referenced by: '<S107>/Out1'

  0.0,

  // Expression: initCond
  //  Referenced by: '<S375>/ '

  { 2.25, 0.5, 0.0 },

  // Expression: initCond
  //  Referenced by: '<S377>/ '

  { 2.25, 0.5, 0.0 },

  // Expression: initCond
  //  Referenced by: '<S379>/ '

  { 3.0, 0.5, 3.1415926535897931 },

  // Computed Parameter: Out1_Y0_dj
  //  Referenced by: '<S380>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kb
  //  Referenced by: '<S381>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_pm
  //  Referenced by: '<S382>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c
  //  Referenced by: '<S383>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j
  //  Referenced by: '<S384>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_l
  //  Referenced by: '<S385>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ia
  //  Referenced by: '<S386>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bgo
  //  Referenced by: '<S387>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_kc
  //  Referenced by: '<S388>/Out1'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval
  //  Referenced by: '<S356>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S356>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S356>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_f
  //  Referenced by: '<S357>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S357>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S357>/Random Number'

  0.0,

  // Computed Parameter: VelocitytoPosition_gainval_a
  //  Referenced by: '<S358>/Velocity to Position'

  0.05,

  // Expression: 0
  //  Referenced by: '<S358>/Random Number'

  0.0,

  // Expression: 0
  //  Referenced by: '<S358>/Random Number'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainval
  //  Referenced by: '<S356>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S356>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_b
  //  Referenced by: '<S357>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S357>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: AccelerationtoVelocity_gainva_k
  //  Referenced by: '<S358>/Acceleration  to Velocity'

  0.05,

  // Expression: 0
  //  Referenced by: '<S358>/Acceleration  to Velocity'

  0.0,

  // Computed Parameter: Out1_Y0_mp
  //  Referenced by: '<S142>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_av
  //  Referenced by: '<S144>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_g
  //  Referenced by: '<S146>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S133>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_o
  //  Referenced by: '<S155>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_a4
  //  Referenced by: '<S157>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_nv
  //  Referenced by: '<S159>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S134>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_fr
  //  Referenced by: '<S168>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bk
  //  Referenced by: '<S170>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_j2
  //  Referenced by: '<S172>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S135>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S135>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_pn
  //  Referenced by: '<S190>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bd
  //  Referenced by: '<S192>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ai
  //  Referenced by: '<S194>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S180>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_ln
  //  Referenced by: '<S207>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bw
  //  Referenced by: '<S209>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_ac
  //  Referenced by: '<S211>/Out1'

  0.0,

  // Expression: 0.104719755/2
  //  Referenced by: '<S198>/Desired Rate (BLACK)'

  0.0523598775,

  // Expression: 1
  //  Referenced by: '<S183>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_at
  //  Referenced by: '<S256>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_dw
  //  Referenced by: '<S258>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_jd
  //  Referenced by: '<S260>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S246>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S246>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S246>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S246>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S246>/Puck State'

  1.0,

  // Expression: 0
  //  Referenced by: '<S249>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S249>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S249>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S249>/Constant6'

  0.0,

  // Expression: [0 0 0 0 0 0]';
  //  Referenced by: '<S249>/External Forces (if any)'

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Expression: 1
  //  Referenced by: '<S249>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_jr
  //  Referenced by: '<S275>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_mr
  //  Referenced by: '<S277>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_i0
  //  Referenced by: '<S279>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S266>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_nf
  //  Referenced by: '<S301>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_gb
  //  Referenced by: '<S303>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_da
  //  Referenced by: '<S305>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S268>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S268>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S268>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S268>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S268>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_gx
  //  Referenced by: '<S318>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_fj
  //  Referenced by: '<S320>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bm
  //  Referenced by: '<S322>/Out1'

  0.0,

  // Expression: 1
  //  Referenced by: '<S309>/Puck State'

  1.0,

  // Computed Parameter: Out1_Y0_i3
  //  Referenced by: '<S344>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_bs
  //  Referenced by: '<S346>/Out1'

  0.0,

  // Computed Parameter: Out1_Y0_c5
  //  Referenced by: '<S348>/Out1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S311>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S311>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S311>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S311>/Constant6'

  0.0,

  // Expression: 1
  //  Referenced by: '<S311>/Puck State'

  1.0,

  // Expression: 0
  //  Referenced by: '<S352>/Constant3'

  0.0,

  // Expression: 0
  //  Referenced by: '<S352>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S352>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S352>/Puck State'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant1'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant2'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant4'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant5'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Constant6'

  0.0,

  // Expression: 0
  //  Referenced by: '<S354>/Puck State'

  0.0,

  // Expression: -1
  //  Referenced by: '<S354>/Gain'

  -1.0,

  // Expression: 0.005
  //  Referenced by: '<S354>/Saturation'

  0.005,

  // Expression: -0.005
  //  Referenced by: '<S354>/Saturation'

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
  //  Referenced by: '<S77>/UDP Receive'

  25000,

  // Computed Parameter: SendBLACKStatestoBLACKPlatform_
  //  Referenced by: '<S78>/Send BLACK States to  BLACK Platform'

  25000,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<Root>/UDP Send'

  26000,

  // Computed Parameter: Delay1_InitialCondition
  //  Referenced by: '<S61>/Delay1'

  0,

  // Computed Parameter: Delay2_InitialCondition
  //  Referenced by: '<S61>/Delay2'

  0,

  // Computed Parameter: Delay5_InitialCondition
  //  Referenced by: '<S61>/Delay5'

  0,

  // Computed Parameter: Delay3_InitialCondition
  //  Referenced by: '<S61>/Delay3'

  0,

  // Computed Parameter: Delay4_InitialCondition
  //  Referenced by: '<S61>/Delay4'

  0,

  // Computed Parameter: Delay_InitialCondition_d
  //  Referenced by: '<S115>/Delay'

  1,

  // Computed Parameter: Delay_InitialCondition_n
  //  Referenced by: '<S98>/Delay'

  1,

  // Start of '<S13>/Change BLUE Behavior'
  {
    // Expression: 0
    //  Referenced by: '<S353>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S353>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S353>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S353>/Puck State'

    0.0
  }
  ,

  // End of '<S13>/Change BLUE Behavior'

  // Start of '<S12>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S331>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S333>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S335>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S310>/Puck State'

    1.0
  }
  ,

  // End of '<S12>/Change BLUE Behavior'

  // Start of '<S11>/Change BLUE Behavior'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S288>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_k
    //  Referenced by: '<S290>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_n
    //  Referenced by: '<S292>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S267>/Puck State'

    1.0
  }
  ,

  // End of '<S11>/Change BLUE Behavior'

  // Start of '<S178>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S248>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S248>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S248>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S248>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S248>/Constant6'

    0.0,

    // Expression: 1
    //  Referenced by: '<S248>/Puck State'

    1.0
  }
  ,

  // End of '<S178>/Sub-Phase #3 '

  // Start of '<S178>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S247>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S247>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S247>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S247>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S247>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S247>/Puck State'

    0.0
  }
  ,

  // End of '<S178>/Sub-Phase #2 '

  // Start of '<S177>/Sub-Phase #4'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S238>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S240>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S242>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S218>/Puck State'

    1.0
  }
  ,

  // End of '<S177>/Sub-Phase #4'

  // Start of '<S177>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S217>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S217>/Puck State'

    1.0
  }
  ,

  // End of '<S177>/Sub-Phase #3 '

  // Start of '<S177>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S216>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S216>/Puck State'

    0.0
  }
  ,

  // End of '<S177>/Sub-Phase #2 '

  // Start of '<S177>/Sub-Phase #1'
  {
    // Computed Parameter: Out1_Y0
    //  Referenced by: '<S225>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_m
    //  Referenced by: '<S227>/Out1'

    0.0,

    // Computed Parameter: Out1_Y0_p
    //  Referenced by: '<S229>/Out1'

    0.0,

    // Expression: 1
    //  Referenced by: '<S215>/Puck State'

    1.0
  }
  ,

  // End of '<S177>/Sub-Phase #1'

  // Start of '<S176>/Sub-Phase #3 '
  {
    // Expression: 0
    //  Referenced by: '<S182>/Constant'

    0.0,

    // Expression: 1
    //  Referenced by: '<S182>/Puck State'

    1.0
  }
  ,

  // End of '<S176>/Sub-Phase #3 '

  // Start of '<S176>/Sub-Phase #2 '
  {
    // Expression: 0
    //  Referenced by: '<S181>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S181>/Puck State'

    0.0
  }
  ,

  // End of '<S176>/Sub-Phase #2 '

  // Start of '<Root>/Phase #1:  Start Floating '
  {
    // Expression: 0
    //  Referenced by: '<S129>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S129>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S129>/Constant5'

    0.0,

    // Expression: 1
    //  Referenced by: '<S129>/Puck State'

    1.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S131>/Constant6'

    0.0,

    // Expression: 1
    //  Referenced by: '<S131>/Puck State'

    1.0,

    // Start of '<S7>/Change BLUE Behavior'
    {
      // Expression: 0
      //  Referenced by: '<S130>/Constant3'

      0.0,

      // Expression: 0
      //  Referenced by: '<S130>/Constant4'

      0.0,

      // Expression: 0
      //  Referenced by: '<S130>/Constant5'

      0.0,

      // Expression: 1
      //  Referenced by: '<S130>/Puck State'

      1.0
    }
    // End of '<S7>/Change BLUE Behavior'
  }
  ,

  // End of '<Root>/Phase #1:  Start Floating '

  // Start of '<Root>/Phase #0:  Wait for Synchronization'
  {
    // Expression: 0
    //  Referenced by: '<S125>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S125>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S125>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S125>/Puck State'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant1'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant2'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant3'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant4'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant5'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Constant6'

    0.0,

    // Expression: 0
    //  Referenced by: '<S127>/Puck State'

    0.0,

    // Start of '<S7>/Change BLUE Behavior'
    {
      // Expression: 0
      //  Referenced by: '<S126>/Constant3'

      0.0,

      // Expression: 0
      //  Referenced by: '<S126>/Constant4'

      0.0,

      // Expression: 0
      //  Referenced by: '<S126>/Constant5'

      0.0,

      // Expression: 0
      //  Referenced by: '<S126>/Puck State'

      0.0
    }
    // End of '<S7>/Change BLUE Behavior'
  }
  // End of '<Root>/Phase #0:  Wait for Synchronization'
};

//
// File trailer for generated code.
//
// [EOF]
//
