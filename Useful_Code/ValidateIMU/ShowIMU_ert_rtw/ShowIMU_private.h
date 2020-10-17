//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_private.h
//
// Code generated for Simulink model 'ShowIMU'.
//
// Model version                  : 1.17
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Wed Jul 22 16:28:40 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ShowIMU_private_h_
#define RTW_HEADER_ShowIMU_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "ShowIMU.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

extern void ShowIMU_step0(void);
extern void ShowIMU_step1(void);

#endif                                 // RTW_HEADER_ShowIMU_private_h_

//
// File trailer for generated code.
//
// [EOF]
//