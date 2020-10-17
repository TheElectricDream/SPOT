//
//  Template_v3_03_2020a.cpp
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "Template_v3_03_2020a".
//
//  Model version              : 1.34
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Jun 20 11:37:52 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#include "Template_v3_03_2020a.h"
#include "Template_v3_03_2020a_private.h"

// Block signals (default storage)
B_Template_v3_03_2020a_T Template_v3_03_2020a_B;

// Block states (default storage)
DW_Template_v3_03_2020a_T Template_v3_03_2020a_DW;

// Previous zero-crossings (trigger) states
PrevZCX_Template_v3_03_2020a_T Template_v3_03_2020a_PrevZCX;

// Real-time model
RT_MODEL_Template_v3_03_2020a_T Template_v3_03_2020a_M_ =
  RT_MODEL_Template_v3_03_2020a_T();
RT_MODEL_Template_v3_03_2020a_T *const Template_v3_03_2020a_M =
  &Template_v3_03_2020a_M_;

// Forward declaration for local functions
static void Template_v3__SystemCore_release(const
  STREAMDATA_RB_Template_v3_03__T *obj);
static void Template_v3_0_SystemCore_delete(const
  STREAMDATA_RB_Template_v3_03__T *obj);
static void matlabCodegenHandle_matlabCodeg(STREAMDATA_RB_Template_v3_03__T *obj);

// Forward declaration for local functions
static real_T Template_v3_03_20_rt_atan2d_snf(real_T u0, real_T u1);
static void Template_v3_03_2020a_invNxN(const real_T x[36], real_T y[36]);
static void Template_v3_03_2020a_mpower(const real_T a[36], real_T c[36]);
static real_T Temp_rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
static real_T Temp_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
static void Template_v3_03_2_rt_invd3x3_snf(const real_T u[9], real_T y[9]);
static void Template_v_SystemCore_release_a(const
  codertarget_linux_blocks_Digi_T *obj);
static void Template_v3_SystemCore_delete_a(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle_matlabCod_a(codertarget_linux_blocks_Digi_T *obj);
static void Template__SystemCore_release_az(const
  codertarget_linux_blocks_Digi_T *obj);
static void Template_v_SystemCore_delete_az(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHandle_matlabCo_az(codertarget_linux_blocks_Digi_T *obj);
static void Template_SystemCore_release_az3(const
  raspi_internal_PWMBlock_Templ_T *obj);
static void Template__SystemCore_delete_az3(const
  raspi_internal_PWMBlock_Templ_T *obj);
static void matlabCodegenHandle_matlabC_az3(raspi_internal_PWMBlock_Templ_T *obj);
static void SystemCore_release_az3k1jii5tit(const
  codertarget_linux_blocks_Di_a_T *obj);
static void SystemCore_delete_az3k1jii5tit(const codertarget_linux_blocks_Di_a_T
  *obj);
static void matlabCodegenHandl_az3k1jii5tit(codertarget_linux_blocks_Di_a_T *obj);
static void SystemCore_releas_az3k1jii5titu(const
  codertarget_linux_blocks_Digi_T *obj);
static void SystemCore_delete_az3k1jii5titu(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHand_az3k1jii5titu(codertarget_linux_blocks_Digi_T *obj);
static void SystemCore_rele_az3k1jii5titugc(const
  codertarget_linux_blocks_Digi_T *obj);
static void SystemCore_dele_az3k1jii5titugc(const
  codertarget_linux_blocks_Digi_T *obj);
static void matlabCodegenHa_az3k1jii5titugc(codertarget_linux_blocks_Digi_T *obj);
static void rate_monotonic_scheduler(void);

//
// Set which subrates need to run this base step (base rate always runs).
// This function must be called prior to calling the model step function
// in order to "remember" which rates need to run this base step.  The
// buffering of events allows for overlapping preemption.
//
void Template_v3_03_2020a_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  // Task runs when its counter is zero, computed via rtmStepTask macro
  eventFlags[2] = ((boolean_T)rtmStepTask(Template_v3_03_2020a_M, 2));
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
  // To ensure a deterministic data transfer between two rates,
  //  data is transferred at the priority of a fast task and the frequency
  //  of the slow task.  The following flags indicate when the data transfer
  //  happens.  That is, a rate interaction flag is set true when both rates
  //  will run, and false otherwise.


  // tid 1 shares data with slower tid rate: 2
  if (Template_v3_03_2020a_M->Timing.TaskCounters.TID[1] == 0) {
    Template_v3_03_2020a_M->Timing.RateInteraction.TID1_2 =
      (Template_v3_03_2020a_M->Timing.TaskCounters.TID[2] == 0);
  }

  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (Template_v3_03_2020a_M->Timing.TaskCounters.TID[2])++;
  if ((Template_v3_03_2020a_M->Timing.TaskCounters.TID[2]) > 1) {// Sample time: [0.1s, 0.0s] 
    Template_v3_03_2020a_M->Timing.TaskCounters.TID[2] = 0;
  }
}

//
// Output and update for atomic system:
//    '<S25>/MATLAB Function2'
//    '<S34>/MATLAB Function2'
//    '<S43>/MATLAB Function2'
//
void Template_v3_MATLABFunction2(const real_T rtu_ThrustPer[8],
  B_MATLABFunction2_Template_v3_T *localB)
{
  real_T ex;
  int32_T idx;
  int32_T k;
  boolean_T tmp;
  boolean_T exitg1;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function2': '<S29>:1' 
  // '<S29>:1:3' ValveTime       = 0.007;
  // '<S29>:1:4' TControl        = 0.1;
  // '<S29>:1:5' ThrustPer_Final = zeros(8,1);
  // '<S29>:1:7' if max(ThrustPer) > 1
  tmp = rtIsNaN(rtu_ThrustPer[0]);
  if (!tmp) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 9)) {
      if (!rtIsNaN(rtu_ThrustPer[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = rtu_ThrustPer[0];
  } else {
    ex = rtu_ThrustPer[idx - 1];
    while (idx + 1 < 9) {
      if (ex < rtu_ThrustPer[idx]) {
        ex = rtu_ThrustPer[idx];
      }

      idx++;
    }
  }

  if (ex > 1.0) {
    // '<S29>:1:8' ThrustPer_Sat = ThrustPer/max(ThrustPer);
    if (!tmp) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k < 9)) {
        if (!rtIsNaN(rtu_ThrustPer[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      ex = rtu_ThrustPer[0];
    } else {
      ex = rtu_ThrustPer[idx - 1];
      while (idx + 1 < 9) {
        if (ex < rtu_ThrustPer[idx]) {
          ex = rtu_ThrustPer[idx];
        }

        idx++;
      }
    }

    for (idx = 0; idx < 8; idx++) {
      localB->ThrustPer_Sat[idx] = rtu_ThrustPer[idx] / ex;
    }
  } else {
    // '<S29>:1:9' else
    // '<S29>:1:10' ThrustPer_Sat = ThrustPer;
    memcpy(&localB->ThrustPer_Sat[0], &rtu_ThrustPer[0], sizeof(real_T) << 3U);
  }

  // '<S29>:1:13' for i = 1:8
  for (idx = 0; idx < 8; idx++) {
    // '<S29>:1:14' if ThrustPer_Sat(i) > ValveTime/TControl
    if (localB->ThrustPer_Sat[idx] > 0.069999999999999993) {
      // '<S29>:1:15' ThrustPer_Final(i) = ThrustPer_Sat(i);
      localB->ThrustPer_Final[idx] = localB->ThrustPer_Sat[idx];
    } else {
      // '<S29>:1:16' else
      // '<S29>:1:17' ThrustPer_Final(i) = 0;
      localB->ThrustPer_Final[idx] = 0.0;
    }
  }
}

//
// Output and update for atomic system:
//    '<S30>/Create Rotation Matrix'
//    '<S39>/Create Rotation Matrix'
//    '<S48>/Create Rotation Matrix'
//
void Templa_CreateRotationMatrix(real_T rtu_Rz, B_CreateRotationMatrix_Templa_T *
  localB)
{
  real_T r;
  real_T t;
  real_T C_bI_idx_0;
  real_T C_bI_idx_2;
  real_T C_bI_idx_1;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix': '<S32>:1' 
  // '<S32>:1:3' C_bI = [  cos(Rz) sin(Rz)
  // '<S32>:1:4'          -sin(Rz) cos(Rz) ];
  r = sin(rtu_Rz);
  t = cos(rtu_Rz);
  C_bI_idx_0 = t;
  C_bI_idx_2 = r;
  C_bI_idx_1 = -r;

  // '<S32>:1:6' C_Ib = inv(C_bI);
  if (fabs(-r) > fabs(t)) {
    r = t / -r;
    t = 1.0 / (r * t - C_bI_idx_2);
    localB->C_Ib[0] = C_bI_idx_0 / C_bI_idx_1 * t;
    localB->C_Ib[1] = -t;
    localB->C_Ib[2] = -C_bI_idx_2 / C_bI_idx_1 * t;
    localB->C_Ib[3] = r * t;
  } else {
    r = -r / t;
    t = 1.0 / (t - r * C_bI_idx_2);
    localB->C_Ib[0] = C_bI_idx_0 / C_bI_idx_0 * t;
    localB->C_Ib[1] = -r * t;
    localB->C_Ib[2] = -C_bI_idx_2 / C_bI_idx_0 * t;
    localB->C_Ib[3] = t;
  }
}

//
// Output and update for atomic system:
//    '<S26>/Create Rotation Matrix'
//    '<S35>/Create Rotation Matrix'
//    '<S44>/Create Rotation Matrix'
//
void Temp_CreateRotationMatrix_h(real_T rtu_Rz, B_CreateRotationMatrix_Temp_i_T *
  localB)
{
  real_T C_bI_tmp;
  real_T C_bI_tmp_0;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix': '<S33>:1' 
  // '<S33>:1:3' C_bI = [  cos(Rz) sin(Rz)
  // '<S33>:1:4'          -sin(Rz) cos(Rz) ];
  C_bI_tmp = sin(rtu_Rz);
  C_bI_tmp_0 = cos(rtu_Rz);
  localB->C_bI[0] = C_bI_tmp_0;
  localB->C_bI[2] = C_bI_tmp;
  localB->C_bI[1] = -C_bI_tmp;
  localB->C_bI[3] = C_bI_tmp_0;
}

//
// Output and update for atomic system:
//    '<S34>/MATLAB Function'
//    '<S34>/MATLAB Function1'
//
void Template_v3__MATLABFunction(B_MATLABFunction_Template_v3__T *localB)
{
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T H_tmp;
  static const int8_T b[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

  static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S36>:1' 
  // '<S36>:1:3' Vec1 = [ -1
  // '<S36>:1:4'          -1
  // '<S36>:1:5'           0
  // '<S36>:1:6'           0
  // '<S36>:1:7'           1
  // '<S36>:1:8'           1
  // '<S36>:1:9'           0
  // '<S36>:1:10'           0 ];
  // '<S36>:1:12' Vec2 = [  0
  // '<S36>:1:13'           0
  // '<S36>:1:14'           1
  // '<S36>:1:15'           1
  // '<S36>:1:16'           0
  // '<S36>:1:17'           0
  // '<S36>:1:18'          -1
  // '<S36>:1:19'          -1 ];
  // '<S36>:1:21' Vec3 = thruster_dist2CG_BLUE./1000;
  // '<S36>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
  // '<S36>:1:25' Mat2 = diag((F_thrusters_BLUE./2));
  for (i = 0; i < 8; i++) {
    localB->v[i] = Template_v3_03_2020a_P.F_thrusters_BLUE[i] / 2.0;
  }

  memset(&localB->Mat2[0], 0, sizeof(real_T) << 6U);

  // '<S36>:1:27' H    = Mat1*Mat2;
  for (i = 0; i < 8; i++) {
    localB->Mat2[i + (i << 3)] = localB->v[i];
    localB->b[3 * i] = b[i];
    localB->b[3 * i + 1] = c[i];
    localB->b[3 * i + 2] = Template_v3_03_2020a_P.thruster_dist2CG_BLUE[i] /
      1000.0;
  }

  for (i = 0; i < 8; i++) {
    for (i_0 = 0; i_0 < 3; i_0++) {
      H_tmp = i_0 + 3 * i;
      localB->H[H_tmp] = 0.0;
      for (i_1 = 0; i_1 < 8; i_1++) {
        localB->H[H_tmp] += localB->b[3 * i_1 + i_0] * localB->Mat2[(i << 3) +
          i_1];
      }
    }
  }
}

static void Template_v3__SystemCore_release(const
  STREAMDATA_RB_Template_v3_03__T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    Terminate_SocketConnection();
  }
}

static void Template_v3_0_SystemCore_delete(const
  STREAMDATA_RB_Template_v3_03__T *obj)
{
  Template_v3__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(STREAMDATA_RB_Template_v3_03__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Template_v3_0_SystemCore_delete(obj);
  }
}

//
// System initialize for atomic system:
//    synthesized block
//    synthesized block
//
void T_StreamPhaseSpaceData_Init(DW_StreamPhaseSpaceData_Templ_T *localDW)
{
  // Start for MATLABSystem: '<S75>/Stream PhaseSpace Data'
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isInitialized = 1;
  Initialize_Client();
  localDW->obj.isSetupComplete = true;
}

//
// Output and update for atomic system:
//    synthesized block
//    synthesized block
//
void Templa_StreamPhaseSpaceData(B_StreamPhaseSpaceData_Templa_T *localB)
{
  real_T y5;
  real_T y6;
  real_T y8;
  real_T y9;
  real_T y10;
  real_T y11;
  real_T y12;
  real_T y13;

  // MATLABSystem: '<S75>/Stream PhaseSpace Data'
  localB->StreamPhaseSpaceData[0] = 0.0;
  localB->y2 = 0.0;
  localB->y3 = 0.0;
  localB->StreamPhaseSpaceData[3] = 0.0;
  y5 = 0.0;
  y6 = 0.0;
  localB->StreamPhaseSpaceData[6] = 0.0;
  y8 = 0.0;
  y9 = 0.0;
  y10 = 0.0;
  y11 = 0.0;
  y12 = 0.0;
  y13 = 0.0;
  Receive_UDP_Packet(&localB->StreamPhaseSpaceData[0], &localB->y2, &localB->y3,
                     &localB->StreamPhaseSpaceData[3], &y5, &y6,
                     &localB->StreamPhaseSpaceData[6], &y8, &y9, &y10, &y11,
                     &y12, &y13);
  localB->StreamPhaseSpaceData[1] = localB->y2 / 1000.0;
  localB->StreamPhaseSpaceData[2] = localB->y3 / 1000.0;
  localB->StreamPhaseSpaceData[4] = y5 / 1000.0;
  localB->StreamPhaseSpaceData[5] = y6 / 1000.0;
  localB->StreamPhaseSpaceData[7] = y8 / 1000.0;
  localB->StreamPhaseSpaceData[8] = y9 / 1000.0;
  localB->StreamPhaseSpaceData[9] = y10 / 1000.0;
  localB->StreamPhaseSpaceData[10] = y11 / 1000.0;
  localB->StreamPhaseSpaceData[11] = y12 / 1000.0;
  localB->StreamPhaseSpaceData[12] = y13 / 1000.0;
}

//
// Termination for atomic system:
//    synthesized block
//    synthesized block
//
void T_StreamPhaseSpaceData_Term(DW_StreamPhaseSpaceData_Templ_T *localDW)
{
  // Terminate for MATLABSystem: '<S75>/Stream PhaseSpace Data'
  matlabCodegenHandle_matlabCodeg(&localDW->obj);
}

//
// Output and update for atomic system:
//    '<S359>/MATLAB Function'
//    '<S360>/MATLAB Function'
//    '<S361>/MATLAB Function'
//
void Template_v_MATLABFunction_d(real_T rtu_TIME, real_T rtu_SERVER,
  B_MATLABFunction_Template_v_e_T *localB)
{
  real_T r;
  boolean_T rEQ0;
  real_T q;

  // MATLAB Function 'Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/MATLAB Function': '<S374>:1' 
  // '<S374>:1:3' if mod(TIME,SERVER) == 0
  r = rtu_TIME;
  if (rtu_SERVER == 0.0) {
    if (rtu_TIME == 0.0) {
      r = rtu_SERVER;
    }
  } else if (rtIsNaN(rtu_TIME)) {
    r = (rtNaN);
  } else if (rtIsNaN(rtu_SERVER)) {
    r = (rtNaN);
  } else if (rtIsInf(rtu_TIME)) {
    r = (rtNaN);
  } else if (rtu_TIME == 0.0) {
    r = 0.0 / rtu_SERVER;
  } else if (rtIsInf(rtu_SERVER)) {
    if ((rtu_SERVER < 0.0) != (rtu_TIME < 0.0)) {
      r = rtu_SERVER;
    }
  } else {
    r = fmod(rtu_TIME, rtu_SERVER);
    rEQ0 = (r == 0.0);
    if ((!rEQ0) && (rtu_SERVER > floor(rtu_SERVER))) {
      q = fabs(rtu_TIME / rtu_SERVER);
      rEQ0 = !(fabs(q - floor(q + 0.5)) > 2.2204460492503131E-16 * q);
    }

    if (rEQ0) {
      r = rtu_SERVER * 0.0;
    } else {
      if ((rtu_TIME < 0.0) != (rtu_SERVER < 0.0)) {
        r += rtu_SERVER;
      }
    }
  }

  if (r == 0.0) {
    // '<S374>:1:4' y = 1;
    localB->y = 1.0;
  } else {
    // '<S374>:1:5' else
    // '<S374>:1:6' y = 0;
    localB->y = 0.0;
  }
}

//
// Output and update for action system:
//    '<S7>/Change BLUE Behavior'
//    '<S8>/Change BLUE Behavior'
//    '<S13>/Change BLUE Behavior'
//
void Template_ChangeBLUEBehavior(P_ChangeBLUEBehavior_Template_T *localP, real_T
  *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S126>/BLUE_Fx' incorporates:
  //   Constant: '<S126>/Constant3'

  *rtd_BLUE_Fx = localP->Constant3_Value;

  // DataStoreWrite: '<S126>/BLUE_Fy' incorporates:
  //   Constant: '<S126>/Constant4'

  *rtd_BLUE_Fy = localP->Constant4_Value;

  // DataStoreWrite: '<S126>/BLUE_Tz' incorporates:
  //   Constant: '<S126>/Constant5'

  *rtd_BLUE_Tz = localP->Constant5_Value;

  // DataStoreWrite: '<S126>/Data Store Write4' incorporates:
  //   Constant: '<S126>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<Root>/Phase #0:  Wait for Synchronization'
//    '<Root>/Phase #1:  Start Floating '
//
void Phase0WaitforSynchronizatio(P_Phase0WaitforSynchronizatio_T *localP, real_T
  *rtd_BLACK_Fx, real_T *rtd_BLACK_Fy, real_T *rtd_BLACK_Tz, real_T *rtd_BLUE_Fx,
  real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Tz, real_T *rtd_Float_State, real_T
  *rtd_RED_Fx, real_T *rtd_RED_Fy, real_T *rtd_RED_Tz, real_T *rtd_RED_Tz_Elbow,
  real_T *rtd_RED_Tz_RW, real_T *rtd_RED_Tz_Shoulder, real_T *rtd_RED_Tz_Wrist)
{
  // If: '<S7>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
  //   Constant: '<S128>/Constant'
  //   Constant: '<S7>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 2.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S7>/Change BLACK Behavior' incorporates:
    //   ActionPort: '<S125>/Action Port'

    // DataStoreWrite: '<S125>/BLACK_Fx' incorporates:
    //   Constant: '<S125>/Constant3'

    *rtd_BLACK_Fx = localP->Constant3_Value;

    // DataStoreWrite: '<S125>/BLACK_Fy' incorporates:
    //   Constant: '<S125>/Constant4'

    *rtd_BLACK_Fy = localP->Constant4_Value;

    // DataStoreWrite: '<S125>/BLACK_Tz' incorporates:
    //   Constant: '<S125>/Constant5'

    *rtd_BLACK_Tz = localP->Constant5_Value;

    // DataStoreWrite: '<S125>/Data Store Write4' incorporates:
    //   Constant: '<S125>/Puck State'

    *rtd_Float_State = localP->PuckState_Value;

    // End of Outputs for SubSystem: '<S7>/Change BLACK Behavior'
  }

  // End of If: '<S7>/This IF block determines whether or not to run the BLACK sim//exp' 

  // If: '<S7>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
  //   Constant: '<S128>/Constant'
  //   Constant: '<S7>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 3.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S7>/Change BLUE Behavior' incorporates:
    //   ActionPort: '<S126>/Action Port'

    Template_ChangeBLUEBehavior(&localP->ChangeBLUEBehavior, rtd_BLUE_Fx,
      rtd_BLUE_Fy, rtd_BLUE_Tz, rtd_Float_State);

    // End of Outputs for SubSystem: '<S7>/Change BLUE Behavior'
  }

  // End of If: '<S7>/This IF block determines whether or not to run the BLUE sim//exp' 

  // If: '<S7>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
  //   Constant: '<S128>/Constant'
  //   Constant: '<S7>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 1.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S7>/Change RED Behavior' incorporates:
    //   ActionPort: '<S127>/Action Port'

    // DataStoreWrite: '<S127>/RED_Fx' incorporates:
    //   Constant: '<S127>/Constant'

    *rtd_RED_Fx = localP->Constant_Value;

    // DataStoreWrite: '<S127>/RED_Fy' incorporates:
    //   Constant: '<S127>/Constant1'

    *rtd_RED_Fy = localP->Constant1_Value;

    // DataStoreWrite: '<S127>/RED_Tz' incorporates:
    //   Constant: '<S127>/Constant2'

    *rtd_RED_Tz = localP->Constant2_Value;

    // DataStoreWrite: '<S127>/RED_Tz_RW' incorporates:
    //   Constant: '<S127>/Constant3'

    *rtd_RED_Tz_RW = localP->Constant3_Value_h;

    // DataStoreWrite: '<S127>/Data Store Write' incorporates:
    //   Constant: '<S127>/Constant4'

    *rtd_RED_Tz_Shoulder = localP->Constant4_Value_g;

    // DataStoreWrite: '<S127>/Data Store Write1' incorporates:
    //   Constant: '<S127>/Constant5'

    *rtd_RED_Tz_Elbow = localP->Constant5_Value_e;

    // DataStoreWrite: '<S127>/Data Store Write2' incorporates:
    //   Constant: '<S127>/Constant6'

    *rtd_RED_Tz_Wrist = localP->Constant6_Value;

    // DataStoreWrite: '<S127>/Data Store Write4' incorporates:
    //   Constant: '<S127>/Puck State'

    *rtd_Float_State = localP->PuckState_Value_b;

    // End of Outputs for SubSystem: '<S7>/Change RED Behavior'
  }

  // End of If: '<S7>/This IF block determines whether or not to run the RED sim//exp ' 
}

//
// Output and update for atomic system:
//    '<S140>/MATLAB Function2'
//    '<S153>/MATLAB Function2'
//    '<S166>/MATLAB Function2'
//    '<S188>/MATLAB Function2'
//    '<S223>/MATLAB Function2'
//    '<S236>/MATLAB Function2'
//    '<S254>/MATLAB Function2'
//    '<S273>/MATLAB Function2'
//    '<S286>/MATLAB Function2'
//    '<S299>/MATLAB Function2'
//    ...
//
void Template__MATLABFunction2_o(real_T rtu_z, B_MATLABFunction2_Template__n_T
  *localB)
{
  real_T Ox_tmp_tmp;
  real_T Ox_tmp_tmp_0;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function2': '<S147>:1' 
  // '<S147>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
  Ox_tmp_tmp = sin(rtu_z);
  Ox_tmp_tmp_0 = cos(rtu_z);
  localB->Ox[0] = 0.0;
  localB->Ox[0] += Ox_tmp_tmp_0;
  localB->Ox[0] += Ox_tmp_tmp * 0.0;
  localB->Ox[1] = 0.0;
  localB->Ox[1] += -Ox_tmp_tmp;
  localB->Ox[1] += Ox_tmp_tmp_0 * 0.0;

  // '<S147>:1:7' Oy = [cos(z) sin(z); -sin(z) cos(z)]*[0;1];
  localB->Oy[0] = 0.0;
  localB->Oy[0] += cos(rtu_z) * 0.0;
  localB->Oy[0] += Ox_tmp_tmp;
  localB->Oy[1] = 0.0;
  localB->Oy[1] += -sin(rtu_z) * 0.0;
  localB->Oy[1] += Ox_tmp_tmp_0;
}

//
// Output and update for atomic system:
//    '<S140>/MATLAB Function3'
//    '<S153>/MATLAB Function3'
//    '<S166>/MATLAB Function3'
//    '<S188>/MATLAB Function3'
//    '<S202>/MATLAB Function3'
//    '<S223>/MATLAB Function3'
//    '<S236>/MATLAB Function3'
//    '<S254>/MATLAB Function3'
//    '<S273>/MATLAB Function3'
//    '<S286>/MATLAB Function3'
//    ...
//
void Template_v3_MATLABFunction3(real_T rtu_z, B_MATLABFunction3_Template_v3_T
  *localB)
{
  real_T Ox_tmp;
  real_T Ox_tmp_0;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function3': '<S148>:1' 
  // '<S148>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
  Ox_tmp = sin(rtu_z);
  Ox_tmp_0 = cos(rtu_z);
  localB->Ox[0] = 0.0;
  localB->Ox[0] += Ox_tmp_0;
  localB->Ox[0] += Ox_tmp * 0.0;
  localB->Ox[1] = 0.0;
  localB->Ox[1] += -Ox_tmp;
  localB->Ox[1] += Ox_tmp_0 * 0.0;
}

//
// Output and update for atomic system:
//    '<S140>/MATLAB Function4'
//    '<S153>/MATLAB Function4'
//    '<S166>/MATLAB Function4'
//    '<S188>/MATLAB Function4'
//    '<S202>/MATLAB Function4'
//    '<S223>/MATLAB Function4'
//    '<S236>/MATLAB Function4'
//    '<S254>/MATLAB Function4'
//    '<S273>/MATLAB Function4'
//    '<S286>/MATLAB Function4'
//    ...
//
void Template_v3_MATLABFunction4(const real_T rtu_Oy[2], const real_T rtu_e_in[2],
  B_MATLABFunction4_Template_v3_T *localB)
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function4': '<S149>:1' 
  // '<S149>:1:3' a = sign(Oy'*e_in);
  // '<S149>:1:4' e_out = -a*norm(e_in);
  scale = 3.3121686421112381E-170;
  absxk = fabs(rtu_e_in[0]);
  if (absxk > 3.3121686421112381E-170) {
    y = 1.0;
    scale = absxk;
  } else {
    t = absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  absxk = fabs(rtu_e_in[1]);
  if (absxk > scale) {
    t = scale / absxk;
    y = y * t * t + 1.0;
    scale = absxk;
  } else {
    t = absxk / scale;
    y += t * t;
  }

  absxk = rtu_Oy[0] * rtu_e_in[0] + rtu_Oy[1] * rtu_e_in[1];
  y = scale * sqrt(y);
  if (absxk < 0.0) {
    absxk = -1.0;
  } else if (absxk > 0.0) {
    absxk = 1.0;
  } else if (absxk == 0.0) {
    absxk = 0.0;
  } else {
    absxk = (rtNaN);
  }

  localB->e_out = -absxk * y;
}

//
// Output and update for action system:
//    '<S176>/Sub-Phase #2 '
//    '<S176>/Sub-Phase #3 '
//
void Template_v3_03_20_SubPhase2(P_SubPhase2_Template_v3_03_20_T *localP, real_T
  *rtd_BLACK_Fx, real_T *rtd_BLACK_Fy, real_T *rtd_BLACK_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S181>/BLACK_Fx' incorporates:
  //   Constant: '<S181>/Constant'

  *rtd_BLACK_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S181>/BLACK_Fy' incorporates:
  //   Constant: '<S181>/Constant'

  *rtd_BLACK_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S181>/BLACK_Tz' incorporates:
  //   Constant: '<S181>/Constant'

  *rtd_BLACK_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S181>/Data Store Write3' incorporates:
  //   Constant: '<S181>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// System initialize for action system:
//    '<S177>/Sub-Phase #1'
//    '<S177>/Sub-Phase #4'
//
void Template_v3__SubPhase1_Init(B_SubPhase1_Template_v3_03_20_T *localB,
  DW_SubPhase1_Template_v3_03_2_T *localDW, P_SubPhase1_Template_v3_03_20_T
  *localP)
{
  // InitializeConditions for Delay: '<S226>/Delay1'
  localDW->icLoad = 1U;

  // InitializeConditions for Delay: '<S228>/Delay1'
  localDW->icLoad_p = 1U;

  // InitializeConditions for Delay: '<S224>/Delay1'
  localDW->icLoad_d = 1U;

  // SystemInitialize for IfAction SubSystem: '<S226>/Hold this value'
  // SystemInitialize for Outport: '<S227>/Out1'
  localB->In1_p = localP->Out1_Y0_m;

  // End of SystemInitialize for SubSystem: '<S226>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S228>/Hold this value'
  // SystemInitialize for Outport: '<S229>/Out1'
  localB->In1 = localP->Out1_Y0_p;

  // End of SystemInitialize for SubSystem: '<S228>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S224>/Hold this value'
  // SystemInitialize for Outport: '<S225>/Out1'
  localB->In1_j = localP->Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S224>/Hold this value'
}

//
// Output and update for action system:
//    '<S177>/Sub-Phase #1'
//    '<S177>/Sub-Phase #4'
//
void Template_v3_03_20_SubPhase1(B_SubPhase1_Template_v3_03_20_T *localB,
  DW_SubPhase1_Template_v3_03_2_T *localDW, P_SubPhase1_Template_v3_03_20_T
  *localP, real_T *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Px, real_T
  *rtd_BLUE_Py, real_T *rtd_BLUE_Rz, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  real_T rtb_Subtract_k;
  real_T rtb_Sum6_el;
  real_T rtb_Sum6_pwx;

  // Sum: '<S215>/Subtract' incorporates:
  //   Constant: '<S215>/Desired Px (BLUE)'

  rtb_Subtract_k = Template_v3_03_2020a_P.init_states_BLUE[0] - *rtd_BLUE_Px;

  // Delay: '<S226>/Delay1'
  if (localDW->icLoad != 0) {
    localDW->Delay1_DSTATE = rtb_Subtract_k;
  }

  // Sum: '<S226>/Sum6' incorporates:
  //   Delay: '<S226>/Delay1'

  rtb_Sum6_el = rtb_Subtract_k - localDW->Delay1_DSTATE;

  // If: '<S226>/if we went through a "step"' incorporates:
  //   Inport: '<S227>/In1'

  if (rtb_Sum6_el != 0.0) {
    // Outputs for IfAction SubSystem: '<S226>/Hold this value' incorporates:
    //   ActionPort: '<S227>/Action Port'

    localB->In1_p = rtb_Sum6_el;

    // End of Outputs for SubSystem: '<S226>/Hold this value'
  }

  // End of If: '<S226>/if we went through a "step"'

  // Sum: '<S221>/Sum3' incorporates:
  //   Gain: '<S221>/kd_xb'
  //   Gain: '<S221>/kp_xb'
  //   Gain: '<S226>/divide by delta T'

  *rtd_BLUE_Fx = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_p *
    Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
    rtb_Subtract_k;

  // Sum: '<S215>/Subtract1' incorporates:
  //   Constant: '<S215>/Desired Py (BLUE)'

  rtb_Sum6_el = Template_v3_03_2020a_P.init_states_BLUE[1] - *rtd_BLUE_Py;

  // Delay: '<S228>/Delay1'
  if (localDW->icLoad_p != 0) {
    localDW->Delay1_DSTATE_g = rtb_Sum6_el;
  }

  // Sum: '<S228>/Sum6' incorporates:
  //   Delay: '<S228>/Delay1'

  rtb_Sum6_pwx = rtb_Sum6_el - localDW->Delay1_DSTATE_g;

  // If: '<S228>/if we went through a "step"' incorporates:
  //   Inport: '<S229>/In1'

  if (rtb_Sum6_pwx != 0.0) {
    // Outputs for IfAction SubSystem: '<S228>/Hold this value' incorporates:
    //   ActionPort: '<S229>/Action Port'

    localB->In1 = rtb_Sum6_pwx;

    // End of Outputs for SubSystem: '<S228>/Hold this value'
  }

  // End of If: '<S228>/if we went through a "step"'

  // Sum: '<S222>/Sum3' incorporates:
  //   Gain: '<S222>/kd_yb'
  //   Gain: '<S222>/kp_yb'
  //   Gain: '<S228>/divide by delta T'

  *rtd_BLUE_Fy = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1 *
    Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
    rtb_Sum6_el;

  // MATLAB Function: '<S223>/MATLAB Function2' incorporates:
  //   Constant: '<S215>/Desired Attitude (BLUE)'

  Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLUE[2],
    &localB->sf_MATLABFunction2);

  // MATLAB Function: '<S223>/MATLAB Function3'
  Template_v3_MATLABFunction3(*rtd_BLUE_Rz, &localB->sf_MATLABFunction3);

  // Sum: '<S223>/Subtract2'
  localB->rtb_Subtract2_e_m[0] = localB->sf_MATLABFunction2.Ox[0] -
    localB->sf_MATLABFunction3.Ox[0];
  localB->rtb_Subtract2_e_m[1] = localB->sf_MATLABFunction2.Ox[1] -
    localB->sf_MATLABFunction3.Ox[1];

  // MATLAB Function: '<S223>/MATLAB Function4'
  Template_v3_MATLABFunction4(localB->sf_MATLABFunction2.Oy,
    localB->rtb_Subtract2_e_m, &localB->sf_MATLABFunction4);

  // Delay: '<S224>/Delay1'
  if (localDW->icLoad_d != 0) {
    localDW->Delay1_DSTATE_f = localB->sf_MATLABFunction4.e_out;
  }

  // Sum: '<S224>/Sum6' incorporates:
  //   Delay: '<S224>/Delay1'

  rtb_Sum6_pwx = localB->sf_MATLABFunction4.e_out - localDW->Delay1_DSTATE_f;

  // If: '<S224>/if we went through a "step"' incorporates:
  //   Inport: '<S225>/In1'

  if (rtb_Sum6_pwx != 0.0) {
    // Outputs for IfAction SubSystem: '<S224>/Hold this value' incorporates:
    //   ActionPort: '<S225>/Action Port'

    localB->In1_j = rtb_Sum6_pwx;

    // End of Outputs for SubSystem: '<S224>/Hold this value'
  }

  // End of If: '<S224>/if we went through a "step"'

  // Sum: '<S220>/Sum3' incorporates:
  //   Gain: '<S220>/kd_tb'
  //   Gain: '<S220>/kp_tb'
  //   Gain: '<S224>/divide by delta T'

  *rtd_BLUE_Tz = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_j *
    Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
    localB->sf_MATLABFunction4.e_out;

  // DataStoreWrite: '<S215>/Data Store Write1' incorporates:
  //   Constant: '<S215>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;

  // Update for Delay: '<S226>/Delay1'
  localDW->icLoad = 0U;
  localDW->Delay1_DSTATE = rtb_Subtract_k;

  // Update for Delay: '<S228>/Delay1'
  localDW->icLoad_p = 0U;
  localDW->Delay1_DSTATE_g = rtb_Sum6_el;

  // Update for Delay: '<S224>/Delay1'
  localDW->icLoad_d = 0U;
  localDW->Delay1_DSTATE_f = localB->sf_MATLABFunction4.e_out;
}

//
// Output and update for action system:
//    '<S177>/Sub-Phase #2 '
//    '<S177>/Sub-Phase #3 '
//
void Template_v3_03__SubPhase2_m(P_SubPhase2_Template_v3_03__h_T *localP, real_T
  *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S216>/BLUE_Fx' incorporates:
  //   Constant: '<S216>/Constant'

  *rtd_BLUE_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S216>/BLUE_Fy' incorporates:
  //   Constant: '<S216>/Constant'

  *rtd_BLUE_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S216>/BLUE_Tz' incorporates:
  //   Constant: '<S216>/Constant'

  *rtd_BLUE_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S216>/Data Store Write1' incorporates:
  //   Constant: '<S216>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<S178>/Sub-Phase #2 '
//    '<S178>/Sub-Phase #3 '
//
void Template_v3_03__SubPhase2_g(P_SubPhase2_Template_v3_03__g_T *localP, real_T
  *rtd_Float_State, real_T *rtd_RED_Fx, real_T *rtd_RED_Fy, real_T *rtd_RED_Tz,
  real_T *rtd_RED_Tz_Elbow, real_T *rtd_RED_Tz_RW, real_T *rtd_RED_Tz_Shoulder,
  real_T *rtd_RED_Tz_Wrist)
{
  // DataStoreWrite: '<S247>/RED_Fx' incorporates:
  //   Constant: '<S247>/Constant'

  *rtd_RED_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S247>/RED_Fy' incorporates:
  //   Constant: '<S247>/Constant'

  *rtd_RED_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S247>/RED_Tz' incorporates:
  //   Constant: '<S247>/Constant'

  *rtd_RED_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S247>/RED_Tz_RW' incorporates:
  //   Constant: '<S247>/Constant1'

  *rtd_RED_Tz_RW = localP->Constant1_Value;

  // DataStoreWrite: '<S247>/Data Store Write' incorporates:
  //   Constant: '<S247>/Constant4'

  *rtd_RED_Tz_Shoulder = localP->Constant4_Value;

  // DataStoreWrite: '<S247>/Data Store Write1' incorporates:
  //   Constant: '<S247>/Constant5'

  *rtd_RED_Tz_Elbow = localP->Constant5_Value;

  // DataStoreWrite: '<S247>/Data Store Write2' incorporates:
  //   Constant: '<S247>/Constant6'

  *rtd_RED_Tz_Wrist = localP->Constant6_Value;

  // DataStoreWrite: '<S247>/Data Store Write3' incorporates:
  //   Constant: '<S247>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// System initialize for action system:
//    '<S11>/Change BLUE Behavior'
//    '<S12>/Change BLUE Behavior'
//
void T_ChangeBLUEBehavior_c_Init(B_ChangeBLUEBehavior_Templa_k_T *localB,
  DW_ChangeBLUEBehavior_Templ_i_T *localDW, P_ChangeBLUEBehavior_Templa_c_T
  *localP)
{
  // InitializeConditions for Delay: '<S289>/Delay1'
  localDW->icLoad = 1U;

  // InitializeConditions for Delay: '<S291>/Delay1'
  localDW->icLoad_h = 1U;

  // InitializeConditions for Delay: '<S287>/Delay1'
  localDW->icLoad_l = 1U;

  // SystemInitialize for IfAction SubSystem: '<S289>/Hold this value'
  // SystemInitialize for Outport: '<S290>/Out1'
  localB->In1_k = localP->Out1_Y0_k;

  // End of SystemInitialize for SubSystem: '<S289>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S291>/Hold this value'
  // SystemInitialize for Outport: '<S292>/Out1'
  localB->In1 = localP->Out1_Y0_n;

  // End of SystemInitialize for SubSystem: '<S291>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S287>/Hold this value'
  // SystemInitialize for Outport: '<S288>/Out1'
  localB->In1_a = localP->Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S287>/Hold this value'
}

//
// Output and update for action system:
//    '<S11>/Change BLUE Behavior'
//    '<S12>/Change BLUE Behavior'
//
void Templa_ChangeBLUEBehavior_g(B_ChangeBLUEBehavior_Templa_k_T *localB,
  DW_ChangeBLUEBehavior_Templ_i_T *localDW, P_ChangeBLUEBehavior_Templa_c_T
  *localP, real_T *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Px, real_T
  *rtd_BLUE_Py, real_T *rtd_BLUE_Rz, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  real_T rtb_Subtract_hb;
  real_T rtb_Sum6_mk;
  real_T rtb_Sum6_ka;

  // Sum: '<S267>/Subtract' incorporates:
  //   Constant: '<S267>/Desired Px (BLUE)'

  rtb_Subtract_hb = Template_v3_03_2020a_P.home_states_BLUE[0] - *rtd_BLUE_Px;

  // Delay: '<S289>/Delay1'
  if (localDW->icLoad != 0) {
    localDW->Delay1_DSTATE = rtb_Subtract_hb;
  }

  // Sum: '<S289>/Sum6' incorporates:
  //   Delay: '<S289>/Delay1'

  rtb_Sum6_mk = rtb_Subtract_hb - localDW->Delay1_DSTATE;

  // If: '<S289>/if we went through a "step"' incorporates:
  //   Inport: '<S290>/In1'

  if (rtb_Sum6_mk != 0.0) {
    // Outputs for IfAction SubSystem: '<S289>/Hold this value' incorporates:
    //   ActionPort: '<S290>/Action Port'

    localB->In1_k = rtb_Sum6_mk;

    // End of Outputs for SubSystem: '<S289>/Hold this value'
  }

  // End of If: '<S289>/if we went through a "step"'

  // Sum: '<S284>/Sum3' incorporates:
  //   Gain: '<S284>/kd_xb'
  //   Gain: '<S284>/kp_xb'
  //   Gain: '<S289>/divide by delta T'

  *rtd_BLUE_Fx = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_k *
    Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
    rtb_Subtract_hb;

  // Sum: '<S267>/Subtract1' incorporates:
  //   Constant: '<S267>/Desired Py (BLUE)'

  rtb_Sum6_mk = Template_v3_03_2020a_P.home_states_BLUE[1] - *rtd_BLUE_Py;

  // Delay: '<S291>/Delay1'
  if (localDW->icLoad_h != 0) {
    localDW->Delay1_DSTATE_n = rtb_Sum6_mk;
  }

  // Sum: '<S291>/Sum6' incorporates:
  //   Delay: '<S291>/Delay1'

  rtb_Sum6_ka = rtb_Sum6_mk - localDW->Delay1_DSTATE_n;

  // If: '<S291>/if we went through a "step"' incorporates:
  //   Inport: '<S292>/In1'

  if (rtb_Sum6_ka != 0.0) {
    // Outputs for IfAction SubSystem: '<S291>/Hold this value' incorporates:
    //   ActionPort: '<S292>/Action Port'

    localB->In1 = rtb_Sum6_ka;

    // End of Outputs for SubSystem: '<S291>/Hold this value'
  }

  // End of If: '<S291>/if we went through a "step"'

  // Sum: '<S285>/Sum3' incorporates:
  //   Gain: '<S285>/kd_yb'
  //   Gain: '<S285>/kp_yb'
  //   Gain: '<S291>/divide by delta T'

  *rtd_BLUE_Fy = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1 *
    Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
    rtb_Sum6_mk;

  // MATLAB Function: '<S286>/MATLAB Function2' incorporates:
  //   Constant: '<S267>/Desired Attitude (BLUE)'

  Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLUE[2],
    &localB->sf_MATLABFunction2);

  // MATLAB Function: '<S286>/MATLAB Function3'
  Template_v3_MATLABFunction3(*rtd_BLUE_Rz, &localB->sf_MATLABFunction3);

  // Sum: '<S286>/Subtract2'
  localB->rtb_Subtract2_b1_m[0] = localB->sf_MATLABFunction2.Ox[0] -
    localB->sf_MATLABFunction3.Ox[0];
  localB->rtb_Subtract2_b1_m[1] = localB->sf_MATLABFunction2.Ox[1] -
    localB->sf_MATLABFunction3.Ox[1];

  // MATLAB Function: '<S286>/MATLAB Function4'
  Template_v3_MATLABFunction4(localB->sf_MATLABFunction2.Oy,
    localB->rtb_Subtract2_b1_m, &localB->sf_MATLABFunction4);

  // Delay: '<S287>/Delay1'
  if (localDW->icLoad_l != 0) {
    localDW->Delay1_DSTATE_k = localB->sf_MATLABFunction4.e_out;
  }

  // Sum: '<S287>/Sum6' incorporates:
  //   Delay: '<S287>/Delay1'

  rtb_Sum6_ka = localB->sf_MATLABFunction4.e_out - localDW->Delay1_DSTATE_k;

  // If: '<S287>/if we went through a "step"' incorporates:
  //   Inport: '<S288>/In1'

  if (rtb_Sum6_ka != 0.0) {
    // Outputs for IfAction SubSystem: '<S287>/Hold this value' incorporates:
    //   ActionPort: '<S288>/Action Port'

    localB->In1_a = rtb_Sum6_ka;

    // End of Outputs for SubSystem: '<S287>/Hold this value'
  }

  // End of If: '<S287>/if we went through a "step"'

  // Sum: '<S283>/Sum3' incorporates:
  //   Gain: '<S283>/kd_tb'
  //   Gain: '<S283>/kp_tb'
  //   Gain: '<S287>/divide by delta T'

  *rtd_BLUE_Tz = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_a *
    Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
    localB->sf_MATLABFunction4.e_out;

  // DataStoreWrite: '<S267>/Data Store Write3' incorporates:
  //   Constant: '<S267>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;

  // Update for Delay: '<S289>/Delay1'
  localDW->icLoad = 0U;
  localDW->Delay1_DSTATE = rtb_Subtract_hb;

  // Update for Delay: '<S291>/Delay1'
  localDW->icLoad_h = 0U;
  localDW->Delay1_DSTATE_n = rtb_Sum6_mk;

  // Update for Delay: '<S287>/Delay1'
  localDW->icLoad_l = 0U;
  localDW->Delay1_DSTATE_k = localB->sf_MATLABFunction4.e_out;
}

static real_T Template_v3_03_20_rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      Template_v3_03_2020a_B.u0 = 1;
    } else {
      Template_v3_03_2020a_B.u0 = -1;
    }

    if (u1 > 0.0) {
      Template_v3_03_2020a_B.u1 = 1;
    } else {
      Template_v3_03_2020a_B.u1 = -1;
    }

    y = atan2(static_cast<real_T>(Template_v3_03_2020a_B.u0), static_cast<real_T>
              (Template_v3_03_2020a_B.u1));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

// Function for MATLAB Function: '<S249>/Control Block'
static void Template_v3_03_2020a_invNxN(const real_T x[36], real_T y[36])
{
  for (Template_v3_03_2020a_B.d_k = 0; Template_v3_03_2020a_B.d_k < 36;
       Template_v3_03_2020a_B.d_k++) {
    y[Template_v3_03_2020a_B.d_k] = 0.0;
    Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.d_k] =
      x[Template_v3_03_2020a_B.d_k];
  }

  for (Template_v3_03_2020a_B.d_k = 0; Template_v3_03_2020a_B.d_k < 6;
       Template_v3_03_2020a_B.d_k++) {
    Template_v3_03_2020a_B.ipiv[Template_v3_03_2020a_B.d_k] = static_cast<int8_T>
      (Template_v3_03_2020a_B.d_k + 1);
  }

  for (Template_v3_03_2020a_B.b_j = 0; Template_v3_03_2020a_B.b_j < 5;
       Template_v3_03_2020a_B.b_j++) {
    Template_v3_03_2020a_B.pipk = Template_v3_03_2020a_B.b_j * 7;
    Template_v3_03_2020a_B.iy = 0;
    Template_v3_03_2020a_B.ix = Template_v3_03_2020a_B.pipk;
    Template_v3_03_2020a_B.smax = fabs
      (Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.pipk]);
    Template_v3_03_2020a_B.d_k = 2;
    while (Template_v3_03_2020a_B.d_k <= 6 - Template_v3_03_2020a_B.b_j) {
      Template_v3_03_2020a_B.ix++;
      Template_v3_03_2020a_B.b_y = fabs
        (Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix]);
      if (Template_v3_03_2020a_B.b_y > Template_v3_03_2020a_B.smax) {
        Template_v3_03_2020a_B.iy = Template_v3_03_2020a_B.d_k - 1;
        Template_v3_03_2020a_B.smax = Template_v3_03_2020a_B.b_y;
      }

      Template_v3_03_2020a_B.d_k++;
    }

    if (Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.pipk +
        Template_v3_03_2020a_B.iy] != 0.0) {
      if (Template_v3_03_2020a_B.iy != 0) {
        Template_v3_03_2020a_B.iy += Template_v3_03_2020a_B.b_j;
        Template_v3_03_2020a_B.ipiv[Template_v3_03_2020a_B.b_j] =
          static_cast<int8_T>(Template_v3_03_2020a_B.iy + 1);
        Template_v3_03_2020a_B.ix = Template_v3_03_2020a_B.b_j;
        for (Template_v3_03_2020a_B.d_k = 0; Template_v3_03_2020a_B.d_k < 6;
             Template_v3_03_2020a_B.d_k++) {
          Template_v3_03_2020a_B.smax =
            Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix];
          Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix] =
            Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.iy];
          Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.iy] =
            Template_v3_03_2020a_B.smax;
          Template_v3_03_2020a_B.ix += 6;
          Template_v3_03_2020a_B.iy += 6;
        }
      }

      Template_v3_03_2020a_B.iy = (Template_v3_03_2020a_B.pipk -
        Template_v3_03_2020a_B.b_j) + 6;
      Template_v3_03_2020a_B.ix = Template_v3_03_2020a_B.pipk + 1;
      while (Template_v3_03_2020a_B.ix + 1 <= Template_v3_03_2020a_B.iy) {
        Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix] /=
          Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.pipk];
        Template_v3_03_2020a_B.ix++;
      }
    }

    Template_v3_03_2020a_B.iy = Template_v3_03_2020a_B.pipk;
    Template_v3_03_2020a_B.ix = Template_v3_03_2020a_B.pipk + 6;
    Template_v3_03_2020a_B.d_k = 0;
    while (Template_v3_03_2020a_B.d_k <= 4 - Template_v3_03_2020a_B.b_j) {
      if (Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix] != 0.0) {
        Template_v3_03_2020a_B.smax =
          -Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ix];
        Template_v3_03_2020a_B.c_ix = Template_v3_03_2020a_B.pipk + 1;
        Template_v3_03_2020a_B.d = (Template_v3_03_2020a_B.iy -
          Template_v3_03_2020a_B.b_j) + 12;
        Template_v3_03_2020a_B.ijA = Template_v3_03_2020a_B.iy + 7;
        while (Template_v3_03_2020a_B.ijA + 1 <= Template_v3_03_2020a_B.d) {
          Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.ijA] +=
            Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.c_ix] *
            Template_v3_03_2020a_B.smax;
          Template_v3_03_2020a_B.c_ix++;
          Template_v3_03_2020a_B.ijA++;
        }
      }

      Template_v3_03_2020a_B.ix += 6;
      Template_v3_03_2020a_B.iy += 6;
      Template_v3_03_2020a_B.d_k++;
    }
  }

  for (Template_v3_03_2020a_B.d_k = 0; Template_v3_03_2020a_B.d_k < 6;
       Template_v3_03_2020a_B.d_k++) {
    Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.d_k] = static_cast<int8_T>
      (Template_v3_03_2020a_B.d_k + 1);
  }

  for (Template_v3_03_2020a_B.b_j = 0; Template_v3_03_2020a_B.b_j < 5;
       Template_v3_03_2020a_B.b_j++) {
    if (Template_v3_03_2020a_B.ipiv[Template_v3_03_2020a_B.b_j] >
        Template_v3_03_2020a_B.b_j + 1) {
      Template_v3_03_2020a_B.d =
        Template_v3_03_2020a_B.ipiv[Template_v3_03_2020a_B.b_j] - 1;
      Template_v3_03_2020a_B.pipk =
        Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.d];
      Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.d] =
        Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.b_j];
      Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.b_j] = static_cast<int8_T>
        (Template_v3_03_2020a_B.pipk);
    }
  }

  for (Template_v3_03_2020a_B.b_j = 0; Template_v3_03_2020a_B.b_j < 6;
       Template_v3_03_2020a_B.b_j++) {
    Template_v3_03_2020a_B.d =
      Template_v3_03_2020a_B.p[Template_v3_03_2020a_B.b_j] - 1;
    y[Template_v3_03_2020a_B.b_j + 6 * Template_v3_03_2020a_B.d] = 1.0;
    Template_v3_03_2020a_B.iy = Template_v3_03_2020a_B.b_j;
    while (Template_v3_03_2020a_B.iy + 1 < 7) {
      Template_v3_03_2020a_B.d_k = 6 * Template_v3_03_2020a_B.d +
        Template_v3_03_2020a_B.iy;
      if (y[Template_v3_03_2020a_B.d_k] != 0.0) {
        Template_v3_03_2020a_B.ix = Template_v3_03_2020a_B.iy + 1;
        while (Template_v3_03_2020a_B.ix + 1 < 7) {
          Template_v3_03_2020a_B.c_ix = 6 * Template_v3_03_2020a_B.d +
            Template_v3_03_2020a_B.ix;
          y[Template_v3_03_2020a_B.c_ix] -= y[Template_v3_03_2020a_B.d_k] *
            Template_v3_03_2020a_B.A[6 * Template_v3_03_2020a_B.iy +
            Template_v3_03_2020a_B.ix];
          Template_v3_03_2020a_B.ix++;
        }
      }

      Template_v3_03_2020a_B.iy++;
    }
  }

  for (Template_v3_03_2020a_B.b_j = 0; Template_v3_03_2020a_B.b_j < 6;
       Template_v3_03_2020a_B.b_j++) {
    Template_v3_03_2020a_B.pipk = 6 * Template_v3_03_2020a_B.b_j;
    for (Template_v3_03_2020a_B.iy = 5; Template_v3_03_2020a_B.iy >= 0;
         Template_v3_03_2020a_B.iy--) {
      Template_v3_03_2020a_B.ix = 6 * Template_v3_03_2020a_B.iy;
      Template_v3_03_2020a_B.d_k = Template_v3_03_2020a_B.iy +
        Template_v3_03_2020a_B.pipk;
      if (y[Template_v3_03_2020a_B.d_k] != 0.0) {
        y[Template_v3_03_2020a_B.d_k] /=
          Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.iy +
          Template_v3_03_2020a_B.ix];
        Template_v3_03_2020a_B.d_k = 0;
        while (Template_v3_03_2020a_B.d_k <= Template_v3_03_2020a_B.iy - 1) {
          Template_v3_03_2020a_B.c_ix = Template_v3_03_2020a_B.d_k +
            Template_v3_03_2020a_B.pipk;
          y[Template_v3_03_2020a_B.c_ix] -= y[Template_v3_03_2020a_B.iy +
            Template_v3_03_2020a_B.pipk] *
            Template_v3_03_2020a_B.A[Template_v3_03_2020a_B.d_k +
            Template_v3_03_2020a_B.ix];
          Template_v3_03_2020a_B.d_k++;
        }
      }
    }
  }
}

