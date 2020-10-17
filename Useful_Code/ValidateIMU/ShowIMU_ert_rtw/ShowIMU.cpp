//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU.cpp
//
// Code generated for Simulink model 'ShowIMU'.
//
// Model version                  : 1.17
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Wed Jul 22 16:28:40 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ShowIMU.h"
#include "ShowIMU_private.h"

// Block signals (default storage)
B_ShowIMU_T ShowIMU_B;

// Block states (default storage)
DW_ShowIMU_T ShowIMU_DW;

// Real-time model
RT_MODEL_ShowIMU_T ShowIMU_M_ = RT_MODEL_ShowIMU_T();
RT_MODEL_ShowIMU_T *const ShowIMU_M = &ShowIMU_M_;

// Forward declaration for local functions
static void ShowIMU_SystemCore_release(const raspi_internal_lsm9ds1Block_S_T
  *obj);
static void ShowIMU_SystemCore_delete(const raspi_internal_lsm9ds1Block_S_T *obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_lsm9ds1Block_S_T *obj);
static void ShowIMU_SystemCore_release_ib(j_codertarget_raspi_internal__T *obj);
static void ShowIMU_SystemCore_delete_ib(j_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabCo_ib(j_codertarget_raspi_internal__T *obj);
static void ShowIMU_SystemCore_release_i(i_codertarget_raspi_internal__T *obj);
static void ShowIMU_SystemCore_delete_i(i_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabCod_i(i_codertarget_raspi_internal__T *obj);
static raspi_internal_lsm9ds1Block_S_T *ShowI_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_S_T *obj);
static void ShowIMU_SystemCore_setup(raspi_internal_lsm9ds1Block_S_T *obj);
static void rate_monotonic_scheduler(void);

//
// Set which subrates need to run this base step (base rate always runs).
// This function must be called prior to calling the model step function
// in order to "remember" which rates need to run this base step.  The
// buffering of events allows for overlapping preemption.
//
void ShowIMU_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  // Task runs when its counter is zero, computed via rtmStepTask macro
  eventFlags[1] = ((boolean_T)rtmStepTask(ShowIMU_M, 1));
}

//
//   This function updates active task flag for each subrate
// and rate transition flags for tasks that exchange data.
// The function assumes rate-monotonic multitasking scheduler.
// The function must be called at model base rate so that
// the generated code self-manages all its subrates and rate
// transition flags.
//
static void rate_monotonic_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (ShowIMU_M->Timing.TaskCounters.TID[1])++;
  if ((ShowIMU_M->Timing.TaskCounters.TID[1]) > 9) {// Sample time: [0.1s, 0.0s] 
    ShowIMU_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void ShowIMU_SystemCore_release(const raspi_internal_lsm9ds1Block_S_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj_A_G.MW_I2C_HANDLE);
    MW_I2C_Close(obj->i2cobj_MAG.MW_I2C_HANDLE);
  }
}

static void ShowIMU_SystemCore_delete(const raspi_internal_lsm9ds1Block_S_T *obj)
{
  ShowIMU_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_lsm9ds1Block_S_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_SystemCore_delete(obj);
  }
}

static void ShowIMU_SystemCore_release_ib(j_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void ShowIMU_SystemCore_delete_ib(j_codertarget_raspi_internal__T *obj)
{
  ShowIMU_SystemCore_release_ib(obj);
}

static void matlabCodegenHandle_matlabCo_ib(j_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_SystemCore_delete_ib(obj);
  }
}

static void ShowIMU_SystemCore_release_i(i_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void ShowIMU_SystemCore_delete_i(i_codertarget_raspi_internal__T *obj)
{
  ShowIMU_SystemCore_release_i(obj);
}

static void matlabCodegenHandle_matlabCod_i(i_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_SystemCore_delete_i(obj);
  }
}

