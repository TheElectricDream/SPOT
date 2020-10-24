//
//  PhaseSpace_ALL_lib.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "PhaseSpace_ALL_lib".
//
//  Model version              : 1.224
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 24 10:53:13 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#ifndef RTW_HEADER_PhaseSpace_ALL_lib_h_
#define RTW_HEADER_PhaseSpace_ALL_lib_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "owl.hpp"
#include "phasespace_headers.h"
#include "PhaseSpace_ALL_lib_types.h"

// Shared type includes
#include "multiword_types.h"

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
  real_T In1[7];                       // '<S3>/In1'
  real_T MATLABSystem[7];              // '<S1>/MATLAB System'
} B_PhaseSpace_ALL_lib_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  PhaseSpace_ALL_PhaseSpace_ALL_T obj; // '<S1>/MATLAB System'
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<Root>/To Workspace'

  int8_T EnabledSubsystem_SubsysRanBC; // '<S1>/Enabled Subsystem'
} DW_PhaseSpace_ALL_lib_T;

// Parameters (default storage)
struct P_PhaseSpace_ALL_lib_T_ {
  real_T PhaseSpaceDataStream_platformSe;
                              // Mask Parameter: PhaseSpaceDataStream_platformSe
                                 //  Referenced by: '<S1>/MATLAB System'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S3>/Out1'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S2>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_PhaseSpace_ALL_lib_T {
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

  extern P_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void PhaseSpace_ALL_lib_initialize(void);
  extern void PhaseSpace_ALL_lib_step(void);
  extern void PhaseSpace_ALL_lib_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_PhaseSpace_ALL_lib_T *const PhaseSpace_ALL_lib_M;

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
//  '<Root>' : 'PhaseSpace_ALL_lib'
//  '<S1>'   : 'PhaseSpace_ALL_lib/PhaseSpace Data Stream'
//  '<S2>'   : 'PhaseSpace_ALL_lib/PhaseSpace Data Stream/Compare To Zero'
//  '<S3>'   : 'PhaseSpace_ALL_lib/PhaseSpace Data Stream/Enabled Subsystem'

#endif                                 // RTW_HEADER_PhaseSpace_ALL_lib_h_
