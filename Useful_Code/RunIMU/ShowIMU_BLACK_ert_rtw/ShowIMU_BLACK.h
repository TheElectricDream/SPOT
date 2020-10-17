//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_BLACK.h
//
// Code generated for Simulink model 'ShowIMU_BLACK'.
//
// Model version                  : 1.23
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sat Oct 17 13:55:21 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Emulation hardware selection:
//    Differs from embedded hardware (MATLAB Host)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_ShowIMU_BLACK_h_
#define RTW_HEADER_ShowIMU_BLACK_h_
#include <cstring>
#include <stddef.h>
#include "rtwtypes.h"
#include "MW_I2C.h"
#include "DAHostLib_Network.h"
#include "ShowIMU_BLACK_types.h"

// Macros for accessing real-time model data structure
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

// Class declaration for model ShowIMU_BLACK
class FloatPlatformModelClass {
  // public data and function members
 public:
  // Block signals (default storage)
  typedef struct {
    real_T TmpSignalConversionAtUDPSendInp[9];
    real_T a[3];
    real_T a_m[3];
  } B_ShowIMU_BLACK_T;

  // Block states (default storage) for system '<Root>'
  typedef struct {
    raspi_internal_lsm9ds1Block_S_T obj;// '<Root>/LSM9DS1 IMU Sensor'
    real_T UDPSend_NetworkLib[137];    // '<Root>/UDP Send'
  } DW_ShowIMU_BLACK_T;

  // Parameters (default storage)
  struct P_ShowIMU_BLACK_T {
    int32_T UDPSend_Port;              // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<Root>/UDP Send'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_ShowIMU_BLACK_T {
    const char_T *errorStatus;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      boolean_T stopRequestedFlag;
    } Timing;
  };

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  FloatPlatformModelClass();

  // Destructor
  ~FloatPlatformModelClass();

  // Real-Time Model get method
  FloatPlatformModelClass::RT_MODEL_ShowIMU_BLACK_T * getRTM();

  // private data and function members
 private:
  // Tunable parameters
  static P_ShowIMU_BLACK_T ShowIMU_BLACK_P;

  // Block signals
  B_ShowIMU_BLACK_T ShowIMU_BLACK_B;

  // Block states
  DW_ShowIMU_BLACK_T ShowIMU_BLACK_DW;

  // Real-Time Model
  RT_MODEL_ShowIMU_BLACK_T ShowIMU_BLACK_M;

  // private member function(s) for subsystem '<Root>'
  void ShowIMU_BLAC_SystemCore_release(const raspi_internal_lsm9ds1Block_S_T
    *obj);
  void ShowIMU_BLACK_SystemCore_delete(const raspi_internal_lsm9ds1Block_S_T
    *obj);
  void matlabCodegenHandle_matlabCodeg(raspi_internal_lsm9ds1Block_S_T *obj);
  void ShowIMU_B_SystemCore_release_dz(j_codertarget_raspi_internal__T *obj);
  void ShowIMU_BL_SystemCore_delete_dz(j_codertarget_raspi_internal__T *obj);
  void matlabCodegenHandle_matlabCo_dz(j_codertarget_raspi_internal__T *obj);
  void ShowIMU_BL_SystemCore_release_d(i_codertarget_raspi_internal__T *obj);
  void ShowIMU_BLA_SystemCore_delete_d(i_codertarget_raspi_internal__T *obj);
  void matlabCodegenHandle_matlabCod_d(i_codertarget_raspi_internal__T *obj);
  raspi_internal_lsm9ds1Block_S_T *ShowI_lsm9ds1Block_lsm9ds1Block
    (raspi_internal_lsm9ds1Block_S_T *obj);
  void ShowIMU_BLACK_SystemCore_setup(raspi_internal_lsm9ds1Block_S_T *obj);
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ShowIMU_BLACK'

#endif                                 // RTW_HEADER_ShowIMU_BLACK_h_

//
// File trailer for generated code.
//
// [EOF]
//
