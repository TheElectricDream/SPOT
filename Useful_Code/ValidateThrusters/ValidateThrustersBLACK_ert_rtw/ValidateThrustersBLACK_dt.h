/*
 * ValidateThrustersBLACK_dt.h
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

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(raspi_internal_PWMBlock_Valid_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "raspi_internal_PWMBlock_Valid_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&ValidateThrustersBLACK_B.Sum), 0, 0, 32 }
  ,

  { (char_T *)(&ValidateThrustersBLACK_DW.obj), 14, 0, 9 },

  { (char_T *)(&ValidateThrustersBLACK_DW.ThisIFblockdetermineswhetherorn), 2, 0,
    9 },

  { (char_T *)(&ValidateThrustersBLACK_DW.objisempty), 8, 0, 9 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem7_j.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem6_hk.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem5_g.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem4_fu.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem3_i.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem2_i.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem1_n.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem_m.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem7_p.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem6_h.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem5_b.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem4_f.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem3_h.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem2_d.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem1_p.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem_d.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem7.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem6.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)
    (&ValidateThrustersBLACK_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  28U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&ValidateThrustersBLACK_P.Thruster1_OnTime), 0, 0, 13 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem7_j.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem6_hk.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem5_g.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem4_fu.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem3_i.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem2_i.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem1_n.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem_m.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem7_p.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem6_h.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem5_b.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem4_f.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem3_h.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem2_d.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem1_p.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem_d.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem7.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem6.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem5.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem4.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem3.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem2.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem1.Constant_Value[0]),
    0, 0, 8 },

  { (char_T *)(&ValidateThrustersBLACK_P.IfActionSubsystem.Constant_Value[0]), 0,
    0, 8 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  25U,
  rtPTransitions
};

/* [EOF] ValidateThrustersBLACK_dt.h */
