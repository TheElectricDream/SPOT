//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED_data.cpp
//
// Code generated for Simulink model 'ShowIMU_RED'.
//
// Model version                  : 1.28
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Fri Aug 14 16:54:35 2020
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
  // Expression: 4
  //  Referenced by: '<Root>/Constant'

  4.0,

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
  //  Referenced by: '<S6>/Constant'

  0.70710678118654746,

  // Expression: tau
  //  Referenced by: '<S6>/Constant1'

  0.005,

  // Expression: 0
  //  Referenced by: '<S6>/Unit Delay1'

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

  // Expression: 2
  //  Referenced by: '<S8>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S8>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S6>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S6>/Unit Delay2'

  0.0,

  // Expression: 2
  //  Referenced by: '<S4>/Gain1'

  2.0,

  // Expression: 0
  //  Referenced by: '<S4>/Unit Delay2'

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
