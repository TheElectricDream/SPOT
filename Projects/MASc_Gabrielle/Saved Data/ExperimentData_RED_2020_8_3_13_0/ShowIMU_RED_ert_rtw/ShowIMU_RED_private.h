//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED_private.h
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
#ifndef RTW_HEADER_ShowIMU_RED_private_h_
#define RTW_HEADER_ShowIMU_RED_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "ShowIMU_RED.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern void ShowIMU_RED_MATLABFunction(real_T rtu_w, real_T rtu_zeta, real_T
  rtu_tau, real_T *rty_a, real_T *rty_b, real_T *rty_c);

#endif                                 // RTW_HEADER_ShowIMU_RED_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