// Function for MATLAB Function: '<S249>/Control Block'
static void Template_v3_03_2020a_mpower(const real_T a[36], real_T c[36])
{
  Template_v3_03_2020a_invNxN(a, c);
}

static real_T Temp_rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  // Uniform random number generator (random number between 0 and 1)

  // #define IA      16807                      magic multiplier = 7^5
  // #define IM      2147483647                 modulus = 2^31-1
  // #define IQ      127773                     IM div IA
  // #define IR      2836                       IM modulo IA
  // #define S       4.656612875245797e-10      reciprocal of 2^31-1
  // test = IA * (seed % IQ) - IR * (seed/IQ)
  // seed = test < 0 ? (test + IM) : test
  // return (seed*S)

  Template_v3_03_2020a_B.lo = *u % 127773U * 16807U;
  Template_v3_03_2020a_B.hi = *u / 127773U * 2836U;
  if (Template_v3_03_2020a_B.lo < Template_v3_03_2020a_B.hi) {
    *u = 2147483647U - (Template_v3_03_2020a_B.hi - Template_v3_03_2020a_B.lo);
  } else {
    *u = Template_v3_03_2020a_B.lo - Template_v3_03_2020a_B.hi;
  }

  return static_cast<real_T>(*u) * 4.6566128752457969E-10;
}

static real_T Temp_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u)
{
  real_T y;

  // Normal (Gaussian) random number generator
  do {
    Template_v3_03_2020a_B.sr = 2.0 * Temp_rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    Template_v3_03_2020a_B.si = 2.0 * Temp_rt_urand_Upu32_Yd_f_pw_snf(u) - 1.0;
    Template_v3_03_2020a_B.si = Template_v3_03_2020a_B.sr *
      Template_v3_03_2020a_B.sr + Template_v3_03_2020a_B.si *
      Template_v3_03_2020a_B.si;
  } while (Template_v3_03_2020a_B.si > 1.0);

  y = sqrt(-2.0 * log(Template_v3_03_2020a_B.si) / Template_v3_03_2020a_B.si) *
    Template_v3_03_2020a_B.sr;
  return y;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void Template_v3_03_2_rt_invd3x3_snf(const real_T u[9], real_T y[9])
{
  memcpy(&Template_v3_03_2020a_B.x_k[0], &u[0], 9U * sizeof(real_T));
  Template_v3_03_2020a_B.p1 = 1;
  Template_v3_03_2020a_B.p2_m = 3;
  Template_v3_03_2020a_B.p3_n = 6;
  Template_v3_03_2020a_B.absx11 = fabs(u[0]);
  Template_v3_03_2020a_B.absx21 = fabs(u[1]);
  Template_v3_03_2020a_B.absx31 = fabs(u[2]);
  if ((Template_v3_03_2020a_B.absx21 > Template_v3_03_2020a_B.absx11) &&
      (Template_v3_03_2020a_B.absx21 > Template_v3_03_2020a_B.absx31)) {
    Template_v3_03_2020a_B.p1 = 4;
    Template_v3_03_2020a_B.p2_m = 0;
    Template_v3_03_2020a_B.x_k[0] = u[1];
    Template_v3_03_2020a_B.x_k[1] = u[0];
    Template_v3_03_2020a_B.x_k[3] = u[4];
    Template_v3_03_2020a_B.x_k[4] = u[3];
    Template_v3_03_2020a_B.x_k[6] = u[7];
    Template_v3_03_2020a_B.x_k[7] = u[6];
  } else {
    if (Template_v3_03_2020a_B.absx31 > Template_v3_03_2020a_B.absx11) {
      Template_v3_03_2020a_B.p1 = 7;
      Template_v3_03_2020a_B.p3_n = 0;
      Template_v3_03_2020a_B.x_k[2] = Template_v3_03_2020a_B.x_k[0];
      Template_v3_03_2020a_B.x_k[0] = u[2];
      Template_v3_03_2020a_B.x_k[5] = Template_v3_03_2020a_B.x_k[3];
      Template_v3_03_2020a_B.x_k[3] = u[5];
      Template_v3_03_2020a_B.x_k[8] = Template_v3_03_2020a_B.x_k[6];
      Template_v3_03_2020a_B.x_k[6] = u[8];
    }
  }

  Template_v3_03_2020a_B.absx31 = Template_v3_03_2020a_B.x_k[1] /
    Template_v3_03_2020a_B.x_k[0];
  Template_v3_03_2020a_B.x_k[1] = Template_v3_03_2020a_B.absx31;
  Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x_k[2] /
    Template_v3_03_2020a_B.x_k[0];
  Template_v3_03_2020a_B.x_k[2] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.x_k[4] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x_k[3];
  Template_v3_03_2020a_B.x_k[5] -= Template_v3_03_2020a_B.absx11 *
    Template_v3_03_2020a_B.x_k[3];
  Template_v3_03_2020a_B.x_k[7] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x_k[6];
  Template_v3_03_2020a_B.x_k[8] -= Template_v3_03_2020a_B.absx11 *
    Template_v3_03_2020a_B.x_k[6];
  if (fabs(Template_v3_03_2020a_B.x_k[5]) > fabs(Template_v3_03_2020a_B.x_k[4]))
  {
    Template_v3_03_2020a_B.itmp_p = Template_v3_03_2020a_B.p2_m;
    Template_v3_03_2020a_B.p2_m = Template_v3_03_2020a_B.p3_n;
    Template_v3_03_2020a_B.p3_n = Template_v3_03_2020a_B.itmp_p;
    Template_v3_03_2020a_B.x_k[1] = Template_v3_03_2020a_B.absx11;
    Template_v3_03_2020a_B.x_k[2] = Template_v3_03_2020a_B.absx31;
    Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x_k[4];
    Template_v3_03_2020a_B.x_k[4] = Template_v3_03_2020a_B.x_k[5];
    Template_v3_03_2020a_B.x_k[5] = Template_v3_03_2020a_B.absx11;
    Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x_k[7];
    Template_v3_03_2020a_B.x_k[7] = Template_v3_03_2020a_B.x_k[8];
    Template_v3_03_2020a_B.x_k[8] = Template_v3_03_2020a_B.absx11;
  }

  Template_v3_03_2020a_B.absx31 = Template_v3_03_2020a_B.x_k[5] /
    Template_v3_03_2020a_B.x_k[4];
  Template_v3_03_2020a_B.x_k[8] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x_k[7];
  Template_v3_03_2020a_B.absx11 = (Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x_k[1] - Template_v3_03_2020a_B.x_k[2]) /
    Template_v3_03_2020a_B.x_k[8];
  Template_v3_03_2020a_B.absx21 = -(Template_v3_03_2020a_B.x_k[7] *
    Template_v3_03_2020a_B.absx11 + Template_v3_03_2020a_B.x_k[1]) /
    Template_v3_03_2020a_B.x_k[4];
  y[Template_v3_03_2020a_B.p1 - 1] = ((1.0 - Template_v3_03_2020a_B.x_k[3] *
    Template_v3_03_2020a_B.absx21) - Template_v3_03_2020a_B.x_k[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x_k[0];
  y[Template_v3_03_2020a_B.p1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p1 + 1] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.absx11 = -Template_v3_03_2020a_B.absx31 /
    Template_v3_03_2020a_B.x_k[8];
  Template_v3_03_2020a_B.absx21 = (1.0 - Template_v3_03_2020a_B.x_k[7] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x_k[4];
  y[Template_v3_03_2020a_B.p2_m] = -(Template_v3_03_2020a_B.x_k[3] *
    Template_v3_03_2020a_B.absx21 + Template_v3_03_2020a_B.x_k[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x_k[0];
  y[Template_v3_03_2020a_B.p2_m + 1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p2_m + 2] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.absx11 = 1.0 / Template_v3_03_2020a_B.x_k[8];
  Template_v3_03_2020a_B.absx21 = -Template_v3_03_2020a_B.x_k[7] *
    Template_v3_03_2020a_B.absx11 / Template_v3_03_2020a_B.x_k[4];
  y[Template_v3_03_2020a_B.p3_n] = -(Template_v3_03_2020a_B.x_k[3] *
    Template_v3_03_2020a_B.absx21 + Template_v3_03_2020a_B.x_k[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x_k[0];
  y[Template_v3_03_2020a_B.p3_n + 1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p3_n + 2] = Template_v3_03_2020a_B.absx11;
}

static void Template_v_SystemCore_release_a(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(10U);
  }
}

static void Template_v3_SystemCore_delete_a(const
  codertarget_linux_blocks_Digi_T *obj)
{
  Template_v_SystemCore_release_a(obj);
}

static void matlabCodegenHandle_matlabCod_a(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Template_v3_SystemCore_delete_a(obj);
  }
}

static void Template__SystemCore_release_az(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(26U);
  }
}

static void Template_v_SystemCore_delete_az(const
  codertarget_linux_blocks_Digi_T *obj)
{
  Template__SystemCore_release_az(obj);
}

static void matlabCodegenHandle_matlabCo_az(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Template_v_SystemCore_delete_az(obj);
  }
}

static void Template_SystemCore_release_az3(const
  raspi_internal_PWMBlock_Templ_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    EXT_PWMBlock_terminate(obj->PinNumber);
  }
}

static void Template__SystemCore_delete_az3(const
  raspi_internal_PWMBlock_Templ_T *obj)
{
  Template_SystemCore_release_az3(obj);
}

static void matlabCodegenHandle_matlabC_az3(raspi_internal_PWMBlock_Templ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Template__SystemCore_delete_az3(obj);
  }
}

static void SystemCore_release_az3k1jii5tit(const
  codertarget_linux_blocks_Di_a_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(24U);
  }
}

static void SystemCore_delete_az3k1jii5tit(const codertarget_linux_blocks_Di_a_T
  *obj)
{
  SystemCore_release_az3k1jii5tit(obj);
}

static void matlabCodegenHandl_az3k1jii5tit(codertarget_linux_blocks_Di_a_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete_az3k1jii5tit(obj);
  }
}

static void SystemCore_releas_az3k1jii5titu(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(23U);
  }
}

static void SystemCore_delete_az3k1jii5titu(const
  codertarget_linux_blocks_Digi_T *obj)
{
  SystemCore_releas_az3k1jii5titu(obj);
}

static void matlabCodegenHand_az3k1jii5titu(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete_az3k1jii5titu(obj);
  }
}

static void SystemCore_rele_az3k1jii5titugc(const
  codertarget_linux_blocks_Digi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_gpioTerminate(25U);
  }
}

static void SystemCore_dele_az3k1jii5titugc(const
  codertarget_linux_blocks_Digi_T *obj)
{
  SystemCore_rele_az3k1jii5titugc(obj);
}

static void matlabCodegenHa_az3k1jii5titugc(codertarget_linux_blocks_Digi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_dele_az3k1jii5titugc(obj);
  }
}

