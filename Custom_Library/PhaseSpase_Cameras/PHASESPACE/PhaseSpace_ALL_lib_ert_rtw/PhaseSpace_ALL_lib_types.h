//
//  PhaseSpace_ALL_lib_types.h
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


#ifndef RTW_HEADER_PhaseSpace_ALL_lib_types_h_
#define RTW_HEADER_PhaseSpace_ALL_lib_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

// Model Code Variants
#ifndef struct_tag_U21I3kBytwIWPxbb810omD
#define struct_tag_U21I3kBytwIWPxbb810omD

struct tag_U21I3kBytwIWPxbb810omD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T platformSelection;
};

#endif                                 //struct_tag_U21I3kBytwIWPxbb810omD

#ifndef typedef_PhaseSpace_ALL_PhaseSpace_ALL_T
#define typedef_PhaseSpace_ALL_PhaseSpace_ALL_T

typedef struct tag_U21I3kBytwIWPxbb810omD PhaseSpace_ALL_PhaseSpace_ALL_T;

#endif                                 //typedef_PhaseSpace_ALL_PhaseSpace_ALL_T

// Parameters (default storage)
typedef struct P_PhaseSpace_ALL_lib_T_ P_PhaseSpace_ALL_lib_T;

// Forward declaration for rtModel
typedef struct tag_RTM_PhaseSpace_ALL_lib_T RT_MODEL_PhaseSpace_ALL_lib_T;

#endif                                // RTW_HEADER_PhaseSpace_ALL_lib_types_h_
