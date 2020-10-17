/*
 * ValidateThrustersBLACK.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ValidateThrustersBLACK".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Fri Mar 13 15:10:28 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ValidateThrustersBLACK_h_
#define RTW_HEADER_ValidateThrustersBLACK_h_
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef ValidateThrustersBLACK_COMMON_INCLUDES_
# define ValidateThrustersBLACK_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_pigs.h"
#endif                             /* ValidateThrustersBLACK_COMMON_INCLUDES_ */

#include "ValidateThrustersBLACK_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
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
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T Sum3;                         /* '<Root>/Sum3' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T Sum5;                         /* '<Root>/Sum5' */
  real_T Sum6;                         /* '<Root>/Sum6' */
  real_T Sum7;                         /* '<Root>/Sum7' */
  real_T Merge[8];                     /* '<S3>/Merge' */
  real_T Merge_a[8];                   /* '<S2>/Merge' */
  real_T Merge_c[8];                   /* '<S1>/Merge' */
} B_ValidateThrustersBLACK_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  raspi_internal_PWMBlock_Valid_T obj; /* '<S5>/RED T1 - BLACK T8' */
  raspi_internal_PWMBlock_Valid_T obj_m;/* '<S5>/RED T2 - BLACK T3' */
  raspi_internal_PWMBlock_Valid_T obj_f;/* '<S5>/RED T3' */
  raspi_internal_PWMBlock_Valid_T obj_fe;/* '<S5>/RED T4 - BLACK T5' */
  raspi_internal_PWMBlock_Valid_T obj_p;/* '<S5>/RED T5 - BLACK T4' */
  raspi_internal_PWMBlock_Valid_T obj_a;/* '<S5>/RED T6 - BLACK T7' */
  raspi_internal_PWMBlock_Valid_T obj_k;/* '<S5>/RED T7 - BLACK T6' */
  raspi_internal_PWMBlock_Valid_T obj_e;/* '<S5>/RED T8 - BLACK T1' */
  raspi_internal_PWMBlock_Valid_T obj_i;/* '<S5>/BLACK T2' */
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
  boolean_T objisempty;                /* '<S5>/RED T1 - BLACK T8' */
  boolean_T objisempty_p;              /* '<S5>/RED T2 - BLACK T3' */
  boolean_T objisempty_pn;             /* '<S5>/RED T3' */
  boolean_T objisempty_j;              /* '<S5>/RED T4 - BLACK T5' */
  boolean_T objisempty_m;              /* '<S5>/RED T5 - BLACK T4' */
  boolean_T objisempty_e;              /* '<S5>/RED T6 - BLACK T7' */
  boolean_T objisempty_n;              /* '<S5>/RED T7 - BLACK T6' */
  boolean_T objisempty_b;              /* '<S5>/RED T8 - BLACK T1' */
  boolean_T objisempty_ew;             /* '<S5>/BLACK T2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7_j;/* '<S3>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6_hk;/* '<S3>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5_g;/* '<S3>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_fu;/* '<S3>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3_i;/* '<S3>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2_i;/* '<S3>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1_n;/* '<S3>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem_m;/* '<S3>/If Action Subsystem' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7_p;/* '<S2>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6_h;/* '<S2>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5_b;/* '<S2>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4_f;/* '<S2>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3_h;/* '<S2>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2_d;/* '<S2>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1_p;/* '<S2>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem_d;/* '<S2>/If Action Subsystem' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem7;/* '<S1>/If Action Subsystem7' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem6;/* '<S1>/If Action Subsystem6' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem5;/* '<S1>/If Action Subsystem5' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem4;/* '<S1>/If Action  Subsystem4' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem3;/* '<S1>/If Action Subsystem3' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem2;/* '<S1>/If Action Subsystem2' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem1;/* '<S1>/If Action Subsystem1' */
  DW_IfActionSubsystem_Validate_T IfActionSubsystem;/* '<S1>/If Action Subsystem' */
} DW_ValidateThrustersBLACK_T;

