//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED.cpp
//
// Code generated for Simulink model 'ShowIMU_RED'.
//
// Model version                  : 1.29
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Oct 17 10:57:55 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ShowIMU_RED.h"
#include "ShowIMU_RED_private.h"

// Block signals (default storage)
B_ShowIMU_RED_T ShowIMU_RED_B;

// Block states (default storage)
DW_ShowIMU_RED_T ShowIMU_RED_DW;

// Real-time model
RT_MODEL_ShowIMU_RED_T ShowIMU_RED_M_ = RT_MODEL_ShowIMU_RED_T();
RT_MODEL_ShowIMU_RED_T *const ShowIMU_RED_M = &ShowIMU_RED_M_;

// Forward declaration for local functions
static void ShowIMU_RED_SystemCore_release(const raspi_internal_lsm9ds1Block_S_T
  *obj);
static void ShowIMU_RED_SystemCore_delete(const raspi_internal_lsm9ds1Block_S_T *
  obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_lsm9ds1Block_S_T *obj);
static void ShowIMU_R_SystemCore_release_dj(j_codertarget_raspi_internal__T *obj);
static void ShowIMU_RE_SystemCore_delete_dj(j_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabCo_dj(j_codertarget_raspi_internal__T *obj);
static void ShowIMU_RE_SystemCore_release_d(i_codertarget_raspi_internal__T *obj);
static void ShowIMU_RED_SystemCore_delete_d(i_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabCod_d(i_codertarget_raspi_internal__T *obj);
static raspi_internal_lsm9ds1Block_S_T *ShowI_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_S_T *obj);
static void ShowIMU_RED_SystemCore_setup(raspi_internal_lsm9ds1Block_S_T *obj);
static void ShowIMU_RED_SystemCore_release(const raspi_internal_lsm9ds1Block_S_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj_A_G.MW_I2C_HANDLE);
    MW_I2C_Close(obj->i2cobj_MAG.MW_I2C_HANDLE);
  }
}

static void ShowIMU_RED_SystemCore_delete(const raspi_internal_lsm9ds1Block_S_T *
  obj)
{
  ShowIMU_RED_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_lsm9ds1Block_S_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_RED_SystemCore_delete(obj);
  }
}

static void ShowIMU_R_SystemCore_release_dj(j_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void ShowIMU_RE_SystemCore_delete_dj(j_codertarget_raspi_internal__T *obj)
{
  ShowIMU_R_SystemCore_release_dj(obj);
}

static void matlabCodegenHandle_matlabCo_dj(j_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_RE_SystemCore_delete_dj(obj);
  }
}

