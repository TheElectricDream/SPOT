/*
 * ValidateThrustersRED.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ValidateThrustersRED".
 *
 * Model version              : 1.16
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Sat Oct 17 12:20:35 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ValidateThrustersRED_h_
#define RTW_HEADER_ValidateThrustersRED_h_
#include <stddef.h>
#include <string.h>
#include <float.h>
#ifndef ValidateThrustersRED_COMMON_INCLUDES_
# define ValidateThrustersRED_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_pigs.h"
#endif                               /* ValidateThrustersRED_COMMON_INCLUDES_ */

#include "ValidateThrustersRED_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
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
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block states (default storage) for system '<S1>/If Action Subsystem' */
typedef struct {
  int8_T IfActionSubsystem_SubsysRanBC;/* '<S1>/If Action Subsystem' */
} DW_IfActionSubsystem_Validate_T;

/* Block signals (default storage) */
typedef struct {
  real_T Sum;                          /* '<Root>/Sum' */
  real_T RateTransition;               /* '<Root>/Rate Transition' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T RateTransition1;              /* '<Root>/Rate Transition1' */
  real_T RateTransition2;              /* '<Root>/Rate Transition2' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T RateTransition3;              /* '<Root>/Rate Transition3' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  real_T RateTransition4;              /* '<Root>/Rate Transition4' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T RateTransition5;              /* '<Root>/Rate Transition5' */
  real_T Sum5;                         /* '<Root>/Sum5' */
  real_T RateTransition6;              /* '<Root>/Rate Transition6' */
  real_T Sum6;                         /* '<Root>/Sum6' */
  real_T RateTransition7;              /* '<Root>/Rate Transition7' */
  real_T Sum7;                         /* '<Root>/Sum7' */
  real_T RateTransition8;              /* '<Root>/Rate Transition8' */
  real_T Merge[8];                     /* '<S3>/Merge' */
  real_T Merge_a[8];                   /* '<S2>/Merge' */
  real_T Merge_c[8];                   /* '<S1>/Merge' */
  real_T TmpSignalConversionAtToWorkspac[9];
} B_ValidateThrustersRED_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  raspi_internal_PWMBlock_Valid_T obj; /* '<S5>/BLACK T2' */
  raspi_internal_PWMBlock_Valid_T obj_i;/* '<S5>/RED T1 - BLACK T8' */
  raspi_internal_PWMBlock_Valid_T obj_m;/* '<S5>/RED T2 - BLACK T3' */
  raspi_internal_PWMBlock_Valid_T obj_f;/* '<S5>/RED T3' */
  raspi_internal_PWMBlock_Valid_T obj_fe;/* '<S5>/RED T4 - BLACK T5' */
  raspi_internal_PWMBlock_Valid_T obj_p;/* '<S5>/RED T5 - BLACK T4' */
  raspi_internal_PWMBlock_Valid_T obj_a;/* '<S5>/RED T6 - BLACK T7' */
  raspi_internal_PWMBlock_Valid_T obj_k;/* '<S5>/RED T7 - BLACK T6' */
  raspi_internal_PWMBlock_Valid_T obj_e;/* '<S5>/RED T8 - BLACK T1' */
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 /* '<S5>/To Workspace' */

  int8_T ThisIFblockdetermineswhetherorn;
  /* '<Root>/This IF block determines whether or not to run the RED sim//exp ' */
  int8_T ThisIFblockdetermineswhethero_d;
  /* '<Root>/This IF block determines whether or not to run the BLACK sim//exp' */
  int8_T ThisIFblockdetermineswhethero_i;
  /* '<Root>/This IF block determines whether or not to run the BLUE sim//exp' */
  int8_T ChangeREDBehavior_SubsysRanBC;/* '<Root>/Change RED Behavior' */
  int8_T If_ActiveSubsystem;           /* '<S3>/If' */
  int8_T ChangeBLUEBehavior_SubsysRanBC;/* '<Root>/Change BLUE Behavior' */
  int8_T If_ActiveSubsystem_f;         /* '<S2>/If' */
  int8_T ChangeBLACKBehavior_SubsysRanBC;/* '<Root>/Change BLACK Behavior' */
  int8_T If_ActiveSubsystem_m;         /* '<S1>/If' */
  boolean_T objisempty;                /* '<S5>/BLACK T2' */
  boolean_T objisempty_g;              /* '<S5>/RED T1 - BLACK T8' */
  boolean_T objisempty_p;              /* '<S5>/RED T2 - BLACK T3' */
  boolean_T objisempty_pn;             /* '<S5>/RED T3' */
  boolean_T objisempty_j;              /* '<S5>/RED T4 - BLACK T5' */
  boolean_T objisempty_m;              /* '<S5>/RED T5 - BLACK T4' */
  boolean_T objisempty_e;              /* '<S5>/RED T6 - BLACK T7' */
  boolean_T objisempty_n;              /* '<S5>/RED T7 - BLACK T6' */
  boolean_T objisempty_b;              /* '<S5>/RED T8 - BLACK T1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_o;/* '<S3>/If Action Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7_j;/* '<S3>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6_hk;/* '<S3>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5_g;/* '<S3>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_fu;/* '<S3>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3_i;/* '<S3>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2_i;/* '<S3>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1_n;/* '<S3>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem_m;/* '<S3>/If Action Subsystem' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_fw;/* '<S2>/If Action Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7_p;/* '<S2>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6_h;/* '<S2>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5_b;/* '<S2>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_f;/* '<S2>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3_h;/* '<S2>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2_d;/* '<S2>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1_p;/* '<S2>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem_d;/* '<S2>/If Action Subsystem' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_l;/* '<S1>/If Action Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7;/* '<S1>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6;/* '<S1>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5;/* '<S1>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4;/* '<S1>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3;/* '<S1>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2;/* '<S1>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1;/* '<S1>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem;/* '<S1>/If Action Subsystem' */
} DW_ValidateThrustersRED_T;

