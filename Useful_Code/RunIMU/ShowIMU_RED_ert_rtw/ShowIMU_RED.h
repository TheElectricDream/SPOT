//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED.h
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
  real_T LSM9DS1IMUSensor_o1[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T Sum[3];                       // '<S4>/Sum'
  real_T LSM9DS1IMUSensor_o2[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T LSM9DS1IMUSensor_o3[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T c;                            // '<S8>/MATLAB Function'
  real_T b;                            // '<S8>/MATLAB Function'
  real_T a;                            // '<S8>/MATLAB Function'
  real_T c_h;                          // '<S6>/MATLAB Function'
  real_T b_n;                          // '<S6>/MATLAB Function'
  real_T a_m;                          // '<S6>/MATLAB Function'
  real_T c_p;                          // '<S4>/MATLAB Function'
  real_T b_d;                          // '<S4>/MATLAB Function'
  real_T a_c;                          // '<S4>/MATLAB Function'
  real_T rtb_Sum_d_idx_0;
  real_T rtb_Sum_d_idx_1;
  real_T rtb_Sum_d_idx_2;
  real_T rtb_Sum_dw_idx_0;
  real_T rtb_Sum_dw_idx_1;
  real_T rtb_Sum_dw_idx_2;
} B_ShowIMU_RED_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  raspi_internal_lsm9ds1Block_S_T obj; // '<Root>/LSM9DS1 IMU Sensor'
  real_T UnitDelay1_DSTATE[3];         // '<S4>/Unit Delay1'
  real_T UnitDelay1_DSTATE_h[3];       // '<S6>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o[3];       // '<S8>/Unit Delay1'
  real_T UnitDelay2_DSTATE[3];         // '<S8>/Unit Delay2'
  real_T UnitDelay2_DSTATE_e[3];       // '<S6>/Unit Delay2'
  real_T UnitDelay2_DSTATE_l[3];       // '<S4>/Unit Delay2'
  real_T UDPSend_NetworkLib[137];      // '<Root>/UDP Send'
} DW_ShowIMU_RED_T;

// Parameters (default storage)
struct P_ShowIMU_RED_T_ {
  real_T Constant_Value;               // Expression: 4
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant_Value_e;             // Expression: zeta
                                          //  Referenced by: '<S4>/Constant'

  real_T Constant1_Value;              // Expression: tau
                                          //  Referenced by: '<S4>/Constant1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S4>/Unit Delay1'

  real_T Constant_Value_i;             // Expression: zeta
                                          //  Referenced by: '<S6>/Constant'

  real_T Constant1_Value_b;            // Expression: tau
                                          //  Referenced by: '<S6>/Constant1'

  real_T UnitDelay1_InitialCondition_g;// Expression: 0
                                          //  Referenced by: '<S6>/Unit Delay1'

  real_T Constant_Value_ec;            // Expression: zeta
                                          //  Referenced by: '<S8>/Constant'

  real_T Constant1_Value_f;            // Expression: tau
                                          //  Referenced by: '<S8>/Constant1'

  real_T UnitDelay1_InitialCondition_m;// Expression: 0
                                          //  Referenced by: '<S8>/Unit Delay1'

  real_T Gain1_Gain;                   // Expression: 2
                                          //  Referenced by: '<S8>/Gain1'

  real_T UnitDelay2_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S8>/Unit Delay2'

  real_T Gain1_Gain_a;                 // Expression: 2
                                          //  Referenced by: '<S6>/Gain1'

  real_T UnitDelay2_InitialCondition_c;// Expression: 0
                                          //  Referenced by: '<S6>/Unit Delay2'

  real_T Gain1_Gain_b;                 // Expression: 2
                                          //  Referenced by: '<S4>/Gain1'

  real_T UnitDelay2_InitialCondition_m;// Expression: 0
                                          //  Referenced by: '<S4>/Unit Delay2'

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
//  '<S1>'   : 'ShowIMU_RED/Discrete Varying Lowpass'
//  '<S2>'   : 'ShowIMU_RED/Discrete Varying Lowpass1'
//  '<S3>'   : 'ShowIMU_RED/Discrete Varying Lowpass2'
//  '<S4>'   : 'ShowIMU_RED/Discrete Varying Lowpass/SOS1'
//  '<S5>'   : 'ShowIMU_RED/Discrete Varying Lowpass/SOS1/MATLAB Function'
//  '<S6>'   : 'ShowIMU_RED/Discrete Varying Lowpass1/SOS1'
//  '<S7>'   : 'ShowIMU_RED/Discrete Varying Lowpass1/SOS1/MATLAB Function'
//  '<S8>'   : 'ShowIMU_RED/Discrete Varying Lowpass2/SOS1'
//  '<S9>'   : 'ShowIMU_RED/Discrete Varying Lowpass2/SOS1/MATLAB Function'

#endif                                 // RTW_HEADER_ShowIMU_RED_h_

//
// File trailer for generated code.
//
// [EOF]
//