// Model step function for TID0
void Template_v3_03_2020a_step0(void)  // Sample time: [0.0s, 0.0s]
{
  {                                    // Sample time: [0.0s, 0.0s]
    rate_monotonic_scheduler();
  }

  {
    char_T *sErr;
    static const int8_T c[18] = { 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0,
      0, 0 };

    static const int8_T a[18] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
      0, 0 };

    static const int8_T b[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c_0[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    // If: '<Root>/Separate Phases' incorporates:
    //   Constant: '<Root>/Constant'
    //   Constant: '<Root>/Constant1'
    //   Constant: '<Root>/Constant2'
    //   Constant: '<Root>/Constant3'
    //   Constant: '<Root>/Constant4'
    //   Constant: '<Root>/Constant6'
    //   Constant: '<S13>/Constant'
    //   Constant: '<S355>/Constant'
    //   DataStoreRead: '<S15>/Universal_Time'
    //   If: '<S13>/This IF block determines whether or not to run the BLACK sim//exp'

    if (Template_v3_03_2020a_DW.Univ_Time < Template_v3_03_2020a_P.Phase0_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #0:  Wait for Synchronization' incorporates:
      //   ActionPort: '<S7>/Action Port'

      Phase0WaitforSynchronizatio
        (&Template_v3_03_2020a_P.Phase0WaitforSynchronization,
         &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
         &Template_v3_03_2020a_DW.BLACK_Tz, &Template_v3_03_2020a_DW.BLUE_Fx,
         &Template_v3_03_2020a_DW.BLUE_Fy, &Template_v3_03_2020a_DW.BLUE_Tz,
         &Template_v3_03_2020a_DW.Float_State, &Template_v3_03_2020a_DW.RED_Fx,
         &Template_v3_03_2020a_DW.RED_Fy, &Template_v3_03_2020a_DW.RED_Tz,
         &Template_v3_03_2020a_B.Subtract_o, &Template_v3_03_2020a_DW.RED_Tz_RW,
         &Template_v3_03_2020a_B.Sum6_l1, &Template_v3_03_2020a_B.Sum6_c);

      // End of Outputs for SubSystem: '<Root>/Phase #0:  Wait for Synchronization' 
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase1_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #1:  Start Floating ' incorporates:
      //   ActionPort: '<S8>/Action Port'

      Phase0WaitforSynchronizatio(&Template_v3_03_2020a_P.Phase1StartFloating,
        &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
        &Template_v3_03_2020a_DW.BLACK_Tz, &Template_v3_03_2020a_DW.BLUE_Fx,
        &Template_v3_03_2020a_DW.BLUE_Fy, &Template_v3_03_2020a_DW.BLUE_Tz,
        &Template_v3_03_2020a_DW.Float_State, &Template_v3_03_2020a_DW.RED_Fx,
        &Template_v3_03_2020a_DW.RED_Fy, &Template_v3_03_2020a_DW.RED_Tz,
        &Template_v3_03_2020a_B.Subtract_o, &Template_v3_03_2020a_DW.RED_Tz_RW,
        &Template_v3_03_2020a_B.Sum6_l1, &Template_v3_03_2020a_B.Sum6_c);

      // End of Outputs for SubSystem: '<Root>/Phase #1:  Start Floating '
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase2_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #2:  Move to  Initial Position' incorporates:
      //   ActionPort: '<S9>/Action Port'

      // If: '<S9>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S136>/Constant'
      //   Constant: '<S9>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S9>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S133>/Action Port'

        // Sum: '<S133>/Subtract' incorporates:
        //   Constant: '<S133>/Desired Px (BLACK)'
        //   DataStoreRead: '<S133>/BLACK_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.init_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S143>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ns != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_k =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S143>/Sum6' incorporates:
        //   Delay: '<S143>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_k;

        // If: '<S143>/if we went through a "step"' incorporates:
        //   Inport: '<S144>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S143>/Hold this value' incorporates:
          //   ActionPort: '<S144>/Action Port'

          Template_v3_03_2020a_B.In1_e = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S143>/Hold this value'
        }

        // End of If: '<S143>/if we went through a "step"'

        // Sum: '<S138>/Sum3' incorporates:
        //   DataStoreWrite: '<S133>/BLACK_Fx'
        //   Gain: '<S138>/kd_xb'
        //   Gain: '<S138>/kp_xb'
        //   Gain: '<S143>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_e *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.Subtract_o;

        // Sum: '<S133>/Subtract1' incorporates:
        //   Constant: '<S133>/Desired Py (BLACK)'
        //   DataStoreRead: '<S133>/BLACK_Py '

        Template_v3_03_2020a_B.Sum6_l1 =
          Template_v3_03_2020a_P.init_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S145>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_k1 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_d =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S145>/Sum6' incorporates:
        //   Delay: '<S145>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_d;

        // If: '<S145>/if we went through a "step"' incorporates:
        //   Inport: '<S146>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S145>/Hold this value' incorporates:
          //   ActionPort: '<S146>/Action Port'

          Template_v3_03_2020a_B.In1_gc = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S145>/Hold this value'
        }

        // End of If: '<S145>/if we went through a "step"'

        // Sum: '<S139>/Sum3' incorporates:
        //   DataStoreWrite: '<S133>/BLACK_Fy'
        //   Gain: '<S139>/kd_yb'
        //   Gain: '<S139>/kp_yb'
        //   Gain: '<S145>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_gc *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.Sum6_l1;

        // MATLAB Function: '<S140>/MATLAB Function2' incorporates:
        //   Constant: '<S133>/Desired Attitude (BLACK)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_o);

        // MATLAB Function: '<S140>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S133>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3);

        // Sum: '<S140>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_o.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_o.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3.Ox[1];

        // MATLAB Function: '<S140>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_o.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4);

        // Delay: '<S141>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ep != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_jd =
            Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;
        }

        // Sum: '<S141>/Sum6' incorporates:
        //   Delay: '<S141>/Delay1'

        Template_v3_03_2020a_B.Sum6_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_jd;

        // If: '<S141>/if we went through a "step"' incorporates:
        //   Inport: '<S142>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S141>/Hold this value' incorporates:
          //   ActionPort: '<S142>/Action Port'

          Template_v3_03_2020a_B.In1_fa = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S141>/Hold this value'
        }

        // End of If: '<S141>/if we went through a "step"'

        // Sum: '<S137>/Sum3' incorporates:
        //   DataStoreWrite: '<S133>/BLACK_Tz'
        //   Gain: '<S137>/kd_tb'
        //   Gain: '<S137>/kp_tb'
        //   Gain: '<S141>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fa *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;

        // DataStoreWrite: '<S133>/Data Store Write3' incorporates:
        //   Constant: '<S133>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value;

        // Update for Delay: '<S143>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ns = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_k =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S145>/Delay1'
        Template_v3_03_2020a_DW.icLoad_k1 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_d = Template_v3_03_2020a_B.Sum6_l1;

        // Update for Delay: '<S141>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ep = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_jd =
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;

        // End of Outputs for SubSystem: '<S9>/Change BLACK Behavior'
      }

      // End of If: '<S9>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S9>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S136>/Constant'
      //   Constant: '<S9>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S9>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S134>/Action Port'

        // Sum: '<S134>/Subtract' incorporates:
        //   Constant: '<S134>/Desired Px (BLUE)'
        //   DataStoreRead: '<S134>/BLUE_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.init_states_BLUE[0] -
          Template_v3_03_2020a_DW.BLUE_Px;

        // Delay: '<S156>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dy != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_fb =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S156>/Sum6' incorporates:
        //   Delay: '<S156>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_fb;

        // If: '<S156>/if we went through a "step"' incorporates:
        //   Inport: '<S157>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S156>/Hold this value' incorporates:
          //   ActionPort: '<S157>/Action Port'

          Template_v3_03_2020a_B.In1_lc = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S156>/Hold this value'
        }

        // End of If: '<S156>/if we went through a "step"'

        // Sum: '<S151>/Sum3' incorporates:
        //   DataStoreWrite: '<S134>/BLUE_Fx'
        //   Gain: '<S151>/kd_xb'
        //   Gain: '<S151>/kp_xb'
        //   Gain: '<S156>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_lc *
          Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
          Template_v3_03_2020a_B.Subtract_o;

        // Sum: '<S134>/Subtract1' incorporates:
        //   Constant: '<S134>/Desired Py (BLUE)'
        //   DataStoreRead: '<S134>/BLUE_Py '

        Template_v3_03_2020a_B.Sum6_l1 =
          Template_v3_03_2020a_P.init_states_BLUE[1] -
          Template_v3_03_2020a_DW.BLUE_Py;

        // Delay: '<S158>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_hf != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_n1 =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S158>/Sum6' incorporates:
        //   Delay: '<S158>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_n1;

        // If: '<S158>/if we went through a "step"' incorporates:
        //   Inport: '<S159>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S158>/Hold this value' incorporates:
          //   ActionPort: '<S159>/Action Port'

          Template_v3_03_2020a_B.In1_jwx = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S158>/Hold this value'
        }

        // End of If: '<S158>/if we went through a "step"'

        // Sum: '<S152>/Sum3' incorporates:
        //   DataStoreWrite: '<S134>/BLUE_Fy'
        //   Gain: '<S152>/kd_yb'
        //   Gain: '<S152>/kp_yb'
        //   Gain: '<S158>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jwx *
          Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
          Template_v3_03_2020a_B.Sum6_l1;

        // MATLAB Function: '<S153>/MATLAB Function2' incorporates:
        //   Constant: '<S134>/Desired Attitude (BLUE)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLUE[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_m);

        // MATLAB Function: '<S153>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S134>/BLUE_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLUE_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_c);

        // Sum: '<S153>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_m.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_m.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c.Ox[1];

        // MATLAB Function: '<S153>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_m.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_c);

        // Delay: '<S154>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_kl != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_cq =
            Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;
        }

        // Sum: '<S154>/Sum6' incorporates:
        //   Delay: '<S154>/Delay1'

        Template_v3_03_2020a_B.Sum6_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_cq;

        // If: '<S154>/if we went through a "step"' incorporates:
        //   Inport: '<S155>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S154>/Hold this value' incorporates:
          //   ActionPort: '<S155>/Action Port'

          Template_v3_03_2020a_B.In1_o = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S154>/Hold this value'
        }

        // End of If: '<S154>/if we went through a "step"'

        // Sum: '<S150>/Sum3' incorporates:
        //   DataStoreWrite: '<S134>/BLUE_Tz'
        //   Gain: '<S150>/kd_tb'
        //   Gain: '<S150>/kp_tb'
        //   Gain: '<S154>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_o *
          Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;

        // DataStoreWrite: '<S134>/Data Store Write3' incorporates:
        //   Constant: '<S134>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_o;

        // Update for Delay: '<S156>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dy = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_fb =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S158>/Delay1'
        Template_v3_03_2020a_DW.icLoad_hf = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_n1 =
          Template_v3_03_2020a_B.Sum6_l1;

        // Update for Delay: '<S154>/Delay1'
        Template_v3_03_2020a_DW.icLoad_kl = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_cq =
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;

        // End of Outputs for SubSystem: '<S9>/Change BLUE Behavior'
      }

      // End of If: '<S9>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S9>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S136>/Constant'
      //   Constant: '<S9>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S9>/Change RED Behavior' incorporates:
        //   ActionPort: '<S135>/Action Port'

        // MATLAB Function: '<S166>/MATLAB Function2' incorporates:
        //   Constant: '<S135>/Constant'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_ol);

        // MATLAB Function: '<S166>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S135>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_k);

        // Sum: '<S166>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_k.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_k.Ox[1];

        // MATLAB Function: '<S166>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_b);

        // Delay: '<S167>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ji != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_c =
            Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;
        }

        // Sum: '<S167>/Sum6' incorporates:
        //   Delay: '<S167>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_c;

        // If: '<S167>/if we went through a "step"' incorporates:
        //   Inport: '<S168>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S167>/Hold this value' incorporates:
          //   ActionPort: '<S168>/Action Port'

          Template_v3_03_2020a_B.In1_k = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S167>/Hold this value'
        }

        // End of If: '<S167>/if we went through a "step"'

        // Sum: '<S163>/Sum3' incorporates:
        //   DataStoreWrite: '<S135>/RED_Tz'
        //   Gain: '<S163>/kd_tr'
        //   Gain: '<S163>/kp_tr'
        //   Gain: '<S167>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_k * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;

        // Sum: '<S135>/Subtract' incorporates:
        //   Constant: '<S135>/Constant1'
        //   DataStoreRead: '<S135>/RED_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.init_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S169>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a1 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_bm =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S169>/Sum6' incorporates:
        //   Delay: '<S169>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_bm;

        // If: '<S169>/if we went through a "step"' incorporates:
        //   Inport: '<S170>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S169>/Hold this value' incorporates:
          //   ActionPort: '<S170>/Action Port'

          Template_v3_03_2020a_B.In1_cr = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S169>/Hold this value'
        }

        // End of If: '<S169>/if we went through a "step"'

        // Sum: '<S164>/Sum3' incorporates:
        //   DataStoreWrite: '<S135>/RED_Fx'
        //   Gain: '<S164>/kd_xr'
        //   Gain: '<S164>/kp_xr'
        //   Gain: '<S169>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_cr * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.Subtract_o;

        // DataStoreWrite: '<S135>/RED_Tz_RW1' incorporates:
        //   Constant: '<S135>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant2_Value;

        // Sum: '<S135>/Subtract1' incorporates:
        //   Constant: '<S135>/Constant3'
        //   DataStoreRead: '<S135>/RED_Py '

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_P.init_states_RED
          [1] - Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S171>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_o0 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_pr =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S171>/Sum6' incorporates:
        //   Delay: '<S171>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_pr;

        // If: '<S171>/if we went through a "step"' incorporates:
        //   Inport: '<S172>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S171>/Hold this value' incorporates:
          //   ActionPort: '<S172>/Action Port'

          Template_v3_03_2020a_B.In1_if = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S171>/Hold this value'
        }

        // End of If: '<S171>/if we went through a "step"'

        // Sum: '<S165>/Sum3' incorporates:
        //   DataStoreWrite: '<S135>/RED_Fy'
        //   Gain: '<S165>/kd_yr'
        //   Gain: '<S165>/kp_yr'
        //   Gain: '<S171>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_if * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.Sum6_l1;

        // DataStoreWrite: '<S135>/Data Store Write3' incorporates:
        //   Constant: '<S135>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_l;

        // Update for Delay: '<S167>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ji = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;

        // Update for Delay: '<S169>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a1 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_bm =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S171>/Delay1'
        Template_v3_03_2020a_DW.icLoad_o0 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_pr =
          Template_v3_03_2020a_B.Sum6_l1;

        // End of Outputs for SubSystem: '<S9>/Change RED Behavior'
      }

      // End of If: '<S9>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase3_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S10>/Action Port'

      // If: '<S10>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S179>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S176>/Action Port'

        // If: '<S176>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S176>/Constant1'
        //   Constant: '<S176>/Constant2'
        //   Constant: '<S176>/Constant3'
        //   Constant: '<S176>/Constant4'
        //   DataStoreRead: '<S184>/Universal_Time'
        //   MATLAB Function: '<S202>/MATLAB Function2'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S176>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S180>/Action Port'

          // Sum: '<S180>/Subtract' incorporates:
          //   Constant: '<S180>/Desired X-Position (BLACK)'
          //   DataStoreRead: '<S180>/BLACK_Px'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_P.init_states_BLACK[0] -
            Template_v3_03_2020a_DW.BLACK_Px;

          // Delay: '<S191>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ot != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_gi =
              Template_v3_03_2020a_B.Subtract_o;
          }

          // Sum: '<S191>/Sum6' incorporates:
          //   Delay: '<S191>/Delay1'

          Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
            Template_v3_03_2020a_DW.Delay1_DSTATE_gi;

          // If: '<S191>/if we went through a "step"' incorporates:
          //   Inport: '<S192>/In1'

          if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
            // Outputs for IfAction SubSystem: '<S191>/Hold this value' incorporates:
            //   ActionPort: '<S192>/Action Port'

            Template_v3_03_2020a_B.In1_cw = Template_v3_03_2020a_B.Sum6_l1;

            // End of Outputs for SubSystem: '<S191>/Hold this value'
          }

          // End of If: '<S191>/if we went through a "step"'

          // Sum: '<S186>/Sum3' incorporates:
          //   DataStoreWrite: '<S180>/BLACK_Fx'
          //   Gain: '<S186>/kd_xb'
          //   Gain: '<S186>/kp_xb'
          //   Gain: '<S191>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_cw *
            Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
            Template_v3_03_2020a_B.Subtract_o;

          // Sum: '<S180>/Subtract1' incorporates:
          //   Constant: '<S180>/Desired Y-Position (BLACK)'
          //   DataStoreRead: '<S180>/BLACK_Py '

          Template_v3_03_2020a_B.Sum6_l1 =
            Template_v3_03_2020a_P.init_states_BLACK[1] -
            Template_v3_03_2020a_DW.BLACK_Py;

          // Delay: '<S193>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_k != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_pe =
              Template_v3_03_2020a_B.Sum6_l1;
          }

          // Sum: '<S193>/Sum6' incorporates:
          //   Delay: '<S193>/Delay1'

          Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_pe;

          // If: '<S193>/if we went through a "step"' incorporates:
          //   Inport: '<S194>/In1'

          if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
            // Outputs for IfAction SubSystem: '<S193>/Hold this value' incorporates:
            //   ActionPort: '<S194>/Action Port'

            Template_v3_03_2020a_B.In1_ly = Template_v3_03_2020a_B.Sum6_c;

            // End of Outputs for SubSystem: '<S193>/Hold this value'
          }

          // End of If: '<S193>/if we went through a "step"'

          // Sum: '<S187>/Sum3' incorporates:
          //   DataStoreWrite: '<S180>/BLACK_Fy'
          //   Gain: '<S187>/kd_yb'
          //   Gain: '<S187>/kp_yb'
          //   Gain: '<S193>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ly *
            Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
            Template_v3_03_2020a_B.Sum6_l1;

          // MATLAB Function: '<S188>/MATLAB Function2' incorporates:
          //   Constant: '<S180>/Desired Attitude (BLACK)'

          Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLACK[2],
            &Template_v3_03_2020a_B.sf_MATLABFunction2_i);

          // MATLAB Function: '<S188>/MATLAB Function3' incorporates:
          //   DataStoreRead: '<S180>/BLACK_Rz'

          Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
            &Template_v3_03_2020a_B.sf_MATLABFunction3_l);

          // Sum: '<S188>/Subtract2'
          Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_i.Ox[0] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_l.Ox[0];
          Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_i.Ox[1] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_l.Ox[1];

          // MATLAB Function: '<S188>/MATLAB Function4'
          Template_v3_MATLABFunction4
            (Template_v3_03_2020a_B.sf_MATLABFunction2_i.Oy,
             Template_v3_03_2020a_B.rtb_Subtract2_f_g,
             &Template_v3_03_2020a_B.sf_MATLABFunction4_d);

          // Delay: '<S189>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_l != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_lu =
              Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;
          }

          // Sum: '<S189>/Sum6' incorporates:
          //   Delay: '<S189>/Delay1'

          Template_v3_03_2020a_B.Sum6_c =
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out -
            Template_v3_03_2020a_DW.Delay1_DSTATE_lu;

          // If: '<S189>/if we went through a "step"' incorporates:
          //   Inport: '<S190>/In1'

          if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
            // Outputs for IfAction SubSystem: '<S189>/Hold this value' incorporates:
            //   ActionPort: '<S190>/Action Port'

            Template_v3_03_2020a_B.In1_a = Template_v3_03_2020a_B.Sum6_c;

            // End of Outputs for SubSystem: '<S189>/Hold this value'
          }

          // End of If: '<S189>/if we went through a "step"'

          // Sum: '<S185>/Sum3' incorporates:
          //   DataStoreWrite: '<S180>/BLACK_Tz'
          //   Gain: '<S185>/kd_tb'
          //   Gain: '<S185>/kp_tb'
          //   Gain: '<S189>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_a *
            Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;

          // DataStoreWrite: '<S180>/Data Store Write3' incorporates:
          //   Constant: '<S180>/Puck State'

          Template_v3_03_2020a_DW.Float_State =
            Template_v3_03_2020a_P.PuckState_Value_n;

          // Update for Delay: '<S191>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ot = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_gi =
            Template_v3_03_2020a_B.Subtract_o;

          // Update for Delay: '<S193>/Delay1'
          Template_v3_03_2020a_DW.icLoad_k = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_pe =
            Template_v3_03_2020a_B.Sum6_l1;

          // Update for Delay: '<S189>/Delay1'
          Template_v3_03_2020a_DW.icLoad_l = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_lu =
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;

          // End of Outputs for SubSystem: '<S176>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S176>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S181>/Action Port'

          Template_v3_03_20_SubPhase2(&Template_v3_03_2020a_P.SubPhase2,
            &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
            &Template_v3_03_2020a_DW.BLACK_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S176>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S176>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S182>/Action Port'

          Template_v3_03_20_SubPhase2(&Template_v3_03_2020a_P.SubPhase3,
            &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
            &Template_v3_03_2020a_DW.BLACK_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S176>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S176>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S183>/Action Port'

            // Sum: '<S183>/Subtract' incorporates:
            //   Constant: '<S183>/Desired X-Position (BLACK)'
            //   DataStoreRead: '<S183>/BLACK_Px'

            Template_v3_03_2020a_B.Subtract_o = (Template_v3_03_2020a_P.xLength /
              2.0 - 0.4) - Template_v3_03_2020a_DW.BLACK_Px;

            // Delay: '<S208>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_b != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_bl =
                Template_v3_03_2020a_B.Subtract_o;
            }

            // Sum: '<S208>/Sum6' incorporates:
            //   Delay: '<S208>/Delay1'

            Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
              Template_v3_03_2020a_DW.Delay1_DSTATE_bl;

            // If: '<S208>/if we went through a "step"' incorporates:
            //   Inport: '<S209>/In1'

            if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
              // Outputs for IfAction SubSystem: '<S208>/Hold this value' incorporates:
              //   ActionPort: '<S209>/Action Port'

              Template_v3_03_2020a_B.In1_bd = Template_v3_03_2020a_B.Sum6_l1;

              // End of Outputs for SubSystem: '<S208>/Hold this value'
            }

            // End of If: '<S208>/if we went through a "step"'

            // Sum: '<S200>/Sum3' incorporates:
            //   DataStoreWrite: '<S183>/BLACK_Fx'
            //   Gain: '<S200>/kd_xb'
            //   Gain: '<S200>/kp_xb'
            //   Gain: '<S208>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bd *
              Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
              Template_v3_03_2020a_B.Subtract_o;

            // Sum: '<S183>/Subtract1' incorporates:
            //   Constant: '<S183>/Desired Y-Position (BLACK)'
            //   DataStoreRead: '<S183>/BLACK_Py '

            Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_P.yLength /
              2.0 - Template_v3_03_2020a_DW.BLACK_Py;

            // Delay: '<S210>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_n5 != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_g =
                Template_v3_03_2020a_B.Sum6_l1;
            }

            // Sum: '<S210>/Sum6' incorporates:
            //   Delay: '<S210>/Delay1'

            Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
              Template_v3_03_2020a_DW.Delay1_DSTATE_g;

            // If: '<S210>/if we went through a "step"' incorporates:
            //   Inport: '<S211>/In1'

            if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
              // Outputs for IfAction SubSystem: '<S210>/Hold this value' incorporates:
              //   ActionPort: '<S211>/Action Port'

              Template_v3_03_2020a_B.In1_l = Template_v3_03_2020a_B.Sum6_c;

              // End of Outputs for SubSystem: '<S210>/Hold this value'
            }

            // End of If: '<S210>/if we went through a "step"'

            // Sum: '<S201>/Sum3' incorporates:
            //   DataStoreWrite: '<S183>/BLACK_Fy'
            //   Gain: '<S201>/kd_yb'
            //   Gain: '<S201>/kp_yb'
            //   Gain: '<S210>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_l *
              Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
              Template_v3_03_2020a_B.Sum6_l1;

            // Product: '<S198>/Product' incorporates:
            //   Constant: '<S198>/Desired Rate (BLACK)'
            //   Constant: '<S203>/Constant1'
            //   DataStoreRead: '<S203>/Universal_Time'
            //   Sum: '<S203>/Subtract'

            Template_v3_03_2020a_B.Sum6_c = (Template_v3_03_2020a_DW.Univ_Time -
              Template_v3_03_2020a_P.Phase3_SubPhase3_End) *
              Template_v3_03_2020a_P.DesiredRateBLACK_Value;

            // MATLAB Function: '<S204>/MATLAB Function'
            // MATLAB Function 'Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function': '<S205>:1' 
            // '<S205>:1:3' wrappedAngle = atan2(sin(u),cos(u));
            Template_v3_03_2020a_B.Sum6_c = Template_v3_03_20_rt_atan2d_snf(sin
              (Template_v3_03_2020a_B.Sum6_c), cos(Template_v3_03_2020a_B.Sum6_c));

            // MATLAB Function: '<S202>/MATLAB Function2'
            // MATLAB Function 'Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function2': '<S212>:1' 
            // '<S212>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
            // '<S212>:1:7' Oy = [cos(z) sin(z); -sin(z) cos(z)]*[0;1];
            Template_v3_03_2020a_B.rtb_Oy_tmp = sin
              (Template_v3_03_2020a_B.Sum6_c);
            Template_v3_03_2020a_B.rtb_Oy_tmp_g = cos
              (Template_v3_03_2020a_B.Sum6_c);
            Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
              Template_v3_03_2020a_B.rtb_Oy_tmp_g * 0.0 +
              Template_v3_03_2020a_B.rtb_Oy_tmp;
            Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
              -Template_v3_03_2020a_B.rtb_Oy_tmp * 0.0;
            Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] +=
              Template_v3_03_2020a_B.rtb_Oy_tmp_g;

            // MATLAB Function: '<S202>/MATLAB Function3' incorporates:
            //   DataStoreRead: '<S183>/BLACK_Rz'
            //   MATLAB Function: '<S202>/MATLAB Function2'

            Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
              &Template_v3_03_2020a_B.sf_MATLABFunction3_b);

            // MATLAB Function: '<S202>/MATLAB Function2'
            Template_v3_03_2020a_B.rtb_Oy_tmp = cos
              (Template_v3_03_2020a_B.Sum6_c);
            Template_v3_03_2020a_B.Sum6_c = sin(Template_v3_03_2020a_B.Sum6_c);

            // Sum: '<S202>/Subtract2' incorporates:
            //   MATLAB Function: '<S202>/MATLAB Function2'

            Template_v3_03_2020a_B.rtb_Subtract2_d_f[0] =
              (Template_v3_03_2020a_B.Sum6_c * 0.0 +
               Template_v3_03_2020a_B.rtb_Oy_tmp) -
              Template_v3_03_2020a_B.sf_MATLABFunction3_b.Ox[0];
            Template_v3_03_2020a_B.rtb_Subtract2_d_f[1] =
              (Template_v3_03_2020a_B.rtb_Oy_tmp * 0.0 +
               -Template_v3_03_2020a_B.Sum6_c) -
              Template_v3_03_2020a_B.sf_MATLABFunction3_b.Ox[1];

            // MATLAB Function: '<S202>/MATLAB Function4'
            Template_v3_MATLABFunction4(Template_v3_03_2020a_B.rtb_Subtract2_f_g,
              Template_v3_03_2020a_B.rtb_Subtract2_d_f,
              &Template_v3_03_2020a_B.sf_MATLABFunction4_bk);

            // Delay: '<S206>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_fj != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_p0 =
                Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;
            }

            // Sum: '<S206>/Sum6' incorporates:
            //   Delay: '<S206>/Delay1'

            Template_v3_03_2020a_B.Sum6_c =
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out -
              Template_v3_03_2020a_DW.Delay1_DSTATE_p0;

            // If: '<S206>/if we went through a "step"' incorporates:
            //   Inport: '<S207>/In1'

            if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
              // Outputs for IfAction SubSystem: '<S206>/Hold this value' incorporates:
              //   ActionPort: '<S207>/Action Port'

              Template_v3_03_2020a_B.In1_gd = Template_v3_03_2020a_B.Sum6_c;

              // End of Outputs for SubSystem: '<S206>/Hold this value'
            }

            // End of If: '<S206>/if we went through a "step"'

            // Sum: '<S199>/Sum3' incorporates:
            //   DataStoreWrite: '<S183>/BLACK_Tz'
            //   Gain: '<S199>/kd_tb'
            //   Gain: '<S199>/kp_tb'
            //   Gain: '<S206>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_gd *
              Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;

            // DataStoreWrite: '<S183>/Data Store Write3' incorporates:
            //   Constant: '<S183>/Puck State'

            Template_v3_03_2020a_DW.Float_State =
              Template_v3_03_2020a_P.PuckState_Value_e;

            // Update for Delay: '<S208>/Delay1'
            Template_v3_03_2020a_DW.icLoad_b = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_bl =
              Template_v3_03_2020a_B.Subtract_o;

            // Update for Delay: '<S210>/Delay1'
            Template_v3_03_2020a_DW.icLoad_n5 = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_g =
              Template_v3_03_2020a_B.Sum6_l1;

            // Update for Delay: '<S206>/Delay1'
            Template_v3_03_2020a_DW.icLoad_fj = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_p0 =
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;

            // End of Outputs for SubSystem: '<S176>/Sub-Phase #4'
          }
        }

        // End of If: '<S176>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S10>/Change BLACK Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S10>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S179>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S177>/Action Port'

        // If: '<S177>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S177>/Constant1'
        //   Constant: '<S177>/Constant2'
        //   Constant: '<S177>/Constant3'
        //   Constant: '<S177>/Constant4'
        //   DataStoreRead: '<S219>/Universal_Time'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S177>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S215>/Action Port'

          Template_v3_03_20_SubPhase1(&Template_v3_03_2020a_B.SubPhase1_a,
            &Template_v3_03_2020a_DW.SubPhase1_a,
            &Template_v3_03_2020a_P.SubPhase1_a,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
            &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S177>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S177>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S216>/Action Port'

          Template_v3_03__SubPhase2_m(&Template_v3_03_2020a_P.SubPhase2_m,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S177>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S177>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S217>/Action Port'

          Template_v3_03__SubPhase2_m(&Template_v3_03_2020a_P.SubPhase3_p,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S177>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S177>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S218>/Action Port'

            Template_v3_03_20_SubPhase1(&Template_v3_03_2020a_B.SubPhase4_f,
              &Template_v3_03_2020a_DW.SubPhase4_f,
              &Template_v3_03_2020a_P.SubPhase4_f,
              &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
              &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
              &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
              &Template_v3_03_2020a_DW.Float_State);

            // End of Outputs for SubSystem: '<S177>/Sub-Phase #4'
          }
        }

        // End of If: '<S177>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S10>/Change BLUE Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S10>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S179>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change RED Behavior' incorporates:
        //   ActionPort: '<S178>/Action Port'

        // If: '<S178>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S178>/Constant1'
        //   Constant: '<S178>/Constant2'
        //   Constant: '<S178>/Constant3'
        //   Constant: '<S178>/Constant4'
        //   DataStoreRead: '<S250>/Universal_Time'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S178>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S246>/Action Port'

          // DataStoreWrite: '<S246>/RED_Tz_RW' incorporates:
          //   Constant: '<S246>/Constant1'

          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Constant1_Value;

          // MATLAB Function: '<S254>/MATLAB Function2' incorporates:
          //   Constant: '<S246>/Desired Attitude (RED)'

          Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_RED[2],
            &Template_v3_03_2020a_B.sf_MATLABFunction2_a);

          // MATLAB Function: '<S254>/MATLAB Function3' incorporates:
          //   DataStoreRead: '<S246>/RED_Rz'

          Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
            &Template_v3_03_2020a_B.sf_MATLABFunction3_bj);

          // Sum: '<S254>/Subtract2'
          Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_a.Ox[0] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_bj.Ox[0];
          Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_a.Ox[1] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_bj.Ox[1];

          // MATLAB Function: '<S254>/MATLAB Function4'
          Template_v3_MATLABFunction4
            (Template_v3_03_2020a_B.sf_MATLABFunction2_a.Oy,
             Template_v3_03_2020a_B.rtb_Subtract2_f_g,
             &Template_v3_03_2020a_B.sf_MATLABFunction4_k);

          // Delay: '<S255>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_n != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_a =
              Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;
          }

          // Sum: '<S255>/Sum6' incorporates:
          //   Delay: '<S255>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out -
            Template_v3_03_2020a_DW.Delay1_DSTATE_a;

          // If: '<S255>/if we went through a "step"' incorporates:
          //   Inport: '<S256>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S255>/Hold this value' incorporates:
            //   ActionPort: '<S256>/Action Port'

            Template_v3_03_2020a_B.In1_n = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S255>/Hold this value'
          }

          // End of If: '<S255>/if we went through a "step"'

          // Sum: '<S251>/Sum3' incorporates:
          //   DataStoreWrite: '<S246>/RED_Tz'
          //   Gain: '<S251>/kd_tr'
          //   Gain: '<S251>/kp_tr'
          //   Gain: '<S255>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Tz = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_n *
            Template_v3_03_2020a_P.Kd_tr + Template_v3_03_2020a_P.Kp_tr *
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;

          // Sum: '<S246>/Subtract' incorporates:
          //   Constant: '<S246>/Desired X-Position (RED)'
          //   DataStoreRead: '<S246>/RED_Px'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_P.init_states_RED[0] -
            Template_v3_03_2020a_DW.RED_Px;

          // Delay: '<S257>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_er != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_j =
              Template_v3_03_2020a_B.Subtract_o;
          }

          // Sum: '<S257>/Sum6' incorporates:
          //   Delay: '<S257>/Delay1'

          Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
            Template_v3_03_2020a_DW.Delay1_DSTATE_j;

          // If: '<S257>/if we went through a "step"' incorporates:
          //   Inport: '<S258>/In1'

          if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
            // Outputs for IfAction SubSystem: '<S257>/Hold this value' incorporates:
            //   ActionPort: '<S258>/Action Port'

            Template_v3_03_2020a_B.In1_jwe = Template_v3_03_2020a_B.Sum6_l1;

            // End of Outputs for SubSystem: '<S257>/Hold this value'
          }

          // End of If: '<S257>/if we went through a "step"'

          // Sum: '<S252>/Sum3' incorporates:
          //   DataStoreWrite: '<S246>/RED_Fx'
          //   Gain: '<S252>/kd_xr'
          //   Gain: '<S252>/kp_xr'
          //   Gain: '<S257>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Fx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jwe *
            Template_v3_03_2020a_P.Kd_xr + Template_v3_03_2020a_P.Kp_xr *
            Template_v3_03_2020a_B.Subtract_o;

          // Sum: '<S246>/Subtract1' incorporates:
          //   Constant: '<S246>/Desired Y-Position (RED)'
          //   DataStoreRead: '<S246>/RED_Py '

          Template_v3_03_2020a_B.Sum6_l1 =
            Template_v3_03_2020a_P.init_states_RED[1] -
            Template_v3_03_2020a_DW.RED_Py;

          // Delay: '<S259>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ej != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_bb =
              Template_v3_03_2020a_B.Sum6_l1;
          }

          // Sum: '<S259>/Sum6' incorporates:
          //   Delay: '<S259>/Delay1'

          Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_bb;

          // If: '<S259>/if we went through a "step"' incorporates:
          //   Inport: '<S260>/In1'

          if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
            // Outputs for IfAction SubSystem: '<S259>/Hold this value' incorporates:
            //   ActionPort: '<S260>/Action Port'

            Template_v3_03_2020a_B.In1_jw = Template_v3_03_2020a_B.Sum6_c;

            // End of Outputs for SubSystem: '<S259>/Hold this value'
          }

          // End of If: '<S259>/if we went through a "step"'

          // Sum: '<S253>/Sum3' incorporates:
          //   DataStoreWrite: '<S246>/RED_Fy'
          //   Gain: '<S253>/kd_yr'
          //   Gain: '<S253>/kp_yr'
          //   Gain: '<S259>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Fy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jw *
            Template_v3_03_2020a_P.Kd_yr + Template_v3_03_2020a_P.Kp_yr *
            Template_v3_03_2020a_B.Sum6_l1;

          // DataStoreWrite: '<S246>/Data Store Write3' incorporates:
          //   Constant: '<S246>/Puck State'

          Template_v3_03_2020a_DW.Float_State =
            Template_v3_03_2020a_P.PuckState_Value_c;

          // Update for Delay: '<S255>/Delay1'
          Template_v3_03_2020a_DW.icLoad_n = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_a =
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;

          // Update for Delay: '<S257>/Delay1'
          Template_v3_03_2020a_DW.icLoad_er = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_j =
            Template_v3_03_2020a_B.Subtract_o;

          // Update for Delay: '<S259>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ej = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_bb =
            Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S178>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S178>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S247>/Action Port'

          Template_v3_03__SubPhase2_g(&Template_v3_03_2020a_P.SubPhase2_g,
            &Template_v3_03_2020a_DW.Float_State,
            &Template_v3_03_2020a_DW.RED_Fx, &Template_v3_03_2020a_DW.RED_Fy,
            &Template_v3_03_2020a_DW.RED_Tz, &Template_v3_03_2020a_B.Subtract_o,
            &Template_v3_03_2020a_DW.RED_Tz_RW, &Template_v3_03_2020a_B.Sum6_l1,
            &Template_v3_03_2020a_B.Sum6_c);

          // End of Outputs for SubSystem: '<S178>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S178>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S248>/Action Port'

          Template_v3_03__SubPhase2_g(&Template_v3_03_2020a_P.SubPhase3_b,
            &Template_v3_03_2020a_DW.Float_State,
            &Template_v3_03_2020a_DW.RED_Fx, &Template_v3_03_2020a_DW.RED_Fy,
            &Template_v3_03_2020a_DW.RED_Tz, &Template_v3_03_2020a_B.Subtract_o,
            &Template_v3_03_2020a_DW.RED_Tz_RW, &Template_v3_03_2020a_B.Sum6_l1,
            &Template_v3_03_2020a_B.Sum6_c);

          // End of Outputs for SubSystem: '<S178>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S178>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S249>/Action Port'

            // DataStoreWrite: '<S249>/RED_Tz_RW' incorporates:
            //   Constant: '<S249>/Constant1'

            Template_v3_03_2020a_DW.RED_Tz_RW =
              Template_v3_03_2020a_P.Constant1_Value_f;

            // SignalConversion generated from: '<S264>/ SFunction ' incorporates:
            //   DataStoreRead: '<S265>/BLACK_Px'
            //   DataStoreRead: '<S265>/BLACK_Py '
            //   DataStoreRead: '<S265>/BLACK_Rz'
            //   DataStoreRead: '<S265>/RED_Px'
            //   DataStoreRead: '<S265>/RED_Py '
            //   DataStoreRead: '<S265>/RED_Rz'
            //   MATLAB Function: '<S249>/Control Block'

            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[0] =
              Template_v3_03_2020a_DW.RED_Px;
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[1] =
              Template_v3_03_2020a_DW.RED_Py;
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[2] =
              Template_v3_03_2020a_DW.RED_Rz;
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[3] =
              Template_v3_03_2020a_DW.BLACK_Px;
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[4] =
              Template_v3_03_2020a_DW.BLACK_Py;
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[5] =
              Template_v3_03_2020a_DW.BLACK_Rz;

            // MATLAB Function: '<S249>/Control Block' incorporates:
            //   Constant: '<S249>/External Forces (if any)'
            //   DataStoreRead: '<S265>/BLACK_Px'
            //   DataStoreRead: '<S265>/BLACK_Py '
            //   DataStoreRead: '<S265>/BLACK_Rz'
            //   DataStoreRead: '<S265>/RED_Px'
            //   DataStoreRead: '<S265>/RED_Py '
            //   DataStoreRead: '<S265>/RED_Rz'
            //   DataStoreRead: '<S265>/RED_RzD'
            //   DataStoreRead: '<S265>/RED_RzD1'
            //   DataStoreRead: '<S265>/RED_Vx'
            //   DataStoreRead: '<S265>/RED_Vx1'
            //   DataStoreRead: '<S265>/RED_Vy'
            //   DataStoreRead: '<S265>/RED_Vy1'
            //   SignalConversion generated from: '<S264>/ SFunction '

            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 6;
                 Template_v3_03_2020a_B.i++) {
              Template_v3_03_2020a_B.q[Template_v3_03_2020a_B.i] =
                Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[Template_v3_03_2020a_B.i];
            }

            // MATLAB Function 'Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Control Block': '<S264>:1' 
            // '<S264>:1:3' REDMass = model_param(1);
            // '<S264>:1:4' REDInertia = model_param(2);
            // '<S264>:1:5' BLACKMass = model_param(3);
            // '<S264>:1:6' BLACKInertia = model_param(4);
            // '<S264>:1:8' M = diag([REDMass REDMass REDInertia BLACKMass BLACKMass BLACKInertia]); 
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[0] =
              Template_v3_03_2020a_P.model_param[0];
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[1] =
              Template_v3_03_2020a_P.model_param[0];
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[2] =
              Template_v3_03_2020a_P.model_param[1];
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[3] =
              Template_v3_03_2020a_P.model_param[2];
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[4] =
              Template_v3_03_2020a_P.model_param[2];
            Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[5] =
              Template_v3_03_2020a_P.model_param[3];
            memset(&Template_v3_03_2020a_B.M[0], 0, 36U * sizeof(real_T));
            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 6;
                 Template_v3_03_2020a_B.i++) {
              Template_v3_03_2020a_B.M[Template_v3_03_2020a_B.i + 6 *
                Template_v3_03_2020a_B.i] =
                Template_v3_03_2020a_B.TmpSignalConversionAtSFunct[Template_v3_03_2020a_B.i];
            }

            // '<S264>:1:10' alpha = [2 2 2]';
            // '<S264>:1:11' gamma = [1 1 1]';
            // '<S264>:1:13' L0 = 0.70;
            // '<S264>:1:15' Ac = [diag([1 1 1]) zeros(3,3)];
            // '<S264>:1:18' if q(3) < -pi/2 && q(6) > pi/2
            if ((Template_v3_03_2020a_DW.RED_Rz < -1.5707963267948966) &&
                (Template_v3_03_2020a_DW.BLACK_Rz > 1.5707963267948966)) {
              // '<S264>:1:19' q(3) = q(3) + 2*pi;
              Template_v3_03_2020a_B.q[2] = Template_v3_03_2020a_DW.RED_Rz +
                6.2831853071795862;
            } else {
              if ((Template_v3_03_2020a_DW.RED_Rz > 1.5707963267948966) &&
                  (Template_v3_03_2020a_DW.BLACK_Rz < -1.5707963267948966)) {
                // '<S264>:1:20' elseif q(3) > pi/2 && q(6) < -pi/2
                // '<S264>:1:21' q(3) = q(3) - 2*pi;
                Template_v3_03_2020a_B.q[2] = Template_v3_03_2020a_DW.RED_Rz -
                  6.2831853071795862;
              }
            }

            // '<S264>:1:24' b1 = -L0*cos(q(6))*qd(6)^2-alpha(1)*(qd(1)-qd(4)+L0*sin(q(6))*qd(6))-gamma(1)*(q(1)-q(4)-L0*cos(q(6))); 
            // '<S264>:1:25' b2 = -L0*sin(q(6))*qd(6)^2-alpha(2)*(qd(2)-qd(5)-L0*cos(q(6))*qd(6))-gamma(2)*(q(2)-q(5)-L0*sin(q(6))); 
            // '<S264>:1:26' b3 = -alpha(3)*(qd(3)-qd(6))-gamma(3)*(q(3)-q(6)-pi); 
            // '<S264>:1:28' bc = [b1; b2; b3];
            // '<S264>:1:30' Fc = (Ac')*(Ac*M^(-1)*Ac')^(-1)*(bc-Ac*M^(-1)*Gamma); 
            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 18;
                 Template_v3_03_2020a_B.i++) {
              Template_v3_03_2020a_B.y_tmp_cv[Template_v3_03_2020a_B.i] =
                c[Template_v3_03_2020a_B.i];
            }

            Template_v3_03_2020a_mpower(Template_v3_03_2020a_B.M,
              Template_v3_03_2020a_B.dv);
            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
                 Template_v3_03_2020a_B.i++) {
              for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 6;
                   Template_v3_03_2020a_B.p3++) {
                Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.i + 3 *
                  Template_v3_03_2020a_B.p3;
                Template_v3_03_2020a_B.y_tmp[Template_v3_03_2020a_B.p2] = 0.0;
                for (Template_v3_03_2020a_B.ntIdx0 = 0;
                     Template_v3_03_2020a_B.ntIdx0 < 6;
                     Template_v3_03_2020a_B.ntIdx0++) {
                  Template_v3_03_2020a_B.y_tmp[Template_v3_03_2020a_B.p2] +=
                    static_cast<real_T>(a[3 * Template_v3_03_2020a_B.ntIdx0 +
                                        Template_v3_03_2020a_B.i]) *
                    Template_v3_03_2020a_B.dv[6 * Template_v3_03_2020a_B.p3 +
                    Template_v3_03_2020a_B.ntIdx0];
                }
              }

              for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
                   Template_v3_03_2020a_B.p3++) {
                Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.i + 3 *
                  Template_v3_03_2020a_B.p3;
                Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p2] = 0.0;
                for (Template_v3_03_2020a_B.ntIdx0 = 0;
                     Template_v3_03_2020a_B.ntIdx0 < 6;
                     Template_v3_03_2020a_B.ntIdx0++) {
                  Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p2] +=
                    Template_v3_03_2020a_B.y_tmp[3 *
                    Template_v3_03_2020a_B.ntIdx0 + Template_v3_03_2020a_B.i] *
                    static_cast<real_T>(Template_v3_03_2020a_B.y_tmp_cv[6 *
                                        Template_v3_03_2020a_B.p3 +
                                        Template_v3_03_2020a_B.ntIdx0]);
                }
              }
            }

            memcpy(&Template_v3_03_2020a_B.x[0], &Template_v3_03_2020a_B.y[0],
                   9U * sizeof(real_T));
            Template_v3_03_2020a_B.i = 0;
            Template_v3_03_2020a_B.p2 = 3;
            Template_v3_03_2020a_B.p3 = 6;
            Template_v3_03_2020a_B.Subtract_o = fabs(Template_v3_03_2020a_B.y[0]);
            Template_v3_03_2020a_B.Sum6_l1 = fabs(Template_v3_03_2020a_B.y[1]);
            Template_v3_03_2020a_B.Sum6_c = fabs(Template_v3_03_2020a_B.y[2]);
            if ((Template_v3_03_2020a_B.Sum6_l1 >
                 Template_v3_03_2020a_B.Subtract_o) &&
                (Template_v3_03_2020a_B.Sum6_l1 > Template_v3_03_2020a_B.Sum6_c))
            {
              Template_v3_03_2020a_B.i = 3;
              Template_v3_03_2020a_B.p2 = 0;
              Template_v3_03_2020a_B.x[0] = Template_v3_03_2020a_B.y[1];
              Template_v3_03_2020a_B.x[1] = Template_v3_03_2020a_B.y[0];
              Template_v3_03_2020a_B.x[3] = Template_v3_03_2020a_B.y[4];
              Template_v3_03_2020a_B.x[4] = Template_v3_03_2020a_B.y[3];
              Template_v3_03_2020a_B.x[6] = Template_v3_03_2020a_B.y[7];
              Template_v3_03_2020a_B.x[7] = Template_v3_03_2020a_B.y[6];
            } else {
              if (Template_v3_03_2020a_B.Sum6_c >
                  Template_v3_03_2020a_B.Subtract_o) {
                Template_v3_03_2020a_B.i = 6;
                Template_v3_03_2020a_B.p3 = 0;
                Template_v3_03_2020a_B.x[0] = Template_v3_03_2020a_B.y[2];
                Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.y[0];
                Template_v3_03_2020a_B.x[3] = Template_v3_03_2020a_B.y[5];
                Template_v3_03_2020a_B.x[5] = Template_v3_03_2020a_B.y[3];
                Template_v3_03_2020a_B.x[6] = Template_v3_03_2020a_B.y[8];
                Template_v3_03_2020a_B.x[8] = Template_v3_03_2020a_B.y[6];
              }
            }

            Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.x[1] /
              Template_v3_03_2020a_B.x[0];
            Template_v3_03_2020a_B.x[1] = Template_v3_03_2020a_B.Sum6_c;
            Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.x[2] /
              Template_v3_03_2020a_B.x[0];
            Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.Subtract_o;
            Template_v3_03_2020a_B.x[4] -= Template_v3_03_2020a_B.Sum6_c *
              Template_v3_03_2020a_B.x[3];
            Template_v3_03_2020a_B.x[5] -= Template_v3_03_2020a_B.Subtract_o *
              Template_v3_03_2020a_B.x[3];
            Template_v3_03_2020a_B.x[7] -= Template_v3_03_2020a_B.Sum6_c *
              Template_v3_03_2020a_B.x[6];
            Template_v3_03_2020a_B.x[8] -= Template_v3_03_2020a_B.Subtract_o *
              Template_v3_03_2020a_B.x[6];
            if (fabs(Template_v3_03_2020a_B.x[5]) > fabs
                (Template_v3_03_2020a_B.x[4])) {
              Template_v3_03_2020a_B.itmp = Template_v3_03_2020a_B.p2;
              Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3;
              Template_v3_03_2020a_B.p3 = Template_v3_03_2020a_B.itmp;
              Template_v3_03_2020a_B.x[1] = Template_v3_03_2020a_B.Subtract_o;
              Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.Sum6_c;
              Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.x[4];
              Template_v3_03_2020a_B.x[4] = Template_v3_03_2020a_B.x[5];
              Template_v3_03_2020a_B.x[5] = Template_v3_03_2020a_B.Subtract_o;
              Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.x[7];
              Template_v3_03_2020a_B.x[7] = Template_v3_03_2020a_B.x[8];
              Template_v3_03_2020a_B.x[8] = Template_v3_03_2020a_B.Subtract_o;
            }

            Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.x[5] /
              Template_v3_03_2020a_B.x[4];
            Template_v3_03_2020a_B.x[8] -= Template_v3_03_2020a_B.Sum6_c *
              Template_v3_03_2020a_B.x[7];
            Template_v3_03_2020a_B.Subtract_o = (Template_v3_03_2020a_B.Sum6_c *
              Template_v3_03_2020a_B.x[1] - Template_v3_03_2020a_B.x[2]) /
              Template_v3_03_2020a_B.x[8];
            Template_v3_03_2020a_B.Sum6_l1 = -(Template_v3_03_2020a_B.x[7] *
              Template_v3_03_2020a_B.Subtract_o + Template_v3_03_2020a_B.x[1]) /
              Template_v3_03_2020a_B.x[4];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.i] = ((1.0 -
              Template_v3_03_2020a_B.x[3] * Template_v3_03_2020a_B.Sum6_l1) -
              Template_v3_03_2020a_B.x[6] * Template_v3_03_2020a_B.Subtract_o) /
              Template_v3_03_2020a_B.x[0];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.i + 1] =
              Template_v3_03_2020a_B.Sum6_l1;
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.i + 2] =
              Template_v3_03_2020a_B.Subtract_o;
            Template_v3_03_2020a_B.Subtract_o = -Template_v3_03_2020a_B.Sum6_c /
              Template_v3_03_2020a_B.x[8];
            Template_v3_03_2020a_B.Sum6_l1 = (1.0 - Template_v3_03_2020a_B.x[7] *
              Template_v3_03_2020a_B.Subtract_o) / Template_v3_03_2020a_B.x[4];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p2] =
              -(Template_v3_03_2020a_B.x[3] * Template_v3_03_2020a_B.Sum6_l1 +
                Template_v3_03_2020a_B.x[6] * Template_v3_03_2020a_B.Subtract_o)
              / Template_v3_03_2020a_B.x[0];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p2 + 1] =
              Template_v3_03_2020a_B.Sum6_l1;
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p2 + 2] =
              Template_v3_03_2020a_B.Subtract_o;
            Template_v3_03_2020a_B.Subtract_o = 1.0 / Template_v3_03_2020a_B.x[8];
            Template_v3_03_2020a_B.Sum6_l1 = -Template_v3_03_2020a_B.x[7] *
              Template_v3_03_2020a_B.Subtract_o / Template_v3_03_2020a_B.x[4];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p3] =
              -(Template_v3_03_2020a_B.x[3] * Template_v3_03_2020a_B.Sum6_l1 +
                Template_v3_03_2020a_B.x[6] * Template_v3_03_2020a_B.Subtract_o)
              / Template_v3_03_2020a_B.x[0];
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p3 + 1] =
              Template_v3_03_2020a_B.Sum6_l1;
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.p3 + 2] =
              Template_v3_03_2020a_B.Subtract_o;

            // '<S264>:1:34' ChaserGenForce = Fc(1:3,1);
            Template_v3_03_2020a_B.Sum6_c = cos(Template_v3_03_2020a_DW.BLACK_Rz);
            Template_v3_03_2020a_B.Sum6_l1 = sin
              (Template_v3_03_2020a_DW.BLACK_Rz);
            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
                 Template_v3_03_2020a_B.i++) {
              Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] = 0.0;
              for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 6;
                   Template_v3_03_2020a_B.p3++) {
                Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 6 *
                  Template_v3_03_2020a_B.i;
                Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.p2] = 0.0;
                Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.p2] +=
                  Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i] *
                  static_cast<real_T>
                  (Template_v3_03_2020a_B.y_tmp_cv[Template_v3_03_2020a_B.p3]);
                Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.p2] +=
                  Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 1] *
                  static_cast<real_T>
                  (Template_v3_03_2020a_B.y_tmp_cv[Template_v3_03_2020a_B.p3 + 6]);
                Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.p2] +=
                  Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 2] *
                  static_cast<real_T>
                  (Template_v3_03_2020a_B.y_tmp_cv[Template_v3_03_2020a_B.p3 +
                   12]);
                Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] +=
                  Template_v3_03_2020a_B.y_tmp[3 * Template_v3_03_2020a_B.p3 +
                  Template_v3_03_2020a_B.i] *
                  Template_v3_03_2020a_P.ExternalForcesifany_Value[Template_v3_03_2020a_B.p3];
              }
            }

            Template_v3_03_2020a_B.Subtract_o = ((-0.7 *
              Template_v3_03_2020a_B.Sum6_c * (Template_v3_03_2020a_DW.BLACK_RzD
              * Template_v3_03_2020a_DW.BLACK_RzD) - (0.7 *
              Template_v3_03_2020a_B.Sum6_l1 * Template_v3_03_2020a_DW.BLACK_RzD
              + (Template_v3_03_2020a_DW.RED_Vx -
                 Template_v3_03_2020a_DW.BLACK_Vx)) * 2.0) -
              ((Template_v3_03_2020a_DW.RED_Px -
                Template_v3_03_2020a_DW.BLACK_Px) - 0.7 *
               Template_v3_03_2020a_B.Sum6_c)) -
              Template_v3_03_2020a_B.x_ddot_d[0];
            Template_v3_03_2020a_B.Sum6_l1 = ((-0.7 *
              Template_v3_03_2020a_B.Sum6_l1 *
              (Template_v3_03_2020a_DW.BLACK_RzD *
               Template_v3_03_2020a_DW.BLACK_RzD) -
              ((Template_v3_03_2020a_DW.RED_Vy -
                Template_v3_03_2020a_DW.BLACK_Vy) - 0.7 *
               Template_v3_03_2020a_B.Sum6_c * Template_v3_03_2020a_DW.BLACK_RzD)
              * 2.0) - ((Template_v3_03_2020a_DW.RED_Py -
                         Template_v3_03_2020a_DW.BLACK_Py) - 0.7 * sin
                        (Template_v3_03_2020a_DW.BLACK_Rz))) -
              Template_v3_03_2020a_B.x_ddot_d[1];
            Template_v3_03_2020a_B.Sum6_c = ((Template_v3_03_2020a_DW.RED_RzD -
              Template_v3_03_2020a_DW.BLACK_RzD) * -2.0 -
              ((Template_v3_03_2020a_B.q[2] - Template_v3_03_2020a_DW.BLACK_Rz)
               - 3.1415926535897931)) - Template_v3_03_2020a_B.x_ddot_d[2];
            for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 6;
                 Template_v3_03_2020a_B.i++) {
              Template_v3_03_2020a_B.q[Template_v3_03_2020a_B.i] =
                Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.i + 12] *
                Template_v3_03_2020a_B.Sum6_c +
                (Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.i + 6] *
                 Template_v3_03_2020a_B.Sum6_l1 +
                 Template_v3_03_2020a_B.y_tmp_c[Template_v3_03_2020a_B.i] *
                 Template_v3_03_2020a_B.Subtract_o);
            }

            // DataStoreWrite: '<S249>/RED_Fx' incorporates:
            //   MATLAB Function: '<S249>/Control Block'

            Template_v3_03_2020a_DW.RED_Fx = Template_v3_03_2020a_B.q[0];

            // DataStoreWrite: '<S249>/RED_Fy' incorporates:
            //   MATLAB Function: '<S249>/Control Block'

            Template_v3_03_2020a_DW.RED_Fy = Template_v3_03_2020a_B.q[1];

            // DataStoreWrite: '<S249>/RED_Tz' incorporates:
            //   MATLAB Function: '<S249>/Control Block'

            Template_v3_03_2020a_DW.RED_Tz = Template_v3_03_2020a_B.q[2];

            // DataStoreWrite: '<S249>/Data Store Write3' incorporates:
            //   Constant: '<S249>/Puck State'

            Template_v3_03_2020a_DW.Float_State =
              Template_v3_03_2020a_P.PuckState_Value_f;

            // End of Outputs for SubSystem: '<S178>/Sub-Phase #4'
          }
        }

        // End of If: '<S178>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S10>/Change RED Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #3: Experiment'
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase4_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #4:  Return Home' incorporates:
      //   ActionPort: '<S11>/Action Port'

      // If: '<S11>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S269>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S266>/Action Port'

        // Sum: '<S266>/Subtract' incorporates:
        //   Constant: '<S266>/Desired Px (BLACK)'
        //   DataStoreRead: '<S266>/BLACK_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.home_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S276>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dq != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_lt =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S276>/Sum6' incorporates:
        //   Delay: '<S276>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_lt;

        // If: '<S276>/if we went through a "step"' incorporates:
        //   Inport: '<S277>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S276>/Hold this value' incorporates:
          //   ActionPort: '<S277>/Action Port'

          Template_v3_03_2020a_B.In1_fx = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S276>/Hold this value'
        }

        // End of If: '<S276>/if we went through a "step"'

        // Sum: '<S271>/Sum3' incorporates:
        //   DataStoreWrite: '<S266>/BLACK_Fx'
        //   Gain: '<S271>/kd_xb'
        //   Gain: '<S271>/kp_xb'
        //   Gain: '<S276>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fx *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.Subtract_o;

        // Sum: '<S266>/Subtract1' incorporates:
        //   Constant: '<S266>/Desired Py (BLACK)'
        //   DataStoreRead: '<S266>/BLACK_Py '

        Template_v3_03_2020a_B.Sum6_l1 =
          Template_v3_03_2020a_P.home_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S278>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_h != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_im =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S278>/Sum6' incorporates:
        //   Delay: '<S278>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_im;

        // If: '<S278>/if we went through a "step"' incorporates:
        //   Inport: '<S279>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S278>/Hold this value' incorporates:
          //   ActionPort: '<S279>/Action Port'

          Template_v3_03_2020a_B.In1_d0 = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S278>/Hold this value'
        }

        // End of If: '<S278>/if we went through a "step"'

        // Sum: '<S272>/Sum3' incorporates:
        //   DataStoreWrite: '<S266>/BLACK_Fy'
        //   Gain: '<S272>/kd_yb'
        //   Gain: '<S272>/kp_yb'
        //   Gain: '<S278>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_d0 *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.Sum6_l1;

        // MATLAB Function: '<S273>/MATLAB Function2' incorporates:
        //   Constant: '<S266>/Desired Attitude (BLACK)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_p);

        // MATLAB Function: '<S273>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S266>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_bv);

        // Sum: '<S273>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_p.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bv.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_p.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bv.Ox[1];

        // MATLAB Function: '<S273>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_p.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_l);

        // Delay: '<S274>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_o != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_f =
            Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;
        }

        // Sum: '<S274>/Sum6' incorporates:
        //   Delay: '<S274>/Delay1'

        Template_v3_03_2020a_B.Sum6_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_f;

        // If: '<S274>/if we went through a "step"' incorporates:
        //   Inport: '<S275>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S274>/Hold this value' incorporates:
          //   ActionPort: '<S275>/Action Port'

          Template_v3_03_2020a_B.In1_fk = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S274>/Hold this value'
        }

        // End of If: '<S274>/if we went through a "step"'

        // Sum: '<S270>/Sum3' incorporates:
        //   DataStoreWrite: '<S266>/BLACK_Tz'
        //   Gain: '<S270>/kd_tb'
        //   Gain: '<S270>/kp_tb'
        //   Gain: '<S274>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fk *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;

        // DataStoreWrite: '<S266>/Data Store Write3' incorporates:
        //   Constant: '<S266>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_fj;

        // Update for Delay: '<S276>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dq = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_lt =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S278>/Delay1'
        Template_v3_03_2020a_DW.icLoad_h = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_im =
          Template_v3_03_2020a_B.Sum6_l1;

        // Update for Delay: '<S274>/Delay1'
        Template_v3_03_2020a_DW.icLoad_o = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_f =
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;

        // End of Outputs for SubSystem: '<S11>/Change BLACK Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S11>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S269>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S267>/Action Port'

        Templa_ChangeBLUEBehavior_g
          (&Template_v3_03_2020a_B.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_DW.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_P.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
           &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
           &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
           &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S11>/Change BLUE Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S11>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S269>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change RED Behavior' incorporates:
        //   ActionPort: '<S268>/Action Port'

        // MATLAB Function: '<S299>/MATLAB Function2' incorporates:
        //   Constant: '<S268>/Constant'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_ia);

        // MATLAB Function: '<S299>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S268>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_c1);

        // Sum: '<S299>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c1.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c1.Ox[1];

        // MATLAB Function: '<S299>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_n);

        // Delay: '<S300>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dh != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_i =
            Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;
        }

        // Sum: '<S300>/Sum6' incorporates:
        //   Delay: '<S300>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_i;

        // If: '<S300>/if we went through a "step"' incorporates:
        //   Inport: '<S301>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S300>/Hold this value' incorporates:
          //   ActionPort: '<S301>/Action Port'

          Template_v3_03_2020a_B.In1_h = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S300>/Hold this value'
        }

        // End of If: '<S300>/if we went through a "step"'

        // Sum: '<S296>/Sum3' incorporates:
        //   DataStoreWrite: '<S268>/RED_Tz'
        //   Gain: '<S296>/kd_tr'
        //   Gain: '<S296>/kp_tr'
        //   Gain: '<S300>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_h * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;

        // Sum: '<S268>/Subtract' incorporates:
        //   Constant: '<S268>/Constant1'
        //   DataStoreRead: '<S268>/RED_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.home_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S302>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a2 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_h =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S302>/Sum6' incorporates:
        //   Delay: '<S302>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_h;

        // If: '<S302>/if we went through a "step"' incorporates:
        //   Inport: '<S303>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S302>/Hold this value' incorporates:
          //   ActionPort: '<S303>/Action Port'

          Template_v3_03_2020a_B.In1_b = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S302>/Hold this value'
        }

        // End of If: '<S302>/if we went through a "step"'

        // Sum: '<S297>/Sum3' incorporates:
        //   DataStoreWrite: '<S268>/RED_Fx'
        //   Gain: '<S297>/kd_xr'
        //   Gain: '<S297>/kp_xr'
        //   Gain: '<S302>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_b * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.Subtract_o;

        // DataStoreWrite: '<S268>/RED_Tz_RW1' incorporates:
        //   Constant: '<S268>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant2_Value_g;

        // Sum: '<S268>/Subtract1' incorporates:
        //   Constant: '<S268>/Constant3'
        //   DataStoreRead: '<S268>/RED_Py '

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_P.home_states_RED
          [1] - Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S304>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_f != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_l =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S304>/Sum6' incorporates:
        //   Delay: '<S304>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_l;

        // If: '<S304>/if we went through a "step"' incorporates:
        //   Inport: '<S305>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S304>/Hold this value' incorporates:
          //   ActionPort: '<S305>/Action Port'

          Template_v3_03_2020a_B.In1_f = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S304>/Hold this value'
        }

        // End of If: '<S304>/if we went through a "step"'

        // Sum: '<S298>/Sum3' incorporates:
        //   DataStoreWrite: '<S268>/RED_Fy'
        //   Gain: '<S298>/kd_yr'
        //   Gain: '<S298>/kp_yr'
        //   Gain: '<S304>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_f * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.Sum6_l1;

        // DataStoreWrite: '<S268>/Data Store Write3' incorporates:
        //   Constant: '<S268>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_od;

        // Update for Delay: '<S300>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dh = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_i =
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;

        // Update for Delay: '<S302>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a2 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_h =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S304>/Delay1'
        Template_v3_03_2020a_DW.icLoad_f = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_l = Template_v3_03_2020a_B.Sum6_l1;

        // End of Outputs for SubSystem: '<S11>/Change RED Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #4:  Return Home'
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase5_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #5:  Hold Home' incorporates:
      //   ActionPort: '<S12>/Action Port'

      // If: '<S12>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S312>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S309>/Action Port'

        // Sum: '<S309>/Subtract' incorporates:
        //   Constant: '<S309>/Constant'
        //   DataStoreRead: '<S309>/BLACK_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.home_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S319>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_e != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_o =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S319>/Sum6' incorporates:
        //   Delay: '<S319>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_o;

        // If: '<S319>/if we went through a "step"' incorporates:
        //   Inport: '<S320>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S319>/Hold this value' incorporates:
          //   ActionPort: '<S320>/Action Port'

          Template_v3_03_2020a_B.In1_i = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S319>/Hold this value'
        }

        // End of If: '<S319>/if we went through a "step"'

        // Sum: '<S314>/Sum3' incorporates:
        //   DataStoreWrite: '<S309>/BLACK_Fx'
        //   Gain: '<S314>/kd_xb'
        //   Gain: '<S314>/kp_xb'
        //   Gain: '<S319>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_i *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.Subtract_o;

        // Sum: '<S309>/Subtract1' incorporates:
        //   Constant: '<S309>/Constant2'
        //   DataStoreRead: '<S309>/BLACK_Py '

        Template_v3_03_2020a_B.Sum6_l1 =
          Template_v3_03_2020a_P.home_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S321>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_m != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_p =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S321>/Sum6' incorporates:
        //   Delay: '<S321>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_p;

        // If: '<S321>/if we went through a "step"' incorporates:
        //   Inport: '<S322>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S321>/Hold this value' incorporates:
          //   ActionPort: '<S322>/Action Port'

          Template_v3_03_2020a_B.In1_c = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S321>/Hold this value'
        }

        // End of If: '<S321>/if we went through a "step"'

        // Sum: '<S315>/Sum3' incorporates:
        //   DataStoreWrite: '<S309>/BLACK_Fy'
        //   Gain: '<S315>/kd_yb'
        //   Gain: '<S315>/kp_yb'
        //   Gain: '<S321>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_c *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.Sum6_l1;

        // MATLAB Function: '<S316>/MATLAB Function2' incorporates:
        //   Constant: '<S309>/Constant3'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_g);

        // MATLAB Function: '<S316>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S309>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_o);

        // Sum: '<S316>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_g.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_o.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_g.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_o.Ox[1];

        // MATLAB Function: '<S316>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_g.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_de);

        // Delay: '<S317>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_d != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_b =
            Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;
        }

        // Sum: '<S317>/Sum6' incorporates:
        //   Delay: '<S317>/Delay1'

        Template_v3_03_2020a_B.Sum6_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_b;

        // If: '<S317>/if we went through a "step"' incorporates:
        //   Inport: '<S318>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S317>/Hold this value' incorporates:
          //   ActionPort: '<S318>/Action Port'

          Template_v3_03_2020a_B.In1_g = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S317>/Hold this value'
        }

        // End of If: '<S317>/if we went through a "step"'

        // Sum: '<S313>/Sum3' incorporates:
        //   DataStoreWrite: '<S309>/BLACK_Tz'
        //   Gain: '<S313>/kd_tb'
        //   Gain: '<S313>/kp_tb'
        //   Gain: '<S317>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_g *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;

        // DataStoreWrite: '<S309>/Data Store Write3' incorporates:
        //   Constant: '<S309>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_g;

        // Update for Delay: '<S319>/Delay1'
        Template_v3_03_2020a_DW.icLoad_e = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_o =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S321>/Delay1'
        Template_v3_03_2020a_DW.icLoad_m = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_p = Template_v3_03_2020a_B.Sum6_l1;

        // Update for Delay: '<S317>/Delay1'
        Template_v3_03_2020a_DW.icLoad_d = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_b =
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;

        // End of Outputs for SubSystem: '<S12>/Change BLACK Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S12>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S312>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S310>/Action Port'

        Templa_ChangeBLUEBehavior_g(&Template_v3_03_2020a_B.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_DW.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_P.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
          &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
          &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
          &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S12>/Change BLUE Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S12>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S312>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change RED Behavior' incorporates:
        //   ActionPort: '<S311>/Action Port'

        // Sum: '<S311>/Subtract' incorporates:
        //   Constant: '<S311>/Constant'
        //   DataStoreRead: '<S311>/RED_Px'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_P.home_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S345>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE =
            Template_v3_03_2020a_B.Subtract_o;
        }

        // Sum: '<S345>/Sum6' incorporates:
        //   Delay: '<S345>/Delay1'

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_B.Subtract_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE;

        // If: '<S345>/if we went through a "step"' incorporates:
        //   Inport: '<S346>/In1'

        if (Template_v3_03_2020a_B.Sum6_l1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S345>/Hold this value' incorporates:
          //   ActionPort: '<S346>/Action Port'

          Template_v3_03_2020a_B.In1_j = Template_v3_03_2020a_B.Sum6_l1;

          // End of Outputs for SubSystem: '<S345>/Hold this value'
        }

        // End of If: '<S345>/if we went through a "step"'

        // Sum: '<S340>/Sum3' incorporates:
        //   DataStoreWrite: '<S311>/RED_Fx'
        //   Gain: '<S340>/kd_xr'
        //   Gain: '<S340>/kp_xr'
        //   Gain: '<S345>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_j * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.Subtract_o;

        // DataStoreWrite: '<S311>/RED_Tz_RW' incorporates:
        //   Constant: '<S311>/Constant1'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant1_Value_k;

        // Sum: '<S311>/Subtract1' incorporates:
        //   Constant: '<S311>/Constant2'
        //   DataStoreRead: '<S311>/RED_Py '

        Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_P.home_states_RED
          [1] - Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S347>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_j != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_m =
            Template_v3_03_2020a_B.Sum6_l1;
        }

        // Sum: '<S347>/Sum6' incorporates:
        //   Delay: '<S347>/Delay1'

        Template_v3_03_2020a_B.Sum6_c = Template_v3_03_2020a_B.Sum6_l1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_m;

        // If: '<S347>/if we went through a "step"' incorporates:
        //   Inport: '<S348>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S347>/Hold this value' incorporates:
          //   ActionPort: '<S348>/Action Port'

          Template_v3_03_2020a_B.In1 = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S347>/Hold this value'
        }

        // End of If: '<S347>/if we went through a "step"'

        // Sum: '<S341>/Sum3' incorporates:
        //   DataStoreWrite: '<S311>/RED_Fy'
        //   Gain: '<S341>/kd_yr'
        //   Gain: '<S341>/kp_yr'
        //   Gain: '<S347>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1 * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.Sum6_l1;

        // MATLAB Function: '<S342>/MATLAB Function2' incorporates:
        //   Constant: '<S311>/Constant3'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_mx);

        // MATLAB Function: '<S342>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S311>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_bc);

        // Sum: '<S342>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bc.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_g[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bc.Ox[1];

        // MATLAB Function: '<S342>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_g,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_df);

        // Delay: '<S343>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_n =
            Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;
        }

        // Sum: '<S343>/Sum6' incorporates:
        //   Delay: '<S343>/Delay1'

        Template_v3_03_2020a_B.Sum6_c =
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_n;

        // If: '<S343>/if we went through a "step"' incorporates:
        //   Inport: '<S344>/In1'

        if (Template_v3_03_2020a_B.Sum6_c != 0.0) {
          // Outputs for IfAction SubSystem: '<S343>/Hold this value' incorporates:
          //   ActionPort: '<S344>/Action Port'

          Template_v3_03_2020a_B.In1_d = Template_v3_03_2020a_B.Sum6_c;

          // End of Outputs for SubSystem: '<S343>/Hold this value'
        }

        // End of If: '<S343>/if we went through a "step"'

        // Sum: '<S339>/Sum3' incorporates:
        //   DataStoreWrite: '<S311>/RED_Tz'
        //   Gain: '<S339>/kd_tr'
        //   Gain: '<S339>/kp_tr'
        //   Gain: '<S343>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_d * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;

        // DataStoreWrite: '<S311>/Data Store Write3' incorporates:
        //   Constant: '<S311>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_es;

        // Update for Delay: '<S345>/Delay1'
        Template_v3_03_2020a_DW.icLoad = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE =
          Template_v3_03_2020a_B.Subtract_o;

        // Update for Delay: '<S347>/Delay1'
        Template_v3_03_2020a_DW.icLoad_j = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_m = Template_v3_03_2020a_B.Sum6_l1;

        // Update for Delay: '<S343>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_n =
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;

        // End of Outputs for SubSystem: '<S12>/Change RED Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #5:  Hold Home'
    } else {
      // Outputs for IfAction SubSystem: '<Root>/Phase #6:  Stop Floating and Spin Down RW' incorporates:
      //   ActionPort: '<S13>/Action Port'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S352>/Action Port'

        // If: '<S13>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
        //   Constant: '<S352>/Constant3'
        //   Constant: '<S352>/Constant4'
        //   Constant: '<S352>/Constant5'
        //   Constant: '<S352>/Puck State'
        //   DataStoreWrite: '<S352>/BLACK_Fx'
        //   DataStoreWrite: '<S352>/BLACK_Fy'
        //   DataStoreWrite: '<S352>/BLACK_Tz'
        //   DataStoreWrite: '<S352>/Data Store Write3'

        Template_v3_03_2020a_DW.BLACK_Fx =
          Template_v3_03_2020a_P.Constant3_Value;
        Template_v3_03_2020a_DW.BLACK_Fy =
          Template_v3_03_2020a_P.Constant4_Value_e;
        Template_v3_03_2020a_DW.BLACK_Tz =
          Template_v3_03_2020a_P.Constant5_Value_n;
        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_gd;

        // End of Outputs for SubSystem: '<S13>/Change BLACK Behavior'
      }

      // If: '<S13>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S13>/Constant'
      //   Constant: '<S355>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S353>/Action Port'

        Template_ChangeBLUEBehavior(&Template_v3_03_2020a_P.ChangeBLUEBehavior_k,
          &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
          &Template_v3_03_2020a_DW.BLUE_Tz, &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S13>/Change BLUE Behavior'
      }

      // End of If: '<S13>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S13>/Constant'
      //   Constant: '<S355>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change RED Behavior' incorporates:
        //   ActionPort: '<S354>/Action Port'

        // DataStoreWrite: '<S354>/RED_Fx' incorporates:
        //   Constant: '<S354>/Constant'

        Template_v3_03_2020a_DW.RED_Fx = Template_v3_03_2020a_P.Constant_Value;

        // DataStoreWrite: '<S354>/RED_Fy' incorporates:
        //   Constant: '<S354>/Constant1'

        Template_v3_03_2020a_DW.RED_Fy =
          Template_v3_03_2020a_P.Constant1_Value_l;

        // DataStoreWrite: '<S354>/RED_Tz' incorporates:
        //   Constant: '<S354>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz =
          Template_v3_03_2020a_P.Constant2_Value_m;

        // DataStoreWrite: '<S354>/Data Store Write3' incorporates:
        //   Constant: '<S354>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_h;

        // Gain: '<S354>/Gain' incorporates:
        //   DataStoreRead: '<S354>/RED_dRz_Speed'

        Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_P.Gain_Gain *
          Template_v3_03_2020a_DW.RED_dRz_RW_Sat;

        // Saturate: '<S354>/Saturation'
        if (Template_v3_03_2020a_B.Subtract_o >
            Template_v3_03_2020a_P.Saturation_UpperSat) {
          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Saturation_UpperSat;
        } else if (Template_v3_03_2020a_B.Subtract_o <
                   Template_v3_03_2020a_P.Saturation_LowerSat) {
          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Saturation_LowerSat;
        } else {
          Template_v3_03_2020a_DW.RED_Tz_RW = Template_v3_03_2020a_B.Subtract_o;
        }

        // End of Saturate: '<S354>/Saturation'
        // End of Outputs for SubSystem: '<S13>/Change RED Behavior'
      }

      // End of If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #6:  Stop Floating and Spin Down RW' 
    }

    // End of If: '<Root>/Separate Phases'

    // If: '<Root>/If running a simulation,  grab the simulated states.' incorporates:
    //   Constant: '<S6>/Constant'
    //   DiscreteIntegrator: '<S356>/Velocity to Position'
    //   DiscreteIntegrator: '<S357>/Velocity to Position'
    //   DiscreteIntegrator: '<S358>/Velocity to Position'
    //   Inport: '<S375>/In'
    //   Inport: '<S377>/In'
    //   Inport: '<S379>/In'
    //   RandomNumber: '<S356>/Random Number'
    //   RandomNumber: '<S357>/Random Number'
    //   RandomNumber: '<S358>/Random Number'
    //   Sum: '<S356>/Sum'
    //   Sum: '<S357>/Sum'
    //   Sum: '<S358>/Sum'

    if (Template_v3_03_2020a_P.simMode == 1.0) {
      // Outputs for IfAction SubSystem: '<Root>/Simulate Plant Dynamics' incorporates:
      //   ActionPort: '<S14>/Action Port'

      // MATLAB Function: '<S359>/MATLAB Function' incorporates:
      //   Constant: '<S359>/Constant1'
      //   DataStoreRead: '<S359>/Data Store Read2'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_d);

      // Outputs for Triggered SubSystem: '<S359>/Sample and Hold1' incorporates:
      //   TriggerPort: '<S375>/Trigger'

      Template_v3_03_2020a_B.zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
        &Template_v3_03_2020a_PrevZCX.SampleandHold1_Trig_ZCE_g,
        (Template_v3_03_2020a_B.sf_MATLABFunction_d.y));
      if (Template_v3_03_2020a_B.zcEvent != NO_ZCEVENT) {
        Template_v3_03_2020a_B.In_n[0] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[0] +
          Template_v3_03_2020a_DW.NextOutput;
        Template_v3_03_2020a_B.In_n[1] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[1] +
          Template_v3_03_2020a_DW.NextOutput;
        Template_v3_03_2020a_B.In_n[2] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[2] +
          Template_v3_03_2020a_DW.NextOutput;
      }

      // End of Outputs for SubSystem: '<S359>/Sample and Hold1'

      // DataStoreWrite: '<S14>/BLACK_Px' incorporates:
      //   DiscreteIntegrator: '<S356>/Velocity to Position'
      //   Inport: '<S375>/In'
      //   RandomNumber: '<S356>/Random Number'
      //   Sum: '<S356>/Sum'

      Template_v3_03_2020a_DW.BLACK_Px = Template_v3_03_2020a_B.In_n[0];

      // DataStoreWrite: '<S14>/BLACK_Py'
      Template_v3_03_2020a_DW.BLACK_Py = Template_v3_03_2020a_B.In_n[1];

      // DataStoreWrite: '<S14>/BLACK_Rz'
      Template_v3_03_2020a_DW.BLACK_Rz = Template_v3_03_2020a_B.In_n[2];

      // Delay: '<S367>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_kp != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_nq = Template_v3_03_2020a_B.In_n[2];
      }

      // Sum: '<S367>/Sum6' incorporates:
      //   Delay: '<S367>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_n[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_nq;

      // If: '<S367>/if we went through a "step"' incorporates:
      //   Inport: '<S385>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S367>/Hold this value' incorporates:
        //   ActionPort: '<S385>/Action Port'

        Template_v3_03_2020a_B.In1_m = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S367>/Hold this value'
      }

      // End of If: '<S367>/if we went through a "step"'

      // Gain: '<S367>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLACK_RzD'

      Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
        Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_m;

      // Delay: '<S365>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_k3 != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_mb = Template_v3_03_2020a_B.In_n[0];
      }

      // Sum: '<S365>/Sum6' incorporates:
      //   Delay: '<S365>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_n[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_mb;

      // If: '<S365>/if we went through a "step"' incorporates:
      //   Inport: '<S383>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S365>/Hold this value' incorporates:
        //   ActionPort: '<S383>/Action Port'

        Template_v3_03_2020a_B.In1_k4 = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S365>/Hold this value'
      }

      // End of If: '<S365>/if we went through a "step"'

      // Gain: '<S365>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLACK_Vx'

      Template_v3_03_2020a_DW.BLACK_Vx = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_k4;

      // Delay: '<S366>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_jz != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_pz = Template_v3_03_2020a_B.In_n[1];
      }

      // Sum: '<S366>/Sum6' incorporates:
      //   Delay: '<S366>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_n[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_pz;

      // If: '<S366>/if we went through a "step"' incorporates:
      //   Inport: '<S384>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S366>/Hold this value' incorporates:
        //   ActionPort: '<S384>/Action Port'

        Template_v3_03_2020a_B.In1_ey = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S366>/Hold this value'
      }

      // End of If: '<S366>/if we went through a "step"'

      // Gain: '<S366>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLACK_Vy'

      Template_v3_03_2020a_DW.BLACK_Vy = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_ey;

      // MATLAB Function: '<S360>/MATLAB Function' incorporates:
      //   Constant: '<S360>/Constant1'
      //   DataStoreRead: '<S360>/Data Store Read2'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_ap);

      // Outputs for Triggered SubSystem: '<S360>/Sample and Hold1' incorporates:
      //   TriggerPort: '<S377>/Trigger'

      Template_v3_03_2020a_B.zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
        &Template_v3_03_2020a_PrevZCX.SampleandHold1_Trig_ZCE,
        (Template_v3_03_2020a_B.sf_MATLABFunction_ap.y));
      if (Template_v3_03_2020a_B.zcEvent != NO_ZCEVENT) {
        Template_v3_03_2020a_B.In_p[0] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[0] +
          Template_v3_03_2020a_DW.NextOutput_g;
        Template_v3_03_2020a_B.In_p[1] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[1] +
          Template_v3_03_2020a_DW.NextOutput_g;
        Template_v3_03_2020a_B.In_p[2] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[2] +
          Template_v3_03_2020a_DW.NextOutput_g;
      }

      // End of Outputs for SubSystem: '<S360>/Sample and Hold1'

      // DataStoreWrite: '<S14>/BLUE_Px ' incorporates:
      //   DiscreteIntegrator: '<S357>/Velocity to Position'
      //   Inport: '<S377>/In'
      //   RandomNumber: '<S357>/Random Number'
      //   Sum: '<S357>/Sum'

      Template_v3_03_2020a_DW.BLUE_Px = Template_v3_03_2020a_B.In_p[0];

      // DataStoreWrite: '<S14>/BLUE_Py'
      Template_v3_03_2020a_DW.BLUE_Py = Template_v3_03_2020a_B.In_p[1];

      // DataStoreWrite: '<S14>/BLUE_Rz'
      Template_v3_03_2020a_DW.BLUE_Rz = Template_v3_03_2020a_B.In_p[2];

      // Delay: '<S370>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_c != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_nm = Template_v3_03_2020a_B.In_p[2];
      }

      // Sum: '<S370>/Sum6' incorporates:
      //   Delay: '<S370>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_p[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_nm;

      // If: '<S370>/if we went through a "step"' incorporates:
      //   Inport: '<S388>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S370>/Hold this value' incorporates:
        //   ActionPort: '<S388>/Action Port'

        Template_v3_03_2020a_B.In1_jt = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S370>/Hold this value'
      }

      // End of If: '<S370>/if we went through a "step"'

      // Gain: '<S370>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLUE_RzD'

      Template_v3_03_2020a_DW.BLUE_RzD = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_jt;

      // Delay: '<S368>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_dc != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_e = Template_v3_03_2020a_B.In_p[0];
      }

      // Sum: '<S368>/Sum6' incorporates:
      //   Delay: '<S368>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_p[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_e;

      // If: '<S368>/if we went through a "step"' incorporates:
      //   Inport: '<S386>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S368>/Hold this value' incorporates:
        //   ActionPort: '<S386>/Action Port'

        Template_v3_03_2020a_B.In1_ad = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S368>/Hold this value'
      }

      // End of If: '<S368>/if we went through a "step"'

      // Gain: '<S368>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLUE_Vx'

      Template_v3_03_2020a_DW.BLUE_Vx = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_ad;

      // Delay: '<S369>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_nu != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ho = Template_v3_03_2020a_B.In_p[1];
      }

      // Sum: '<S369>/Sum6' incorporates:
      //   Delay: '<S369>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In_p[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ho;

      // If: '<S369>/if we went through a "step"' incorporates:
      //   Inport: '<S387>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S369>/Hold this value' incorporates:
        //   ActionPort: '<S387>/Action Port'

        Template_v3_03_2020a_B.In1_ac = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S369>/Hold this value'
      }

      // End of If: '<S369>/if we went through a "step"'

      // Gain: '<S369>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/BLUE_Vy'

      Template_v3_03_2020a_DW.BLUE_Vy = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_ac;

      // MATLAB Function: '<S361>/MATLAB Function' incorporates:
      //   Constant: '<S361>/Constant'
      //   DataStoreRead: '<S361>/Data Store Read1'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_k);

      // Outputs for Triggered SubSystem: '<S361>/Sample and Hold' incorporates:
      //   TriggerPort: '<S379>/Trigger'

      Template_v3_03_2020a_B.zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
        &Template_v3_03_2020a_PrevZCX.SampleandHold_Trig_ZCE,
        (Template_v3_03_2020a_B.sf_MATLABFunction_k.y));
      if (Template_v3_03_2020a_B.zcEvent != NO_ZCEVENT) {
        Template_v3_03_2020a_B.In[0] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[0] +
          Template_v3_03_2020a_DW.NextOutput_l;
        Template_v3_03_2020a_B.In[1] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[1] +
          Template_v3_03_2020a_DW.NextOutput_l;
        Template_v3_03_2020a_B.In[2] =
          Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[2] +
          Template_v3_03_2020a_DW.NextOutput_l;
      }

      // End of Outputs for SubSystem: '<S361>/Sample and Hold'

      // DataStoreWrite: '<S14>/RED_Px' incorporates:
      //   DiscreteIntegrator: '<S358>/Velocity to Position'
      //   Inport: '<S379>/In'
      //   RandomNumber: '<S358>/Random Number'
      //   Sum: '<S358>/Sum'

      Template_v3_03_2020a_DW.RED_Px = Template_v3_03_2020a_B.In[0];

      // DataStoreWrite: '<S14>/RED_Py'
      Template_v3_03_2020a_DW.RED_Py = Template_v3_03_2020a_B.In[1];

      // DataStoreWrite: '<S14>/RED_Rz'
      Template_v3_03_2020a_DW.RED_Rz = Template_v3_03_2020a_B.In[2];

      // Delay: '<S364>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_mt != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ew = Template_v3_03_2020a_B.In[2];
      }

      // Sum: '<S364>/Sum6' incorporates:
      //   Delay: '<S364>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ew;

      // If: '<S364>/if we went through a "step"' incorporates:
      //   Inport: '<S382>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S364>/Hold this value' incorporates:
        //   ActionPort: '<S382>/Action Port'

        Template_v3_03_2020a_B.In1_o1 = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S364>/Hold this value'
      }

      // End of If: '<S364>/if we went through a "step"'

      // Gain: '<S364>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/RED_RzD'

      Template_v3_03_2020a_DW.RED_RzD = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_o1;

      // Delay: '<S362>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_bq != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ch = Template_v3_03_2020a_B.In[0];
      }

      // Sum: '<S362>/Sum6' incorporates:
      //   Delay: '<S362>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ch;

      // If: '<S362>/if we went through a "step"' incorporates:
      //   Inport: '<S380>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S362>/Hold this value' incorporates:
        //   ActionPort: '<S380>/Action Port'

        Template_v3_03_2020a_B.In1_nu = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S362>/Hold this value'
      }

      // End of If: '<S362>/if we went through a "step"'

      // Gain: '<S362>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/RED_Vx'

      Template_v3_03_2020a_DW.RED_Vx = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_nu;

      // Delay: '<S363>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_cn != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_it = Template_v3_03_2020a_B.In[1];
      }

      // Sum: '<S363>/Sum6' incorporates:
      //   Delay: '<S363>/Delay1'

      Template_v3_03_2020a_B.Subtract_o = Template_v3_03_2020a_B.In[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_it;

      // If: '<S363>/if we went through a "step"' incorporates:
      //   Inport: '<S381>/In1'

      if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
        // Outputs for IfAction SubSystem: '<S363>/Hold this value' incorporates:
        //   ActionPort: '<S381>/Action Port'

        Template_v3_03_2020a_B.In1_af = Template_v3_03_2020a_B.Subtract_o;

        // End of Outputs for SubSystem: '<S363>/Hold this value'
      }

      // End of If: '<S363>/if we went through a "step"'

      // Gain: '<S363>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S14>/RED_Vy'

      Template_v3_03_2020a_DW.RED_Vy = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_af;

      // Update for RandomNumber: '<S356>/Random Number'
      // MATLAB Function 'Simulate Plant Dynamics/BLACK Dynamics Model/MATLAB Function': '<S371>:1' 
      // '<S371>:1:5' x_ddot     = zeros(3,1);
      // '<S371>:1:9' m_BLACK    = model_param(3);
      // '<S371>:1:10' I_BLACK    = model_param(4);
      // '<S371>:1:13' Fx        = control_inputs(1);
      // '<S371>:1:14' Fy        = control_inputs(2);
      // '<S371>:1:15' Tz        = control_inputs(3);
      // '<S371>:1:18' x_ddot(1) = Fx/m_BLACK;
      // '<S371>:1:19' x_ddot(2) = Fy/m_BLACK;
      // '<S371>:1:20' x_ddot(3) = Tz/I_BLACK;
      // MATLAB Function 'Simulate Plant Dynamics/BLUE  Dynamics Model/MATLAB Function': '<S372>:1' 
      // '<S372>:1:5' x_ddot     = zeros(3,1);
      // '<S372>:1:9' m_BLUE    = model_param(5);
      // '<S372>:1:10' I_BLUE    = model_param(6);
      // '<S372>:1:13' Fx        = control_inputs(1);
      // '<S372>:1:14' Fy        = control_inputs(2);
      // '<S372>:1:15' Tz        = control_inputs(3);
      // '<S372>:1:18' x_ddot(1) = Fx/m_BLUE;
      // '<S372>:1:19' x_ddot(2) = Fy/m_BLUE;
      // '<S372>:1:20' x_ddot(3) = Tz/I_BLUE;
      // MATLAB Function 'Simulate Plant Dynamics/RED Dynamics Model/MATLAB Function': '<S373>:1' 
      // '<S373>:1:5' x_ddot     = zeros(3,1);
      // '<S373>:1:9' m_RED    = model_param(1);
      // '<S373>:1:10' I_RED    = model_param(2);
      // '<S373>:1:13' Fx        = control_inputs(1);
      // '<S373>:1:14' Fy        = control_inputs(2);
      // '<S373>:1:15' Tz        = control_inputs(3);
      // '<S373>:1:18' x_ddot(1) = Fx/m_RED;
      // '<S373>:1:19' x_ddot(2) = Fy/m_RED;
      // '<S373>:1:20' x_ddot(3) = Tz/I_RED;
      Template_v3_03_2020a_DW.NextOutput = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed) * sqrt
        (Template_v3_03_2020a_P.noise_variance_BLACK) +
        Template_v3_03_2020a_P.RandomNumber_Mean;

      // Update for Delay: '<S367>/Delay1'
      Template_v3_03_2020a_DW.icLoad_kp = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_nq = Template_v3_03_2020a_B.In_n[2];

      // Update for Delay: '<S365>/Delay1'
      Template_v3_03_2020a_DW.icLoad_k3 = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_mb = Template_v3_03_2020a_B.In_n[0];

      // Update for Delay: '<S366>/Delay1'
      Template_v3_03_2020a_DW.icLoad_jz = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_pz = Template_v3_03_2020a_B.In_n[1];

      // Update for RandomNumber: '<S357>/Random Number'
      Template_v3_03_2020a_DW.NextOutput_g = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed_d) * sqrt
        (Template_v3_03_2020a_P.noise_variance_BLUE) +
        Template_v3_03_2020a_P.RandomNumber_Mean_b;

      // Update for Delay: '<S370>/Delay1'
      Template_v3_03_2020a_DW.icLoad_c = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_nm = Template_v3_03_2020a_B.In_p[2];

      // Update for Delay: '<S368>/Delay1'
      Template_v3_03_2020a_DW.icLoad_dc = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_e = Template_v3_03_2020a_B.In_p[0];

      // Update for Delay: '<S369>/Delay1'
      Template_v3_03_2020a_DW.icLoad_nu = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ho = Template_v3_03_2020a_B.In_p[1];

      // Update for RandomNumber: '<S358>/Random Number'
      Template_v3_03_2020a_DW.NextOutput_l = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed_m) * sqrt
        (Template_v3_03_2020a_P.noise_variance_RED) +
        Template_v3_03_2020a_P.RandomNumber_Mean_e;

      // Update for Delay: '<S364>/Delay1'
      Template_v3_03_2020a_DW.icLoad_mt = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ew = Template_v3_03_2020a_B.In[2];

      // Update for Delay: '<S362>/Delay1'
      Template_v3_03_2020a_DW.icLoad_bq = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ch = Template_v3_03_2020a_B.In[0];

      // Update for Delay: '<S363>/Delay1'
      Template_v3_03_2020a_DW.icLoad_cn = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_it = Template_v3_03_2020a_B.In[1];

      // Update for DiscreteIntegrator: '<S356>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S356>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0];

      // Update for DiscreteIntegrator: '<S357>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S357>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0];

      // Update for DiscreteIntegrator: '<S358>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S358>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0];

      // Update for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLACK_Fx_Sat'
      //   MATLAB Function: '<S356>/MATLAB Function'
      //   SignalConversion generated from: '<S371>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0] +=
        Template_v3_03_2020a_DW.BLACK_Fx_Sat /
        Template_v3_03_2020a_P.model_param[2] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLUE_Fx_Sat '
      //   MATLAB Function: '<S357>/MATLAB Function'
      //   SignalConversion generated from: '<S372>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0] +=
        Template_v3_03_2020a_DW.BLUE_Fx_Sat /
        Template_v3_03_2020a_P.model_param[4] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/RED_Fx_Sat'
      //   MATLAB Function: '<S358>/MATLAB Function'
      //   SignalConversion generated from: '<S373>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0] +=
        Template_v3_03_2020a_DW.RED_Fx_Sat / Template_v3_03_2020a_P.model_param
        [0] * Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // Update for DiscreteIntegrator: '<S356>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S356>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1];

      // Update for DiscreteIntegrator: '<S357>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S357>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1];

      // Update for DiscreteIntegrator: '<S358>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S358>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1];

      // Update for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLACK_Fy_Sat'
      //   MATLAB Function: '<S356>/MATLAB Function'
      //   SignalConversion generated from: '<S371>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1] +=
        Template_v3_03_2020a_DW.BLACK_Fy_Sat /
        Template_v3_03_2020a_P.model_param[2] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLUE_Fy_Sat'
      //   MATLAB Function: '<S357>/MATLAB Function'
      //   SignalConversion generated from: '<S372>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1] +=
        Template_v3_03_2020a_DW.BLUE_Fy_Sat /
        Template_v3_03_2020a_P.model_param[4] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/RED_Fy_Sat'
      //   MATLAB Function: '<S358>/MATLAB Function'
      //   SignalConversion generated from: '<S373>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1] +=
        Template_v3_03_2020a_DW.RED_Fy_Sat / Template_v3_03_2020a_P.model_param
        [0] * Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // Update for DiscreteIntegrator: '<S356>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S356>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2];

      // Update for DiscreteIntegrator: '<S357>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S357>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2];

      // Update for DiscreteIntegrator: '<S358>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S358>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2];

      // Update for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLACK_Tz_Sat'
      //   MATLAB Function: '<S356>/MATLAB Function'
      //   SignalConversion generated from: '<S371>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2] +=
        Template_v3_03_2020a_DW.BLACK_Tz_Sat /
        Template_v3_03_2020a_P.model_param[3] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/BLUE_Tz_Sat'
      //   MATLAB Function: '<S357>/MATLAB Function'
      //   SignalConversion generated from: '<S372>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2] +=
        Template_v3_03_2020a_DW.BLUE_Tz_Sat /
        Template_v3_03_2020a_P.model_param[5] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S14>/Data Store Read'
      //   DataStoreRead: '<S14>/RED_Tz_Sat'
      //   MATLAB Function: '<S358>/MATLAB Function'
      //   Sum: '<S14>/Sum'

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2] +=
        (Template_v3_03_2020a_DW.RED_Tz_Sat +
         Template_v3_03_2020a_DW.RED_Tz_RW_Sat) /
        Template_v3_03_2020a_P.model_param[1] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // End of Outputs for SubSystem: '<Root>/Simulate Plant Dynamics'
    }

    // End of If: '<Root>/If running a simulation,  grab the simulated states.'

    // Outputs for IfAction SubSystem: '<S5>/Initialize Universal Time (Simulation)' incorporates:
    //   ActionPort: '<S71>/Action Port'

    // If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Clock: '<Root>/Set Universal Time (If this is a simulation)'
    //   Clock: '<S71>/Set Universal Time (If this is a simulation)'

    Template_v3_03_2020a_B.Sum6_l1 = Template_v3_03_2020a_M->Timing.t[0];

    // End of Outputs for SubSystem: '<S5>/Initialize Universal Time (Simulation)' 

    // Clock: '<Root>/Set Universal Time (If this is a simulation)'
    Template_v3_03_2020a_B.SetUniversalTimeIfthisisasimula =
      Template_v3_03_2020a_B.Sum6_l1;

    // SignalConversion generated from: '<S1>/To Workspace' incorporates:
    //   DataStoreRead: '<S1>/BLACK_Fx_Sat'
    //   DataStoreRead: '<S1>/BLACK_Fy_Sat'
    //   DataStoreRead: '<S1>/BLACK_Px'
    //   DataStoreRead: '<S1>/BLACK_Py'
    //   DataStoreRead: '<S1>/BLACK_Rz'
    //   DataStoreRead: '<S1>/BLACK_RzD'
    //   DataStoreRead: '<S1>/BLACK_Tz_Sat'
    //   DataStoreRead: '<S1>/BLACK_Vx'
    //   DataStoreRead: '<S1>/BLACK_Vy'
    //   DataStoreRead: '<S1>/BLUE_Fx_Sat'
    //   DataStoreRead: '<S1>/BLUE_Fy_Sat'
    //   DataStoreRead: '<S1>/BLUE_Px'
    //   DataStoreRead: '<S1>/BLUE_Py'
    //   DataStoreRead: '<S1>/BLUE_Rz'
    //   DataStoreRead: '<S1>/BLUE_RzD'
    //   DataStoreRead: '<S1>/BLUE_Tz_Sat'
    //   DataStoreRead: '<S1>/BLUE_Vx'
    //   DataStoreRead: '<S1>/BLUE_Vy'
    //   DataStoreRead: '<S1>/RED_Fx_Sat'
    //   DataStoreRead: '<S1>/RED_Fy_Sat'
    //   DataStoreRead: '<S1>/RED_Px'
    //   DataStoreRead: '<S1>/RED_Py '
    //   DataStoreRead: '<S1>/RED_Rz'
    //   DataStoreRead: '<S1>/RED_Tz_Sat'
    //   DataStoreRead: '<S1>/RED_Vx '
    //   DataStoreRead: '<S1>/RED_Vy'
    //   DataStoreRead: '<S1>/RED_Vz'
    //   DataStoreRead: '<S1>/Universal_Time'

    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[0] =
      Template_v3_03_2020a_DW.Univ_Time;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[1] =
      Template_v3_03_2020a_DW.RED_Fx_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[2] =
      Template_v3_03_2020a_DW.RED_Fy_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[3] =
      Template_v3_03_2020a_DW.RED_Tz_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[4] =
      Template_v3_03_2020a_DW.RED_Px;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[5] =
      Template_v3_03_2020a_DW.RED_Py;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[6] =
      Template_v3_03_2020a_DW.RED_Rz;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[7] =
      Template_v3_03_2020a_DW.RED_Vx;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[8] =
      Template_v3_03_2020a_DW.RED_Vy;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[9] =
      Template_v3_03_2020a_DW.RED_RzD;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[10] =
      Template_v3_03_2020a_DW.BLACK_Fx_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[11] =
      Template_v3_03_2020a_DW.BLACK_Fy_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[12] =
      Template_v3_03_2020a_DW.BLACK_Tz_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[13] =
      Template_v3_03_2020a_DW.BLACK_Px;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[14] =
      Template_v3_03_2020a_DW.BLACK_Py;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[15] =
      Template_v3_03_2020a_DW.BLACK_Rz;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[16] =
      Template_v3_03_2020a_DW.BLACK_Vx;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[17] =
      Template_v3_03_2020a_DW.BLACK_Vy;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[18] =
      Template_v3_03_2020a_DW.BLACK_RzD;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[19] =
      Template_v3_03_2020a_DW.BLUE_Fx_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[20] =
      Template_v3_03_2020a_DW.BLUE_Fy_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[21] =
      Template_v3_03_2020a_DW.BLUE_Tz_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[22] =
      Template_v3_03_2020a_DW.BLUE_Px;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[23] =
      Template_v3_03_2020a_DW.BLUE_Py;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[24] =
      Template_v3_03_2020a_DW.BLUE_Rz;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[25] =
      Template_v3_03_2020a_DW.BLUE_Vx;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[26] =
      Template_v3_03_2020a_DW.BLUE_Vy;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[27] =
      Template_v3_03_2020a_DW.BLUE_RzD;

    // ToWorkspace: '<S1>/To Workspace'
    rt_UpdateLogVar((LogVar *)(LogVar*)
                    (Template_v3_03_2020a_DW.ToWorkspace_PWORK.LoggedData),
                    &Template_v3_03_2020a_B.TmpSignalConversionAtToWork[0], 0);

    // If: '<S2>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S17>/Constant'

    if (Template_v3_03_2020a_P.simMode == 0.0) {
      // Outputs for IfAction SubSystem: '<S2>/Change RED Behavior' incorporates:
      //   ActionPort: '<S16>/Action Port'

      // MATLABSystem: '<S18>/Digital Write' incorporates:
      //   DataStoreRead: '<S16>/Data Store Read'

      Template_v3_03_2020a_B.Subtract_o = rt_roundd_snf
        (Template_v3_03_2020a_DW.Magnet_State);
      if (Template_v3_03_2020a_B.Subtract_o < 256.0) {
        if (Template_v3_03_2020a_B.Subtract_o >= 0.0) {
          Template_v3_03_2020a_B.u = static_cast<uint8_T>
            (Template_v3_03_2020a_B.Subtract_o);
        } else {
          Template_v3_03_2020a_B.u = 0U;
        }
      } else {
        Template_v3_03_2020a_B.u = MAX_uint8_T;
      }

      MW_gpioWrite(10U, Template_v3_03_2020a_B.u);

      // End of MATLABSystem: '<S18>/Digital Write'

      // MATLABSystem: '<S19>/Digital Write' incorporates:
      //   DataStoreRead: '<S16>/Data Store Read1'

      Template_v3_03_2020a_B.Subtract_o = rt_roundd_snf
        (Template_v3_03_2020a_DW.Float_State);
      if (Template_v3_03_2020a_B.Subtract_o < 256.0) {
        if (Template_v3_03_2020a_B.Subtract_o >= 0.0) {
          Template_v3_03_2020a_B.u = static_cast<uint8_T>
            (Template_v3_03_2020a_B.Subtract_o);
        } else {
          Template_v3_03_2020a_B.u = 0U;
        }
      } else {
        Template_v3_03_2020a_B.u = MAX_uint8_T;
      }

      MW_gpioWrite(26U, Template_v3_03_2020a_B.u);

      // End of MATLABSystem: '<S19>/Digital Write'
      // End of Outputs for SubSystem: '<S2>/Change RED Behavior'
    }

    // End of If: '<S2>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S3>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S23>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S20>/BLACK_Fx'
    //   DataStoreRead: '<S20>/BLACK_Fy'
    //   Product: '<S26>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S26>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S20>/Action Port'

      // MATLAB Function: '<S30>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S25>/BLACK_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.BLACK_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix);

      // MATLAB Function: '<S25>/MATLAB Function1'
      // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function1': '<S28>:1' 
      // '<S28>:1:3' Vec1 = [ -1
      // '<S28>:1:4'          -1
      // '<S28>:1:5'           0
      // '<S28>:1:6'           0
      // '<S28>:1:7'           1
      // '<S28>:1:8'           1
      // '<S28>:1:9'           0
      // '<S28>:1:10'           0 ];
      // '<S28>:1:12' Vec2 = [  0
      // '<S28>:1:13'           0
      // '<S28>:1:14'           1
      // '<S28>:1:15'           1
      // '<S28>:1:16'           0
      // '<S28>:1:17'           0
      // '<S28>:1:18'          -1
      // '<S28>:1:19'          -1 ];
      // '<S28>:1:21' Vec3 = thruster_dist2CG_BLACK./1000;
      // '<S28>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S28>:1:25' Mat2 = diag((F_thrusters_BLACK));
      memset(&Template_v3_03_2020a_B.Mat2[0], 0, sizeof(real_T) << 6U);

      // '<S28>:1:27' H    = Mat1*Mat2;
      // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S27>:1' 
      // '<S27>:1:3' Vec1 = [ -1
      // '<S27>:1:4'          -1
      // '<S27>:1:5'           0
      // '<S27>:1:6'           0
      // '<S27>:1:7'           1
      // '<S27>:1:8'           1
      // '<S27>:1:9'           0
      // '<S27>:1:10'           0 ];
      // '<S27>:1:12' Vec2 = [  0
      // '<S27>:1:13'           0
      // '<S27>:1:14'           1
      // '<S27>:1:15'           1
      // '<S27>:1:16'           0
      // '<S27>:1:17'           0
      // '<S27>:1:18'          -1
      // '<S27>:1:19'          -1 ];
      // '<S27>:1:21' Vec3 = thruster_dist2CG_BLACK./1000;
      // '<S27>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S27>:1:25' Mat2 = diag((F_thrusters_BLACK./2));
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.Mat2[Template_v3_03_2020a_B.i +
          (Template_v3_03_2020a_B.i << 3)] =
          Template_v3_03_2020a_P.F_thrusters_BLACK[Template_v3_03_2020a_B.i];

        // MATLAB Function: '<S25>/MATLAB Function'
        Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
          = Template_v3_03_2020a_P.F_thrusters_BLACK[Template_v3_03_2020a_B.i] /
          2.0;
      }

      // MATLAB Function: '<S25>/MATLAB Function'
      memset(&Template_v3_03_2020a_B.Mat2_m[0], 0, sizeof(real_T) << 6U);

      // '<S27>:1:27' H    = Mat1*Mat2;
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.Mat2_m[Template_v3_03_2020a_B.i +
          (Template_v3_03_2020a_B.i << 3)] =
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i] =
          b[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 1] =
          c_0[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_BLACK[Template_v3_03_2020a_B.i]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.Mat2_m
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // PermuteDimensions: '<S31>/transpose'
      Template_v3_03_2020a_B.i = 0;
      Template_v3_03_2020a_B.p2 = 0;
      for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
           Template_v3_03_2020a_B.p3++) {
        Template_v3_03_2020a_B.itmp = Template_v3_03_2020a_B.p2;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.i] =
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.itmp];
          Template_v3_03_2020a_B.i++;
          Template_v3_03_2020a_B.itmp += 3;
        }

        Template_v3_03_2020a_B.p2++;
      }

      // End of PermuteDimensions: '<S31>/transpose'

      // MATLAB Function: '<S26>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S20>/BLACK_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.BLACK_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_h);

      // Product: '<S31>/Product'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.x[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.x[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.H_bu[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.transpose_d
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S31>/Product1' incorporates:
      //   Product: '<S31>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.x,
        Template_v3_03_2020a_B.y);
      Template_v3_03_2020a_B.Subtract_o =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[0] *
        Template_v3_03_2020a_DW.BLACK_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[2] *
        Template_v3_03_2020a_DW.BLACK_Fy;

      // Product: '<S26>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S20>/BLACK_Fx'
      //   DataStoreRead: '<S20>/BLACK_Fy'
      //   SignalConversion generated from: '<S26>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.Sum6_c =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[1] *
        Template_v3_03_2020a_DW.BLACK_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[3] *
        Template_v3_03_2020a_DW.BLACK_Fy;

      // Product: '<S31>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.p3 +
            (Template_v3_03_2020a_B.i << 3);
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p3];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 1] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p3 + 8];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 2] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p3 + 16];
        }
      }

      // End of Product: '<S31>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.rtb_Oy_tmp =
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i + 16] *
          Template_v3_03_2020a_DW.BLACK_Tz +
          (Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i + 8] *
           Template_v3_03_2020a_B.Sum6_c +
           Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i] *
           Template_v3_03_2020a_B.Subtract_o);

        // Saturate: '<S25>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S20>/BLACK_Tz'
        //   Product: '<S25>/Product'
        //   SignalConversion generated from: '<S25>/Product'

        if (Template_v3_03_2020a_B.rtb_Oy_tmp >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat;
        } else if (Template_v3_03_2020a_B.rtb_Oy_tmp <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_B.rtb_Oy_tmp;
        }

        // End of Saturate: '<S25>/Remove Negatives'
      }

      // MATLAB Function: '<S25>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S20>/BLACK_Tz'
      //   Product: '<S25>/Product'
      //   SignalConversion generated from: '<S25>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p,
        &Template_v3_03_2020a_B.sf_MATLABFunction2);

      // MATLAB Function: '<S25>/MATLAB Function1'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i] =
          b[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 1] =
          c_0[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_BLACK[Template_v3_03_2020a_B.i]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.Mat2
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S25>/Product1'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] = 0.0;
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] +=
            Template_v3_03_2020a_B.transpose_d[3 * Template_v3_03_2020a_B.p3 +
            Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[Template_v3_03_2020a_B.p3];
        }
      }

      // End of Product: '<S25>/Product1'

      // DataStoreWrite: '<S25>/BLACK_Fx_Sat' incorporates:
      //   Product: '<S30>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLACK_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S25>/BLACK_Fy_Sat' incorporates:
      //   Product: '<S30>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLACK_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S25>/BLACK_Tz_Sat'
      Template_v3_03_2020a_DW.BLACK_Tz_Sat = Template_v3_03_2020a_B.x_ddot_d[2];

      // End of Outputs for SubSystem: '<S3>/Change BLACK Behavior'
    }

    // End of If: '<S3>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S3>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S23>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S21>/BLUE_Fx'
    //   DataStoreRead: '<S21>/BLUE_Fy'
    //   Product: '<S35>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S35>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S21>/Action Port'

      // MATLAB Function: '<S39>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S34>/BLUE_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.BLUE_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_i);

      // MATLAB Function: '<S34>/MATLAB Function1'
      Template_v3__MATLABFunction(&Template_v3_03_2020a_B.sf_MATLABFunction1_b);

      // MATLAB Function: '<S34>/MATLAB Function'
      Template_v3__MATLABFunction(&Template_v3_03_2020a_B.sf_MATLABFunction_i);

      // PermuteDimensions: '<S40>/transpose'
      Template_v3_03_2020a_B.i = 0;
      Template_v3_03_2020a_B.p2 = 0;
      for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
           Template_v3_03_2020a_B.p3++) {
        Template_v3_03_2020a_B.itmp = Template_v3_03_2020a_B.p2;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.i] =
            Template_v3_03_2020a_B.sf_MATLABFunction_i.H[Template_v3_03_2020a_B.itmp];
          Template_v3_03_2020a_B.i++;
          Template_v3_03_2020a_B.itmp += 3;
        }

        Template_v3_03_2020a_B.p2++;
      }

      // End of PermuteDimensions: '<S40>/transpose'

      // MATLAB Function: '<S35>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S21>/BLUE_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.BLUE_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_f);

      // Product: '<S40>/Product'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          for (Template_v3_03_2020a_B.p2 = 0; Template_v3_03_2020a_B.p2 < 8;
               Template_v3_03_2020a_B.p2++) {
            Template_v3_03_2020a_B.y[Template_v3_03_2020a_B.ntIdx0] +=
              Template_v3_03_2020a_B.sf_MATLABFunction_i.H[3 *
              Template_v3_03_2020a_B.p2 + Template_v3_03_2020a_B.p3] *
              Template_v3_03_2020a_B.transpose_p[(Template_v3_03_2020a_B.i << 3)
              + Template_v3_03_2020a_B.p2];
          }
        }
      }

      // Product: '<S40>/Product1' incorporates:
      //   Product: '<S40>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.y,
        Template_v3_03_2020a_B.x);
      Template_v3_03_2020a_B.Subtract_o =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[0] *
        Template_v3_03_2020a_DW.BLUE_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[2] *
        Template_v3_03_2020a_DW.BLUE_Fy;

      // Product: '<S35>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S21>/BLUE_Fx'
      //   DataStoreRead: '<S21>/BLUE_Fy'
      //   SignalConversion generated from: '<S35>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.Sum6_c =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[1] *
        Template_v3_03_2020a_DW.BLUE_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[3] *
        Template_v3_03_2020a_DW.BLUE_Fy;

      // Product: '<S40>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.p3 +
            (Template_v3_03_2020a_B.i << 3);
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.x[3 * Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.p3];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.x[3 * Template_v3_03_2020a_B.i + 1] *
            Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.p3 + 8];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.x[3 * Template_v3_03_2020a_B.i + 2] *
            Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.p3 + 16];
        }
      }

      // End of Product: '<S40>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.rtb_Oy_tmp =
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i + 16] *
          Template_v3_03_2020a_DW.BLUE_Tz +
          (Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i + 8] *
           Template_v3_03_2020a_B.Sum6_c +
           Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.i] *
           Template_v3_03_2020a_B.Subtract_o);

        // Saturate: '<S34>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S21>/BLUE_Tz'
        //   Product: '<S34>/Product'
        //   SignalConversion generated from: '<S34>/Product'

        if (Template_v3_03_2020a_B.rtb_Oy_tmp >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat_p) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat_p;
        } else if (Template_v3_03_2020a_B.rtb_Oy_tmp <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat_c) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat_c;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_B.rtb_Oy_tmp;
        }

        // End of Saturate: '<S34>/Remove Negatives'
      }

      // MATLAB Function: '<S34>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S21>/BLUE_Tz'
      //   Product: '<S34>/Product'
      //   SignalConversion generated from: '<S34>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p,
        &Template_v3_03_2020a_B.sf_MATLABFunction2_n);

      // Product: '<S34>/Product1'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] = 0.0;
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] +=
            Template_v3_03_2020a_B.sf_MATLABFunction1_b.H[3 *
            Template_v3_03_2020a_B.p3 + Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[Template_v3_03_2020a_B.p3];
        }
      }

      // End of Product: '<S34>/Product1'

      // DataStoreWrite: '<S34>/BLUE_Fx_Sat' incorporates:
      //   Product: '<S39>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLUE_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S34>/BLUE_Fy_Sat' incorporates:
      //   Product: '<S39>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLUE_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S34>/BLUE_Tz_Sat'
      Template_v3_03_2020a_DW.BLUE_Tz_Sat = Template_v3_03_2020a_B.x_ddot_d[2];

      // End of Outputs for SubSystem: '<S3>/Change BLUE Behavior'
    }

    // End of If: '<S3>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S3>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S23>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S22>/RED_Fx'
    //   DataStoreRead: '<S22>/RED_Fy'
    //   Product: '<S44>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S44>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change RED Behavior' incorporates:
      //   ActionPort: '<S22>/Action Port'

      // MATLAB Function: '<S48>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S43>/RED_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.RED_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_l);

      // MATLAB Function: '<S43>/MATLAB Function1'
      // MATLAB Function 'From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function1': '<S46>:1' 
      // '<S46>:1:3' Vec1 = [ -1
      // '<S46>:1:4'          -1
      // '<S46>:1:5'           0
      // '<S46>:1:6'           0
      // '<S46>:1:7'           1
      // '<S46>:1:8'           1
      // '<S46>:1:9'           0
      // '<S46>:1:10'           0 ];
      // '<S46>:1:12' Vec2 = [  0
      // '<S46>:1:13'           0
      // '<S46>:1:14'           1
      // '<S46>:1:15'           1
      // '<S46>:1:16'           0
      // '<S46>:1:17'           0
      // '<S46>:1:18'          -1
      // '<S46>:1:19'          -1 ];
      // '<S46>:1:21' Vec3 = thruster_dist2CG_RED./1000;
      // '<S46>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S46>:1:25' Mat2 = diag((F_thrusters_RED));
      memset(&Template_v3_03_2020a_B.Mat2[0], 0, sizeof(real_T) << 6U);

      // '<S46>:1:27' H    = Mat1*Mat2;
      // MATLAB Function 'From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S45>:1' 
      // '<S45>:1:3' Vec1 = [ -1
      // '<S45>:1:4'          -1
      // '<S45>:1:5'           0
      // '<S45>:1:6'           0
      // '<S45>:1:7'           1
      // '<S45>:1:8'           1
      // '<S45>:1:9'           0
      // '<S45>:1:10'           0 ];
      // '<S45>:1:12' Vec2 = [  0
      // '<S45>:1:13'           0
      // '<S45>:1:14'           1
      // '<S45>:1:15'           1
      // '<S45>:1:16'           0
      // '<S45>:1:17'           0
      // '<S45>:1:18'          -1
      // '<S45>:1:19'          -1 ];
      // '<S45>:1:21' Vec3 = thruster_dist2CG_RED./1000;
      // '<S45>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S45>:1:25' Mat2 = diag((F_thrusters_RED./2));
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.Mat2[Template_v3_03_2020a_B.i +
          (Template_v3_03_2020a_B.i << 3)] =
          Template_v3_03_2020a_P.F_thrusters_RED[Template_v3_03_2020a_B.i];

        // MATLAB Function: '<S43>/MATLAB Function'
        Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
          = Template_v3_03_2020a_P.F_thrusters_RED[Template_v3_03_2020a_B.i] /
          2.0;
      }

      // MATLAB Function: '<S43>/MATLAB Function'
      memset(&Template_v3_03_2020a_B.Mat2_m[0], 0, sizeof(real_T) << 6U);

      // '<S45>:1:27' H    = Mat1*Mat2;
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.Mat2_m[Template_v3_03_2020a_B.i +
          (Template_v3_03_2020a_B.i << 3)] =
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i] =
          b[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 1] =
          c_0[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_RED[Template_v3_03_2020a_B.i] /
          1000.0;
      }

      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.Mat2_m
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // PermuteDimensions: '<S49>/transpose'
      Template_v3_03_2020a_B.i = 0;
      Template_v3_03_2020a_B.p2 = 0;
      for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
           Template_v3_03_2020a_B.p3++) {
        Template_v3_03_2020a_B.itmp = Template_v3_03_2020a_B.p2;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.i] =
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.itmp];
          Template_v3_03_2020a_B.i++;
          Template_v3_03_2020a_B.itmp += 3;
        }

        Template_v3_03_2020a_B.p2++;
      }

      // End of PermuteDimensions: '<S49>/transpose'

      // MATLAB Function: '<S44>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S22>/RED_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.RED_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_n);

      // Product: '<S49>/Product'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.x[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.x[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.H_bu[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.transpose
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S49>/Product1' incorporates:
      //   Product: '<S49>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.x,
        Template_v3_03_2020a_B.y);
      Template_v3_03_2020a_B.Subtract_o =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[0] *
        Template_v3_03_2020a_DW.RED_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[2] *
        Template_v3_03_2020a_DW.RED_Fy;

      // Product: '<S44>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S22>/RED_Fx'
      //   DataStoreRead: '<S22>/RED_Fy'
      //   SignalConversion generated from: '<S44>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.Sum6_c =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[1] *
        Template_v3_03_2020a_DW.RED_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[3] *
        Template_v3_03_2020a_DW.RED_Fy;

      // Product: '<S49>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.p3 +
            (Template_v3_03_2020a_B.i << 3);
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] =
            0.0;
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.p3];
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 1] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.p3 + 8];
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.y[3 * Template_v3_03_2020a_B.i + 2] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.p3 + 16];
        }
      }

      // End of Product: '<S49>/Product2'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.rtb_Oy_tmp =
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.i + 16] *
          Template_v3_03_2020a_DW.RED_Tz +
          (Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.i + 8] *
           Template_v3_03_2020a_B.Sum6_c +
           Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.i] *
           Template_v3_03_2020a_B.Subtract_o);

        // Saturate: '<S43>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S22>/RED_Tz'
        //   Product: '<S43>/Product'
        //   SignalConversion generated from: '<S43>/Product'

        if (Template_v3_03_2020a_B.rtb_Oy_tmp >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat_d) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat_d;
        } else if (Template_v3_03_2020a_B.rtb_Oy_tmp <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat_a) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat_a;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p[Template_v3_03_2020a_B.i]
            = Template_v3_03_2020a_B.rtb_Oy_tmp;
        }

        // End of Saturate: '<S43>/Remove Negatives'
      }

      // MATLAB Function: '<S43>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S22>/RED_Tz'
      //   Product: '<S43>/Product'
      //   SignalConversion generated from: '<S43>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_p,
        &Template_v3_03_2020a_B.sf_MATLABFunction2_l);

      // MATLAB Function: '<S43>/MATLAB Function1'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i] =
          b[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 1] =
          c_0[Template_v3_03_2020a_B.i];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.i + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_RED[Template_v3_03_2020a_B.i] /
          1000.0;
      }

      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 8;
           Template_v3_03_2020a_B.i++) {
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 3;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3 + 3 *
            Template_v3_03_2020a_B.i;
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p2] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.p2] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.p3] * Template_v3_03_2020a_B.Mat2
              [(Template_v3_03_2020a_B.i << 3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S43>/Product1'
      for (Template_v3_03_2020a_B.i = 0; Template_v3_03_2020a_B.i < 3;
           Template_v3_03_2020a_B.i++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] = 0.0;
        for (Template_v3_03_2020a_B.p3 = 0; Template_v3_03_2020a_B.p3 < 8;
             Template_v3_03_2020a_B.p3++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.i] +=
            Template_v3_03_2020a_B.transpose_d[3 * Template_v3_03_2020a_B.p3 +
            Template_v3_03_2020a_B.i] *
            Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[Template_v3_03_2020a_B.p3];
        }
      }

      // End of Product: '<S43>/Product1'

      // DataStoreWrite: '<S43>/RED_Fx_Sat' incorporates:
      //   Product: '<S48>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.RED_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S43>/RED_Fy_Sat' incorporates:
      //   Product: '<S48>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.RED_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S43>/RED_Tz_Sat'
      Template_v3_03_2020a_DW.RED_Tz_Sat = Template_v3_03_2020a_B.x_ddot_d[2];

      // End of Outputs for SubSystem: '<S3>/Change RED Behavior'
    }

    // End of If: '<S3>/This IF block determines whether or not to run the RED sim//exp ' 

    // RateTransition: '<S3>/Rate Transition' incorporates:
    //   RateTransition: '<S3>/Rate Transition1'
    //   RateTransition: '<S3>/Rate Transition3'
    //   RateTransition: '<S3>/Rate Transition4'
    //   RateTransition: '<S3>/Rate Transition5'
    //   RateTransition: '<S3>/Rate Transition6'
    //   RateTransition: '<S3>/Rate Transition7'
    //   RateTransition: '<S3>/Rate Transition8'
    //   Sum: '<S3>/Sum'
    //   Sum: '<S3>/Sum1'
    //   Sum: '<S3>/Sum2'
    //   Sum: '<S3>/Sum3'
    //   Sum: '<S3>/Sum4'
    //   Sum: '<S3>/Sum5'
    //   Sum: '<S3>/Sum6'
    //   Sum: '<S3>/Sum7'

    if (Template_v3_03_2020a_M->Timing.RateInteraction.TID1_2) {
      Template_v3_03_2020a_DW.RateTransition_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[0] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[7]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[7];
      Template_v3_03_2020a_DW.RateTransition1_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[1] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[2]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[2];

      // RateTransition: '<S3>/Rate Transition2' incorporates:
      //   Sum: '<S3>/Sum'
      //   Sum: '<S3>/Sum1'

      Template_v3_03_2020a_DW.RateTransition2_Buffer =
        Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[2];
      Template_v3_03_2020a_DW.RateTransition3_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[3] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[4]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[4];
      Template_v3_03_2020a_DW.RateTransition4_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[4] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[3]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[3];
      Template_v3_03_2020a_DW.RateTransition5_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[5] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[6]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[6];
      Template_v3_03_2020a_DW.RateTransition6_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[6] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[5]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[5];
      Template_v3_03_2020a_DW.RateTransition7_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[7] +
         Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[0]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[0];
      Template_v3_03_2020a_DW.RateTransition8_Buffer =
        Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[1] +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[1];
    }

    // End of RateTransition: '<S3>/Rate Transition'

    // If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S72>/Constant'

    Template_v3_03_2020a_B.rtPrevAction =
      Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe;
    Template_v3_03_2020a_B.rtAction = -1;
    if (Template_v3_03_2020a_P.simMode == 0.0) {
      Template_v3_03_2020a_B.rtAction = 0;
    } else {
      if (Template_v3_03_2020a_P.simMode == 1.0) {
        Template_v3_03_2020a_B.rtAction = 1;
      }
    }

    Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe =
      Template_v3_03_2020a_B.rtAction;
    if ((Template_v3_03_2020a_B.rtPrevAction != Template_v3_03_2020a_B.rtAction)
        && (Template_v3_03_2020a_B.rtPrevAction == 0)) {
      // Disable for If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      switch (Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei) {
       case 0:
        // Disable for Enabled SubSystem: '<S108>/Enabled Subsystem'
        if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
          Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = false;
        }

        // End of Disable for SubSystem: '<S108>/Enabled Subsystem'
        break;

       case 1:
        // Disable for If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 
        Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

        // Disable for If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
          // Disable for Enabled SubSystem: '<S91>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
          }

          // End of Disable for SubSystem: '<S91>/Enabled Subsystem'
        }

        Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;
        break;
      }

      Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei = -1;

      // End of Disable for If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
    }

    switch (Template_v3_03_2020a_B.rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S73>/Action Port'

      // If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' incorporates:
      //   Constant: '<S73>/Which PLATFORM is being used?'
      //   Delay: '<S115>/Delay'
      //   Inport: '<S116>/In1'
      //   Logic: '<S115>/Logical Operator'
      //   Logic: '<S115>/Logical Operator1'

      Template_v3_03_2020a_B.rtPrevAction =
        Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei;
      Template_v3_03_2020a_B.rtAction = -1;
      if ((Template_v3_03_2020a_P.platformSelection == 1.0) ||
          (Template_v3_03_2020a_P.platformSelection == 2.0) ||
          (Template_v3_03_2020a_P.platformSelection == 5.0)) {
        Template_v3_03_2020a_B.rtAction = 0;
      } else {
        if ((Template_v3_03_2020a_P.platformSelection == 3.0) ||
            (Template_v3_03_2020a_P.platformSelection == 4.0)) {
          Template_v3_03_2020a_B.rtAction = 1;
        }
      }

      Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei =
        Template_v3_03_2020a_B.rtAction;
      if (Template_v3_03_2020a_B.rtPrevAction != Template_v3_03_2020a_B.rtAction)
      {
        switch (Template_v3_03_2020a_B.rtPrevAction) {
         case 0:
          // Disable for Enabled SubSystem: '<S108>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = false;
          }

          // End of Disable for SubSystem: '<S108>/Enabled Subsystem'
          break;

         case 1:
          // Disable for If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 
          Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

          // Disable for If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
          if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
            // Disable for Enabled SubSystem: '<S91>/Enabled Subsystem'
            if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
              Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
            }

            // End of Disable for SubSystem: '<S91>/Enabled Subsystem'
          }

          Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;
          break;
        }
      }

      switch (Template_v3_03_2020a_B.rtAction) {
       case 0:
        // Outputs for IfAction SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' incorporates:
        //   ActionPort: '<S75>/Action Port'

        Templa_StreamPhaseSpaceData(&Template_v3_03_2020a_B.StreamPhaseSpaceData);

        // DataStoreWrite: '<S75>/RED_Px1'
        Template_v3_03_2020a_DW.RED_Px =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];

        // Delay: '<S109>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ezp != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_as =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];
        }

        // Sum: '<S109>/Sum6' incorporates:
        //   Delay: '<S109>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_as;

        // If: '<S109>/if we went through a "step"' incorporates:
        //   Inport: '<S119>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S109>/Hold this value' incorporates:
          //   ActionPort: '<S119>/Action Port'

          Template_v3_03_2020a_B.In1_np = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S109>/Hold this value'
        }

        // End of If: '<S109>/if we went through a "step"'

        // Gain: '<S109>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Px2'

        Template_v3_03_2020a_DW.RED_Vx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_np;

        // Delay: '<S112>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_gv != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_au =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];
        }

        // Sum: '<S112>/Sum6' incorporates:
        //   Delay: '<S112>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_au;

        // If: '<S112>/if we went through a "step"' incorporates:
        //   Inport: '<S122>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S112>/Hold this value' incorporates:
          //   ActionPort: '<S122>/Action Port'

          Template_v3_03_2020a_B.In1_bx = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S112>/Hold this value'
        }

        // End of If: '<S112>/if we went through a "step"'

        // Gain: '<S112>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Px3'

        Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bx;

        // DataStoreWrite: '<S75>/RED_Px4'
        Template_v3_03_2020a_DW.BLACK_Px =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];

        // DataStoreWrite: '<S75>/RED_Px5'
        Template_v3_03_2020a_DW.BLACK_Py =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];

        // DataStoreWrite: '<S75>/RED_Px6'
        Template_v3_03_2020a_DW.BLACK_Rz =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];

        // DataStoreWrite: '<S75>/RED_Py1'
        Template_v3_03_2020a_DW.RED_Py =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];

        // Delay: '<S110>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_en != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_fk =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];
        }

        // Sum: '<S110>/Sum6' incorporates:
        //   Delay: '<S110>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_fk;

        // If: '<S110>/if we went through a "step"' incorporates:
        //   Inport: '<S120>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S110>/Hold this value' incorporates:
          //   ActionPort: '<S120>/Action Port'

          Template_v3_03_2020a_B.In1_n2 = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S110>/Hold this value'
        }

        // End of If: '<S110>/if we went through a "step"'

        // Gain: '<S110>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Py2'

        Template_v3_03_2020a_DW.RED_Vy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_n2;

        // Delay: '<S113>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_f2 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_kq =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];
        }

        // Sum: '<S113>/Sum6' incorporates:
        //   Delay: '<S113>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_kq;

        // If: '<S113>/if we went through a "step"' incorporates:
        //   Inport: '<S123>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S113>/Hold this value' incorporates:
          //   ActionPort: '<S123>/Action Port'

          Template_v3_03_2020a_B.In1_jc = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S113>/Hold this value'
        }

        // End of If: '<S113>/if we went through a "step"'

        // Gain: '<S113>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Py3'

        Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jc;

        // DataStoreWrite: '<S75>/RED_Rz1'
        Template_v3_03_2020a_DW.RED_Rz =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];

        // Delay: '<S111>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_db != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_c1 =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];
        }

        // Sum: '<S111>/Sum6' incorporates:
        //   Delay: '<S111>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_c1;

        // If: '<S111>/if we went through a "step"' incorporates:
        //   Inport: '<S121>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S111>/Hold this value' incorporates:
          //   ActionPort: '<S121>/Action Port'

          Template_v3_03_2020a_B.In1_mo = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S111>/Hold this value'
        }

        // End of If: '<S111>/if we went through a "step"'

        // Gain: '<S111>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Rz2'

        Template_v3_03_2020a_DW.RED_RzD = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_mo;

        // Delay: '<S114>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_es != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_ems =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];
        }

        // Sum: '<S114>/Sum6' incorporates:
        //   Delay: '<S114>/Delay1'

        Template_v3_03_2020a_B.Subtract_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_ems;

        // If: '<S114>/if we went through a "step"' incorporates:
        //   Inport: '<S124>/In1'

        if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
          // Outputs for IfAction SubSystem: '<S114>/Hold this value' incorporates:
          //   ActionPort: '<S124>/Action Port'

          Template_v3_03_2020a_B.In1_j1 = Template_v3_03_2020a_B.Subtract_o;

          // End of Outputs for SubSystem: '<S114>/Hold this value'
        }

        // End of If: '<S114>/if we went through a "step"'

        // Gain: '<S114>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S75>/RED_Rz3'

        Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_j1;

        // DataTypeConversion: '<S115>/Data Type Conversion'
        Template_v3_03_2020a_B.DataTypeConversion_m =
          (Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[0]
           != 0.0);

        // Outputs for Enabled SubSystem: '<S108>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S116>/Enable'

        if (Template_v3_03_2020a_B.DataTypeConversion_m &&
            (!Template_v3_03_2020a_DW.Delay_DSTATE_h)) {
          if (!Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = true;
          }
        } else {
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = false;
          }
        }

        if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
          Template_v3_03_2020a_B.In1_jww =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[0];
        }

        // End of Outputs for SubSystem: '<S108>/Enabled Subsystem'

        // Sum: '<S108>/Subtract' incorporates:
        //   DataStoreWrite: '<S75>/Universal_Time1'
        //   Delay: '<S115>/Delay'
        //   Inport: '<S116>/In1'
        //   Logic: '<S115>/Logical Operator'
        //   Logic: '<S115>/Logical Operator1'

        Template_v3_03_2020a_DW.Univ_Time =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[0] -
          Template_v3_03_2020a_B.In1_jww;

        // End of Outputs for SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 
        break;

       case 1:
        // Outputs for IfAction SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' incorporates:
        //   ActionPort: '<S74>/Action Port'

        // If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
        //   Constant: '<S74>/Constant'
        //   Constant: '<S76>/Constant'

        Template_v3_03_2020a_B.rtAction = -1;
        if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
            (Template_v3_03_2020a_P.simMode == 1.0)) {
          Template_v3_03_2020a_B.rtAction = 0;

          // Outputs for IfAction SubSystem: '<S74>/Obtain BLACK States' incorporates:
          //   ActionPort: '<S77>/Action Port'

          // S-Function (sdspFromNetwork): '<S77>/UDP Receive'
          sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib
                                [0U]);
          Template_v3_03_2020a_B.i = 13;
          LibOutputs_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U],
                             &Template_v3_03_2020a_B.UDPReceive_o1[0U],
                             &Template_v3_03_2020a_B.i);
          if (*sErr != 0) {
            rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
            rtmSetStopRequested(Template_v3_03_2020a_M, 1);
          }

          // End of S-Function (sdspFromNetwork): '<S77>/UDP Receive'

          // DataStoreWrite: '<S77>/RED_Px1'
          Template_v3_03_2020a_DW.RED_Px = Template_v3_03_2020a_B.UDPReceive_o1
            [1];

          // Delay: '<S79>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_nv != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_bz =
              Template_v3_03_2020a_B.UDPReceive_o1[1];
          }

          // Sum: '<S79>/Sum6' incorporates:
          //   Delay: '<S79>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[1] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_bz;

          // If: '<S79>/if we went through a "step"' incorporates:
          //   Inport: '<S85>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S79>/Hold this value' incorporates:
            //   ActionPort: '<S85>/Action Port'

            Template_v3_03_2020a_B.In1_et = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S79>/Hold this value'
          }

          // End of If: '<S79>/if we went through a "step"'

          // Gain: '<S79>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Px2'

          Template_v3_03_2020a_DW.RED_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_et;

          // Delay: '<S82>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_bj != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_mi =
              Template_v3_03_2020a_B.UDPReceive_o1[4];
          }

          // Sum: '<S82>/Sum6' incorporates:
          //   Delay: '<S82>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[4] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_mi;

          // If: '<S82>/if we went through a "step"' incorporates:
          //   Inport: '<S88>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S82>/Hold this value' incorporates:
            //   ActionPort: '<S88>/Action Port'

            Template_v3_03_2020a_B.In1_aw = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S82>/Hold this value'
          }

          // End of If: '<S82>/if we went through a "step"'

          // Gain: '<S82>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Px3'

          Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_aw;

          // DataStoreWrite: '<S77>/RED_Px4'
          Template_v3_03_2020a_DW.BLACK_Px =
            Template_v3_03_2020a_B.UDPReceive_o1[4];

          // DataStoreWrite: '<S77>/RED_Px5'
          Template_v3_03_2020a_DW.BLACK_Py =
            Template_v3_03_2020a_B.UDPReceive_o1[5];

          // DataStoreWrite: '<S77>/RED_Px6'
          Template_v3_03_2020a_DW.BLACK_Rz =
            Template_v3_03_2020a_B.UDPReceive_o1[6];

          // DataStoreWrite: '<S77>/RED_Py1'
          Template_v3_03_2020a_DW.RED_Py = Template_v3_03_2020a_B.UDPReceive_o1
            [2];

          // Delay: '<S80>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_d0 != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_ea =
              Template_v3_03_2020a_B.UDPReceive_o1[2];
          }

          // Sum: '<S80>/Sum6' incorporates:
          //   Delay: '<S80>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[2] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_ea;

          // If: '<S80>/if we went through a "step"' incorporates:
          //   Inport: '<S86>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S80>/Hold this value' incorporates:
            //   ActionPort: '<S86>/Action Port'

            Template_v3_03_2020a_B.In1_ky2 = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S80>/Hold this value'
          }

          // End of If: '<S80>/if we went through a "step"'

          // Gain: '<S80>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Py2'

          Template_v3_03_2020a_DW.RED_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ky2;

          // Delay: '<S83>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_fjc != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_of =
              Template_v3_03_2020a_B.UDPReceive_o1[5];
          }

          // Sum: '<S83>/Sum6' incorporates:
          //   Delay: '<S83>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[5] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_of;

          // If: '<S83>/if we went through a "step"' incorporates:
          //   Inport: '<S89>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S83>/Hold this value' incorporates:
            //   ActionPort: '<S89>/Action Port'

            Template_v3_03_2020a_B.In1_ky = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S83>/Hold this value'
          }

          // End of If: '<S83>/if we went through a "step"'

          // Gain: '<S83>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Py3'

          Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ky;

          // DataStoreWrite: '<S77>/RED_Rz1'
          Template_v3_03_2020a_DW.RED_Rz = Template_v3_03_2020a_B.UDPReceive_o1
            [3];

          // Delay: '<S81>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_dyz != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_k2 =
              Template_v3_03_2020a_B.UDPReceive_o1[3];
          }

          // Sum: '<S81>/Sum6' incorporates:
          //   Delay: '<S81>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[3] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_k2;

          // If: '<S81>/if we went through a "step"' incorporates:
          //   Inport: '<S87>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S81>/Hold this value' incorporates:
            //   ActionPort: '<S87>/Action Port'

            Template_v3_03_2020a_B.In1_fxz = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S81>/Hold this value'
          }

          // End of If: '<S81>/if we went through a "step"'

          // Gain: '<S81>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Rz2'

          Template_v3_03_2020a_DW.RED_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fxz;

          // Delay: '<S84>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_p != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_b2 =
              Template_v3_03_2020a_B.UDPReceive_o1[6];
          }

          // Sum: '<S84>/Sum6' incorporates:
          //   Delay: '<S84>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.UDPReceive_o1[6] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_b2;

          // If: '<S84>/if we went through a "step"' incorporates:
          //   Inport: '<S90>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S84>/Hold this value' incorporates:
            //   ActionPort: '<S90>/Action Port'

            Template_v3_03_2020a_B.In1_m4 = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S84>/Hold this value'
          }

          // End of If: '<S84>/if we went through a "step"'

          // Gain: '<S84>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S77>/RED_Rz3'

          Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_m4;

          // DataStoreWrite: '<S77>/Universal_Time1'
          Template_v3_03_2020a_DW.Univ_Time =
            Template_v3_03_2020a_B.UDPReceive_o1[0];

          // End of Outputs for SubSystem: '<S74>/Obtain BLACK States'
        }

        Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn =
          Template_v3_03_2020a_B.rtAction;

        // End of If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 

        // If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
        //   Constant: '<S74>/Constant'
        //   Constant: '<S76>/Constant'
        //   Delay: '<S98>/Delay'
        //   Inport: '<S99>/In1'
        //   Logic: '<S98>/Logical Operator'
        //   Logic: '<S98>/Logical Operator1'

        Template_v3_03_2020a_B.rtPrevAction =
          Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o;
        Template_v3_03_2020a_B.rtAction = -1;
        if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
            (Template_v3_03_2020a_P.simMode == 1.0)) {
          Template_v3_03_2020a_B.rtAction = 0;
        }

        Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o =
          Template_v3_03_2020a_B.rtAction;
        if ((Template_v3_03_2020a_B.rtPrevAction !=
             Template_v3_03_2020a_B.rtAction) &&
            (Template_v3_03_2020a_B.rtPrevAction == 0)) {
          // Disable for Enabled SubSystem: '<S91>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
          }

          // End of Disable for SubSystem: '<S91>/Enabled Subsystem'
        }

        if (Template_v3_03_2020a_B.rtAction == 0) {
          // Outputs for IfAction SubSystem: '<S74>/Obtain RED States' incorporates:
          //   ActionPort: '<S78>/Action Port'

          Templa_StreamPhaseSpaceData
            (&Template_v3_03_2020a_B.StreamPhaseSpaceData_p);

          // DataStoreWrite: '<S78>/RED_Px1'
          Template_v3_03_2020a_DW.RED_Px =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1];

          // Delay: '<S92>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ku != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_oy =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              1];
          }

          // Sum: '<S92>/Sum6' incorporates:
          //   Delay: '<S92>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_oy;

          // If: '<S92>/if we went through a "step"' incorporates:
          //   Inport: '<S102>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S92>/Hold this value' incorporates:
            //   ActionPort: '<S102>/Action Port'

            Template_v3_03_2020a_B.In1_of = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S92>/Hold this value'
          }

          // End of If: '<S92>/if we went through a "step"'

          // Gain: '<S92>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Px2'

          Template_v3_03_2020a_DW.RED_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_of;

          // Delay: '<S95>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_h0 != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_cj =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              4];
          }

          // Sum: '<S95>/Sum6' incorporates:
          //   Delay: '<S95>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_cj;

          // If: '<S95>/if we went through a "step"' incorporates:
          //   Inport: '<S105>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S95>/Hold this value' incorporates:
            //   ActionPort: '<S105>/Action Port'

            Template_v3_03_2020a_B.In1_g5 = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S95>/Hold this value'
          }

          // End of If: '<S95>/if we went through a "step"'

          // Gain: '<S95>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Px3'

          Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_g5;

          // DataStoreWrite: '<S78>/RED_Px4'
          Template_v3_03_2020a_DW.BLACK_Px =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4];

          // DataStoreWrite: '<S78>/RED_Px5'
          Template_v3_03_2020a_DW.BLACK_Py =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5];

          // DataStoreWrite: '<S78>/RED_Px6'
          Template_v3_03_2020a_DW.BLACK_Rz =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6];

          // DataStoreWrite: '<S78>/RED_Py1'
          Template_v3_03_2020a_DW.RED_Py =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2];

          // Delay: '<S93>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_hc != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_em =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              2];
          }

          // Sum: '<S93>/Sum6' incorporates:
          //   Delay: '<S93>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_em;

          // If: '<S93>/if we went through a "step"' incorporates:
          //   Inport: '<S103>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S93>/Hold this value' incorporates:
            //   ActionPort: '<S103>/Action Port'

            Template_v3_03_2020a_B.In1_bd2 = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S93>/Hold this value'
          }

          // End of If: '<S93>/if we went through a "step"'

          // Gain: '<S93>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Py2'

          Template_v3_03_2020a_DW.RED_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bd2;

          // Delay: '<S96>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ez != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_cc =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              5];
          }

          // Sum: '<S96>/Sum6' incorporates:
          //   Delay: '<S96>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_cc;

          // If: '<S96>/if we went through a "step"' incorporates:
          //   Inport: '<S106>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S96>/Hold this value' incorporates:
            //   ActionPort: '<S106>/Action Port'

            Template_v3_03_2020a_B.In1_p = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S96>/Hold this value'
          }

          // End of If: '<S96>/if we went through a "step"'

          // Gain: '<S96>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Py3'

          Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_p;

          // DataStoreWrite: '<S78>/RED_Rz1'
          Template_v3_03_2020a_DW.RED_Rz =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3];

          // Delay: '<S94>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_os != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_f0 =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              3];
          }

          // Sum: '<S94>/Sum6' incorporates:
          //   Delay: '<S94>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_f0;

          // If: '<S94>/if we went through a "step"' incorporates:
          //   Inport: '<S104>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S94>/Hold this value' incorporates:
            //   ActionPort: '<S104>/Action Port'

            Template_v3_03_2020a_B.In1_jh = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S94>/Hold this value'
          }

          // End of If: '<S94>/if we went through a "step"'

          // Gain: '<S94>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Rz2'

          Template_v3_03_2020a_DW.RED_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jh;

          // Delay: '<S97>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_g != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_iu =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              6];
          }

          // Sum: '<S97>/Sum6' incorporates:
          //   Delay: '<S97>/Delay1'

          Template_v3_03_2020a_B.Subtract_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_iu;

          // If: '<S97>/if we went through a "step"' incorporates:
          //   Inport: '<S107>/In1'

          if (Template_v3_03_2020a_B.Subtract_o != 0.0) {
            // Outputs for IfAction SubSystem: '<S97>/Hold this value' incorporates:
            //   ActionPort: '<S107>/Action Port'

            Template_v3_03_2020a_B.In1_bs = Template_v3_03_2020a_B.Subtract_o;

            // End of Outputs for SubSystem: '<S97>/Hold this value'
          }

          // End of If: '<S97>/if we went through a "step"'

          // Gain: '<S97>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S78>/RED_Rz3'

          Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bs;

          // DataTypeConversion: '<S98>/Data Type Conversion'
          Template_v3_03_2020a_B.DataTypeConversion =
            (Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData
             [0] != 0.0);

          // Outputs for Enabled SubSystem: '<S91>/Enabled Subsystem' incorporates:
          //   EnablePort: '<S99>/Enable'

          if (Template_v3_03_2020a_B.DataTypeConversion &&
              (!Template_v3_03_2020a_DW.Delay_DSTATE_l)) {
            if (!Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
              Template_v3_03_2020a_DW.EnabledSubsystem_MODE = true;
            }
          } else {
            if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
              Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
            }
          }

          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
            Template_v3_03_2020a_B.In1_f5 =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              0];
          }

          // End of Outputs for SubSystem: '<S91>/Enabled Subsystem'

          // Sum: '<S91>/Subtract' incorporates:
          //   DataStoreWrite: '<S78>/Universal_Time1'
          //   Delay: '<S98>/Delay'
          //   Inport: '<S99>/In1'
          //   Logic: '<S98>/Logical Operator'
          //   Logic: '<S98>/Logical Operator1'

          Template_v3_03_2020a_DW.Univ_Time =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[0]
            - Template_v3_03_2020a_B.In1_f5;

          // SignalConversion generated from: '<S78>/Send BLACK States to  BLACK Platform' incorporates:
          //   DataStoreWrite: '<S78>/Universal_Time1'

          Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[0] =
            Template_v3_03_2020a_DW.Univ_Time;
          memcpy(&Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[1],
                 &Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData
                 [1], 12U * sizeof(real_T));

          // End of Outputs for SubSystem: '<S74>/Obtain RED States'
        }

        // End of If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
        // End of Outputs for SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' 
        break;
      }

      // End of If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      // End of Outputs for SubSystem: '<S5>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S5>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S71>/Action Port'

      // Clock: '<S71>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S71>/Universal_Time'

      Template_v3_03_2020a_DW.Univ_Time = Template_v3_03_2020a_B.Sum6_l1;

      // End of Outputs for SubSystem: '<S5>/Initialize Universal Time (Simulation)' 
      break;
    }
  }

  // Matfile logging
  rt_UpdateTXYLogVars(Template_v3_03_2020a_M->rtwLogInfo,
                      (Template_v3_03_2020a_M->Timing.t));

  {
    char_T *sErr;

    // Update for S-Function (sdspToNetwork): '<Root>/UDP Send'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U],
                      &Template_v3_03_2020a_B.SetUniversalTimeIfthisisasimula, 1);
    if (*sErr != 0) {
      rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
      rtmSetStopRequested(Template_v3_03_2020a_M, 1);
    }

    // End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send'

    // Update for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S73>/Action Port'

      // Update for If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      switch (Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei) {
       case 0:
        // Update for IfAction SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' incorporates:
        //   ActionPort: '<S75>/Action Port'

        // Update for Delay: '<S109>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ezp = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_as =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];

        // Update for Delay: '<S112>/Delay1'
        Template_v3_03_2020a_DW.icLoad_gv = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_au =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];

        // Update for Delay: '<S110>/Delay1'
        Template_v3_03_2020a_DW.icLoad_en = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_fk =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];

        // Update for Delay: '<S113>/Delay1'
        Template_v3_03_2020a_DW.icLoad_f2 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_kq =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];

        // Update for Delay: '<S111>/Delay1'
        Template_v3_03_2020a_DW.icLoad_db = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_c1 =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];

        // Update for Delay: '<S114>/Delay1'
        Template_v3_03_2020a_DW.icLoad_es = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_ems =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];

        // Update for Delay: '<S115>/Delay'
        Template_v3_03_2020a_DW.Delay_DSTATE_h =
          Template_v3_03_2020a_B.DataTypeConversion_m;

        // End of Update for SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 
        break;

       case 1:
        // Update for IfAction SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' incorporates:
        //   ActionPort: '<S74>/Action Port'

        // Update for If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn == 0) {
          // Update for IfAction SubSystem: '<S74>/Obtain BLACK States' incorporates:
          //   ActionPort: '<S77>/Action Port'

          // Update for Delay: '<S79>/Delay1'
          Template_v3_03_2020a_DW.icLoad_nv = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_bz =
            Template_v3_03_2020a_B.UDPReceive_o1[1];

          // Update for Delay: '<S82>/Delay1'
          Template_v3_03_2020a_DW.icLoad_bj = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_mi =
            Template_v3_03_2020a_B.UDPReceive_o1[4];

          // Update for Delay: '<S80>/Delay1'
          Template_v3_03_2020a_DW.icLoad_d0 = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_ea =
            Template_v3_03_2020a_B.UDPReceive_o1[2];

          // Update for Delay: '<S83>/Delay1'
          Template_v3_03_2020a_DW.icLoad_fjc = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_of =
            Template_v3_03_2020a_B.UDPReceive_o1[5];

          // Update for Delay: '<S81>/Delay1'
          Template_v3_03_2020a_DW.icLoad_dyz = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_k2 =
            Template_v3_03_2020a_B.UDPReceive_o1[3];

          // Update for Delay: '<S84>/Delay1'
          Template_v3_03_2020a_DW.icLoad_p = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_b2 =
            Template_v3_03_2020a_B.UDPReceive_o1[6];

          // End of Update for SubSystem: '<S74>/Obtain BLACK States'
        }

        // End of Update for If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 

        // Update for If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
          // Update for IfAction SubSystem: '<S74>/Obtain RED States' incorporates:
          //   ActionPort: '<S78>/Action Port'

          // Update for Delay: '<S92>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ku = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_oy =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1];

          // Update for Delay: '<S95>/Delay1'
          Template_v3_03_2020a_DW.icLoad_h0 = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_cj =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4];

          // Update for Delay: '<S93>/Delay1'
          Template_v3_03_2020a_DW.icLoad_hc = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_em =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2];

          // Update for Delay: '<S96>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ez = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_cc =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5];

          // Update for Delay: '<S94>/Delay1'
          Template_v3_03_2020a_DW.icLoad_os = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_f0 =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3];

          // Update for Delay: '<S97>/Delay1'
          Template_v3_03_2020a_DW.icLoad_g = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_iu =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6];

          // Update for Delay: '<S98>/Delay'
          Template_v3_03_2020a_DW.Delay_DSTATE_l =
            Template_v3_03_2020a_B.DataTypeConversion;

          // Update for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 
          sErr = GetErrorBuffer
            (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
          LibUpdate_Network
            (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U],
             &Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[0U], 13);
          if (*sErr != 0) {
            rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
            rtmSetStopRequested(Template_v3_03_2020a_M, 1);
          }

          // End of Update for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 
          // End of Update for SubSystem: '<S74>/Obtain RED States'
        }

        // End of Update for If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
        // End of Update for SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' 
        break;
      }

      // End of Update for If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      // End of Update for SubSystem: '<S5>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.0s, 0.0s]
    if ((rtmGetTFinal(Template_v3_03_2020a_M)!=-1) &&
        !((rtmGetTFinal(Template_v3_03_2020a_M)-Template_v3_03_2020a_M->
           Timing.t[0]) > Template_v3_03_2020a_M->Timing.t[0] * (DBL_EPSILON)))
    {
      rtmSetErrorStatus(Template_v3_03_2020a_M, "Simulation finished");
    }
  }

  // Update absolute time
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  Template_v3_03_2020a_M->Timing.t[0] =
    ((time_T)(++Template_v3_03_2020a_M->Timing.clockTick0)) *
    Template_v3_03_2020a_M->Timing.stepSize0;

  // Update absolute time
  // The "clockTick1" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.05, which is the step size
  //  of the task. Size of "clockTick1" ensures timer will not overflow during the
  //  application lifespan selected.

  Template_v3_03_2020a_M->Timing.clockTick1++;
}

