//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED.h
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
#ifndef RTW_HEADER_ShowIMU_RED_h_
#define RTW_HEADER_ShowIMU_RED_h_
#include <cmath>
#include <cstring>
#include <math.h>
#include <cfloat>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "ext_work.h"
#include "MW_I2C.h"
#include "DAHostLib_Network.h"
#include "ShowIMU_RED_types.h"

// Shared type includes
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

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

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

// Block signals (default storage)
typedef struct {
  real_T Qw[144];
  real_T Ppost[144];
  real_T H[72];
  real_T b_X[72];
  real_T H_m[72];
  real_T c_A[36];
  real_T xe_post[12];
  real_T Rprior[9];
  real_T h1[9];
  real_T x[9];
  real_T h[9];
  real_T ze[6];
  real_T psquared[4];
  real_T Product1[3];                  // '<S6>/Product1'
  real_T Product1_b[3];                // '<S4>/Product1'
  real_T Product1_h[3];                // '<S8>/Product1'
  real_T TmpSignalConversionAtUDPSendInp[9];
  real_T Gain1[3];                     // '<Root>/Gain1'
  real_T Gain[3];                      // '<Root>/Gain'
  real_T LSM9DS1IMUSensor_o1[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T LSM9DS1IMUSensor_o2[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T LSM9DS1IMUSensor_o3[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T AHRS_o1[4];                   // '<Root>/AHRS'
  real_T AHRS_o2[3];                   // '<Root>/AHRS'
  real_T Sum[3];                       // '<S6>/Sum'
  real_T gravityAccelGyroDiff[3];
  real_T offDiag[3];
  real_T Reast[3];
  real_T c[3];
  boolean_T b[9];
  real_T magMeasNoiseVar;
  real_T c_g;                          // '<S8>/MATLAB Function'
  real_T b_c;                          // '<S8>/MATLAB Function'
  real_T a;                            // '<S8>/MATLAB Function'
  real_T c_p;                          // '<S4>/MATLAB Function'
  real_T b_d;                          // '<S4>/MATLAB Function'
  real_T c_k;                          // '<S6>/MATLAB Function'
  real_T b_n;                          // '<S6>/MATLAB Function'
  real_T rtb_Sum_k_c;
  real_T rtb_Sum_d_b;
  real_T rtb_Sum_k_idx_0;
  real_T rtb_Sum_k_idx_1;
  real_T rtb_Sum_d_idx_0;
  real_T rtb_Sum_d_idx_1;
  real_T smax;
  real_T s;
  real_T assign_temp_a;
  real_T assign_temp_b;
  real_T assign_temp_c;
  real_T assign_temp_d;
  real_T assign_temp_a_p;
  real_T assign_temp_b_c;
  real_T assign_temp_c_f;
  real_T assign_temp_d_g;
  real_T gyroOffsetErr_idx_1;
  real_T linAccelErr_idx_1;
  real_T gyroOffsetErr_idx_2;
  real_T linAccelErr_idx_2;
  real_T assign_temp_a_g;
  real_T assign_temp_b_m;
  real_T assign_temp_c_n;
  real_T assign_temp_d_p;
  real_T theta;
  real_T pd;
  real_T d;
  real_T ac2;
  real_T ad2;
  real_T bc2;
  real_T bd2;
  real_T cd2;
  real_T aasq;
  real_T scale;
  real_T absxk;
  int16_T b_RegisterValue[3];
  uint8_T output_raw[6];
  int8_T b_ipiv[6];
  int32_T i;
  int32_T i_l;
  int32_T i1;
  int32_T jp;
  int32_T jj;
  int32_T jAcol;
  int32_T kBcol;
  int32_T c_j;
  int32_T c_d;
  int32_T ix;
  int32_T iy;
} B_ShowIMU_RED_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  fusion_simulink_ahrsfilter_Sh_T obj; // '<Root>/AHRS'
  raspi_internal_lsm9ds1Block_S_T obj_e;// '<Root>/LSM9DS1 IMU Sensor'
  real_T UnitDelay1_DSTATE[3];         // '<S6>/Unit Delay1'
  real_T UnitDelay1_DSTATE_d[3];       // '<S4>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o[3];       // '<S8>/Unit Delay1'
  real_T UnitDelay2_DSTATE[3];         // '<S8>/Unit Delay2'
  real_T UnitDelay2_DSTATE_l[3];       // '<S4>/Unit Delay2'
  real_T UnitDelay2_DSTATE_e[3];       // '<S6>/Unit Delay2'
  real_T UDPSend_NetworkLib[137];      // '<Root>/UDP Send'
  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_AHRS_;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                // '<Root>/To Workspace6'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_AHR_e;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                // '<Root>/To Workspace7'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Gain_;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace8_PWORK;                // '<Root>/To Workspace8'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Gain1;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace9_PWORK;                // '<Root>/To Workspace9'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Demux;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Discr;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace10_PWORK;               // '<Root>/To Workspace10'

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                // '<Root>/To Workspace2'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Dis_i;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<Root>/To Workspace'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Dis_p;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                // '<Root>/To Workspace1'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_LSM9D;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_LSM_o;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_LSM_h;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                // '<Root>/To Workspace3'

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                // '<Root>/To Workspace4'

  struct {
    void *LoggedData;
  } ToWorkspace5_PWORK;                // '<Root>/To Workspace5'

  c_fusion_internal_frames_NED__T gobj_1;// '<Root>/AHRS'
  c_fusion_internal_frames_NED__T gobj_2;// '<Root>/AHRS'
} DW_ShowIMU_RED_T;

// Parameters (default storage)
struct P_ShowIMU_RED_T_ {
  real_T AHRS_AccelerometerNoise;      // Expression: 0.0017
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_GyroscopeNoise;          // Expression: 8.7206e-07
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_MagnetometerNoise;       // Expression: 1.5102e-05
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_GyroscopeDriftNoise;     // Expression: 8.7206e-07
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_LinearAccelerationNoise; // Expression: 0.0096236100000000012
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_MagneticDisturbanceNoise;// Expression: 0.5
                                          //  Referenced by: '<Root>/AHRS'

  real_T AHRS_LinearAccelerationDecayFac;// Expression: 0.2
                                            //  Referenced by: '<Root>/AHRS'

  real_T AHRS_MagneticDisturbanceDecayFa;// Expression: 0.5
                                            //  Referenced by: '<Root>/AHRS'

  real_T AHRS_ExpectedMagneticFieldStren;// Expression: 50
                                            //  Referenced by: '<Root>/AHRS'

  real_T Constant_Value;               // Expression: 30
                                          //  Referenced by: '<Root>/Constant'

  real_T Constant_Value_i;             // Expression: zeta
                                          //  Referenced by: '<S6>/Constant'

  real_T Constant1_Value;              // Expression: tau
                                          //  Referenced by: '<S6>/Constant1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S6>/Unit Delay1'

  real_T Constant_Value_e;             // Expression: zeta
                                          //  Referenced by: '<S4>/Constant'

  real_T Constant1_Value_g;            // Expression: tau
                                          //  Referenced by: '<S4>/Constant1'

  real_T UnitDelay1_InitialCondition_c;// Expression: 0
                                          //  Referenced by: '<S4>/Unit Delay1'

  real_T Constant_Value_ec;            // Expression: zeta
                                          //  Referenced by: '<S8>/Constant'

  real_T Constant1_Value_f;            // Expression: tau
                                          //  Referenced by: '<S8>/Constant1'

  real_T UnitDelay1_InitialCondition_m;// Expression: 0
                                          //  Referenced by: '<S8>/Unit Delay1'

  real_T Gain1_Gain;                   // Expression: 9.801
                                          //  Referenced by: '<Root>/Gain1'

  real_T Gain_Gain;                    // Expression: pi/180
                                          //  Referenced by: '<Root>/Gain'

  real_T Gain1_Gain_o;                 // Expression: 2
                                          //  Referenced by: '<S8>/Gain1'

  real_T UnitDelay2_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S8>/Unit Delay2'

  real_T Gain1_Gain_b;                 // Expression: 2
                                          //  Referenced by: '<S4>/Gain1'

  real_T UnitDelay2_InitialCondition_m;// Expression: 0
                                          //  Referenced by: '<S4>/Unit Delay2'

  real_T Gain1_Gain_a;                 // Expression: 2
                                          //  Referenced by: '<S6>/Gain1'

  real_T UnitDelay2_InitialCondition_c;// Expression: 0
                                          //  Referenced by: '<S6>/Unit Delay2'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<Root>/UDP Send'

};

// Real-time Model Data Structure
struct tag_RTM_ShowIMU_RED_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
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
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Reshape' : Reshape block reduction
//  Block '<Root>/Reshape1' : Reshape block reduction
//  Block '<Root>/Reshape2' : Reshape block reduction


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
