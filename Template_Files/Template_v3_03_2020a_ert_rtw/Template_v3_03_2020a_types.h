//
//  Template_v3_03_2020a_types.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "Template_v3_03_2020a".
//
//  Model version              : 1.64
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 17 14:27:49 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#ifndef RTW_HEADER_Template_v3_03_2020a_types_h_
#define RTW_HEADER_Template_v3_03_2020a_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

// Model Code Variants
#ifndef struct_tag_dtIb7V8gaaPosvwYxZkJCD
#define struct_tag_dtIb7V8gaaPosvwYxZkJCD

struct tag_dtIb7V8gaaPosvwYxZkJCD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_dtIb7V8gaaPosvwYxZkJCD

#ifndef typedef_STREAMDATA_RB_Template_v3_03__T
#define typedef_STREAMDATA_RB_Template_v3_03__T

typedef struct tag_dtIb7V8gaaPosvwYxZkJCD STREAMDATA_RB_Template_v3_03__T;

#endif                                 //typedef_STREAMDATA_RB_Template_v3_03__T

#ifndef struct_tag_yioZfVzJFClp3vmW2NrXQC
#define struct_tag_yioZfVzJFClp3vmW2NrXQC

struct tag_yioZfVzJFClp3vmW2NrXQC
{
  int32_T __dummy;
};

#endif                                 //struct_tag_yioZfVzJFClp3vmW2NrXQC

#ifndef typedef_c_fusion_internal_frames_NED__T
#define typedef_c_fusion_internal_frames_NED__T

typedef struct tag_yioZfVzJFClp3vmW2NrXQC c_fusion_internal_frames_NED__T;

#endif                                 //typedef_c_fusion_internal_frames_NED__T

#ifndef struct_tag_owjKvqUcBKvgeoFYRvk4MD
#define struct_tag_owjKvqUcBKvgeoFYRvk4MD

struct tag_owjKvqUcBKvgeoFYRvk4MD
{
  real_T a;
  real_T b;
  real_T c;
  real_T d;
};

#endif                                 //struct_tag_owjKvqUcBKvgeoFYRvk4MD

#ifndef typedef_g_matlabshared_rotations_inte_T
#define typedef_g_matlabshared_rotations_inte_T

typedef struct tag_owjKvqUcBKvgeoFYRvk4MD g_matlabshared_rotations_inte_T;

#endif                                 //typedef_g_matlabshared_rotations_inte_T

#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D

struct tag_PMfBDzoakfdM9QAdfx2o6D
{
  uint32_T f1[8];
};

#endif                                 //struct_tag_PMfBDzoakfdM9QAdfx2o6D

#ifndef typedef_cell_wrap_Template_v3_03_2020_T
#define typedef_cell_wrap_Template_v3_03_2020_T

typedef struct tag_PMfBDzoakfdM9QAdfx2o6D cell_wrap_Template_v3_03_2020_T;

#endif                                 //typedef_cell_wrap_Template_v3_03_2020_T

#ifndef struct_tag_MnuwZGhgu8kjqV344GyhbE
#define struct_tag_MnuwZGhgu8kjqV344GyhbE

struct tag_MnuwZGhgu8kjqV344GyhbE
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_Template_v3_03_2020_T inputVarSize[3];
  real_T AccelerometerNoise;
  real_T GyroscopeNoise;
  real_T GyroscopeDriftNoise;
  real_T LinearAccelerationNoise;
  real_T LinearAccelerationDecayFactor;
  real_T pQw[144];
  real_T pQv[36];
  g_matlabshared_rotations_inte_T pOrientPost;
  g_matlabshared_rotations_inte_T pOrientPrior;
  boolean_T pFirstTime;
  c_fusion_internal_frames_NED__T *pRefSys;
  real_T pSensorPeriod;
  real_T pKalmanPeriod;
  real_T pGyroOffset[3];
  real_T pLinAccelPrior[3];
  real_T pLinAccelPost[3];
  real_T pInputPrototype[3];
  real_T MagnetometerNoise;
  real_T MagneticDisturbanceNoise;
  real_T MagneticDisturbanceDecayFactor;
  real_T ExpectedMagneticFieldStrength;
  real_T pMagVec[3];
};

#endif                                 //struct_tag_MnuwZGhgu8kjqV344GyhbE

