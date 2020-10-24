//
//  PhaseSpace_ALL_lib.cpp
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


#include "PhaseSpace_ALL_lib.h"
#include "PhaseSpace_ALL_lib_private.h"
#include "PhaseSpace_ALL_lib_dt.h"

// Block signals (default storage)
B_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_B;

// Block states (default storage)
DW_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_DW;

// Real-time model
RT_MODEL_PhaseSpace_ALL_lib_T PhaseSpace_ALL_lib_M_ =
  RT_MODEL_PhaseSpace_ALL_lib_T();
RT_MODEL_PhaseSpace_ALL_lib_T *const PhaseSpace_ALL_lib_M =
  &PhaseSpace_ALL_lib_M_;

// Forward declaration for local functions
static void PhaseSpace_A_SystemCore_release(const
  PhaseSpace_ALL_PhaseSpace_ALL_T *obj);
static void PhaseSpace_AL_SystemCore_delete(const
  PhaseSpace_ALL_PhaseSpace_ALL_T *obj);
static void matlabCodegenHandle_matlabCodeg(PhaseSpace_ALL_PhaseSpace_ALL_T *obj);
static void PhaseSpace_A_SystemCore_release(const
  PhaseSpace_ALL_PhaseSpace_ALL_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    terminate_phasespace();
  }
}

static void PhaseSpace_AL_SystemCore_delete(const
  PhaseSpace_ALL_PhaseSpace_ALL_T *obj)
{
  PhaseSpace_A_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(PhaseSpace_ALL_PhaseSpace_ALL_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    PhaseSpace_AL_SystemCore_delete(obj);
  }
}

