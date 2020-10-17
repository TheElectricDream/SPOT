//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED_data.cpp
//
// Code generated for Simulink model 'ShowIMU_RED'.
//
// Model version                  : 1.24
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Aug  4 08:52:03 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ShowIMU_RED.h"
#include "ShowIMU_RED_private.h"

// Block parameters (default storage)
P_ShowIMU_RED_T ShowIMU_RED_P = {
  // Expression: 0.0017
  //  Referenced by: '<Root>/AHRS'

  0.0017,

  // Expression: 8.7206e-07
  //  Referenced by: '<Root>/AHRS'

  8.7206E-7,

  // Expression: 1.5102e-05
  //  Referenced by: '<Root>/AHRS'

  1.5102E-5,

  // Expression: 8.7206e-07
  //  Referenced by: '<Root>/AHRS'

  8.7206E-7,

  // Expression: 0.0096236100000000012
  //  Referenced by: '<Root>/AHRS'

  0.0096236100000000012,

  // Expression: 0.5
  //  Referenced by: '<Root>/AHRS'

  0.5,

  // Expression: 0.2
  //  Referenced by: '<Root>/AHRS'

  0.2,

  // Expression: 0.5
  //  Referenced by: '<Root>/AHRS'

  0.5,

  // Expression: 50
  //  Referenced by: '<Root>/AHRS'

  50.0,

  // Expression: 30
  //  Referenced by: '<Root>/Constant'

  30.0,

  // Expression: zeta
  //  Referenced by: '<S6>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S6>/Constant1'

  0.005,

  // Expression: 0
  //  Referenced by: '<S6>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S4>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S4>/Constant1'

  0.005,

  // Expression: 0
  //  Referenced by: '<S4>/Unit Delay1'

  0.0,

  // Expression: zeta
  //  Referenced by: '<S8>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S8>/Constant1'

  0.005,

  // Expression: 0
  //  Referenced by: '<S8>/Unit Delay1'

  0.0,

  // Expression: 9.801
  //  Referenced by: '<Root>/Gain1'

  9.801,

  // Expression: pi/180
  //  Referenced by: '<Root>/Gain'

  0.017453292519943295,

  // Expression: 2
  //  Referenced by: '<S8>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S8>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S4>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S4>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S6>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S6>/Unit Delay2'

  0.0,

  // Computed Parameter: UDPSend_Port
  //  Referenced by: '<Root>/UDP Send'

  5001
};

//
// File trailer for generated code.
//
// [EOF]
//