/* Parameters for system: '<S1>/If Action Subsystem' */
struct P_IfActionSubsystem_ValidateT_T_ {
  real_T Constant_Value[8];            /* Expression: [1;0;0;0;0;0;0;0]
                                        * Referenced by: '<S6>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_ValidateThrustersRED_T_ {
  real_T Thruster1_OnTime;             /* Variable: Thruster1_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant'
                                        *   '<S2>/Constant'
                                        *   '<S3>/Constant'
                                        */
  real_T Thruster2_OnTime;             /* Variable: Thruster2_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant1'
                                        *   '<S2>/Constant1'
                                        *   '<S3>/Constant1'
                                        */
  real_T Thruster3_OnTime;             /* Variable: Thruster3_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant2'
                                        *   '<S2>/Constant2'
                                        *   '<S3>/Constant2'
                                        */
  real_T Thruster4_OnTime;             /* Variable: Thruster4_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant3'
                                        *   '<S2>/Constant3'
                                        *   '<S3>/Constant3'
                                        */
  real_T Thruster5_OnTime;             /* Variable: Thruster5_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant4'
                                        *   '<S2>/Constant4'
                                        *   '<S3>/Constant4'
                                        */
  real_T Thruster6_OnTime;             /* Variable: Thruster6_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant5'
                                        *   '<S2>/Constant5'
                                        *   '<S3>/Constant5'
                                        */
  real_T Thruster7_OnTime;             /* Variable: Thruster7_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant6'
                                        *   '<S2>/Constant6'
                                        *   '<S3>/Constant6'
                                        */
  real_T Thruster8_OnTime;             /* Variable: Thruster8_OnTime
                                        * Referenced by:
                                        *   '<S1>/Constant7'
                                        *   '<S2>/Constant7'
                                        *   '<S3>/Constant7'
                                        */
  real_T ThrusterOff_Time;             /* Variable: ThrusterOff_Time
                                        * Referenced by:
                                        *   '<S1>/Constant8'
                                        *   '<S2>/Constant8'
                                        *   '<S3>/Constant8'
                                        */
  real_T Merge_InitialOutput;         /* Computed Parameter: Merge_InitialOutput
                                       * Referenced by: '<S1>/Merge'
                                       */
  real_T Merge_InitialOutput_j;     /* Computed Parameter: Merge_InitialOutput_j
                                     * Referenced by: '<S2>/Merge'
                                     */
  real_T Merge_InitialOutput_g;     /* Computed Parameter: Merge_InitialOutput_g
                                     * Referenced by: '<S3>/Merge'
                                     */
  real_T Constant8_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S4>/Constant'
                                        */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_o;/* '<S3>/If Action Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem7_j;/* '<S3>/If Action Subsystem7' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem6_hk;/* '<S3>/If Action Subsystem6' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem5_g;/* '<S3>/If Action Subsystem5' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_fu;/* '<S3>/If Action  Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem3_i;/* '<S3>/If Action Subsystem3' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem2_i;/* '<S3>/If Action Subsystem2' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem1_n;/* '<S3>/If Action Subsystem1' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem_m;/* '<S3>/If Action Subsystem' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_fw;/* '<S2>/If Action Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem7_p;/* '<S2>/If Action Subsystem7' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem6_h;/* '<S2>/If Action Subsystem6' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem5_b;/* '<S2>/If Action Subsystem5' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_f;/* '<S2>/If Action  Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem3_h;/* '<S2>/If Action Subsystem3' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem2_d;/* '<S2>/If Action Subsystem2' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem1_p;/* '<S2>/If Action Subsystem1' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem_d;/* '<S2>/If Action Subsystem' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_l;/* '<S1>/If Action Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem7;/* '<S1>/If Action Subsystem7' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem6;/* '<S1>/If Action Subsystem6' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem5;/* '<S1>/If Action Subsystem5' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4;/* '<S1>/If Action  Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem3;/* '<S1>/If Action Subsystem3' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem2;/* '<S1>/If Action Subsystem2' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem1;/* '<S1>/If Action Subsystem1' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem;/* '<S1>/If Action Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ValidateThrustersRED_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_ValidateThrustersRED_T ValidateThrustersRED_P;

/* Block signals (default storage) */
extern B_ValidateThrustersRED_T ValidateThrustersRED_B;

/* Block states (default storage) */
extern DW_ValidateThrustersRED_T ValidateThrustersRED_DW;

/* Model entry point functions */
extern void ValidateThrustersRED_initialize(void);
extern void ValidateThrustersRED_step(void);
extern void ValidateThrustersRED_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ValidateThrustersRED_T *const ValidateThrustersRED_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ValidateThrustersRED'
 * '<S1>'   : 'ValidateThrustersRED/Change BLACK Behavior'
 * '<S2>'   : 'ValidateThrustersRED/Change BLUE Behavior'
 * '<S3>'   : 'ValidateThrustersRED/Change RED Behavior'
 * '<S4>'   : 'ValidateThrustersRED/Is this a  simulation?'
 * '<S5>'   : 'ValidateThrustersRED/Send Commands to PWM Blocks'
 * '<S6>'   : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem'
 * '<S7>'   : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem1'
 * '<S8>'   : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem2'
 * '<S9>'   : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem3'
 * '<S10>'  : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem4'
 * '<S11>'  : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem5'
 * '<S12>'  : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem6'
 * '<S13>'  : 'ValidateThrustersRED/Change BLACK Behavior/If Action Subsystem7'
 * '<S14>'  : 'ValidateThrustersRED/Change BLACK Behavior/If Action  Subsystem4'
 * '<S15>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem'
 * '<S16>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem1'
 * '<S17>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem2'
 * '<S18>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem3'
 * '<S19>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem4'
 * '<S20>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem5'
 * '<S21>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem6'
 * '<S22>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action Subsystem7'
 * '<S23>'  : 'ValidateThrustersRED/Change BLUE Behavior/If Action  Subsystem4'
 * '<S24>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem'
 * '<S25>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem1'
 * '<S26>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem2'
 * '<S27>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem3'
 * '<S28>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem4'
 * '<S29>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem5'
 * '<S30>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem6'
 * '<S31>'  : 'ValidateThrustersRED/Change RED Behavior/If Action Subsystem7'
 * '<S32>'  : 'ValidateThrustersRED/Change RED Behavior/If Action  Subsystem4'
 */
#endif                                 /* RTW_HEADER_ValidateThrustersRED_h_ */
