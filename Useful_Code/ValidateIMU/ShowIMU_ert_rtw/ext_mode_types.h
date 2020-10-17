//
//  ext_mode_types.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "ShowIMU".
//
//  Model version              : 1.17
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Wed Jul 22 16:28:40 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Emulation hardware selection:
//     Differs from embedded hardware (MATLAB Host)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#ifndef EXT_MODE_TYPES_H
#define EXT_MODE_TYPES_H
#include "rtwtypes.h"

//* External Mode Event ID
typedef uint16_T extmodeEventId_T;

//* External Mode real time, measured using the target's clock
typedef uint32_T extmodeRealTime_T;

//* External Mode simulation time
typedef time_T extmodeSimulationTime_T;

//* Run the simulation forever (infinite simulation end time)
#define EXTMODE_SIMULATION_RUN_FOREVER ((extmodeSimulationTime_T) -1)

//* External Mode Base rate event id
#define EXTMODE_BASE_RATE_EVENT_ID     0

//* External Mode Max Event Id
#define EXTMODE_MAX_EVENT_ID           0xFF
#endif                                 // EXT_MODE_TYPES_H

// [EOF] ext_mode_types.h
