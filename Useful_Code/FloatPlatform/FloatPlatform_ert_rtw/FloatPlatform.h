//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: FloatPlatform.h
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
#ifndef RTW_HEADER_FloatPlatform_h_
#define RTW_HEADER_FloatPlatform_h_
#include <cmath>
#include <stddef.h>
#include "rtwtypes.h"
#include "MW_gpio.h"
#include "FloatPlatform_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block states (default storage) for system '<Root>'
typedef struct {
  codertarget_linux_blocks_Digi_T obj; // '<S1>/Digital Write'
} DW_FloatPlatform_T;

// Parameters (default storage)
struct P_FloatPlatform_T_ {
  real_T Constant_Value;               // Expression: 1
                                          //  Referenced by: '<Root>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_FloatPlatform_T {
  const char_T *errorStatus;
};

// Class declaration for model FloatPlatform
class FloatPlatformModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  FloatPlatformModelClass();

  // Destructor
  ~FloatPlatformModelClass();

  // Real-Time Model get method
  RT_MODEL_FloatPlatform_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P_FloatPlatform_T FloatPlatform_P;

  // Block states
  DW_FloatPlatform_T FloatPlatform_DW;

  // Real-Time Model
  RT_MODEL_FloatPlatform_T FloatPlatform_M;

  // private member function(s) for subsystem '<Root>'
  void FloatPlatfor_SystemCore_release(const codertarget_linux_blocks_Digi_T
    *obj);
  void FloatPlatform_SystemCore_delete(const codertarget_linux_blocks_Digi_T
    *obj);
  void matlabCodegenHandle_matlabCodeg(codertarget_linux_blocks_Digi_T *obj);
};

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
//  '<Root>' : 'FloatPlatform'
//  '<S1>'   : 'FloatPlatform/GPIO Write'

#endif                                 // RTW_HEADER_FloatPlatform_h_

//
// File trailer for generated code.
//
// [EOF]
//
