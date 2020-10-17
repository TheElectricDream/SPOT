//
//  TestingPins_types.h
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


#ifndef RTW_HEADER_TestingPins_types_h_
#define RTW_HEADER_TestingPins_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"

// Model Code Variants

// Custom Type definition for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
#include "MW_SVD.h"
#include "MW_I2C.h"
#ifndef struct_tag_R1xdlxXgEuZ2YKjrgC1tPF
#define struct_tag_R1xdlxXgEuZ2YKjrgC1tPF

struct tag_R1xdlxXgEuZ2YKjrgC1tPF
{
  int32_T __dummy;
};

#endif                                 //struct_tag_R1xdlxXgEuZ2YKjrgC1tPF

#ifndef typedef_e_codertarget_raspi_internal__T
#define typedef_e_codertarget_raspi_internal__T

typedef struct tag_R1xdlxXgEuZ2YKjrgC1tPF e_codertarget_raspi_internal__T;

#endif                                 //typedef_e_codertarget_raspi_internal__T

#ifndef struct_tag_OnUxa7rQ1ULIDscFbWRTZH
#define struct_tag_OnUxa7rQ1ULIDscFbWRTZH

struct tag_OnUxa7rQ1ULIDscFbWRTZH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_codertarget_raspi_internal__T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
  real_T T0_degC;
  real_T T1_degC;
  real_T T0_out;
  real_T T1_out;
  real_T H0_rh;
  real_T H1_rh;
  real_T H0_T0_out;
  real_T H1_T0_out;
};

#endif                                 //struct_tag_OnUxa7rQ1ULIDscFbWRTZH

#ifndef typedef_raspi_internal_hts221Block_Te_T
#define typedef_raspi_internal_hts221Block_Te_T

typedef struct tag_OnUxa7rQ1ULIDscFbWRTZH raspi_internal_hts221Block_Te_T;

#endif                                 //typedef_raspi_internal_hts221Block_Te_T

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

#ifndef struct_tag_wSflavgv0iM67EP96OKIZ
#define struct_tag_wSflavgv0iM67EP96OKIZ

struct tag_wSflavgv0iM67EP96OKIZ
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  e_codertarget_raspi_internal__T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 //struct_tag_wSflavgv0iM67EP96OKIZ

#ifndef typedef_i_codertarget_raspi_internal__T
#define typedef_i_codertarget_raspi_internal__T

typedef struct tag_wSflavgv0iM67EP96OKIZ i_codertarget_raspi_internal__T;

#endif                                 //typedef_i_codertarget_raspi_internal__T

#ifndef struct_tag_wPlwB1N2byXVSJAk9BGO9E
#define struct_tag_wPlwB1N2byXVSJAk9BGO9E

struct tag_wPlwB1N2byXVSJAk9BGO9E
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  e_codertarget_raspi_internal__T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 //struct_tag_wPlwB1N2byXVSJAk9BGO9E

#ifndef typedef_j_codertarget_raspi_internal__T
#define typedef_j_codertarget_raspi_internal__T

typedef struct tag_wPlwB1N2byXVSJAk9BGO9E j_codertarget_raspi_internal__T;

#endif                                 //typedef_j_codertarget_raspi_internal__T

#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D

struct tag_PMfBDzoakfdM9QAdfx2o6D
{
  uint32_T f1[8];
};

#endif                                 //struct_tag_PMfBDzoakfdM9QAdfx2o6D

#ifndef typedef_cell_wrap_TestingPins_T
#define typedef_cell_wrap_TestingPins_T

typedef struct tag_PMfBDzoakfdM9QAdfx2o6D cell_wrap_TestingPins_T;

#endif                                 //typedef_cell_wrap_TestingPins_T

#ifndef struct_tag_MnuwZGhgu8kjqV344GyhbE
#define struct_tag_MnuwZGhgu8kjqV344GyhbE

struct tag_MnuwZGhgu8kjqV344GyhbE
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_TestingPins_T inputVarSize[3];
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

#ifndef struct_tag_Mu1SNMC7dAyyNmAihLbeZF
#define struct_tag_Mu1SNMC7dAyyNmAihLbeZF

struct tag_Mu1SNMC7dAyyNmAihLbeZF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T CalGyroA[9];
  real_T CalGyroB[3];
  real_T CalAccelA[9];
  real_T CalAccelB[3];
  real_T CalMagA[9];
  real_T CalMagB[3];
  i_codertarget_raspi_internal__T i2cobj_A_G;
  j_codertarget_raspi_internal__T i2cobj_MAG;
};

#endif                                 //struct_tag_Mu1SNMC7dAyyNmAihLbeZF

#ifndef typedef_raspi_internal_lsm9ds1Block_T_T
#define typedef_raspi_internal_lsm9ds1Block_T_T

typedef struct tag_Mu1SNMC7dAyyNmAihLbeZF raspi_internal_lsm9ds1Block_T_T;

#endif                                 //typedef_raspi_internal_lsm9ds1Block_T_T

// Parameters (default storage)
typedef struct P_TestingPins_T_ P_TestingPins_T;

// Forward declaration for rtModel
typedef struct tag_RTM_TestingPins_T RT_MODEL_TestingPins_T;

#endif                                 // RTW_HEADER_TestingPins_types_h_