// Model step function
void PhaseSpace_ALL_lib_step(void)
{
  real_T b_y1;
  real_T y2;
  real_T y4;
  real_T y5;
  real_T y7;
  boolean_T rtb_Compare[7];
  int32_T i;

  // Reset subsysRan breadcrumbs
  srClearBC(PhaseSpace_ALL_lib_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S1>/MATLAB System'
  if (PhaseSpace_ALL_lib_DW.obj.platformSelection !=
      PhaseSpace_ALL_lib_P.PhaseSpaceDataStream_platformSe) {
    PhaseSpace_ALL_lib_DW.obj.platformSelection =
      PhaseSpace_ALL_lib_P.PhaseSpaceDataStream_platformSe;
  }

  b_y1 = 0.0;
  y2 = 0.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[3] = 0.0;
  y4 = 0.0;
  y5 = 0.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[6] = 0.0;
  y7 = 0.0;
  stream_phasespace(&b_y1, &y2, &PhaseSpace_ALL_lib_B.MATLABSystem[3], &y4, &y5,
                    &PhaseSpace_ALL_lib_B.MATLABSystem[6], &y7,
                    PhaseSpace_ALL_lib_DW.obj.platformSelection);
  PhaseSpace_ALL_lib_B.MATLABSystem[0] = y7 / 10.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[1] = b_y1 / 1000.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[2] = y2 / 1000.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[4] = y4 / 1000.0;
  PhaseSpace_ALL_lib_B.MATLABSystem[5] = y5 / 1000.0;

  // End of MATLABSystem: '<S1>/MATLAB System'

  // RelationalOperator: '<S2>/Compare' incorporates:
  //   Constant: '<S2>/Constant'

  for (i = 0; i < 7; i++) {
    rtb_Compare[i] = (PhaseSpace_ALL_lib_B.MATLABSystem[i] !=
                      PhaseSpace_ALL_lib_P.Constant_Value);
  }

  // End of RelationalOperator: '<S2>/Compare'

  // Outputs for Enabled SubSystem: '<S1>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S3>/Enable'

  if (rtb_Compare[0] || rtb_Compare[1] || rtb_Compare[2] || rtb_Compare[3] ||
      rtb_Compare[4] || rtb_Compare[5] || rtb_Compare[6]) {
    // Inport: '<S3>/In1'
    for (i = 0; i < 7; i++) {
      PhaseSpace_ALL_lib_B.In1[i] = PhaseSpace_ALL_lib_B.MATLABSystem[i];
    }

    // End of Inport: '<S3>/In1'
    srUpdateBC(PhaseSpace_ALL_lib_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S1>/Enabled Subsystem'

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)PhaseSpace_ALL_lib_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(PhaseSpace_ALL_lib_M)!=-1) &&
        !((rtmGetTFinal(PhaseSpace_ALL_lib_M)-
           PhaseSpace_ALL_lib_M->Timing.taskTime0) >
          PhaseSpace_ALL_lib_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(PhaseSpace_ALL_lib_M, "Simulation finished");
    }

    if (rtmGetStopRequested(PhaseSpace_ALL_lib_M)) {
      rtmSetErrorStatus(PhaseSpace_ALL_lib_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  PhaseSpace_ALL_lib_M->Timing.taskTime0 =
    ((time_T)(++PhaseSpace_ALL_lib_M->Timing.clockTick0)) *
    PhaseSpace_ALL_lib_M->Timing.stepSize0;
}

// Model initialize function
void PhaseSpace_ALL_lib_initialize(void)
{
  // Registration code
  rtmSetTFinal(PhaseSpace_ALL_lib_M, -1);
  PhaseSpace_ALL_lib_M->Timing.stepSize0 = 0.01;

  // External mode info
  PhaseSpace_ALL_lib_M->Sizes.checksums[0] = (1569177814U);
  PhaseSpace_ALL_lib_M->Sizes.checksums[1] = (1744450316U);
  PhaseSpace_ALL_lib_M->Sizes.checksums[2] = (474967517U);
  PhaseSpace_ALL_lib_M->Sizes.checksums[3] = (4197869650U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    PhaseSpace_ALL_lib_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = (sysRanDType *)
      &PhaseSpace_ALL_lib_DW.EnabledSubsystem_SubsysRanBC;
    rteiSetModelMappingInfoPtr(PhaseSpace_ALL_lib_M->extModeInfo,
      &PhaseSpace_ALL_lib_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(PhaseSpace_ALL_lib_M->extModeInfo,
                        PhaseSpace_ALL_lib_M->Sizes.checksums);
    rteiSetTPtr(PhaseSpace_ALL_lib_M->extModeInfo, rtmGetTPtr
                (PhaseSpace_ALL_lib_M));
  }

  // block I/O
  (void) memset((static_cast<void *>(&PhaseSpace_ALL_lib_B)), 0,
                sizeof(B_PhaseSpace_ALL_lib_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&PhaseSpace_ALL_lib_DW), 0,
                sizeof(DW_PhaseSpace_ALL_lib_T));

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    PhaseSpace_ALL_lib_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    int32_T i;

    // SystemInitialize for Enabled SubSystem: '<S1>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S3>/Out1'
    for (i = 0; i < 7; i++) {
      PhaseSpace_ALL_lib_B.In1[i] = PhaseSpace_ALL_lib_P.Out1_Y0;
    }

    // End of SystemInitialize for Outport: '<S3>/Out1'
    // End of SystemInitialize for SubSystem: '<S1>/Enabled Subsystem'

    // Start for MATLABSystem: '<S1>/MATLAB System'
    PhaseSpace_ALL_lib_DW.obj.matlabCodegenIsDeleted = false;
    PhaseSpace_ALL_lib_DW.obj.platformSelection =
      PhaseSpace_ALL_lib_P.PhaseSpaceDataStream_platformSe;
    PhaseSpace_ALL_lib_DW.obj.isInitialized = 1;
    initialize_phasespace(PhaseSpace_ALL_lib_DW.obj.platformSelection);
    PhaseSpace_ALL_lib_DW.obj.isSetupComplete = true;
  }
}

// Model terminate function
void PhaseSpace_ALL_lib_terminate(void)
{
  // Terminate for MATLABSystem: '<S1>/MATLAB System'
  matlabCodegenHandle_matlabCodeg(&PhaseSpace_ALL_lib_DW.obj);
}
