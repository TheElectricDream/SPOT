//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED.h
//
// Code generated for Simulink model 'ShowIMU_RED'.
//
// Model version                  : 1.29
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Oct 17 10:57:55 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ShowIMU_RED_h_
#define RTW_HEADER_ShowIMU_RED_h_
#include <cstring>
#include <stddef.h>
#include "rtwtypes.h"
#include "MW_I2C.h"
#include "DAHostLib_Network.h"
#include "ShowIMU_RED_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

// Block signals (default storage)
typedef struct {
  real_T TmpSignalConversionAtUDPSendInp[9];
  real_T a[3];
  real_T a_m[3];
} B_ShowIMU_RED_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  raspi_internal_lsm9ds1Block_S_T obj; // '<Root>/LSM9DS1 IMU Sensor'
  real_T UDPSend_NetworkLib[137];      // '<Root>/UDP Send'
} DW_ShowIMU_RED_T;

// Parameters (default storage)
struct P_ShowIMU_RED_T_ {
  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<Root>/UDP Send'

};

// Real-time Model Data Structure
struct tag_RTM_ShowIMU_RED_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_ShowIMU_RED_T ShowIMU_RED_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_ShowIMU_RED_T ShowIMU_RED_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_ShowIMU_RED_T ShowIMU_RED_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void ShowIMU_RED_initialize(void);
  extern void ShowIMU_RED_step(void);
  extern void ShowIMU_RED_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_ShowIMU_RED_T *const ShowIMU_RED_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ShowIMU_RED'

#endif                                 // RTW_HEADER_ShowIMU_RED_h_

//
// File trailer for generated code.
//
// [EOF]
//
