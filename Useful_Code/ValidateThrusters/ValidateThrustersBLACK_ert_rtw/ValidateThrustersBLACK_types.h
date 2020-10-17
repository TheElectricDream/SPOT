/*
 * ValidateThrustersBLACK_types.h
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

#ifndef RTW_HEADER_ValidateThrustersBLACK_types_h_
#define RTW_HEADER_ValidateThrustersBLACK_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#ifndef typedef_raspi_internal_PWMBlock_Valid_T
#define typedef_raspi_internal_PWMBlock_Valid_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  uint32_T PinNumber;
} raspi_internal_PWMBlock_Valid_T;

#endif                               /*typedef_raspi_internal_PWMBlock_Valid_T*/

/* Parameters for system: '<S1>/If Action Subsystem' */
typedef struct P_IfActionSubsystem_ValidateT_T_ P_IfActionSubsystem_ValidateT_T;

/* Parameters (default storage) */
typedef struct P_ValidateThrustersBLACK_T_ P_ValidateThrustersBLACK_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_ValidateThrustersBLAC_T RT_MODEL_ValidateThrustersBLA_T;

#endif                          /* RTW_HEADER_ValidateThrustersBLACK_types_h_ */
