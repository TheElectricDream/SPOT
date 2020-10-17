//
//  TestingPins.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "TestingPins".
//
//  Model version              : 1.56
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 17 10:45:47 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#ifndef RTW_HEADER_TestingPins_h_
#define RTW_HEADER_TestingPins_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "ext_work.h"
#include "MW_I2C.h"
#include "TestingPins_types.h"

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

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
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
  real_T b_varargout_1[4];
  real_T psquared[4];
  real_T Subtract1[3];                 // '<Root>/Subtract1'
  real_T Gain2[3];                     // '<Root>/Gain2'
  real_T LSM9DS1IMUSensor_o2[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T LSM9DS1IMUSensor_o3[3];       // '<Root>/LSM9DS1 IMU Sensor'
  real_T AHRS2_o1[4];                  // '<Root>/AHRS2'
  real_T a[3];
  real_T a_c[3];
  real_T dv[3];
  real_T gravityAccelGyroDiff[3];
  real_T offDiag[3];
  real_T Reast[3];
  real_T c[3];
  uint8_T b_RegisterValue[16];
  boolean_T b[9];
  real_T Subtract;                     // '<Root>/Subtract'
  real_T HTS221HumiditySensor_o1;      // '<Root>/HTS221 Humidity Sensor'
  real_T accelMeasNoiseVar;
  real_T magMeasNoiseVar;
  real_T smax;
  real_T s;
  real_T temp;
  real_T assign_temp_a;
  real_T assign_temp_b;
  real_T assign_temp_c;
  real_T assign_temp_d;
  real_T assign_temp_d_k;
  real_T gyroOffsetErr_idx_0;
  real_T linAccelErr_idx_0;
  real_T gyroOffsetErr_idx_1;
  real_T linAccelErr_idx_1;
  real_T gyroOffsetErr_idx_2;
  real_T linAccelErr_idx_2;
  real_T assign_temp_a_c;
  real_T assign_temp_b_b;
  real_T assign_temp_c_p;
  real_T assign_temp_d_c;
  real_T theta;
  real_T tr;
  real_T d;
  real_T ac2;
  real_T ad2;
  real_T bc2;
  real_T bd2;
  real_T cd2;
  real_T aasq;
  real_T scale;
  real_T absxk;
  int16_T b_RegisterValue_f[3];
  uint8_T output_raw[6];
  int8_T b_ipiv[6];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T jp;
  int32_T jj;
  int32_T jp1j;
} B_TestingPins_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  fusion_simulink_ahrsfilter_Te_T obj; // '<Root>/AHRS2'
  raspi_internal_lsm9ds1Block_T_T obj_d;// '<Root>/LSM9DS1 IMU Sensor'
  raspi_internal_hts221Block_Te_T obj_dr;// '<Root>/HTS221 Humidity Sensor'
  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_AHRS2;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Gain2;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_LSM9D;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_LSM_h;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Subtr;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace2_PWORK;                // '<Root>/To Workspace2'

  struct {
    void *LoggedData;
  } ToWorkspace3_PWORK;                // '<Root>/To Workspace3'

  struct {
    void *LoggedData;
  } ToWorkspace4_PWORK;                // '<Root>/To Workspace4'

  struct {
    void *LoggedData;
  } ToWorkspace6_PWORK;                // '<Root>/To Workspace6'

  struct {
    void *LoggedData;
  } ToWorkspace7_PWORK;                // '<Root>/To Workspace7'

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_HTS22;   // synthesized block

  struct {
    void *AQHandles;
    void *SlioLTF;
  } TAQSigLogging_InsertedFor_Sub_k;   // synthesized block

  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<Root>/To Workspace'

  struct {
    void *LoggedData;
  } ToWorkspace1_PWORK;                // '<Root>/To Workspace1'

  c_fusion_internal_frames_NED__T gobj_1;// '<Root>/AHRS2'
  c_fusion_internal_frames_NED__T gobj_2;// '<Root>/AHRS2'
} DW_TestingPins_T;

// Parameters (default storage)
struct P_TestingPins_T_ {
  real_T AHRS2_AccelerometerNoise;     // Expression: 0.0001924722
                                          //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_GyroscopeNoise;         // Expression: 9.1385e-5
                                          //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_MagnetometerNoise;      // Expression: 0.1
                                          //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_GyroscopeDriftNoise;    // Expression: 3.0462e-13
                                          //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_LinearAccelerationNoise;// Expression: 0.0096236100000000012
                                          //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_MagneticDisturbanceNoise;// Expression: 0.5
                                           //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_LinearAccelerationDecayFa;// Expression: 0.5
                                            //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_MagneticDisturbanceDecayF;// Expression: 0.5
                                            //  Referenced by: '<Root>/AHRS2'

  real_T AHRS2_ExpectedMagneticFieldStre;// Expression: 33
                                            //  Referenced by: '<Root>/AHRS2'

  real_T Gain_Gain;                    // Expression: 9.81
                                          //  Referenced by: '<Root>/Gain'

  real_T GyroXOffset_Value;            // Expression: 0.9071
                                          //  Referenced by: '<Root>/GyroXOffset'

  real_T GyroYOffset_Value;            // Expression: 4.4991
                                          //  Referenced by: '<Root>/GyroYOffset'

  real_T GyroZOffset_Value;            // Expression: 1.1091
                                          //  Referenced by: '<Root>/GyroZOffset'

  real_T Gain1_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<Root>/Gain1'

  real_T Gain2_Gain;                   // Expression: 180/pi
                                          //  Referenced by: '<Root>/Gain2'

  real_T TemperatureOffset_Value;      // Expression: 10.19
                                          //  Referenced by: '<Root>/TemperatureOffset'

};

// Real-time Model Data Structure
struct tag_RTM_TestingPins_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
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

  extern P_TestingPins_T TestingPins_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_TestingPins_T TestingPins_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_TestingPins_T TestingPins_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void TestingPins_initialize(void);
  extern void TestingPins_step(void);
  extern void TestingPins_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_TestingPins_T *const TestingPins_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Constant' : Unused code path elimination
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
//  '<Root>' : 'TestingPins'

#endif                                 // RTW_HEADER_TestingPins_h_
