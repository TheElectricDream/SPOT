//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FloatPlatform.cpp
//
// Code generated for Simulink model 'FloatPlatform'.
//
// Model version                  : 1.16
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Fri Aug 14 12:52:43 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "FloatPlatform.h"
#include "FloatPlatform_private.h"

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

void FloatPlatformModelClass::FloatPlatfor_SystemCore_release(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(26U);
  }
}

void FloatPlatformModelClass::FloatPlatform_SystemCore_delete(const
  codertarget_linux_blocks_Digi_T *obj)
{
  FloatPlatfor_SystemCore_release(obj);
}

void FloatPlatformModelClass::matlabCodegenHandle_matlabCodeg
  (codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    FloatPlatform_SystemCore_delete(obj);
  }
}

// Model step function
void FloatPlatformModelClass::step()
{
  real_T tmp;
  uint8_T tmp_0;

  // MATLABSystem: '<S1>/Digital Write' incorporates:
  //   Constant: '<Root>/Constant'

  tmp = rt_roundd_snf(FloatPlatform_P.Constant_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = static_cast<uint8_T>(tmp);
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  MW_gpioWrite(26U, tmp_0);

  // End of MATLABSystem: '<S1>/Digital Write'
}

// Model initialize function
void FloatPlatformModelClass::initialize()
{
  // Start for MATLABSystem: '<S1>/Digital Write'
  FloatPlatform_DW.obj.matlabCodegenIsDeleted = false;
  FloatPlatform_DW.obj.isInitialized = 1;
  MW_gpioInit(26U, true);
  FloatPlatform_DW.obj.isSetupComplete = true;
}

// Model terminate function
void FloatPlatformModelClass::terminate()
{
  // Terminate for MATLABSystem: '<S1>/Digital Write'
  matlabCodegenHandle_matlabCodeg(&FloatPlatform_DW.obj);
}

// Constructor
FloatPlatformModelClass::FloatPlatformModelClass():
  FloatPlatform_DW()
  ,FloatPlatform_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
FloatPlatformModelClass::~FloatPlatformModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_FloatPlatform_T * FloatPlatformModelClass::getRTM()
{
  return (&FloatPlatform_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