static raspi_internal_lsm9ds1Block_S_T *ShowI_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_S_T *obj)
{
  raspi_internal_lsm9ds1Block_S_T *b_obj;
  int32_T i;
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  for (i = 0; i < 9; i++) {
    obj->CalGyroA[i] = tmp[i];
  }

  obj->CalGyroB[0] = 0.0;
  obj->CalGyroB[1] = 0.0;
  obj->CalGyroB[2] = 0.0;
  for (i = 0; i < 9; i++) {
    obj->CalAccelA[i] = tmp[i];
  }

  obj->CalAccelB[0] = 0.0;
  obj->CalAccelB[1] = 0.0;
  obj->CalAccelB[2] = 0.0;
  for (i = 0; i < 9; i++) {
    obj->CalMagA[i] = tmp[i];
  }

  obj->CalMagB[0] = 0.0;
  obj->CalMagB[1] = 0.0;
  obj->CalMagB[2] = 0.0;
  obj->isInitialized = 0;
  b_obj = obj;
  obj->i2cobj_A_G.isInitialized = 0;
  obj->i2cobj_A_G.matlabCodegenIsDeleted = false;
  obj->i2cobj_MAG.isInitialized = 0;
  obj->i2cobj_MAG.matlabCodegenIsDeleted = false;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void ShowIMU_SystemCore_setup(raspi_internal_lsm9ds1Block_S_T *obj)
{
  MW_I2C_Mode_Type ModeType;
  uint32_T i2cname;
  uint8_T b_SwappedDataBytes[2];
  uint8_T CastedData;
  uint8_T SwappedDataBytes[2];
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->i2cobj_A_G.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj_A_G.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj_A_G.MW_I2C_HANDLE, obj->i2cobj_A_G.BusSpeed);
  CastedData = 96U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 16U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 17U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 18U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 30U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 19U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 31U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 103U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 4U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->i2cobj_MAG.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj_MAG.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj_MAG.MW_I2C_HANDLE, obj->i2cobj_MAG.BusSpeed);
  CastedData = 24U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 35U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  std::memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)
              ((size_t)1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 36U;
  std::memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0],
              (uint32_T)((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  obj->isSetupComplete = true;
}

// Model step function for TID0
void ShowIMU_step0(void)               // Sample time: [0.01s, 0.0s]
{
  {                                    // Sample time: [0.01s, 0.0s]
    rate_monotonic_scheduler();
  }

  // External mode
  rtExtModeUploadCheckTrigger(2);
  rtExtModeUpload(0, (real_T)ShowIMU_M->Timing.taskTime0);

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(ShowIMU_M)!=-1) &&
        !((rtmGetTFinal(ShowIMU_M)-ShowIMU_M->Timing.taskTime0) >
          ShowIMU_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ShowIMU_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ShowIMU_M)) {
      rtmSetErrorStatus(ShowIMU_M, "Simulation finished");
    }
  }

  // Update absolute time
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ShowIMU_M->Timing.taskTime0 =
    ((time_T)(++ShowIMU_M->Timing.clockTick0)) * ShowIMU_M->Timing.stepSize0;
}

// Model step function for TID1
void ShowIMU_step1(void)               // Sample time: [0.1s, 0.0s]
{
  int16_T b_RegisterValue[3];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];
  int32_T i;
  real_T *b;

  // MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  status = 24U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw,
                      6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_DW.obj.CalGyroA[0];
  for (i = 0; i < 3; i++) {
    ShowIMU_B.LSM9DS1IMUSensor_o1[i] = ((b[3 * i + 1] * static_cast<real_T>
      (b_RegisterValue[1]) + b[3 * i] * static_cast<real_T>(b_RegisterValue[0]))
      + b[3 * i + 2] * static_cast<real_T>(b_RegisterValue[2])) +
      ShowIMU_DW.obj.CalGyroB[i];
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U, output_raw,
                      6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U, output_raw,
                      6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  }

  ShowIMU_B.LSM9DS1IMUSensor_o1[0] = ShowIMU_B.LSM9DS1IMUSensor_o1[0] * 245.0 /
    32768.0;
  ShowIMU_B.LSM9DS1IMUSensor_o1[1] = ShowIMU_B.LSM9DS1IMUSensor_o1[1] * 245.0 /
    32768.0;
  ShowIMU_B.LSM9DS1IMUSensor_o1[2] = ShowIMU_B.LSM9DS1IMUSensor_o1[2] * 245.0 /
    32768.0;

  // End of MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  rtExtModeUpload(1, (real_T)((ShowIMU_M->Timing.clockTick1) * 0.1));

  // Update absolute time
  // The "clockTick1" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.1, which is the step size
  //  of the task. Size of "clockTick1" ensures timer will not overflow during the
  //  application lifespan selected.

  ShowIMU_M->Timing.clockTick1++;
}

// Model step wrapper function for compatibility with a static main program
void ShowIMU_step(int_T tid)
{
  switch (tid) {
   case 0 :
    ShowIMU_step0();
    break;

   case 1 :
    ShowIMU_step1();
    break;

   default :
    break;
  }
}

// Model initialize function
void ShowIMU_initialize(void)
{
  // Registration code
  rtmSetTFinal(ShowIMU_M, -1);
  ShowIMU_M->Timing.stepSize0 = 0.01;

  // External mode info
  ShowIMU_M->Sizes.checksums[0] = (1769837268U);
  ShowIMU_M->Sizes.checksums[1] = (217649293U);
  ShowIMU_M->Sizes.checksums[2] = (3497040033U);
  ShowIMU_M->Sizes.checksums[3] = (2600440739U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    ShowIMU_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ShowIMU_M->extModeInfo,
      &ShowIMU_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ShowIMU_M->extModeInfo, ShowIMU_M->Sizes.checksums);
    rteiSetTPtr(ShowIMU_M->extModeInfo, rtmGetTPtr(ShowIMU_M));
  }

  // Start for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  ShowIMU_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
  ShowIMU_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
  ShowIMU_DW.obj.matlabCodegenIsDeleted = true;
  ShowI_lsm9ds1Block_lsm9ds1Block(&ShowIMU_DW.obj);
  ShowIMU_SystemCore_setup(&ShowIMU_DW.obj);
}

// Model terminate function
void ShowIMU_terminate(void)
{
  // Terminate for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  matlabCodegenHandle_matlabCodeg(&ShowIMU_DW.obj);
  matlabCodegenHandle_matlabCo_ib(&ShowIMU_DW.obj.i2cobj_MAG);
  matlabCodegenHandle_matlabCod_i(&ShowIMU_DW.obj.i2cobj_A_G);
}

//
// File trailer for generated code.
//
// [EOF]
//
