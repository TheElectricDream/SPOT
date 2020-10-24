//
//  PhaseSpace_ALL_lib_dt.h
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


#include "ext_types.h"

// data type size table
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
  sizeof(PhaseSpace_ALL_PhaseSpace_ALL_T)
};

// data type name table
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
  "PhaseSpace_ALL_PhaseSpace_ALL_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&PhaseSpace_ALL_lib_B.In1[0]), 0, 0, 7 }
  ,

  { (char_T *)(&PhaseSpace_ALL_lib_DW.obj), 14, 0, 1 },

  { (char_T *)(&PhaseSpace_ALL_lib_DW.ToWorkspace_PWORK.LoggedData), 11, 0, 1 },

  { (char_T *)(&PhaseSpace_ALL_lib_DW.EnabledSubsystem_SubsysRanBC), 2, 0, 1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  4U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&PhaseSpace_ALL_lib_P.PhaseSpaceDataStream_platformSe), 0, 0, 3 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  1U,
  rtPTransitions
};

// [EOF] PhaseSpace_ALL_lib_dt.h