static void ShowIMU_RE_SystemCore_release_d(i_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void ShowIMU_RED_SystemCore_delete_d(i_codertarget_raspi_internal__T *obj)
{
  ShowIMU_RE_SystemCore_release_d(obj);
}

static void matlabCodegenHandle_matlabCod_d(i_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ShowIMU_RED_SystemCore_delete_d(obj);
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

static void ShowIMU_RED_SystemCore_setup(raspi_internal_lsm9ds1Block_S_T *obj)
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
  CastedData = 104U;
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

// Model step function
void ShowIMU_RED_step(void)
{
  char_T *sErr;
  int16_T b_RegisterValue[3];
  real_T a[3];
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T output_raw[6];
  int32_T i;
  real_T *b;

  // MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  status = 24U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      output_raw, 6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj.CalGyroA[0];
  for (i = 0; i < 3; i++) {
    ShowIMU_RED_B.a[i] = ((b[3 * i + 1] * static_cast<real_T>(b_RegisterValue[1])
      + b[3 * i] * static_cast<real_T>(b_RegisterValue[0])) + b[3 * i + 2] *
                          static_cast<real_T>(b_RegisterValue[2])) +
      ShowIMU_RED_DW.obj.CalGyroB[i];
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      output_raw, 6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj.CalAccelA[0];
  for (i = 0; i < 3; i++) {
    ShowIMU_RED_B.a_m[i] = ((b[3 * i + 1] * static_cast<real_T>(b_RegisterValue
      [1]) + b[3 * i] * static_cast<real_T>(b_RegisterValue[0])) + b[3 * i + 2] *
      static_cast<real_T>(b_RegisterValue[2])) + ShowIMU_RED_DW.obj.CalAccelB[i];
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj.i2cobj_MAG.MW_I2C_HANDLE, 28U,
                      output_raw, 6U, false, true);
    std::memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
                ((size_t)3 * sizeof(int16_T)));
  } else {
    b_RegisterValue[0] = 0;
    b_RegisterValue[1] = 0;
    b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj.CalMagA[0];
  for (i = 0; i < 3; i++) {
    a[i] = ((b[3 * i + 1] * static_cast<real_T>(b_RegisterValue[1]) + b[3 * i] *
             static_cast<real_T>(b_RegisterValue[0])) + b[3 * i + 2] *
            static_cast<real_T>(b_RegisterValue[2])) +
      ShowIMU_RED_DW.obj.CalMagB[i];
  }

  // SignalConversion generated from: '<Root>/UDP Send' incorporates:
  //   MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'

  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[0] = ShowIMU_RED_B.a[0] * 500.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[1] = ShowIMU_RED_B.a[1] * 500.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[2] = ShowIMU_RED_B.a[2] * 500.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[3] = ShowIMU_RED_B.a_m[0] * 2.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[4] = ShowIMU_RED_B.a_m[1] * 2.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[5] = ShowIMU_RED_B.a_m[2] * 2.0 /
    32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[6] = a[0] * 4.0 / 32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[7] = a[1] * 4.0 / 32768.0;
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[8] = a[2] * 4.0 / 32768.0;

  // Update for S-Function (sdspToNetwork): '<Root>/UDP Send'
  sErr = GetErrorBuffer(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U],
                    &ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[0U], 9);
  if (*sErr != 0) {
    rtmSetErrorStatus(ShowIMU_RED_M, sErr);
    rtmSetStopRequested(ShowIMU_RED_M, 1);
  }

  // End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send'
}

// Model initialize function
void ShowIMU_RED_initialize(void)
{
  {
    char_T *sErr;

    // Start for S-Function (sdspToNetwork): '<Root>/UDP Send'
    sErr = GetErrorBuffer(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U], 1, "0.0.0.0", -1,
                        "255.255.255.255", ShowIMU_RED_P.UDPSend_Port, 8192, 8,
                        0);
    }

    if (*sErr == 0) {
      LibStart(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(ShowIMU_RED_M, sErr);
        rtmSetStopRequested(ShowIMU_RED_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<Root>/UDP Send'

    // Start for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
    ShowIMU_RED_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
    ShowIMU_RED_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
    ShowIMU_RED_DW.obj.matlabCodegenIsDeleted = true;
    ShowI_lsm9ds1Block_lsm9ds1Block(&ShowIMU_RED_DW.obj);
    ShowIMU_RED_SystemCore_setup(&ShowIMU_RED_DW.obj);
  }
}

// Model terminate function
void ShowIMU_RED_terminate(void)
{
  char_T *sErr;

  // Terminate for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  matlabCodegenHandle_matlabCodeg(&ShowIMU_RED_DW.obj);
  matlabCodegenHandle_matlabCo_dj(&ShowIMU_RED_DW.obj.i2cobj_MAG);
  matlabCodegenHandle_matlabCod_d(&ShowIMU_RED_DW.obj.i2cobj_A_G);

  // Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send'
  sErr = GetErrorBuffer(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(ShowIMU_RED_M, sErr);
    rtmSetStopRequested(ShowIMU_RED_M, 1);
  }

  LibDestroy(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send'
}

//
// File trailer for generated code.
//
// [EOF]
//