/* Parameters for system: '<S1>/If Action Subsystem' */
struct P_IfActionSubsystem_ValidateT_T_ {
  real_T Constant_Value[8];            /* Expression: [1;0;0;0;0;0;0;0]
                                        * Referenced by: '<S6>/Constant'
                                        */
};

/* Parameters (default storage) */
struct P_ValidateThrustersBLACK_T_ {
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
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S4>/Constant'
                                        */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem7_j;/* '<S3>/If Action Subsystem7' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem6_hk;/* '<S3>/If Action Subsystem6' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem5_g;/* '<S3>/If Action Subsystem5' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_fu;/* '<S3>/If Action  Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem3_i;/* '<S3>/If Action Subsystem3' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem2_i;/* '<S3>/If Action Subsystem2' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem1_n;/* '<S3>/If Action Subsystem1' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem_m;/* '<S3>/If Action Subsystem' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem7_p;/* '<S2>/If Action Subsystem7' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem6_h;/* '<S2>/If Action Subsystem6' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem5_b;/* '<S2>/If Action Subsystem5' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem4_f;/* '<S2>/If Action  Subsystem4' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem3_h;/* '<S2>/If Action Subsystem3' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem2_d;/* '<S2>/If Action Subsystem2' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem1_p;/* '<S2>/If Action Subsystem1' */
  P_IfActionSubsystem_ValidateT_T IfActionSubsystem_d;/* '<S2>/If Action Subsystem' */
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
struct tag_RTM_ValidateThrustersBLAC_T {
  const char_T *errorStatus;
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
extern P_ValidateThrustersBLACK_T ValidateThrustersBLACK_P;

/* Block signals (default storage) */
extern B_ValidateThrustersBLACK_T ValidateThrustersBLACK_B;

/* Block states (default storage) */
extern DW_ValidateThrustersBLACK_T ValidateThrustersBLACK_DW;

/* Model entry point functions */
extern void ValidateThrustersBLACK_initialize(void);
extern void ValidateThrustersBLACK_step(void);
extern void ValidateThrustersBLACK_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ValidateThrustersBLA_T *const ValidateThrustersBLACK_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition2' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition3' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition4' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition5' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition6' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition7' : Eliminated since input and output rates are identical
 * Block '<Root>/Rate Transition8' : Eliminated since input and output rates are identical
 */

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
 * '<Root>' : 'ValidateThrustersBLACK'
 * '<S1>'   : 'ValidateThrustersBLACK/Change BLACK Behavior'
 * '<S2>'   : 'ValidateThrustersBLACK/Change BLUE Behavior'
 * '<S3>'   : 'ValidateThrustersBLACK/Change RED Behavior'
 * '<S4>'   : 'ValidateThrustersBLACK/Is this a  simulation?'
 * '<S5>'   : 'ValidateThrustersBLACK/Send Commands to PWM Blocks'
 * '<S6>'   : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem'
 * '<S7>'   : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem1'
 * '<S8>'   : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem2'
 * '<S9>'   : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem3'
 * '<S10>'  : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem5'
 * '<S11>'  : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem6'
 * '<S12>'  : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action Subsystem7'
 * '<S13>'  : 'ValidateThrustersBLACK/Change BLACK Behavior/If Action  Subsystem4'
 * '<S14>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem'
 * '<S15>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem1'
 * '<S16>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem2'
 * '<S17>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem3'
 * '<S18>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem5'
 * '<S19>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem6'
 * '<S20>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action Subsystem7'
 * '<S21>'  : 'ValidateThrustersBLACK/Change BLUE Behavior/If Action  Subsystem4'
 * '<S22>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem'
 * '<S23>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem1'
 * '<S24>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem2'
 * '<S25>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem3'
 * '<S26>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem5'
 * '<S27>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem6'
 * '<S28>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action Subsystem7'
 * '<S29>'  : 'ValidateThrustersBLACK/Change RED Behavior/If Action  Subsystem4'
 */
#endif                                /* RTW_HEADER_ValidateThrustersBLACK_h_ */