#ifndef typedef_fusion_simulink_ahrsfilter_Te_T
#define typedef_fusion_simulink_ahrsfilter_Te_T

typedef struct tag_MnuwZGhgu8kjqV344GyhbE fusion_simulink_ahrsfilter_Te_T;

#endif                                 //typedef_fusion_simulink_ahrsfilter_Te_T

#ifndef struct_tag_aH9AaDy6ZLSd2jSOyjaJQC
#define struct_tag_aH9AaDy6ZLSd2jSOyjaJQC

struct tag_aH9AaDy6ZLSd2jSOyjaJQC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_aH9AaDy6ZLSd2jSOyjaJQC

#ifndef typedef_codertarget_linux_blocks_Digi_T
#define typedef_codertarget_linux_blocks_Digi_T

typedef struct tag_aH9AaDy6ZLSd2jSOyjaJQC codertarget_linux_blocks_Digi_T;

#endif                                 //typedef_codertarget_linux_blocks_Digi_T

#ifndef struct_tag_mJhNKAE3yyZ8cCBuxCC07F
#define struct_tag_mJhNKAE3yyZ8cCBuxCC07F

struct tag_mJhNKAE3yyZ8cCBuxCC07F
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T PinNumber;
};

#endif                                 //struct_tag_mJhNKAE3yyZ8cCBuxCC07F

#ifndef typedef_raspi_internal_PWMBlock_Templ_T
#define typedef_raspi_internal_PWMBlock_Templ_T

typedef struct tag_mJhNKAE3yyZ8cCBuxCC07F raspi_internal_PWMBlock_Templ_T;

#endif                                 //typedef_raspi_internal_PWMBlock_Templ_T

#ifndef struct_tag_rMOgeynmi8eZKnAJKOv0nC
#define struct_tag_rMOgeynmi8eZKnAJKOv0nC

struct tag_rMOgeynmi8eZKnAJKOv0nC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
};

#endif                                 //struct_tag_rMOgeynmi8eZKnAJKOv0nC

#ifndef typedef_codertarget_linux_blocks_Di_a_T
#define typedef_codertarget_linux_blocks_Di_a_T

typedef struct tag_rMOgeynmi8eZKnAJKOv0nC codertarget_linux_blocks_Di_a_T;

#endif                                 //typedef_codertarget_linux_blocks_Di_a_T

// Parameters for system: '<S6>/AHRS2'
typedef struct P_AHRS2_Template_v3_03_2020a_T_ P_AHRS2_Template_v3_03_2020a_T;

// Parameters for system: '<S8>/Change BLUE Behavior'
typedef struct P_ChangeBLUEBehavior_Template_T_ P_ChangeBLUEBehavior_Template_T;

// Parameters for system: '<Root>/Phase #0:  Wait for Synchronization'
typedef struct P_Phase0WaitforSynchronizatio_T_ P_Phase0WaitforSynchronizatio_T;

// Parameters for system: '<S199>/Sub-Phase #2 '
typedef struct P_SubPhase2_Template_v3_03_20_T_ P_SubPhase2_Template_v3_03_20_T;

// Parameters for system: '<S200>/Sub-Phase #1'
typedef struct P_SubPhase1_Template_v3_03_20_T_ P_SubPhase1_Template_v3_03_20_T;

// Parameters for system: '<S200>/Sub-Phase #2 '
typedef struct P_SubPhase2_Template_v3_03__h_T_ P_SubPhase2_Template_v3_03__h_T;

// Parameters for system: '<S201>/Sub-Phase #2 '
typedef struct P_SubPhase2_Template_v3_03__g_T_ P_SubPhase2_Template_v3_03__g_T;

// Parameters for system: '<S12>/Change BLUE Behavior'
typedef struct P_ChangeBLUEBehavior_Templa_c_T_ P_ChangeBLUEBehavior_Templa_c_T;

// Parameters (default storage)
typedef struct P_Template_v3_03_2020a_T_ P_Template_v3_03_2020a_T;

// Forward declaration for rtModel
typedef struct tag_RTM_Template_v3_03_2020a_T RT_MODEL_Template_v3_03_2020a_T;

#endif                              // RTW_HEADER_Template_v3_03_2020a_types_h_