// Model step function for TID2
void Template_v3_03_2020a_step2(void)  // Sample time: [0.1s, 0.0s]
{
  boolean_T rtb_DigitalRead_0;
  real_T sampleTime;
  int32_T rtb_EnableSig;
  int32_T rtb_WheelDirection;
  real_T rtb_SaturateMotor;

  // Outputs for Atomic SubSystem: '<S3>/Send Commands to PWM Blocks'
  // MATLABSystem: '<S24>/RED T1 - BLACK T8' incorporates:
  //   RateTransition: '<S3>/Rate Transition'

  if (Template_v3_03_2020a_DW.RateTransition_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_m.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T1 - BLACK T8'

  // MATLABSystem: '<S24>/RED T2 - BLACK T3' incorporates:
  //   RateTransition: '<S3>/Rate Transition1'

  if (Template_v3_03_2020a_DW.RateTransition1_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition1_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_ma.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T2 - BLACK T3'

  // MATLABSystem: '<S24>/RED T3' incorporates:
  //   RateTransition: '<S3>/Rate Transition2'

  if (Template_v3_03_2020a_DW.RateTransition2_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition2_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_h.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T3'

  // MATLABSystem: '<S24>/RED T4 - BLACK T5' incorporates:
  //   RateTransition: '<S3>/Rate Transition3'

  if (Template_v3_03_2020a_DW.RateTransition3_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition3_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_k.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T4 - BLACK T5'

  // MATLABSystem: '<S24>/RED T5 - BLACK T4' incorporates:
  //   RateTransition: '<S3>/Rate Transition4'

  if (Template_v3_03_2020a_DW.RateTransition4_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition4_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_hw.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T5 - BLACK T4'

  // MATLABSystem: '<S24>/RED T6 - BLACK T7' incorporates:
  //   RateTransition: '<S3>/Rate Transition5'

  if (Template_v3_03_2020a_DW.RateTransition5_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition5_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_hf.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T6 - BLACK T7'

  // MATLABSystem: '<S24>/RED T7 - BLACK T6' incorporates:
  //   RateTransition: '<S3>/Rate Transition6'

  if (Template_v3_03_2020a_DW.RateTransition6_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition6_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_c.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T7 - BLACK T6'

  // MATLABSystem: '<S24>/RED T8 - BLACK T1' incorporates:
  //   RateTransition: '<S3>/Rate Transition7'

  if (Template_v3_03_2020a_DW.RateTransition7_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition7_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_f.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/RED T8 - BLACK T1'

  // MATLABSystem: '<S24>/BLACK T2' incorporates:
  //   RateTransition: '<S3>/Rate Transition8'

  if (Template_v3_03_2020a_DW.RateTransition8_Buffer < 1.0) {
    rtb_SaturateMotor = Template_v3_03_2020a_DW.RateTransition8_Buffer;
  } else {
    rtb_SaturateMotor = 1.0;
  }

  if (!(rtb_SaturateMotor > 0.0)) {
    rtb_SaturateMotor = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_ci.PinNumber,
    rtb_SaturateMotor);

  // End of MATLABSystem: '<S24>/BLACK T2'
  // End of Outputs for SubSystem: '<S3>/Send Commands to PWM Blocks'

  // If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
  //   Constant: '<S4>/Constant'
  //   Constant: '<S55>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 1.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S4>/Change RED Behavior' incorporates:
    //   ActionPort: '<S54>/Action Port'

    // Saturate: '<S56>/Saturate Torque'
    if (Template_v3_03_2020a_DW.RED_Tz_RW >
        Template_v3_03_2020a_P.SaturateTorque_UpperSat) {
      Template_v3_03_2020a_DW.RED_Tz_RW_Sat =
        Template_v3_03_2020a_P.SaturateTorque_UpperSat;
    } else if (Template_v3_03_2020a_DW.RED_Tz_RW <
               Template_v3_03_2020a_P.SaturateTorque_LowerSat) {
      Template_v3_03_2020a_DW.RED_Tz_RW_Sat =
        Template_v3_03_2020a_P.SaturateTorque_LowerSat;
    } else {
      Template_v3_03_2020a_DW.RED_Tz_RW_Sat = Template_v3_03_2020a_DW.RED_Tz_RW;
    }

    // End of Saturate: '<S56>/Saturate Torque'

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    // MATLABSystem: '<S68>/Digital Read'
    if (Template_v3_03_2020a_DW.obj.SampleTime !=
        Template_v3_03_2020a_P.DigitalRead_SampleTime) {
      if (((!rtIsInf(Template_v3_03_2020a_P.DigitalRead_SampleTime)) &&
           (!rtIsNaN(Template_v3_03_2020a_P.DigitalRead_SampleTime))) || rtIsInf
          (Template_v3_03_2020a_P.DigitalRead_SampleTime)) {
        sampleTime = Template_v3_03_2020a_P.DigitalRead_SampleTime;
      }

      Template_v3_03_2020a_DW.obj.SampleTime = sampleTime;
    }

    rtb_DigitalRead_0 = MW_gpioRead(24U);

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Sum: '<S56>/Sum' incorporates:
    //   DataStoreWrite: '<S54>/RED_Tz_RW_Sat'
    //   Delay: '<S56>/Delay'
    //   MATLAB Function: '<S56>/Calculate RW RPM Increment'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal/Calculate RW RPM Increment': '<S58>:1' 
    // '<S58>:1:3' dRPM_RW =  (Tz_Sat/0.007244720)*(60/2/pi)*0.1;
    sampleTime = Template_v3_03_2020a_DW.RED_Tz_RW_Sat / 0.00724472 *
      9.5492965855137211 * 0.1 + Template_v3_03_2020a_DW.Delay_DSTATE;

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    // MATLAB Function: '<S57>/Check if RW is Ready' incorporates:
    //   DataStoreWrite: '<S57>/RED_RW_Speed'
    //   Delay: '<S61>/Delay1'
    //   Delay: '<S61>/Delay2'
    //   Delay: '<S61>/Delay3'
    //   Delay: '<S61>/Delay4'
    //   Delay: '<S61>/Delay5'
    //   MATLABSystem: '<S68>/Digital Read'
    //   MinMax: '<S61>/Mostly zeros?'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Check if RW is Ready': '<S59>:1' 
    // '<S59>:1:3' if Status == 0
    if ((!rtb_DigitalRead_0) || (!Template_v3_03_2020a_DW.Delay1_DSTATE_kt) || (
         !Template_v3_03_2020a_DW.Delay2_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay5_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay3_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay4_DSTATE[0U])) {
      // '<S59>:1:4' EnableSig    = 1;
      rtb_EnableSig = 1;

      // '<S59>:1:5' WheelRPM_Out = WheelRPM_In;
      Template_v3_03_2020a_DW.RED_dRz_RW_Sat = sampleTime;
    } else {
      // '<S59>:1:6' else
      // '<S59>:1:7' EnableSig    = 0;
      rtb_EnableSig = 0;

      // '<S59>:1:8' WheelRPM_Out = 0;
      Template_v3_03_2020a_DW.RED_dRz_RW_Sat = 0.0;
    }

    // End of MATLAB Function: '<S57>/Check if RW is Ready'
    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Product: '<S60>/Divide' incorporates:
    //   Constant: '<S60>/Gearbox  Ratio'
    //   DataStoreWrite: '<S57>/RED_RW_Speed'

    rtb_SaturateMotor = Template_v3_03_2020a_DW.RED_dRz_RW_Sat *
      Template_v3_03_2020a_P.GearboxRatio_Value;

    // Saturate: '<S57>/Saturate Motor'
    if (rtb_SaturateMotor > Template_v3_03_2020a_P.SaturateMotor_UpperSat) {
      rtb_SaturateMotor = Template_v3_03_2020a_P.SaturateMotor_UpperSat;
    } else {
      if (rtb_SaturateMotor < Template_v3_03_2020a_P.SaturateMotor_LowerSat) {
        rtb_SaturateMotor = Template_v3_03_2020a_P.SaturateMotor_LowerSat;
      }
    }

    // End of Saturate: '<S57>/Saturate Motor'

    // MATLAB Function: '<S57>/Get RW Direction'
    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Get RW Direction': '<S62>:1' 
    // '<S62>:1:3' if MotorRPM_Sat > 0
    if (rtb_SaturateMotor > 0.0) {
      // '<S62>:1:4' WheelDirection = 0;
      rtb_WheelDirection = 0;
    } else {
      // '<S62>:1:5' else
      // '<S62>:1:6' WheelDirection = 1;
      rtb_WheelDirection = 1;
    }

    // End of MATLAB Function: '<S57>/Get RW Direction'

    // Outputs for Atomic SubSystem: '<S57>/Send Direction to Motor Controller'
    // MATLABSystem: '<S69>/Digital Write'
    MW_gpioWrite(23U, static_cast<uint8_T>(rtb_WheelDirection));

    // End of Outputs for SubSystem: '<S57>/Send Direction to Motor Controller'

    // MATLAB Function: '<S57>/RPM to PWM Value' incorporates:
    //   Abs: '<S57>/Abs'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/RPM to PWM Value': '<S64>:1' 
    // '<S64>:1:3' PWMRange = 0.9-0.1;
    // '<S64>:1:5' MotorPWM = ((MotorRPM_Sat*PWMRange)/7000) + 0.1;
    rtb_SaturateMotor = fabs(rtb_SaturateMotor) * 0.8 / 7000.0 + 0.1;

    // Outputs for Atomic SubSystem: '<S57>/Send PWM to Motor Controller'
    // MATLABSystem: '<S66>/PWM1'
    if (!(rtb_SaturateMotor < 1.0)) {
      rtb_SaturateMotor = 1.0;
    }

    EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_d.PinNumber,
      rtb_SaturateMotor);

    // End of MATLABSystem: '<S66>/PWM1'
    // End of Outputs for SubSystem: '<S57>/Send PWM to Motor Controller'

    // Outputs for Atomic SubSystem: '<S57>/Turn on Motor'
    // MATLABSystem: '<S70>/Digital Write'
    MW_gpioWrite(25U, static_cast<uint8_T>(rtb_EnableSig));

    // End of Outputs for SubSystem: '<S57>/Turn on Motor'

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    // Update for Delay: '<S61>/Delay1' incorporates:
    //   MATLABSystem: '<S68>/Digital Read'

    Template_v3_03_2020a_DW.Delay1_DSTATE_kt = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Update for Delay: '<S61>/Delay2' incorporates:
    //   MATLABSystem: '<S68>/Digital Read'

    Template_v3_03_2020a_DW.Delay2_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay2_DSTATE[1];

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay2_DSTATE[1] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Update for Delay: '<S61>/Delay5' incorporates:
    //   MATLABSystem: '<S68>/Digital Read'

    Template_v3_03_2020a_DW.Delay5_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay5_DSTATE[1];
    Template_v3_03_2020a_DW.Delay5_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay5_DSTATE[2];

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay5_DSTATE[2] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Update for Delay: '<S61>/Delay3' incorporates:
    //   MATLABSystem: '<S68>/Digital Read'

    Template_v3_03_2020a_DW.Delay3_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[1];
    Template_v3_03_2020a_DW.Delay3_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[2];
    Template_v3_03_2020a_DW.Delay3_DSTATE[2] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[3];

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay3_DSTATE[3] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Update for Delay: '<S61>/Delay4' incorporates:
    //   MATLABSystem: '<S68>/Digital Read'

    Template_v3_03_2020a_DW.Delay4_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[1];
    Template_v3_03_2020a_DW.Delay4_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[2];
    Template_v3_03_2020a_DW.Delay4_DSTATE[2] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[3];
    Template_v3_03_2020a_DW.Delay4_DSTATE[3] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[4];

    // Outputs for Atomic SubSystem: '<S57>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay4_DSTATE[4] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S57>/Obtain RW Status'

    // Saturate: '<S56>/Saturate RPM'
    if (sampleTime > Template_v3_03_2020a_P.SaturateRPM_UpperSat) {
      // Update for Delay: '<S56>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE =
        Template_v3_03_2020a_P.SaturateRPM_UpperSat;
    } else if (sampleTime < Template_v3_03_2020a_P.SaturateRPM_LowerSat) {
      // Update for Delay: '<S56>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE =
        Template_v3_03_2020a_P.SaturateRPM_LowerSat;
    } else {
      // Update for Delay: '<S56>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE = sampleTime;
    }

    // End of Saturate: '<S56>/Saturate RPM'
    // End of Outputs for SubSystem: '<S4>/Change RED Behavior'
  }

  // End of If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' 
}

// Model step wrapper function for compatibility with a static main program
void Template_v3_03_2020a_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Template_v3_03_2020a_step0();
    break;

   case 2 :
    Template_v3_03_2020a_step2();
    break;

   default :
    break;
  }
}

// Model initialize function
void Template_v3_03_2020a_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&Template_v3_03_2020a_M->solverInfo,
                          &Template_v3_03_2020a_M->Timing.simTimeStep);
    rtsiSetTPtr(&Template_v3_03_2020a_M->solverInfo, &rtmGetTPtr
                (Template_v3_03_2020a_M));
    rtsiSetStepSizePtr(&Template_v3_03_2020a_M->solverInfo,
                       &Template_v3_03_2020a_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Template_v3_03_2020a_M->solverInfo,
                          (&rtmGetErrorStatus(Template_v3_03_2020a_M)));
    rtsiSetRTModelPtr(&Template_v3_03_2020a_M->solverInfo,
                      Template_v3_03_2020a_M);
  }

  rtsiSetSimTimeStep(&Template_v3_03_2020a_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Template_v3_03_2020a_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Template_v3_03_2020a_M, &Template_v3_03_2020a_M->Timing.tArray[0]);
  rtmSetTFinal(Template_v3_03_2020a_M, 201.0);
  Template_v3_03_2020a_M->Timing.stepSize0 = 0.05;

  // Setup for data logging
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Template_v3_03_2020a_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  // Setup for data logging
  {
    rtliSetLogXSignalInfo(Template_v3_03_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Template_v3_03_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogT(Template_v3_03_2020a_M->rtwLogInfo, "tout");
    rtliSetLogX(Template_v3_03_2020a_M->rtwLogInfo, "");
    rtliSetLogXFinal(Template_v3_03_2020a_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Template_v3_03_2020a_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Template_v3_03_2020a_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Template_v3_03_2020a_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Template_v3_03_2020a_M->rtwLogInfo, 1);
    rtliSetLogY(Template_v3_03_2020a_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Template_v3_03_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Template_v3_03_2020a_M->rtwLogInfo, (NULL));
  }

  // block I/O
  (void) memset((static_cast<void *>(&Template_v3_03_2020a_B)), 0,
                sizeof(B_Template_v3_03_2020a_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&Template_v3_03_2020a_DW), 0,
                sizeof(DW_Template_v3_03_2020a_T));

  // Matfile logging
  rt_StartDataLoggingWithStartTime(Template_v3_03_2020a_M->rtwLogInfo, 0.0,
    rtmGetTFinal(Template_v3_03_2020a_M),
    Template_v3_03_2020a_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Template_v3_03_2020a_M)));

  {
    char_T *sErr;
    int32_T ret;
    real_T sampleTime;
    uint32_T tseed;
    int32_T t;
    real_T tmp;
    static const char_T tmp_0[45] =
      "Unable to configure pin %u for PWM output.\\n";

    // SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace'
    {
      int_T dimensions[1] = { 28 };

      Template_v3_03_2020a_DW.ToWorkspace_PWORK.LoggedData = rt_CreateLogVar(
        Template_v3_03_2020a_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(Template_v3_03_2020a_M),
        Template_v3_03_2020a_M->Timing.stepSize0,
        (&rtmGetErrorStatus(Template_v3_03_2020a_M)),
        "dataPacket",
        SS_DOUBLE,
        0,
        0,
        0,
        28,
        1,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.05,
        1);
      if (Template_v3_03_2020a_DW.ToWorkspace_PWORK.LoggedData == (NULL))
        return;
    }

    // Start for S-Function (sdspToNetwork): '<Root>/UDP Send'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U], 1,
                        "0.0.0.0", -1, "172.24.1.102",
                        Template_v3_03_2020a_P.UDPSend_Port, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<Root>/UDP Send'

    // Start for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for DataStoreMemory: '<Root>/BLACK_Fx'
    Template_v3_03_2020a_DW.BLACK_Fx =
      Template_v3_03_2020a_P.BLACK_Fx_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fx1'
    Template_v3_03_2020a_DW.BLUE_Fx =
      Template_v3_03_2020a_P.BLACK_Fx1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fx_Sat'
    Template_v3_03_2020a_DW.BLACK_Fx_Sat =
      Template_v3_03_2020a_P.BLACK_Fx_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fx_Sat2'
    Template_v3_03_2020a_DW.BLUE_Fx_Sat =
      Template_v3_03_2020a_P.BLACK_Fx_Sat2_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fy'
    Template_v3_03_2020a_DW.BLACK_Fy =
      Template_v3_03_2020a_P.BLACK_Fy_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fy1'
    Template_v3_03_2020a_DW.BLUE_Fy =
      Template_v3_03_2020a_P.BLACK_Fy1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fy_Sat'
    Template_v3_03_2020a_DW.BLACK_Fy_Sat =
      Template_v3_03_2020a_P.BLACK_Fy_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Fy_Sat2'
    Template_v3_03_2020a_DW.BLUE_Fy_Sat =
      Template_v3_03_2020a_P.BLACK_Fy_Sat2_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Px'
    Template_v3_03_2020a_DW.BLACK_Px =
      Template_v3_03_2020a_P.BLACK_Px_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Px1'
    Template_v3_03_2020a_DW.BLUE_Px =
      Template_v3_03_2020a_P.BLACK_Px1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Py'
    Template_v3_03_2020a_DW.BLACK_Py =
      Template_v3_03_2020a_P.BLACK_Py_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Py1'
    Template_v3_03_2020a_DW.BLUE_Py =
      Template_v3_03_2020a_P.BLACK_Py1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Rz'
    Template_v3_03_2020a_DW.BLACK_Rz =
      Template_v3_03_2020a_P.BLACK_Rz_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Rz1'
    Template_v3_03_2020a_DW.BLUE_Rz =
      Template_v3_03_2020a_P.BLACK_Rz1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Tz'
    Template_v3_03_2020a_DW.BLACK_Tz =
      Template_v3_03_2020a_P.BLACK_Tz_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Tz1'
    Template_v3_03_2020a_DW.BLUE_Tz =
      Template_v3_03_2020a_P.BLACK_Tz1_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Tz_Sat'
    Template_v3_03_2020a_DW.BLACK_Tz_Sat =
      Template_v3_03_2020a_P.BLACK_Tz_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/BLACK_Tz_Sat2'
    Template_v3_03_2020a_DW.BLUE_Tz_Sat =
      Template_v3_03_2020a_P.BLACK_Tz_Sat2_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Fx'
    Template_v3_03_2020a_DW.RED_Fx = Template_v3_03_2020a_P.RED_Fx_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Fx_Sat'
    Template_v3_03_2020a_DW.RED_Fx_Sat =
      Template_v3_03_2020a_P.RED_Fx_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Fy'
    Template_v3_03_2020a_DW.RED_Fy = Template_v3_03_2020a_P.RED_Fy_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Fy_Sat'
    Template_v3_03_2020a_DW.RED_Fy_Sat =
      Template_v3_03_2020a_P.RED_Fy_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Px'
    Template_v3_03_2020a_DW.RED_Px = Template_v3_03_2020a_P.RED_Px_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Py'
    Template_v3_03_2020a_DW.RED_Py = Template_v3_03_2020a_P.RED_Py_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Rz'
    Template_v3_03_2020a_DW.RED_Rz = Template_v3_03_2020a_P.RED_Rz_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz'
    Template_v3_03_2020a_DW.RED_Tz = Template_v3_03_2020a_P.RED_Tz_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz7'
    Template_v3_03_2020a_DW.Float_State =
      Template_v3_03_2020a_P.RED_Tz7_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz8'
    Template_v3_03_2020a_DW.Magnet_State =
      Template_v3_03_2020a_P.RED_Tz8_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz_RW'
    Template_v3_03_2020a_DW.RED_Tz_RW =
      Template_v3_03_2020a_P.RED_Tz_RW_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz_RW Sat'
    Template_v3_03_2020a_DW.RED_Tz_RW_Sat =
      Template_v3_03_2020a_P.RED_Tz_RWSat_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_Tz_Sat'
    Template_v3_03_2020a_DW.RED_Tz_Sat =
      Template_v3_03_2020a_P.RED_Tz_Sat_InitialValue;

    // Start for DataStoreMemory: '<Root>/RED_dRz_RW Sat'
    Template_v3_03_2020a_DW.RED_dRz_RW_Sat =
      Template_v3_03_2020a_P.RED_dRz_RWSat_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time'
    Template_v3_03_2020a_DW.Univ_Time =
      Template_v3_03_2020a_P.Universal_Time_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time1'
    Template_v3_03_2020a_DW.RED_Vx =
      Template_v3_03_2020a_P.Universal_Time1_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time2'
    Template_v3_03_2020a_DW.RED_Vy =
      Template_v3_03_2020a_P.Universal_Time2_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time3'
    Template_v3_03_2020a_DW.RED_RzD =
      Template_v3_03_2020a_P.Universal_Time3_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time4'
    Template_v3_03_2020a_DW.BLACK_Vx =
      Template_v3_03_2020a_P.Universal_Time4_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time5'
    Template_v3_03_2020a_DW.BLACK_Vy =
      Template_v3_03_2020a_P.Universal_Time5_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time6'
    Template_v3_03_2020a_DW.BLACK_RzD =
      Template_v3_03_2020a_P.Universal_Time6_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time7'
    Template_v3_03_2020a_DW.BLUE_Vx =
      Template_v3_03_2020a_P.Universal_Time7_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time8'
    Template_v3_03_2020a_DW.BLUE_Vy =
      Template_v3_03_2020a_P.Universal_Time8_InitialValue;

    // Start for DataStoreMemory: '<Root>/Universal_Time9'
    Template_v3_03_2020a_DW.BLUE_RzD =
      Template_v3_03_2020a_P.Universal_Time9_InitialValue;
    Template_v3_03_2020a_PrevZCX.SampleandHold1_Trig_ZCE_g = UNINITIALIZED_ZCSIG;
    Template_v3_03_2020a_PrevZCX.SampleandHold1_Trig_ZCE = UNINITIALIZED_ZCSIG;
    Template_v3_03_2020a_PrevZCX.SampleandHold_Trig_ZCE = UNINITIALIZED_ZCSIG;

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 
    // SystemInitialize for IfAction SubSystem: '<S9>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S143>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ns = 1U;

    // InitializeConditions for Delay: '<S145>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k1 = 1U;

    // InitializeConditions for Delay: '<S141>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ep = 1U;

    // SystemInitialize for IfAction SubSystem: '<S143>/Hold this value'
    // SystemInitialize for Outport: '<S144>/Out1'
    Template_v3_03_2020a_B.In1_e = Template_v3_03_2020a_P.Out1_Y0_av;

    // End of SystemInitialize for SubSystem: '<S143>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S145>/Hold this value'
    // SystemInitialize for Outport: '<S146>/Out1'
    Template_v3_03_2020a_B.In1_gc = Template_v3_03_2020a_P.Out1_Y0_g;

    // End of SystemInitialize for SubSystem: '<S145>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S141>/Hold this value'
    // SystemInitialize for Outport: '<S142>/Out1'
    Template_v3_03_2020a_B.In1_fa = Template_v3_03_2020a_P.Out1_Y0_mp;

    // End of SystemInitialize for SubSystem: '<S141>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S9>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S9>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S156>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dy = 1U;

    // InitializeConditions for Delay: '<S158>/Delay1'
    Template_v3_03_2020a_DW.icLoad_hf = 1U;

    // InitializeConditions for Delay: '<S154>/Delay1'
    Template_v3_03_2020a_DW.icLoad_kl = 1U;

    // SystemInitialize for IfAction SubSystem: '<S156>/Hold this value'
    // SystemInitialize for Outport: '<S157>/Out1'
    Template_v3_03_2020a_B.In1_lc = Template_v3_03_2020a_P.Out1_Y0_a4;

    // End of SystemInitialize for SubSystem: '<S156>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S158>/Hold this value'
    // SystemInitialize for Outport: '<S159>/Out1'
    Template_v3_03_2020a_B.In1_jwx = Template_v3_03_2020a_P.Out1_Y0_nv;

    // End of SystemInitialize for SubSystem: '<S158>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S154>/Hold this value'
    // SystemInitialize for Outport: '<S155>/Out1'
    Template_v3_03_2020a_B.In1_o = Template_v3_03_2020a_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S154>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S9>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S9>/Change RED Behavior'
    // InitializeConditions for Delay: '<S167>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ji = 1U;

    // InitializeConditions for Delay: '<S169>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a1 = 1U;

    // InitializeConditions for Delay: '<S171>/Delay1'
    Template_v3_03_2020a_DW.icLoad_o0 = 1U;

    // SystemInitialize for IfAction SubSystem: '<S167>/Hold this value'
    // SystemInitialize for Outport: '<S168>/Out1'
    Template_v3_03_2020a_B.In1_k = Template_v3_03_2020a_P.Out1_Y0_fr;

    // End of SystemInitialize for SubSystem: '<S167>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S169>/Hold this value'
    // SystemInitialize for Outport: '<S170>/Out1'
    Template_v3_03_2020a_B.In1_cr = Template_v3_03_2020a_P.Out1_Y0_bk;

    // End of SystemInitialize for SubSystem: '<S169>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S171>/Hold this value'
    // SystemInitialize for Outport: '<S172>/Out1'
    Template_v3_03_2020a_B.In1_if = Template_v3_03_2020a_P.Out1_Y0_j2;

    // End of SystemInitialize for SubSystem: '<S171>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S9>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #3: Experiment'
    // SystemInitialize for IfAction SubSystem: '<S10>/Change BLACK Behavior'
    // SystemInitialize for IfAction SubSystem: '<S176>/Sub-Phase #1'
    // InitializeConditions for Delay: '<S191>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ot = 1U;

    // InitializeConditions for Delay: '<S193>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k = 1U;

    // InitializeConditions for Delay: '<S189>/Delay1'
    Template_v3_03_2020a_DW.icLoad_l = 1U;

    // SystemInitialize for IfAction SubSystem: '<S191>/Hold this value'
    // SystemInitialize for Outport: '<S192>/Out1'
    Template_v3_03_2020a_B.In1_cw = Template_v3_03_2020a_P.Out1_Y0_bd;

    // End of SystemInitialize for SubSystem: '<S191>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S193>/Hold this value'
    // SystemInitialize for Outport: '<S194>/Out1'
    Template_v3_03_2020a_B.In1_ly = Template_v3_03_2020a_P.Out1_Y0_ai;

    // End of SystemInitialize for SubSystem: '<S193>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S189>/Hold this value'
    // SystemInitialize for Outport: '<S190>/Out1'
    Template_v3_03_2020a_B.In1_a = Template_v3_03_2020a_P.Out1_Y0_pn;

    // End of SystemInitialize for SubSystem: '<S189>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S176>/Sub-Phase #1'

    // SystemInitialize for IfAction SubSystem: '<S176>/Sub-Phase #4'
    // InitializeConditions for Delay: '<S208>/Delay1'
    Template_v3_03_2020a_DW.icLoad_b = 1U;

    // InitializeConditions for Delay: '<S210>/Delay1'
    Template_v3_03_2020a_DW.icLoad_n5 = 1U;

    // InitializeConditions for Delay: '<S206>/Delay1'
    Template_v3_03_2020a_DW.icLoad_fj = 1U;

    // SystemInitialize for IfAction SubSystem: '<S208>/Hold this value'
    // SystemInitialize for Outport: '<S209>/Out1'
    Template_v3_03_2020a_B.In1_bd = Template_v3_03_2020a_P.Out1_Y0_bw;

    // End of SystemInitialize for SubSystem: '<S208>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S210>/Hold this value'
    // SystemInitialize for Outport: '<S211>/Out1'
    Template_v3_03_2020a_B.In1_l = Template_v3_03_2020a_P.Out1_Y0_ac;

    // End of SystemInitialize for SubSystem: '<S210>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S206>/Hold this value'
    // SystemInitialize for Outport: '<S207>/Out1'
    Template_v3_03_2020a_B.In1_gd = Template_v3_03_2020a_P.Out1_Y0_ln;

    // End of SystemInitialize for SubSystem: '<S206>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S176>/Sub-Phase #4'
    // End of SystemInitialize for SubSystem: '<S10>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S10>/Change BLUE Behavior'
    // SystemInitialize for IfAction SubSystem: '<S177>/Sub-Phase #1'
    Template_v3__SubPhase1_Init(&Template_v3_03_2020a_B.SubPhase1_a,
      &Template_v3_03_2020a_DW.SubPhase1_a, &Template_v3_03_2020a_P.SubPhase1_a);

    // End of SystemInitialize for SubSystem: '<S177>/Sub-Phase #1'

    // SystemInitialize for IfAction SubSystem: '<S177>/Sub-Phase #4'
    Template_v3__SubPhase1_Init(&Template_v3_03_2020a_B.SubPhase4_f,
      &Template_v3_03_2020a_DW.SubPhase4_f, &Template_v3_03_2020a_P.SubPhase4_f);

    // End of SystemInitialize for SubSystem: '<S177>/Sub-Phase #4'
    // End of SystemInitialize for SubSystem: '<S10>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S10>/Change RED Behavior'
    // SystemInitialize for IfAction SubSystem: '<S178>/Sub-Phase #1'
    // InitializeConditions for Delay: '<S255>/Delay1'
    Template_v3_03_2020a_DW.icLoad_n = 1U;

    // InitializeConditions for Delay: '<S257>/Delay1'
    Template_v3_03_2020a_DW.icLoad_er = 1U;

    // InitializeConditions for Delay: '<S259>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ej = 1U;

    // SystemInitialize for IfAction SubSystem: '<S255>/Hold this value'
    // SystemInitialize for Outport: '<S256>/Out1'
    Template_v3_03_2020a_B.In1_n = Template_v3_03_2020a_P.Out1_Y0_at;

    // End of SystemInitialize for SubSystem: '<S255>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S257>/Hold this value'
    // SystemInitialize for Outport: '<S258>/Out1'
    Template_v3_03_2020a_B.In1_jwe = Template_v3_03_2020a_P.Out1_Y0_dw;

    // End of SystemInitialize for SubSystem: '<S257>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S259>/Hold this value'
    // SystemInitialize for Outport: '<S260>/Out1'
    Template_v3_03_2020a_B.In1_jw = Template_v3_03_2020a_P.Out1_Y0_jd;

    // End of SystemInitialize for SubSystem: '<S259>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S178>/Sub-Phase #1'
    // End of SystemInitialize for SubSystem: '<S10>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #3: Experiment'

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #4:  Return Home'
    // SystemInitialize for IfAction SubSystem: '<S11>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S276>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dq = 1U;

    // InitializeConditions for Delay: '<S278>/Delay1'
    Template_v3_03_2020a_DW.icLoad_h = 1U;

    // InitializeConditions for Delay: '<S274>/Delay1'
    Template_v3_03_2020a_DW.icLoad_o = 1U;

    // SystemInitialize for IfAction SubSystem: '<S276>/Hold this value'
    // SystemInitialize for Outport: '<S277>/Out1'
    Template_v3_03_2020a_B.In1_fx = Template_v3_03_2020a_P.Out1_Y0_mr;

    // End of SystemInitialize for SubSystem: '<S276>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S278>/Hold this value'
    // SystemInitialize for Outport: '<S279>/Out1'
    Template_v3_03_2020a_B.In1_d0 = Template_v3_03_2020a_P.Out1_Y0_i0;

    // End of SystemInitialize for SubSystem: '<S278>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S274>/Hold this value'
    // SystemInitialize for Outport: '<S275>/Out1'
    Template_v3_03_2020a_B.In1_fk = Template_v3_03_2020a_P.Out1_Y0_jr;

    // End of SystemInitialize for SubSystem: '<S274>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S11>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S11>/Change BLUE Behavior'
    T_ChangeBLUEBehavior_c_Init(&Template_v3_03_2020a_B.ChangeBLUEBehavior_gj,
      &Template_v3_03_2020a_DW.ChangeBLUEBehavior_gj,
      &Template_v3_03_2020a_P.ChangeBLUEBehavior_gj);

    // End of SystemInitialize for SubSystem: '<S11>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S11>/Change RED Behavior'
    // InitializeConditions for Delay: '<S300>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dh = 1U;

    // InitializeConditions for Delay: '<S302>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a2 = 1U;

    // InitializeConditions for Delay: '<S304>/Delay1'
    Template_v3_03_2020a_DW.icLoad_f = 1U;

    // SystemInitialize for IfAction SubSystem: '<S300>/Hold this value'
    // SystemInitialize for Outport: '<S301>/Out1'
    Template_v3_03_2020a_B.In1_h = Template_v3_03_2020a_P.Out1_Y0_nf;

    // End of SystemInitialize for SubSystem: '<S300>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S302>/Hold this value'
    // SystemInitialize for Outport: '<S303>/Out1'
    Template_v3_03_2020a_B.In1_b = Template_v3_03_2020a_P.Out1_Y0_gb;

    // End of SystemInitialize for SubSystem: '<S302>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S304>/Hold this value'
    // SystemInitialize for Outport: '<S305>/Out1'
    Template_v3_03_2020a_B.In1_f = Template_v3_03_2020a_P.Out1_Y0_da;

    // End of SystemInitialize for SubSystem: '<S304>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S11>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #4:  Return Home'

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #5:  Hold Home'
    // SystemInitialize for IfAction SubSystem: '<S12>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S319>/Delay1'
    Template_v3_03_2020a_DW.icLoad_e = 1U;

    // InitializeConditions for Delay: '<S321>/Delay1'
    Template_v3_03_2020a_DW.icLoad_m = 1U;

    // InitializeConditions for Delay: '<S317>/Delay1'
    Template_v3_03_2020a_DW.icLoad_d = 1U;

    // SystemInitialize for IfAction SubSystem: '<S319>/Hold this value'
    // SystemInitialize for Outport: '<S320>/Out1'
    Template_v3_03_2020a_B.In1_i = Template_v3_03_2020a_P.Out1_Y0_fj;

    // End of SystemInitialize for SubSystem: '<S319>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S321>/Hold this value'
    // SystemInitialize for Outport: '<S322>/Out1'
    Template_v3_03_2020a_B.In1_c = Template_v3_03_2020a_P.Out1_Y0_bm;

    // End of SystemInitialize for SubSystem: '<S321>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S317>/Hold this value'
    // SystemInitialize for Outport: '<S318>/Out1'
    Template_v3_03_2020a_B.In1_g = Template_v3_03_2020a_P.Out1_Y0_gx;

    // End of SystemInitialize for SubSystem: '<S317>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S12>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S12>/Change BLUE Behavior'
    T_ChangeBLUEBehavior_c_Init(&Template_v3_03_2020a_B.ChangeBLUEBehavior_b,
      &Template_v3_03_2020a_DW.ChangeBLUEBehavior_b,
      &Template_v3_03_2020a_P.ChangeBLUEBehavior_b);

    // End of SystemInitialize for SubSystem: '<S12>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S12>/Change RED Behavior'
    // InitializeConditions for Delay: '<S345>/Delay1'
    Template_v3_03_2020a_DW.icLoad = 1U;

    // InitializeConditions for Delay: '<S347>/Delay1'
    Template_v3_03_2020a_DW.icLoad_j = 1U;

    // InitializeConditions for Delay: '<S343>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a = 1U;

    // SystemInitialize for IfAction SubSystem: '<S345>/Hold this value'
    // SystemInitialize for Outport: '<S346>/Out1'
    Template_v3_03_2020a_B.In1_j = Template_v3_03_2020a_P.Out1_Y0_bs;

    // End of SystemInitialize for SubSystem: '<S345>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S347>/Hold this value'
    // SystemInitialize for Outport: '<S348>/Out1'
    Template_v3_03_2020a_B.In1 = Template_v3_03_2020a_P.Out1_Y0_c5;

    // End of SystemInitialize for SubSystem: '<S347>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S343>/Hold this value'
    // SystemInitialize for Outport: '<S344>/Out1'
    Template_v3_03_2020a_B.In1_d = Template_v3_03_2020a_P.Out1_Y0_i3;

    // End of SystemInitialize for SubSystem: '<S343>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S12>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #5:  Hold Home'

    // SystemInitialize for IfAction SubSystem: '<Root>/Simulate Plant Dynamics' 
    // InitializeConditions for DiscreteIntegrator: '<S356>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[0] =
      Template_v3_03_2020a_P.drop_states_BLACK[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[1] =
      Template_v3_03_2020a_P.drop_states_BLACK[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[2] =
      Template_v3_03_2020a_P.drop_states_BLACK[2];

    // InitializeConditions for RandomNumber: '<S356>/Random Number'
    tmp = floor(Template_v3_03_2020a_P.RandomNumber_Seed);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>(static_cast<
      uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    ret = static_cast<int32_T>(tseed >> 16U);
    t = static_cast<int32_T>(tseed & 32768U);
    tseed = ((((tseed - (static_cast<uint32_T>(ret) << 16U)) + t) << 16U) + t) +
      ret;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else {
      if (tseed > 2147483646U) {
        tseed = 2147483646U;
      }
    }

    Template_v3_03_2020a_DW.RandSeed = tseed;
    Template_v3_03_2020a_DW.NextOutput = Temp_rt_nrand_Upu32_Yd_f_pw_snf
      (&Template_v3_03_2020a_DW.RandSeed) * sqrt
      (Template_v3_03_2020a_P.noise_variance_BLACK) +
      Template_v3_03_2020a_P.RandomNumber_Mean;

    // End of InitializeConditions for RandomNumber: '<S356>/Random Number'

    // InitializeConditions for Delay: '<S367>/Delay1'
    Template_v3_03_2020a_DW.icLoad_kp = 1U;

    // InitializeConditions for Delay: '<S365>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k3 = 1U;

    // InitializeConditions for Delay: '<S366>/Delay1'
    Template_v3_03_2020a_DW.icLoad_jz = 1U;

    // InitializeConditions for DiscreteIntegrator: '<S357>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[0] =
      Template_v3_03_2020a_P.drop_states_BLUE[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[1] =
      Template_v3_03_2020a_P.drop_states_BLUE[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[2] =
      Template_v3_03_2020a_P.drop_states_BLUE[2];

    // InitializeConditions for RandomNumber: '<S357>/Random Number'
    tmp = floor(Template_v3_03_2020a_P.RandomNumber_Seed_k);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    ret = static_cast<int32_T>(tseed >> 16U);
    t = static_cast<int32_T>(tseed & 32768U);
    tseed = ((((tseed - (static_cast<uint32_T>(ret) << 16U)) + t) << 16U) + t) +
      ret;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else {
      if (tseed > 2147483646U) {
        tseed = 2147483646U;
      }
    }

    Template_v3_03_2020a_DW.RandSeed_d = tseed;
    Template_v3_03_2020a_DW.NextOutput_g = Temp_rt_nrand_Upu32_Yd_f_pw_snf
      (&Template_v3_03_2020a_DW.RandSeed_d) * sqrt
      (Template_v3_03_2020a_P.noise_variance_BLUE) +
      Template_v3_03_2020a_P.RandomNumber_Mean_b;

    // End of InitializeConditions for RandomNumber: '<S357>/Random Number'

    // InitializeConditions for Delay: '<S370>/Delay1'
    Template_v3_03_2020a_DW.icLoad_c = 1U;

    // InitializeConditions for Delay: '<S368>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dc = 1U;

    // InitializeConditions for Delay: '<S369>/Delay1'
    Template_v3_03_2020a_DW.icLoad_nu = 1U;

    // InitializeConditions for DiscreteIntegrator: '<S358>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[0] =
      Template_v3_03_2020a_P.drop_states_RED[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[1] =
      Template_v3_03_2020a_P.drop_states_RED[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[2] =
      Template_v3_03_2020a_P.drop_states_RED[2];

    // InitializeConditions for RandomNumber: '<S358>/Random Number'
    tmp = floor(Template_v3_03_2020a_P.RandomNumber_Seed_i);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 4.294967296E+9);
    }

    tseed = tmp < 0.0 ? static_cast<uint32_T>(-static_cast<int32_T>
      (static_cast<uint32_T>(-tmp))) : static_cast<uint32_T>(tmp);
    ret = static_cast<int32_T>(tseed >> 16U);
    t = static_cast<int32_T>(tseed & 32768U);
    tseed = ((((tseed - (static_cast<uint32_T>(ret) << 16U)) + t) << 16U) + t) +
      ret;
    if (tseed < 1U) {
      tseed = 1144108930U;
    } else {
      if (tseed > 2147483646U) {
        tseed = 2147483646U;
      }
    }

    Template_v3_03_2020a_DW.RandSeed_m = tseed;
    Template_v3_03_2020a_DW.NextOutput_l = Temp_rt_nrand_Upu32_Yd_f_pw_snf
      (&Template_v3_03_2020a_DW.RandSeed_m) * sqrt
      (Template_v3_03_2020a_P.noise_variance_RED) +
      Template_v3_03_2020a_P.RandomNumber_Mean_e;

    // End of InitializeConditions for RandomNumber: '<S358>/Random Number'

    // InitializeConditions for Delay: '<S364>/Delay1'
    Template_v3_03_2020a_DW.icLoad_mt = 1U;

    // InitializeConditions for Delay: '<S362>/Delay1'
    Template_v3_03_2020a_DW.icLoad_bq = 1U;

    // InitializeConditions for Delay: '<S363>/Delay1'
    Template_v3_03_2020a_DW.icLoad_cn = 1U;

    // SystemInitialize for IfAction SubSystem: '<S365>/Hold this value'
    // SystemInitialize for Outport: '<S383>/Out1'
    Template_v3_03_2020a_B.In1_k4 = Template_v3_03_2020a_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S365>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S366>/Hold this value'
    // SystemInitialize for Outport: '<S384>/Out1'
    Template_v3_03_2020a_B.In1_ey = Template_v3_03_2020a_P.Out1_Y0_j;

    // End of SystemInitialize for SubSystem: '<S366>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S367>/Hold this value'
    // SystemInitialize for Outport: '<S385>/Out1'
    Template_v3_03_2020a_B.In1_m = Template_v3_03_2020a_P.Out1_Y0_l;

    // End of SystemInitialize for SubSystem: '<S367>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S368>/Hold this value'
    // SystemInitialize for Outport: '<S386>/Out1'
    Template_v3_03_2020a_B.In1_ad = Template_v3_03_2020a_P.Out1_Y0_ia;

    // End of SystemInitialize for SubSystem: '<S368>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S369>/Hold this value'
    // SystemInitialize for Outport: '<S387>/Out1'
    Template_v3_03_2020a_B.In1_ac = Template_v3_03_2020a_P.Out1_Y0_bgo;

    // End of SystemInitialize for SubSystem: '<S369>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S370>/Hold this value'
    // SystemInitialize for Outport: '<S388>/Out1'
    Template_v3_03_2020a_B.In1_jt = Template_v3_03_2020a_P.Out1_Y0_kc;

    // End of SystemInitialize for SubSystem: '<S370>/Hold this value'

    // InitializeConditions for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S359>/Sample and Hold1'
    // SystemInitialize for Outport: '<S375>/ '
    Template_v3_03_2020a_B.In_n[0] = Template_v3_03_2020a_P._Y0[0];

    // End of SystemInitialize for SubSystem: '<S359>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S360>/Sample and Hold1'
    // SystemInitialize for Outport: '<S377>/ '
    Template_v3_03_2020a_B.In_p[0] = Template_v3_03_2020a_P._Y0_g[0];

    // End of SystemInitialize for SubSystem: '<S360>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S361>/Sample and Hold'
    // SystemInitialize for Outport: '<S379>/ '
    Template_v3_03_2020a_B.In[0] = Template_v3_03_2020a_P._Y0_l[0];

    // End of SystemInitialize for SubSystem: '<S361>/Sample and Hold'

    // InitializeConditions for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S359>/Sample and Hold1'
    // SystemInitialize for Outport: '<S375>/ '
    Template_v3_03_2020a_B.In_n[1] = Template_v3_03_2020a_P._Y0[1];

    // End of SystemInitialize for SubSystem: '<S359>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S360>/Sample and Hold1'
    // SystemInitialize for Outport: '<S377>/ '
    Template_v3_03_2020a_B.In_p[1] = Template_v3_03_2020a_P._Y0_g[1];

    // End of SystemInitialize for SubSystem: '<S360>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S361>/Sample and Hold'
    // SystemInitialize for Outport: '<S379>/ '
    Template_v3_03_2020a_B.In[1] = Template_v3_03_2020a_P._Y0_l[1];

    // End of SystemInitialize for SubSystem: '<S361>/Sample and Hold'

    // InitializeConditions for DiscreteIntegrator: '<S356>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S357>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S358>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S359>/Sample and Hold1'
    // SystemInitialize for Outport: '<S375>/ '
    Template_v3_03_2020a_B.In_n[2] = Template_v3_03_2020a_P._Y0[2];

    // End of SystemInitialize for SubSystem: '<S359>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S360>/Sample and Hold1'
    // SystemInitialize for Outport: '<S377>/ '
    Template_v3_03_2020a_B.In_p[2] = Template_v3_03_2020a_P._Y0_g[2];

    // End of SystemInitialize for SubSystem: '<S360>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S361>/Sample and Hold'
    // SystemInitialize for Outport: '<S379>/ '
    Template_v3_03_2020a_B.In[2] = Template_v3_03_2020a_P._Y0_l[2];

    // End of SystemInitialize for SubSystem: '<S361>/Sample and Hold'

    // SystemInitialize for IfAction SubSystem: '<S362>/Hold this value'
    // SystemInitialize for Outport: '<S380>/Out1'
    Template_v3_03_2020a_B.In1_nu = Template_v3_03_2020a_P.Out1_Y0_dj;

    // End of SystemInitialize for SubSystem: '<S362>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S363>/Hold this value'
    // SystemInitialize for Outport: '<S381>/Out1'
    Template_v3_03_2020a_B.In1_af = Template_v3_03_2020a_P.Out1_Y0_kb;

    // End of SystemInitialize for SubSystem: '<S363>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S364>/Hold this value'
    // SystemInitialize for Outport: '<S382>/Out1'
    Template_v3_03_2020a_B.In1_o1 = Template_v3_03_2020a_P.Out1_Y0_pm;

    // End of SystemInitialize for SubSystem: '<S364>/Hold this value'
    // End of SystemInitialize for SubSystem: '<Root>/Simulate Plant Dynamics'

    // SystemInitialize for IfAction SubSystem: '<S2>/Change RED Behavior'
    // Start for MATLABSystem: '<S18>/Digital Write'
    Template_v3_03_2020a_DW.obj_i.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_i.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_i.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_i.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_i.isInitialized = 1;
    MW_gpioInit(10U, true);
    Template_v3_03_2020a_DW.obj_i.isSetupComplete = true;

    // Start for MATLABSystem: '<S19>/Digital Write'
    Template_v3_03_2020a_DW.obj_a.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_a.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_a.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_a.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_a.isInitialized = 1;
    MW_gpioInit(26U, true);
    Template_v3_03_2020a_DW.obj_a.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S2>/Change RED Behavior'

    // SystemInitialize for Atomic SubSystem: '<S3>/Send Commands to PWM Blocks' 
    // Start for MATLABSystem: '<S24>/RED T1 - BLACK T8'
    Template_v3_03_2020a_DW.obj_m.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_m.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_m.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_m.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_m.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_m.PinNumber = 27U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_m.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_m.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T1 - BLACK T8'

    // Start for MATLABSystem: '<S24>/RED T2 - BLACK T3'
    Template_v3_03_2020a_DW.obj_ma.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_ma.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_ma.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_ma.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_ma.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_ma.PinNumber = 19U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_ma.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_ma.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_ma.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T2 - BLACK T3'

    // Start for MATLABSystem: '<S24>/RED T3'
    Template_v3_03_2020a_DW.obj_h.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_h.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_h.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_h.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_h.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_h.PinNumber = 4U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_h.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_h.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T3'

    // Start for MATLABSystem: '<S24>/RED T4 - BLACK T5'
    Template_v3_03_2020a_DW.obj_k.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_k.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_k.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_k.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_k.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_k.PinNumber = 22U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_k.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_k.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T4 - BLACK T5'

    // Start for MATLABSystem: '<S24>/RED T5 - BLACK T4'
    Template_v3_03_2020a_DW.obj_hw.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_hw.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_hw.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_hw.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_hw.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_hw.PinNumber = 5U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_hw.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_hw.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_hw.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T5 - BLACK T4'

    // Start for MATLABSystem: '<S24>/RED T6 - BLACK T7'
    Template_v3_03_2020a_DW.obj_hf.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_hf.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_hf.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_hf.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_hf.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_hf.PinNumber = 6U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_hf.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_hf.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_hf.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T6 - BLACK T7'

    // Start for MATLABSystem: '<S24>/RED T7 - BLACK T6'
    Template_v3_03_2020a_DW.obj_c.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_c.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_c.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_c.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_c.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_c.PinNumber = 13U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_c.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_c.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T7 - BLACK T6'

    // Start for MATLABSystem: '<S24>/RED T8 - BLACK T1'
    Template_v3_03_2020a_DW.obj_f.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_f.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_f.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_f.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_f.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_f.PinNumber = 17U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_f.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_f.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/RED T8 - BLACK T1'

    // Start for MATLABSystem: '<S24>/BLACK T2'
    Template_v3_03_2020a_DW.obj_ci.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_ci.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_ci.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_ci.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_ci.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_ci.PinNumber = 9U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_ci.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_ci.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_ci.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S24>/BLACK T2'
    // End of SystemInitialize for SubSystem: '<S3>/Send Commands to PWM Blocks' 

    // SystemInitialize for IfAction SubSystem: '<S3>/Change BLACK Behavior'
    // SystemInitialize for Outport: '<S20>/BLACK PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.BLACKPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S20>/BLACK PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S3>/Change BLUE Behavior'
    // SystemInitialize for Outport: '<S21>/BLUE PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.BLUEPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S21>/BLUE PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S3>/Change RED Behavior'
    // SystemInitialize for Outport: '<S22>/RED PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.REDPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S22>/RED PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change RED Behavior'
    // InitializeConditions for Delay: '<S61>/Delay1'
    Template_v3_03_2020a_DW.Delay1_DSTATE_kt =
      Template_v3_03_2020a_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S61>/Delay2'
    Template_v3_03_2020a_DW.Delay2_DSTATE[0] =
      Template_v3_03_2020a_P.Delay2_InitialCondition;
    Template_v3_03_2020a_DW.Delay2_DSTATE[1] =
      Template_v3_03_2020a_P.Delay2_InitialCondition;

    // InitializeConditions for Delay: '<S61>/Delay5'
    Template_v3_03_2020a_DW.Delay5_DSTATE[0] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;
    Template_v3_03_2020a_DW.Delay5_DSTATE[1] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;
    Template_v3_03_2020a_DW.Delay5_DSTATE[2] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;

    // InitializeConditions for Delay: '<S61>/Delay3'
    Template_v3_03_2020a_DW.Delay3_DSTATE[0] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[1] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[2] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[3] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;

    // InitializeConditions for Delay: '<S61>/Delay4'
    for (ret = 0; ret < 5; ret++) {
      Template_v3_03_2020a_DW.Delay4_DSTATE[ret] =
        Template_v3_03_2020a_P.Delay4_InitialCondition;
    }

    // End of InitializeConditions for Delay: '<S61>/Delay4'

    // InitializeConditions for Delay: '<S56>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE =
      Template_v3_03_2020a_P.Delay_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<S57>/Send Direction to Motor Controller' 
    // Start for MATLABSystem: '<S69>/Digital Write'
    Template_v3_03_2020a_DW.obj_b.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_b.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_b.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_b.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_b.isInitialized = 1;
    MW_gpioInit(23U, true);
    Template_v3_03_2020a_DW.obj_b.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S57>/Send Direction to Motor Controller' 

    // SystemInitialize for Atomic SubSystem: '<S57>/Send PWM to Motor Controller' 
    // Start for MATLABSystem: '<S66>/PWM1'
    Template_v3_03_2020a_DW.obj_d.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_d.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_d.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_d.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_d.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_d.PinNumber = 18U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_d.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp_0[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_d.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S66>/PWM1'
    // End of SystemInitialize for SubSystem: '<S57>/Send PWM to Motor Controller' 

    // SystemInitialize for Atomic SubSystem: '<S57>/Turn on Motor'
    // Start for MATLABSystem: '<S70>/Digital Write'
    Template_v3_03_2020a_DW.obj_cp.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_cp.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_cp.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_cp.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_cp.isInitialized = 1;
    MW_gpioInit(25U, true);
    Template_v3_03_2020a_DW.obj_cp.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S57>/Turn on Motor'

    // SystemInitialize for Atomic SubSystem: '<S57>/Obtain RW Status'
    // Start for MATLABSystem: '<S68>/Digital Read'
    Template_v3_03_2020a_DW.obj.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj.isInitialized = 0;
    Template_v3_03_2020a_DW.obj.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(Template_v3_03_2020a_P.DigitalRead_SampleTime)) && (!rtIsNaN
          (Template_v3_03_2020a_P.DigitalRead_SampleTime))) || rtIsInf
        (Template_v3_03_2020a_P.DigitalRead_SampleTime)) {
      sampleTime = Template_v3_03_2020a_P.DigitalRead_SampleTime;
    }

    Template_v3_03_2020a_DW.obj.SampleTime = sampleTime;
    Template_v3_03_2020a_DW.obj.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj.isInitialized = 1;
    MW_gpioInit(24U, false);
    Template_v3_03_2020a_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S68>/Digital Read'
    // End of SystemInitialize for SubSystem: '<S57>/Obtain RW Status'
    // End of SystemInitialize for SubSystem: '<S4>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' 
    // Start for If: '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
    Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei = -1;

    // SystemInitialize for IfAction SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' 
    // Start for If: '<S74>/This IF block determines whether or not to run the BLACK sim//exp' 
    Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S74>/This IF block determines whether or not to run the RED sim//exp ' 
    Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;

    // SystemInitialize for IfAction SubSystem: '<S74>/Obtain BLACK States'
    // Start for S-Function (sdspFromNetwork): '<S77>/UDP Receive'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U], 0,
                        "0.0.0.0", Template_v3_03_2020a_P.UDPReceive_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S77>/UDP Receive'

    // InitializeConditions for Delay: '<S79>/Delay1'
    Template_v3_03_2020a_DW.icLoad_nv = 1U;

    // InitializeConditions for Delay: '<S82>/Delay1'
    Template_v3_03_2020a_DW.icLoad_bj = 1U;

    // InitializeConditions for Delay: '<S80>/Delay1'
    Template_v3_03_2020a_DW.icLoad_d0 = 1U;

    // InitializeConditions for Delay: '<S83>/Delay1'
    Template_v3_03_2020a_DW.icLoad_fjc = 1U;

    // InitializeConditions for Delay: '<S81>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dyz = 1U;

    // InitializeConditions for Delay: '<S84>/Delay1'
    Template_v3_03_2020a_DW.icLoad_p = 1U;

    // SystemInitialize for IfAction SubSystem: '<S79>/Hold this value'
    // SystemInitialize for Outport: '<S85>/Out1'
    Template_v3_03_2020a_B.In1_et = Template_v3_03_2020a_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S79>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S80>/Hold this value'
    // SystemInitialize for Outport: '<S86>/Out1'
    Template_v3_03_2020a_B.In1_ky2 = Template_v3_03_2020a_P.Out1_Y0_ni;

    // End of SystemInitialize for SubSystem: '<S80>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S81>/Hold this value'
    // SystemInitialize for Outport: '<S87>/Out1'
    Template_v3_03_2020a_B.In1_fxz = Template_v3_03_2020a_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S81>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S82>/Hold this value'
    // SystemInitialize for Outport: '<S88>/Out1'
    Template_v3_03_2020a_B.In1_aw = Template_v3_03_2020a_P.Out1_Y0_dr;

    // End of SystemInitialize for SubSystem: '<S82>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S83>/Hold this value'
    // SystemInitialize for Outport: '<S89>/Out1'
    Template_v3_03_2020a_B.In1_ky = Template_v3_03_2020a_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S83>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S84>/Hold this value'
    // SystemInitialize for Outport: '<S90>/Out1'
    Template_v3_03_2020a_B.In1_m4 = Template_v3_03_2020a_P.Out1_Y0_i;

    // End of SystemInitialize for SubSystem: '<S84>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S74>/Obtain BLACK States'

    // SystemInitialize for IfAction SubSystem: '<S74>/Obtain RED States'
    // Start for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 
    sErr = GetErrorBuffer
      (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_
                       [0U]);
    if (*sErr == 0) {
      LibCreate_Network
        (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U], 1,
         "255.255.255.255", -1, "192.168.0.101",
         Template_v3_03_2020a_P.SendBLACKStatestoBLACKPlatform_, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface
        (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 

    // InitializeConditions for Delay: '<S92>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ku = 1U;

    // InitializeConditions for Delay: '<S95>/Delay1'
    Template_v3_03_2020a_DW.icLoad_h0 = 1U;

    // InitializeConditions for Delay: '<S93>/Delay1'
    Template_v3_03_2020a_DW.icLoad_hc = 1U;

    // InitializeConditions for Delay: '<S96>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ez = 1U;

    // InitializeConditions for Delay: '<S94>/Delay1'
    Template_v3_03_2020a_DW.icLoad_os = 1U;

    // InitializeConditions for Delay: '<S97>/Delay1'
    Template_v3_03_2020a_DW.icLoad_g = 1U;

    // InitializeConditions for Delay: '<S98>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE_l =
      Template_v3_03_2020a_P.Delay_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S91>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S99>/Out1'
    Template_v3_03_2020a_B.In1_f5 = Template_v3_03_2020a_P.Out1_Y0_as;

    // End of SystemInitialize for SubSystem: '<S91>/Enabled Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S92>/Hold this value'
    // SystemInitialize for Outport: '<S102>/Out1'
    Template_v3_03_2020a_B.In1_of = Template_v3_03_2020a_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S92>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S93>/Hold this value'
    // SystemInitialize for Outport: '<S103>/Out1'
    Template_v3_03_2020a_B.In1_bd2 = Template_v3_03_2020a_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S93>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S94>/Hold this value'
    // SystemInitialize for Outport: '<S104>/Out1'
    Template_v3_03_2020a_B.In1_jh = Template_v3_03_2020a_P.Out1_Y0_fy;

    // End of SystemInitialize for SubSystem: '<S94>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S95>/Hold this value'
    // SystemInitialize for Outport: '<S105>/Out1'
    Template_v3_03_2020a_B.In1_g5 = Template_v3_03_2020a_P.Out1_Y0_e2;

    // End of SystemInitialize for SubSystem: '<S95>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S96>/Hold this value'
    // SystemInitialize for Outport: '<S106>/Out1'
    Template_v3_03_2020a_B.In1_p = Template_v3_03_2020a_P.Out1_Y0_kz;

    // End of SystemInitialize for SubSystem: '<S96>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S97>/Hold this value'
    // SystemInitialize for Outport: '<S107>/Out1'
    Template_v3_03_2020a_B.In1_bs = Template_v3_03_2020a_P.Out1_Y0_bg;

    // End of SystemInitialize for SubSystem: '<S97>/Hold this value'
    T_StreamPhaseSpaceData_Init(&Template_v3_03_2020a_DW.StreamPhaseSpaceData_p);

    // End of SystemInitialize for SubSystem: '<S74>/Obtain RED States'
    // End of SystemInitialize for SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' 

    // SystemInitialize for IfAction SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 
    // InitializeConditions for Delay: '<S109>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ezp = 1U;

    // InitializeConditions for Delay: '<S112>/Delay1'
    Template_v3_03_2020a_DW.icLoad_gv = 1U;

    // InitializeConditions for Delay: '<S110>/Delay1'
    Template_v3_03_2020a_DW.icLoad_en = 1U;

    // InitializeConditions for Delay: '<S113>/Delay1'
    Template_v3_03_2020a_DW.icLoad_f2 = 1U;

    // InitializeConditions for Delay: '<S111>/Delay1'
    Template_v3_03_2020a_DW.icLoad_db = 1U;

    // InitializeConditions for Delay: '<S114>/Delay1'
    Template_v3_03_2020a_DW.icLoad_es = 1U;

    // InitializeConditions for Delay: '<S115>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE_h =
      Template_v3_03_2020a_P.Delay_InitialCondition_d;

    // SystemInitialize for Enabled SubSystem: '<S108>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S116>/Out1'
    Template_v3_03_2020a_B.In1_jww = Template_v3_03_2020a_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S108>/Enabled Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S109>/Hold this value'
    // SystemInitialize for Outport: '<S119>/Out1'
    Template_v3_03_2020a_B.In1_np = Template_v3_03_2020a_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S109>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S110>/Hold this value'
    // SystemInitialize for Outport: '<S120>/Out1'
    Template_v3_03_2020a_B.In1_n2 = Template_v3_03_2020a_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S110>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S111>/Hold this value'
    // SystemInitialize for Outport: '<S121>/Out1'
    Template_v3_03_2020a_B.In1_mo = Template_v3_03_2020a_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S111>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S112>/Hold this value'
    // SystemInitialize for Outport: '<S122>/Out1'
    Template_v3_03_2020a_B.In1_bx = Template_v3_03_2020a_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S112>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S113>/Hold this value'
    // SystemInitialize for Outport: '<S123>/Out1'
    Template_v3_03_2020a_B.In1_jc = Template_v3_03_2020a_P.Out1_Y0_no;

    // End of SystemInitialize for SubSystem: '<S113>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S114>/Hold this value'
    // SystemInitialize for Outport: '<S124>/Out1'
    Template_v3_03_2020a_B.In1_j1 = Template_v3_03_2020a_P.Out1_Y0_m;

    // End of SystemInitialize for SubSystem: '<S114>/Hold this value'
    T_StreamPhaseSpaceData_Init(&Template_v3_03_2020a_DW.StreamPhaseSpaceData);

    // End of SystemInitialize for SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 
    // End of SystemInitialize for SubSystem: '<S5>/Use Hardware to Obtain States' 
  }
}

// Model terminate function
void Template_v3_03_2020a_terminate(void)
{
  char_T *sErr;

  // Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<Root>/UDP Send'
  // Terminate for IfAction SubSystem: '<S2>/Change RED Behavior'
  // Terminate for MATLABSystem: '<S18>/Digital Write'
  matlabCodegenHandle_matlabCod_a(&Template_v3_03_2020a_DW.obj_i);

  // Terminate for MATLABSystem: '<S19>/Digital Write'
  matlabCodegenHandle_matlabCo_az(&Template_v3_03_2020a_DW.obj_a);

  // End of Terminate for SubSystem: '<S2>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S5>/Use Hardware to Obtain States'
  // Terminate for IfAction SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 
  T_StreamPhaseSpaceData_Term(&Template_v3_03_2020a_DW.StreamPhaseSpaceData);

  // End of Terminate for SubSystem: '<S73>/Using RED, BLACK, BLUE, or RED + ARM' 

  // Terminate for IfAction SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM' 
  // Terminate for IfAction SubSystem: '<S74>/Obtain BLACK States'
  // Terminate for S-Function (sdspFromNetwork): '<S77>/UDP Receive'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S77>/UDP Receive'
  // End of Terminate for SubSystem: '<S74>/Obtain BLACK States'

  // Terminate for IfAction SubSystem: '<S74>/Obtain RED States'
  T_StreamPhaseSpaceData_Term(&Template_v3_03_2020a_DW.StreamPhaseSpaceData_p);

  // Terminate for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 
  sErr = GetErrorBuffer
    (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U], 1);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_
                      [0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S78>/Send BLACK States to  BLACK Platform' 
  // End of Terminate for SubSystem: '<S74>/Obtain RED States'
  // End of Terminate for SubSystem: '<S73>/Using RED+BLACK, or RED+BLACK+ARM'
  // End of Terminate for SubSystem: '<S5>/Use Hardware to Obtain States'

  // Terminate for Atomic SubSystem: '<S3>/Send Commands to PWM Blocks'
  // Terminate for MATLABSystem: '<S24>/RED T1 - BLACK T8'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_m);

  // Terminate for MATLABSystem: '<S24>/RED T2 - BLACK T3'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_ma);

  // Terminate for MATLABSystem: '<S24>/RED T3'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_h);

  // Terminate for MATLABSystem: '<S24>/RED T4 - BLACK T5'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_k);

  // Terminate for MATLABSystem: '<S24>/RED T5 - BLACK T4'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_hw);

  // Terminate for MATLABSystem: '<S24>/RED T6 - BLACK T7'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_hf);

  // Terminate for MATLABSystem: '<S24>/RED T7 - BLACK T6'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_c);

  // Terminate for MATLABSystem: '<S24>/RED T8 - BLACK T1'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_f);

  // Terminate for MATLABSystem: '<S24>/BLACK T2'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_ci);

  // End of Terminate for SubSystem: '<S3>/Send Commands to PWM Blocks'

  // Terminate for IfAction SubSystem: '<S4>/Change RED Behavior'
  // Terminate for Atomic SubSystem: '<S57>/Obtain RW Status'
  // Terminate for MATLABSystem: '<S68>/Digital Read'
  matlabCodegenHandl_az3k1jii5tit(&Template_v3_03_2020a_DW.obj);

  // End of Terminate for SubSystem: '<S57>/Obtain RW Status'

  // Terminate for Atomic SubSystem: '<S57>/Send Direction to Motor Controller'
  // Terminate for MATLABSystem: '<S69>/Digital Write'
  matlabCodegenHand_az3k1jii5titu(&Template_v3_03_2020a_DW.obj_b);

  // End of Terminate for SubSystem: '<S57>/Send Direction to Motor Controller'

  // Terminate for Atomic SubSystem: '<S57>/Send PWM to Motor Controller'
  // Terminate for MATLABSystem: '<S66>/PWM1'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_d);

  // End of Terminate for SubSystem: '<S57>/Send PWM to Motor Controller'

  // Terminate for Atomic SubSystem: '<S57>/Turn on Motor'
  // Terminate for MATLABSystem: '<S70>/Digital Write'
  matlabCodegenHa_az3k1jii5titugc(&Template_v3_03_2020a_DW.obj_cp);

  // End of Terminate for SubSystem: '<S57>/Turn on Motor'
  // End of Terminate for SubSystem: '<S4>/Change RED Behavior'
}
