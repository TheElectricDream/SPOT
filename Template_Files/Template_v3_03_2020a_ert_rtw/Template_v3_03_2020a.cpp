//
//  Template_v3_03_2020a.cpp
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "Template_v3_03_2020a".
//
//  Model version              : 1.64
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 17 14:27:49 2020
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
static void Templa_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Te_T *obj);
static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3]);
static void Template_v3_03_202_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9], B_AHRS2_Template_v3_03_2020a_T *localB);
static void Templ_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d,
  B_AHRS2_Template_v3_03_2020a_T *localB);
static void Tem_quaternioncg_quaternioncg_f(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d,
  B_AHRS2_Template_v3_03_2020a_T *localB);
static void Template__quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
  real_T x_d, real_T y_a, real_T y_b, real_T y_c, real_T y_d, real_T *o_a,
  real_T *o_b, real_T *o_c, real_T *o_d);
static void IMUFusionCommon_predictOrientat(const
  fusion_simulink_ahrsfilter_Te_T *obj, const real_T gfast[3], const real_T
  offset[3], real_T qorient_a, real_T qorient_b, real_T qorient_c, real_T
  qorient_d, real_T *b_qorient_a, real_T *b_qorient_b, real_T *b_qorient_c,
  real_T *b_qorient_d, B_AHRS2_Template_v3_03_2020a_T *localB);
static void Template__quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9], B_AHRS2_Template_v3_03_2020a_T *localB);
static void Temp_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9],
  B_AHRS2_Template_v3_03_2020a_T *localB);
static real_T Template_v3_03_2020a_norm(const real_T x[3],
  B_AHRS2_Template_v3_03_2020a_T *localB);
static void Template_v3_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void Template__quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d);
static void Templa_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void Templa_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d);
static void Template_v3_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Te_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3], B_AHRS2_Template_v3_03_2020a_T *localB);

// Forward declaration for local functions
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
//    '<S27>/MATLAB Function2'
//    '<S36>/MATLAB Function2'
//    '<S45>/MATLAB Function2'
//
void Template_v3_MATLABFunction2(const real_T rtu_ThrustPer[8],
  B_MATLABFunction2_Template_v3_T *localB)
{
  real_T ex;
  int32_T idx;
  int32_T k;
  boolean_T tmp;
  boolean_T exitg1;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function2': '<S31>:1' 
  // '<S31>:1:3' ValveTime       = 0.007;
  // '<S31>:1:4' TControl        = 0.1;
  // '<S31>:1:5' ThrustPer_Final = zeros(8,1);
  // '<S31>:1:7' if max(ThrustPer) > 1
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
    // '<S31>:1:8' ThrustPer_Sat = ThrustPer/max(ThrustPer);
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
    // '<S31>:1:9' else
    // '<S31>:1:10' ThrustPer_Sat = ThrustPer;
    memcpy(&localB->ThrustPer_Sat[0], &rtu_ThrustPer[0], sizeof(real_T) << 3U);
  }

  // '<S31>:1:13' for i = 1:8
  for (idx = 0; idx < 8; idx++) {
    // '<S31>:1:14' if ThrustPer_Sat(i) > ValveTime/TControl
    if (localB->ThrustPer_Sat[idx] > 0.069999999999999993) {
      // '<S31>:1:15' ThrustPer_Final(i) = ThrustPer_Sat(i);
      localB->ThrustPer_Final[idx] = localB->ThrustPer_Sat[idx];
    } else {
      // '<S31>:1:16' else
      // '<S31>:1:17' ThrustPer_Final(i) = 0;
      localB->ThrustPer_Final[idx] = 0.0;
    }
  }
}

//
// Output and update for atomic system:
//    '<S32>/Create Rotation Matrix'
//    '<S41>/Create Rotation Matrix'
//    '<S50>/Create Rotation Matrix'
//
void Templa_CreateRotationMatrix(real_T rtu_Rz, B_CreateRotationMatrix_Templa_T *
  localB)
{
  real_T r;
  real_T t;
  real_T C_bI_idx_0;
  real_T C_bI_idx_2;
  real_T C_bI_idx_1;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix': '<S34>:1' 
  // '<S34>:1:3' C_bI = [  cos(Rz) sin(Rz)
  // '<S34>:1:4'          -sin(Rz) cos(Rz) ];
  r = sin(rtu_Rz);
  t = cos(rtu_Rz);
  C_bI_idx_0 = t;
  C_bI_idx_2 = r;
  C_bI_idx_1 = -r;

  // '<S34>:1:6' C_Ib = inv(C_bI);
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
//    '<S28>/Create Rotation Matrix'
//    '<S37>/Create Rotation Matrix'
//    '<S46>/Create Rotation Matrix'
//
void Temp_CreateRotationMatrix_h(real_T rtu_Rz, B_CreateRotationMatrix_Temp_i_T *
  localB)
{
  real_T C_bI_tmp;
  real_T C_bI_tmp_0;

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix': '<S35>:1' 
  // '<S35>:1:3' C_bI = [  cos(Rz) sin(Rz)
  // '<S35>:1:4'          -sin(Rz) cos(Rz) ];
  C_bI_tmp = sin(rtu_Rz);
  C_bI_tmp_0 = cos(rtu_Rz);
  localB->C_bI[0] = C_bI_tmp_0;
  localB->C_bI[2] = C_bI_tmp;
  localB->C_bI[1] = -C_bI_tmp;
  localB->C_bI[3] = C_bI_tmp_0;
}

//
// Output and update for atomic system:
//    '<S36>/MATLAB Function'
//    '<S36>/MATLAB Function1'
//
void Template_v3__MATLABFunction(B_MATLABFunction_Template_v3__T *localB)
{
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  int32_T H_tmp;
  static const int8_T b[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

  static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

  // MATLAB Function 'From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S38>:1' 
  // '<S38>:1:3' Vec1 = [ -1
  // '<S38>:1:4'          -1
  // '<S38>:1:5'           0
  // '<S38>:1:6'           0
  // '<S38>:1:7'           1
  // '<S38>:1:8'           1
  // '<S38>:1:9'           0
  // '<S38>:1:10'           0 ];
  // '<S38>:1:12' Vec2 = [  0
  // '<S38>:1:13'           0
  // '<S38>:1:14'           1
  // '<S38>:1:15'           1
  // '<S38>:1:16'           0
  // '<S38>:1:17'           0
  // '<S38>:1:18'          -1
  // '<S38>:1:19'          -1 ];
  // '<S38>:1:21' Vec3 = thruster_dist2CG_BLUE./1000;
  // '<S38>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
  // '<S38>:1:25' Mat2 = diag((F_thrusters_BLUE./2));
  for (i = 0; i < 8; i++) {
    localB->v[i] = Template_v3_03_2020a_P.F_thrusters_BLUE[i] / 2.0;
  }

  memset(&localB->Mat2[0], 0, sizeof(real_T) << 6U);

  // '<S38>:1:27' H    = Mat1*Mat2;
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
  // Start for MATLABSystem: '<S77>/Stream PhaseSpace Data'
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

  // MATLABSystem: '<S77>/Stream PhaseSpace Data'
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
  // Terminate for MATLABSystem: '<S77>/Stream PhaseSpace Data'
  matlabCodegenHandle_matlabCodeg(&localDW->obj);
}

static void Templa_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Te_T *obj)
{
  real_T accelMeasNoiseVar;
  real_T magMeasNoiseVar;
  static const real_T tmp[144] = { 6.0923483957341713E-6, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.0923483957341713E-6, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 6.0923483957341713E-6, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.6154354946677142E-5, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 7.6154354946677142E-5,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    7.6154354946677142E-5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0096236100000000012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0096236100000000012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0096236100000000012, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.6 };

  int32_T i;
  int32_T tmp_0;
  int32_T tmp_1;
  static const int8_T tmp_2[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  obj->pOrientPost.a = 1.0;
  obj->pOrientPost.b = 0.0;
  obj->pOrientPost.c = 0.0;
  obj->pOrientPost.d = 0.0;
  obj->pGyroOffset[0] = 0.0;
  obj->pMagVec[0] = 0.0;
  obj->pGyroOffset[1] = 0.0;
  obj->pMagVec[1] = 0.0;
  obj->pGyroOffset[2] = 0.0;
  obj->pMagVec[2] = 0.0;
  obj->pMagVec[0] = obj->ExpectedMagneticFieldStrength;
  magMeasNoiseVar = obj->pKalmanPeriod * obj->pKalmanPeriod *
    (obj->GyroscopeDriftNoise + obj->GyroscopeNoise);
  accelMeasNoiseVar = magMeasNoiseVar + (obj->AccelerometerNoise +
    obj->LinearAccelerationNoise);
  magMeasNoiseVar += obj->MagnetometerNoise + obj->MagneticDisturbanceNoise;
  memset(&obj->pQv[0], 0, 36U * sizeof(real_T));
  for (i = 0; i < 3; i++) {
    tmp_0 = tmp_2[3 * i];
    obj->pQv[6 * i] = accelMeasNoiseVar * static_cast<real_T>(tmp_0);
    tmp_1 = 6 * (i + 3);
    obj->pQv[tmp_1 + 3] = magMeasNoiseVar * static_cast<real_T>(tmp_0);
    tmp_0 = tmp_2[3 * i + 1];
    obj->pQv[6 * i + 1] = accelMeasNoiseVar * static_cast<real_T>(tmp_0);
    obj->pQv[tmp_1 + 4] = magMeasNoiseVar * static_cast<real_T>(tmp_0);
    tmp_0 = tmp_2[3 * i + 2];
    obj->pQv[6 * i + 2] = accelMeasNoiseVar * static_cast<real_T>(tmp_0);
    obj->pQv[tmp_1 + 5] = magMeasNoiseVar * static_cast<real_T>(tmp_0);
  }

  memcpy(&obj->pQw[0], &tmp[0], 144U * sizeof(real_T));
  obj->pLinAccelPost[0] = 0.0;
  obj->pLinAccelPost[1] = 0.0;
  obj->pLinAccelPost[2] = 0.0;
  obj->pFirstTime = true;
}

static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3])
{
  av[0] = gfast[0] - offset[0];
  av[1] = gfast[1] - offset[1];
  av[2] = gfast[2] - offset[2];
}

static void Template_v3_03_202_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9], B_AHRS2_Template_v3_03_2020a_T *localB)
{
  boolean_T nanPageIdx;
  boolean_T y[3];
  int32_T iy;
  int32_T xpageoffset;
  boolean_T exitg1;
  localB->Reast[0] = a[1] * m[2] - a[2] * m[1];
  localB->Reast[1] = a[2] * m[0] - a[0] * m[2];
  localB->Reast[2] = a[0] * m[1] - a[1] * m[0];
  R[6] = a[0];
  R[3] = localB->Reast[0];
  R[7] = a[1];
  R[4] = localB->Reast[1];
  R[8] = a[2];
  R[5] = localB->Reast[2];
  R[0] = localB->Reast[1] * a[2] - localB->Reast[2] * a[1];
  R[1] = localB->Reast[2] * a[0] - localB->Reast[0] * a[2];
  R[2] = localB->Reast[0] * a[1] - localB->Reast[1] * a[0];
  for (iy = 0; iy < 9; iy++) {
    localB->x[iy] = R[iy] * R[iy];
  }

  for (iy = 0; iy < 3; iy++) {
    xpageoffset = iy * 3;
    localB->Reast[iy] = localB->x[xpageoffset + 2] + (localB->x[xpageoffset + 1]
      + localB->x[xpageoffset]);
  }

  localB->Reast[0] = sqrt(localB->Reast[0]);
  localB->Reast[1] = sqrt(localB->Reast[1]);
  localB->Reast[2] = sqrt(localB->Reast[2]);
  memcpy(&localB->x[0], &R[0], 9U * sizeof(real_T));
  for (iy = 0; iy < 3; iy++) {
    R[3 * iy] = localB->x[3 * iy] / localB->Reast[iy];
    xpageoffset = 3 * iy + 1;
    R[xpageoffset] = localB->x[xpageoffset] / localB->Reast[iy];
    xpageoffset = 3 * iy + 2;
    R[xpageoffset] = localB->x[xpageoffset] / localB->Reast[iy];
  }

  for (iy = 0; iy < 9; iy++) {
    localB->b[iy] = rtIsNaN(R[iy]);
  }

  y[0] = false;
  y[1] = false;
  y[2] = false;
  xpageoffset = 1;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 3)) {
    if (!localB->b[xpageoffset - 1]) {
      xpageoffset++;
    } else {
      y[0] = true;
      exitg1 = true;
    }
  }

  xpageoffset = 4;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 6)) {
    if (!localB->b[xpageoffset - 1]) {
      xpageoffset++;
    } else {
      y[1] = true;
      exitg1 = true;
    }
  }

  xpageoffset = 7;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 9)) {
    if (!localB->b[xpageoffset - 1]) {
      xpageoffset++;
    } else {
      y[2] = true;
      exitg1 = true;
    }
  }

  nanPageIdx = false;
  iy = 0;
  exitg1 = false;
  while ((!exitg1) && (iy < 3)) {
    if (!y[iy]) {
      iy++;
    } else {
      nanPageIdx = true;
      exitg1 = true;
    }
  }

  if (nanPageIdx) {
    memset(&R[0], 0, 9U * sizeof(real_T));
    R[0] = 1.0;
    R[4] = 1.0;
    R[8] = 1.0;
  }
}

static void Templ_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d,
  B_AHRS2_Template_v3_03_2020a_T *localB)
{
  int32_T b_k;
  int32_T b_idx;
  int32_T b;
  boolean_T exitg1;
  localB->tr = (varargin_1[0] + varargin_1[4]) + varargin_1[8];
  localB->psquared[0] = (localB->tr * 2.0 + 1.0) - localB->tr;
  localB->psquared[1] = (2.0 * varargin_1[0] + 1.0) - localB->tr;
  localB->psquared[2] = (2.0 * varargin_1[4] + 1.0) - localB->tr;
  localB->psquared[3] = (2.0 * varargin_1[8] + 1.0) - localB->tr;
  if (!rtIsNaN(localB->psquared[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    b_k = 2;
    exitg1 = false;
    while ((!exitg1) && (b_k < 5)) {
      if (!rtIsNaN(localB->psquared[b_k - 1])) {
        b_idx = b_k;
        exitg1 = true;
      } else {
        b_k++;
      }
    }
  }

  if (b_idx == 0) {
    localB->tr = localB->psquared[0];
    b_idx = 1;
  } else {
    localB->tr = localB->psquared[b_idx - 1];
    b = b_idx;
    for (b_k = b + 1; b_k < 5; b_k++) {
      localB->d = localB->psquared[b_k - 1];
      if (localB->tr < localB->d) {
        localB->tr = localB->d;
        b_idx = b_k;
      }
    }
  }

  switch (b_idx) {
   case 1:
    localB->tr = sqrt(localB->tr);
    *obj_a = 0.5 * localB->tr;
    localB->tr = 0.5 / localB->tr;
    *obj_b = (varargin_1[7] - varargin_1[5]) * localB->tr;
    *obj_c = (varargin_1[2] - varargin_1[6]) * localB->tr;
    *obj_d = (varargin_1[3] - varargin_1[1]) * localB->tr;
    break;

   case 2:
    localB->tr = sqrt(localB->tr);
    *obj_b = 0.5 * localB->tr;
    localB->tr = 0.5 / localB->tr;
    *obj_a = (varargin_1[7] - varargin_1[5]) * localB->tr;
    *obj_c = (varargin_1[3] + varargin_1[1]) * localB->tr;
    *obj_d = (varargin_1[2] + varargin_1[6]) * localB->tr;
    break;

   case 3:
    localB->tr = sqrt(localB->tr);
    *obj_c = 0.5 * localB->tr;
    localB->tr = 0.5 / localB->tr;
    *obj_a = (varargin_1[2] - varargin_1[6]) * localB->tr;
    *obj_b = (varargin_1[3] + varargin_1[1]) * localB->tr;
    *obj_d = (varargin_1[7] + varargin_1[5]) * localB->tr;
    break;

   default:
    localB->tr = sqrt(localB->tr);
    *obj_d = 0.5 * localB->tr;
    localB->tr = 0.5 / localB->tr;
    *obj_a = (varargin_1[3] - varargin_1[1]) * localB->tr;
    *obj_b = (varargin_1[2] + varargin_1[6]) * localB->tr;
    *obj_c = (varargin_1[7] + varargin_1[5]) * localB->tr;
    break;
  }

  if (*obj_a < 0.0) {
    *obj_a = -*obj_a;
    *obj_b = -*obj_b;
    *obj_c = -*obj_c;
    *obj_d = -*obj_d;
  }
}

static void Tem_quaternioncg_quaternioncg_f(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d,
  B_AHRS2_Template_v3_03_2020a_T *localB)
{
  real_T st;
  *obj_a = 1.0;
  *obj_b = 0.0;
  *obj_c = 0.0;
  *obj_d = 0.0;
  localB->theta = sqrt((varargin_1[0] * varargin_1[0] + varargin_1[1] *
                        varargin_1[1]) + varargin_1[2] * varargin_1[2]);
  st = sin(localB->theta / 2.0);
  if (localB->theta != 0.0) {
    *obj_a = cos(localB->theta / 2.0);
    *obj_b = varargin_1[0] / localB->theta * st;
    *obj_c = varargin_1[1] / localB->theta * st;
    *obj_d = varargin_1[2] / localB->theta * st;
  }
}

static void Template__quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
  real_T x_d, real_T y_a, real_T y_b, real_T y_c, real_T y_d, real_T *o_a,
  real_T *o_b, real_T *o_c, real_T *o_d)
{
  *o_a = ((x_a * y_a - x_b * y_b) - x_c * y_c) - x_d * y_d;
  *o_b = ((x_a * y_b + x_b * y_a) + x_c * y_d) - x_d * y_c;
  *o_c = ((x_a * y_c - x_b * y_d) + x_c * y_a) + x_d * y_b;
  *o_d = ((x_a * y_d + x_b * y_c) - x_c * y_b) + x_d * y_a;
}

static void IMUFusionCommon_predictOrientat(const
  fusion_simulink_ahrsfilter_Te_T *obj, const real_T gfast[3], const real_T
  offset[3], real_T qorient_a, real_T qorient_b, real_T qorient_c, real_T
  qorient_d, real_T *b_qorient_a, real_T *b_qorient_b, real_T *b_qorient_c,
  real_T *b_qorient_d, B_AHRS2_Template_v3_03_2020a_T *localB)
{
  localB->c[0] = (gfast[0] - offset[0]) * obj->pSensorPeriod;
  localB->c[1] = (gfast[1] - offset[1]) * obj->pSensorPeriod;
  localB->c[2] = (gfast[2] - offset[2]) * obj->pSensorPeriod;
  Tem_quaternioncg_quaternioncg_f(localB->c, &localB->assign_temp_a_k,
    &localB->assign_temp_b_c, &localB->assign_temp_c_b, &localB->assign_temp_d_p,
    localB);
  Template__quaternionBase_mtimes(qorient_a, qorient_b, qorient_c, qorient_d,
    localB->assign_temp_a_k, localB->assign_temp_b_c, localB->assign_temp_c_b,
    localB->assign_temp_d_p, b_qorient_a, b_qorient_b, b_qorient_c, b_qorient_d);
  if (*b_qorient_a < 0.0) {
    *b_qorient_a = -*b_qorient_a;
    *b_qorient_b = -*b_qorient_b;
    *b_qorient_c = -*b_qorient_c;
    *b_qorient_d = -*b_qorient_d;
  }
}

static void Template__quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9], B_AHRS2_Template_v3_03_2020a_T *localB)
{
  real_T n;
  n = sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
  q_a /= n;
  q_b /= n;
  q_c /= n;
  q_d /= n;
  n = q_a * q_b * 2.0;
  localB->ac2 = q_a * q_c * 2.0;
  localB->ad2 = q_a * q_d * 2.0;
  localB->bc2 = q_b * q_c * 2.0;
  localB->bd2 = q_b * q_d * 2.0;
  localB->cd2 = q_c * q_d * 2.0;
  localB->aasq = q_a * q_a * 2.0 - 1.0;
  r[0] = q_b * q_b * 2.0 + localB->aasq;
  r[3] = localB->bc2 + localB->ad2;
  r[6] = localB->bd2 - localB->ac2;
  r[1] = localB->bc2 - localB->ad2;
  r[4] = q_c * q_c * 2.0 + localB->aasq;
  r[7] = localB->cd2 + n;
  r[2] = localB->bd2 + localB->ac2;
  r[5] = localB->cd2 - n;
  r[8] = q_d * q_d * 2.0 + localB->aasq;
}

static void Temp_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9],
  B_AHRS2_Template_v3_03_2020a_T *localB)
{
  int32_T i;
  int32_T h_tmp;
  memset(&h[0], 0, 9U * sizeof(real_T));
  h[3] = v[2];
  h[6] = -v[1];
  h[7] = v[0];
  for (i = 0; i < 3; i++) {
    localB->h[3 * i] = h[3 * i];
    h_tmp = 3 * i + 1;
    localB->h[h_tmp] = h[h_tmp] - h[i + 3];
    h_tmp = 3 * i + 2;
    localB->h[h_tmp] = h[h_tmp] - h[i + 6];
  }

  memcpy(&h[0], &localB->h[0], 9U * sizeof(real_T));
}

static real_T Template_v3_03_2020a_norm(const real_T x[3],
  B_AHRS2_Template_v3_03_2020a_T *localB)
{
  real_T y;
  real_T t;
  localB->scale = 3.3121686421112381E-170;
  localB->absxk = fabs(x[0]);
  if (localB->absxk > 3.3121686421112381E-170) {
    y = 1.0;
    localB->scale = localB->absxk;
  } else {
    t = localB->absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  localB->absxk = fabs(x[1]);
  if (localB->absxk > localB->scale) {
    t = localB->scale / localB->absxk;
    y = y * t * t + 1.0;
    localB->scale = localB->absxk;
  } else {
    t = localB->absxk / localB->scale;
    y += t * t;
  }

  localB->absxk = fabs(x[2]);
  if (localB->absxk > localB->scale) {
    t = localB->scale / localB->absxk;
    y = y * t * t + 1.0;
    localB->scale = localB->absxk;
  } else {
    t = localB->absxk / localB->scale;
    y += t * t;
  }

  return localB->scale * sqrt(y);
}

static void Template_v3_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d)
{
  *b_q_a = q_a;
  *b_q_b = -q_b;
  *b_q_c = -q_c;
  *b_q_d = -q_d;
}

static void Template__quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d)
{
  *b_obj_a = -obj_a;
  *b_obj_b = -obj_b;
  *b_obj_c = -obj_c;
  *b_obj_d = -obj_d;
}

static void Templa_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d)
{
  real_T n;
  n = sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
  *b_q_a = q_a / n;
  *b_q_b = q_b / n;
  *b_q_c = q_c / n;
  *b_q_d = q_d / n;
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
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

static void Templa_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d)
{
  *o_a = rhs_a;
  *o_b = rhs_b;
  *o_c = rhs_c;
  *o_d = rhs_d;
}

static void Template_v3_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Te_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3], B_AHRS2_Template_v3_03_2020a_T *localB)
{
  boolean_T isJamming;
  int32_T jp;
  int32_T jj;
  int32_T jp1j;
  int32_T c;
  int32_T ix;
  int32_T iy;
  int32_T jA;
  int32_T jy;
  int32_T c_0;
  int32_T H_tmp;
  int32_T H_tmp_0;
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static const int8_T tmp_0[9] = { -1, 0, 0, 0, -1, 0, 0, 0, -1 };

  IMUFusionCommon_computeAngularV(gyroIn, obj->pGyroOffset, av);
  if (obj->pFirstTime) {
    obj->pFirstTime = false;
    Template_v3_03_202_NED_ecompass(accelIn, magIn, localB->Rprior, localB);
    Templ_quaternioncg_quaternioncg(localB->Rprior, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d, localB);
  }

  for (c_0 = 0; c_0 < 3; c_0++) {
    localB->gravityAccelGyroDiff[c_0] = obj->pGyroOffset[c_0];
  }

  IMUFusionCommon_predictOrientat(obj, gyroIn, localB->gravityAccelGyroDiff,
    obj->pOrientPost.a, obj->pOrientPost.b, obj->pOrientPost.c,
    obj->pOrientPost.d, &localB->temp, &localB->smax, &localB->s,
    &localB->gyroOffsetErr_idx_0, localB);
  obj->pOrientPrior.d = localB->gyroOffsetErr_idx_0;
  obj->pOrientPrior.c = localB->s;
  obj->pOrientPrior.b = localB->smax;
  obj->pOrientPrior.a = localB->temp;
  Template__quaternionBase_rotmat(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, localB->Rprior, localB);
  obj->pLinAccelPrior[0] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[0];
  localB->gravityAccelGyroDiff[0] = (accelIn[0] + obj->pLinAccelPrior[0]) -
    localB->Rprior[6];
  obj->pLinAccelPrior[1] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[1];
  localB->gravityAccelGyroDiff[1] = (accelIn[1] + obj->pLinAccelPrior[1]) -
    localB->Rprior[7];
  obj->pLinAccelPrior[2] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[2];
  localB->gravityAccelGyroDiff[2] = (accelIn[2] + obj->pLinAccelPrior[2]) -
    localB->Rprior[8];
  Temp_IMUFusionCommon_buildHPart(&localB->Rprior[6], localB->h1, localB);
  for (c_0 = 0; c_0 < 3; c_0++) {
    localB->offDiag[c_0] = localB->Rprior[c_0 + 6] * obj->pMagVec[2] +
      (localB->Rprior[c_0 + 3] * obj->pMagVec[1] + localB->Rprior[c_0] *
       obj->pMagVec[0]);
  }

  Temp_IMUFusionCommon_buildHPart(localB->offDiag, localB->Rprior, localB);
  for (c_0 = 0; c_0 < 3; c_0++) {
    localB->temp = localB->Rprior[3 * c_0];
    localB->smax = localB->h1[3 * c_0];
    localB->H[6 * c_0] = localB->smax;
    jp = 6 * (c_0 + 3);
    localB->H[jp] = -localB->smax * obj->pKalmanPeriod;
    H_tmp = 6 * (c_0 + 6);
    localB->H[H_tmp] = tmp[3 * c_0];
    H_tmp_0 = 6 * (c_0 + 9);
    localB->H[H_tmp_0] = 0.0;
    localB->H[6 * c_0 + 3] = localB->temp;
    localB->H[jp + 3] = -localB->temp * obj->pKalmanPeriod;
    localB->H[H_tmp + 3] = 0.0;
    localB->H[H_tmp_0 + 3] = tmp_0[3 * c_0];
    jj = 3 * c_0 + 1;
    localB->H[6 * c_0 + 1] = localB->h1[jj];
    localB->H[jp + 1] = -localB->h1[jj] * obj->pKalmanPeriod;
    localB->H[H_tmp + 1] = tmp[jj];
    localB->H[H_tmp_0 + 1] = 0.0;
    localB->H[6 * c_0 + 4] = localB->Rprior[jj];
    localB->H[jp + 4] = -localB->Rprior[jj] * obj->pKalmanPeriod;
    localB->H[H_tmp + 4] = 0.0;
    localB->H[H_tmp_0 + 4] = tmp_0[jj];
    jj = 3 * c_0 + 2;
    localB->H[6 * c_0 + 2] = localB->h1[jj];
    localB->H[jp + 2] = -localB->h1[jj] * obj->pKalmanPeriod;
    localB->H[H_tmp + 2] = tmp[jj];
    localB->H[H_tmp_0 + 2] = 0.0;
    localB->H[6 * c_0 + 5] = localB->Rprior[jj];
    localB->H[jp + 5] = -localB->Rprior[jj] * obj->pKalmanPeriod;
    localB->H[H_tmp + 5] = 0.0;
    localB->H[H_tmp_0 + 5] = tmp_0[jj];
  }

  memcpy(&localB->Qw[0], &obj->pQw[0], 144U * sizeof(real_T));
  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      jp = H_tmp + 6 * c_0;
      localB->H_m[jp] = 0.0;
      for (jj = 0; jj < 12; jj++) {
        localB->H_m[jp] += localB->H[6 * jj + H_tmp] * obj->pQw[12 * c_0 + jj];
      }
    }
  }

  for (c_0 = 0; c_0 < 6; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      localB->temp = 0.0;
      for (jj = 0; jj < 12; jj++) {
        localB->temp += localB->H_m[6 * jj + H_tmp] * localB->H[6 * jj + c_0];
      }

      localB->c_A[c_0 + 6 * H_tmp] = obj->pQv[6 * c_0 + H_tmp] + localB->temp;
    }

    localB->b_ipiv[c_0] = static_cast<int8_T>(c_0 + 1);
  }

  for (jp = 0; jp < 5; jp++) {
    H_tmp = jp * 7 + 2;
    jj = jp * 7;
    c = 6 - jp;
    iy = 1;
    ix = H_tmp - 2;
    localB->smax = fabs(localB->c_A[jj]);
    for (jA = 2; jA <= c; jA++) {
      ix++;
      localB->s = fabs(localB->c_A[ix]);
      if (localB->s > localB->smax) {
        iy = jA;
        localB->smax = localB->s;
      }
    }

    if (localB->c_A[(H_tmp + iy) - 3] != 0.0) {
      if (iy - 1 != 0) {
        localB->b_ipiv[jp] = static_cast<int8_T>(jp + iy);
        ix = jp;
        iy = (jp + iy) - 1;
        for (jA = 0; jA < 6; jA++) {
          localB->temp = localB->c_A[ix];
          localB->c_A[ix] = localB->c_A[iy];
          localB->c_A[iy] = localB->temp;
          ix += 6;
          iy += 6;
        }
      }

      iy = H_tmp - jp;
      for (ix = H_tmp; ix <= iy + 4; ix++) {
        localB->c_A[ix - 1] /= localB->c_A[jj];
      }
    }

    c = 4 - jp;
    jA = jj;
    jy = jj + 6;
    for (jj = 0; jj <= c; jj++) {
      localB->temp = localB->c_A[jy];
      if (localB->c_A[jy] != 0.0) {
        ix = H_tmp - 1;
        c_0 = jA - jp;
        for (jp1j = jA + 8; jp1j <= c_0 + 12; jp1j++) {
          localB->c_A[jp1j - 1] += localB->c_A[ix] * -localB->temp;
          ix++;
        }
      }

      jy += 6;
      jA += 6;
    }
  }

  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      H_tmp_0 = c_0 + 12 * H_tmp;
      localB->b_X[H_tmp_0] = 0.0;
      for (jj = 0; jj < 12; jj++) {
        localB->b_X[H_tmp_0] += obj->pQw[12 * jj + c_0] * localB->H[6 * jj +
          H_tmp];
      }
    }
  }

  for (jp = 0; jp < 6; jp++) {
    jj = 12 * jp - 1;
    jp1j = 6 * jp - 1;
    iy = jp - 1;
    for (c = 0; c <= iy; c++) {
      jy = 12 * c - 1;
      c_0 = (c + jp1j) + 1;
      if (localB->c_A[c_0] != 0.0) {
        for (H_tmp = 0; H_tmp < 12; H_tmp++) {
          ix = H_tmp + 1;
          H_tmp_0 = ix + jj;
          localB->b_X[H_tmp_0] -= localB->c_A[c_0] * localB->b_X[ix + jy];
        }
      }
    }

    localB->temp = 1.0 / localB->c_A[(jp + jp1j) + 1];
    for (c = 0; c < 12; c++) {
      H_tmp_0 = (c + jj) + 1;
      localB->b_X[H_tmp_0] *= localB->temp;
    }
  }

  for (c = 5; c >= 0; c--) {
    jj = 12 * c - 1;
    jp1j = 6 * c - 1;
    for (jA = c + 2; jA < 7; jA++) {
      jy = (jA - 1) * 12 - 1;
      c_0 = jA + jp1j;
      if (localB->c_A[c_0] != 0.0) {
        for (H_tmp = 0; H_tmp < 12; H_tmp++) {
          ix = H_tmp + 1;
          H_tmp_0 = ix + jj;
          localB->b_X[H_tmp_0] -= localB->c_A[c_0] * localB->b_X[ix + jy];
        }
      }
    }
  }

  for (c = 4; c >= 0; c--) {
    if (c + 1 != localB->b_ipiv[c]) {
      jp = localB->b_ipiv[c] - 1;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        c_0 = 12 * c + H_tmp;
        localB->temp = localB->b_X[c_0];
        H_tmp_0 = 12 * jp + H_tmp;
        localB->b_X[c_0] = localB->b_X[H_tmp_0];
        localB->b_X[H_tmp_0] = localB->temp;
      }
    }
  }

  localB->ze[0] = localB->gravityAccelGyroDiff[0];
  localB->ze[3] = magIn[0] - localB->offDiag[0];
  localB->ze[1] = localB->gravityAccelGyroDiff[1];
  localB->ze[4] = magIn[1] - localB->offDiag[1];
  localB->ze[2] = localB->gravityAccelGyroDiff[2];
  localB->ze[5] = magIn[2] - localB->offDiag[2];
  for (c_0 = 0; c_0 < 3; c_0++) {
    localB->offDiag[c_0] = 0.0;
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      localB->offDiag[c_0] += localB->b_X[(12 * H_tmp + c_0) + 9] * localB->
        ze[H_tmp];
    }
  }

  localB->temp = Template_v3_03_2020a_norm(localB->offDiag, localB);
  isJamming = (localB->temp * localB->temp > obj->ExpectedMagneticFieldStrength *
               obj->ExpectedMagneticFieldStrength * 4.0);
  if (isJamming) {
    for (c_0 = 0; c_0 < 9; c_0++) {
      localB->h1[c_0] = localB->b_X[c_0 + 24] * localB->gravityAccelGyroDiff[2]
        + (localB->b_X[c_0 + 12] * localB->gravityAccelGyroDiff[1] + localB->
           b_X[c_0] * localB->gravityAccelGyroDiff[0]);
    }

    localB->gravityAccelGyroDiff[0] = localB->h1[0];
    localB->gyroOffsetErr_idx_0 = localB->h1[3];
    localB->linAccelErr_idx_0 = localB->h1[6];
    localB->gravityAccelGyroDiff[1] = localB->h1[1];
    localB->gyroOffsetErr_idx_1 = localB->h1[4];
    localB->linAccelErr_idx_1 = localB->h1[7];
    localB->gravityAccelGyroDiff[2] = localB->h1[2];
    localB->gyroOffsetErr_idx_2 = localB->h1[5];
    localB->linAccelErr_idx_2 = localB->h1[8];
  } else {
    for (c_0 = 0; c_0 < 12; c_0++) {
      localB->xe_post[c_0] = 0.0;
      for (H_tmp = 0; H_tmp < 6; H_tmp++) {
        localB->xe_post[c_0] += localB->b_X[12 * H_tmp + c_0] * localB->ze[H_tmp];
      }
    }

    localB->gravityAccelGyroDiff[0] = localB->xe_post[0];
    localB->gyroOffsetErr_idx_0 = localB->xe_post[3];
    localB->linAccelErr_idx_0 = localB->xe_post[6];
    localB->gravityAccelGyroDiff[1] = localB->xe_post[1];
    localB->gyroOffsetErr_idx_1 = localB->xe_post[4];
    localB->linAccelErr_idx_1 = localB->xe_post[7];
    localB->gravityAccelGyroDiff[2] = localB->xe_post[2];
    localB->gyroOffsetErr_idx_2 = localB->xe_post[5];
    localB->linAccelErr_idx_2 = localB->xe_post[8];
  }

  Tem_quaternioncg_quaternioncg_f(localB->gravityAccelGyroDiff, &localB->temp,
    &localB->smax, &localB->s, &localB->assign_temp_d_c, localB);
  Template_v3_quaternionBase_conj(localB->temp, localB->smax, localB->s,
    localB->assign_temp_d_c, &localB->assign_temp_a, &localB->assign_temp_b,
    &localB->assign_temp_c, &localB->assign_temp_d);
  Template__quaternionBase_mtimes(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, localB->assign_temp_a,
    localB->assign_temp_b, localB->assign_temp_c, localB->assign_temp_d,
    &obj->pOrientPost.a, &obj->pOrientPost.b, &obj->pOrientPost.c,
    &obj->pOrientPost.d);
  if (obj->pOrientPost.a < 0.0) {
    Template__quaternionBase_uminus(obj->pOrientPost.a, obj->pOrientPost.b,
      obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  }

  Templa_quaternionBase_normalize(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
    &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  Template__quaternionBase_rotmat(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, localB->h1, localB);
  obj->pGyroOffset[0] -= localB->gyroOffsetErr_idx_0;
  obj->pLinAccelPost[0] = obj->pLinAccelPrior[0] - localB->linAccelErr_idx_0;
  obj->pGyroOffset[1] -= localB->gyroOffsetErr_idx_1;
  obj->pLinAccelPost[1] = obj->pLinAccelPrior[1] - localB->linAccelErr_idx_1;
  obj->pGyroOffset[2] -= localB->gyroOffsetErr_idx_2;
  obj->pLinAccelPost[2] = obj->pLinAccelPrior[2] - localB->linAccelErr_idx_2;
  if (!isJamming) {
    for (H_tmp = 0; H_tmp < 3; H_tmp++) {
      jp = H_tmp * 3 - 1;
      localB->gravityAccelGyroDiff[H_tmp] = (localB->h1[jp + 1] *
        localB->offDiag[0] + localB->h1[jp + 2] * localB->offDiag[1]) +
        localB->h1[jp + 3] * localB->offDiag[2];
    }

    localB->gravityAccelGyroDiff[0] = obj->pMagVec[0] -
      localB->gravityAccelGyroDiff[0];
    localB->temp = rt_atan2d_snf(obj->pMagVec[2] - localB->gravityAccelGyroDiff
      [2], localB->gravityAccelGyroDiff[0]);
    if (localB->temp < -1.5707963267948966) {
      localB->temp = -1.5707963267948966;
    }

    if (localB->temp > 1.5707963267948966) {
      localB->temp = 1.5707963267948966;
    }

    obj->pMagVec[0] = 0.0;
    obj->pMagVec[1] = 0.0;
    obj->pMagVec[2] = 0.0;
    obj->pMagVec[0] = cos(localB->temp);
    obj->pMagVec[2] = sin(localB->temp);
    obj->pMagVec[0] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[1] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[2] *= obj->ExpectedMagneticFieldStrength;
  }

  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      jp = H_tmp + 6 * c_0;
      localB->H_m[jp] = 0.0;
      for (jj = 0; jj < 12; jj++) {
        localB->H_m[jp] += localB->H[6 * jj + H_tmp] * localB->Qw[12 * c_0 + jj];
      }
    }
  }

  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 12; H_tmp++) {
      localB->temp = 0.0;
      for (jj = 0; jj < 6; jj++) {
        localB->temp += localB->b_X[12 * jj + c_0] * localB->H_m[6 * H_tmp + jj];
      }

      jp = 12 * H_tmp + c_0;
      localB->Ppost[jp] = localB->Qw[jp] - localB->temp;
    }
  }

  memset(&localB->Qw[0], 0, 144U * sizeof(real_T));
  localB->temp = obj->pKalmanPeriod * obj->pKalmanPeriod;
  localB->smax = obj->GyroscopeDriftNoise + obj->GyroscopeNoise;
  localB->Qw[0] = (localB->Ppost[39] + localB->smax) * localB->temp +
    localB->Ppost[0];
  localB->Qw[39] = localB->Ppost[39] + obj->GyroscopeDriftNoise;
  localB->offDiag[0] = -obj->pKalmanPeriod * localB->Qw[39];
  localB->Qw[13] = (localB->Ppost[52] + localB->smax) * localB->temp +
    localB->Ppost[13];
  localB->Qw[52] = localB->Ppost[52] + obj->GyroscopeDriftNoise;
  localB->offDiag[1] = -obj->pKalmanPeriod * localB->Qw[52];
  localB->Qw[26] = (localB->Ppost[65] + localB->smax) * localB->temp +
    localB->Ppost[26];
  localB->Qw[65] = localB->Ppost[65] + obj->GyroscopeDriftNoise;
  localB->offDiag[2] = -obj->pKalmanPeriod * localB->Qw[65];
  localB->Qw[3] = localB->offDiag[0];
  localB->Qw[16] = localB->offDiag[1];
  localB->Qw[29] = localB->offDiag[2];
  localB->Qw[36] = localB->offDiag[0];
  localB->Qw[49] = localB->offDiag[1];
  localB->Qw[62] = localB->offDiag[2];
  localB->temp = obj->LinearAccelerationDecayFactor *
    obj->LinearAccelerationDecayFactor;
  localB->Qw[78] = localB->temp * localB->Ppost[78] +
    obj->LinearAccelerationNoise;
  localB->Qw[91] = localB->temp * localB->Ppost[91] +
    obj->LinearAccelerationNoise;
  localB->Qw[104] = localB->temp * localB->Ppost[104] +
    obj->LinearAccelerationNoise;
  localB->temp = obj->MagneticDisturbanceDecayFactor *
    obj->MagneticDisturbanceDecayFactor;
  localB->Qw[117] = localB->temp * localB->Ppost[117] +
    obj->MagneticDisturbanceNoise;
  localB->Qw[130] = localB->temp * localB->Ppost[130] +
    obj->MagneticDisturbanceNoise;
  localB->Qw[143] = localB->temp * localB->Ppost[143] +
    obj->MagneticDisturbanceNoise;
  memcpy(&obj->pQw[0], &localB->Qw[0], 144U * sizeof(real_T));
  Templa_quaternioncg_parenAssign(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &orientOut[0], &orientOut[1],
    &orientOut[2], &orientOut[3]);
}

//
// System initialize for atomic system:
//    synthesized block
//    synthesized block
//
void Template_v3_03_2_AHRS2_Init(const real_T rtu_0[3],
  DW_AHRS2_Template_v3_03_2020a_T *localDW, P_AHRS2_Template_v3_03_2020a_T
  *localP)
{
  // Start for MATLABSystem: '<S6>/AHRS2'
  localDW->obj.isInitialized = 0;
  localDW->objisempty = true;
  localDW->obj.AccelerometerNoise = localP->AHRS2_AccelerometerNoise;
  localDW->obj.GyroscopeNoise = localP->AHRS2_GyroscopeNoise;
  localDW->obj.MagnetometerNoise = localP->AHRS2_MagnetometerNoise;
  localDW->obj.GyroscopeDriftNoise = localP->AHRS2_GyroscopeDriftNoise;
  localDW->obj.LinearAccelerationNoise = localP->AHRS2_LinearAccelerationNoise;
  localDW->obj.MagneticDisturbanceNoise = localP->AHRS2_MagneticDisturbanceNoise;
  localDW->obj.LinearAccelerationDecayFactor =
    localP->AHRS2_LinearAccelerationDecayFa;
  localDW->obj.MagneticDisturbanceDecayFactor =
    localP->AHRS2_MagneticDisturbanceDecayF;
  localDW->obj.ExpectedMagneticFieldStrength =
    localP->AHRS2_ExpectedMagneticFieldStre;
  localDW->obj.isInitialized = 1;
  localDW->obj.pInputPrototype[0] = rtu_0[0];
  localDW->obj.pInputPrototype[1] = rtu_0[1];
  localDW->obj.pInputPrototype[2] = rtu_0[2];
  localDW->obj.pSensorPeriod = 0.05;
  localDW->obj.pKalmanPeriod = localDW->obj.pSensorPeriod;
  localDW->obj.pRefSys = &localDW->gobj_2;
  localDW->obj.TunablePropsChanged = false;

  // InitializeConditions for MATLABSystem: '<S6>/AHRS2'
  Templa_AHRSFilterBase_resetImpl(&localDW->obj);
}

//
// Output and update for atomic system:
//    synthesized block
//    synthesized block
//
void Template_v3_03_2020a_AHRS2(const real_T rtu_0[3], const real_T rtu_1[3],
  const real_T rtu_2[3], B_AHRS2_Template_v3_03_2020a_T *localB,
  DW_AHRS2_Template_v3_03_2020a_T *localDW, P_AHRS2_Template_v3_03_2020a_T
  *localP)
{
  int32_T tmp;
  static const int8_T tmp_0[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  // MATLABSystem: '<S6>/AHRS2'
  if (localDW->obj.AccelerometerNoise != localP->AHRS2_AccelerometerNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.AccelerometerNoise = localP->AHRS2_AccelerometerNoise;
  }

  if (localDW->obj.GyroscopeNoise != localP->AHRS2_GyroscopeNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.GyroscopeNoise = localP->AHRS2_GyroscopeNoise;
  }

  if (localDW->obj.MagnetometerNoise != localP->AHRS2_MagnetometerNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.MagnetometerNoise = localP->AHRS2_MagnetometerNoise;
  }

  if (localDW->obj.GyroscopeDriftNoise != localP->AHRS2_GyroscopeDriftNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.GyroscopeDriftNoise = localP->AHRS2_GyroscopeDriftNoise;
  }

  if (localDW->obj.LinearAccelerationNoise !=
      localP->AHRS2_LinearAccelerationNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.LinearAccelerationNoise = localP->AHRS2_LinearAccelerationNoise;
  }

  if (localDW->obj.MagneticDisturbanceNoise !=
      localP->AHRS2_MagneticDisturbanceNoise) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.MagneticDisturbanceNoise =
      localP->AHRS2_MagneticDisturbanceNoise;
  }

  if (localDW->obj.LinearAccelerationDecayFactor !=
      localP->AHRS2_LinearAccelerationDecayFa) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.LinearAccelerationDecayFactor =
      localP->AHRS2_LinearAccelerationDecayFa;
  }

  if (localDW->obj.MagneticDisturbanceDecayFactor !=
      localP->AHRS2_MagneticDisturbanceDecayF) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.MagneticDisturbanceDecayFactor =
      localP->AHRS2_MagneticDisturbanceDecayF;
  }

  if (localDW->obj.ExpectedMagneticFieldStrength !=
      localP->AHRS2_ExpectedMagneticFieldStre) {
    if (localDW->obj.isInitialized == 1) {
      localDW->obj.TunablePropsChanged = true;
    }

    localDW->obj.ExpectedMagneticFieldStrength =
      localP->AHRS2_ExpectedMagneticFieldStre;
  }

  if (localDW->obj.TunablePropsChanged) {
    localDW->obj.TunablePropsChanged = false;
    localB->magMeasNoiseVar = localDW->obj.pKalmanPeriod *
      localDW->obj.pKalmanPeriod * (localDW->obj.GyroscopeDriftNoise +
      localDW->obj.GyroscopeNoise);
    localB->accelMeasNoiseVar = localB->magMeasNoiseVar +
      (localDW->obj.AccelerometerNoise + localDW->obj.LinearAccelerationNoise);
    localB->magMeasNoiseVar += localDW->obj.MagnetometerNoise +
      localDW->obj.MagneticDisturbanceNoise;
    memset(&localDW->obj.pQv[0], 0, 36U * sizeof(real_T));
    for (localB->i = 0; localB->i < 3; localB->i++) {
      localB->i1 = tmp_0[3 * localB->i];
      localDW->obj.pQv[6 * localB->i] = localB->accelMeasNoiseVar * static_cast<
        real_T>(localB->i1);
      tmp = 6 * (localB->i + 3);
      localDW->obj.pQv[tmp + 3] = localB->magMeasNoiseVar * static_cast<real_T>
        (localB->i1);
      localB->i1 = tmp_0[3 * localB->i + 1];
      localDW->obj.pQv[6 * localB->i + 1] = localB->accelMeasNoiseVar *
        static_cast<real_T>(localB->i1);
      localDW->obj.pQv[tmp + 4] = localB->magMeasNoiseVar * static_cast<real_T>
        (localB->i1);
      localB->i1 = tmp_0[3 * localB->i + 2];
      localDW->obj.pQv[6 * localB->i + 2] = localB->accelMeasNoiseVar *
        static_cast<real_T>(localB->i1);
      localDW->obj.pQv[tmp + 5] = localB->magMeasNoiseVar * static_cast<real_T>
        (localB->i1);
    }
  }

  Template_v3_ahrsfilter_stepImpl(&localDW->obj, rtu_0, rtu_1, rtu_2,
    localB->b_varargout_1, localB->b_varargout_2, localB);
  localB->AHRS2_o2[0] = localB->b_varargout_2[0];
  localB->AHRS2_o2[1] = localB->b_varargout_2[1];
  localB->AHRS2_o2[2] = localB->b_varargout_2[2];

  // End of MATLABSystem: '<S6>/AHRS2'
}

//
// Output and update for atomic system:
//    '<S136>/MATLAB Function'
//    '<S138>/MATLAB Function'
//    '<S140>/MATLAB Function'
//    '<S142>/MATLAB Function'
//    '<S144>/MATLAB Function'
//    '<S146>/MATLAB Function'
//
void Template_v_MATLABFunction_e(real_T rtu_w, real_T rtu_zeta, real_T rtu_tau,
  B_MATLABFunction_Template_v_l_T *localB)
{
  real_T wt;
  real_T p;
  real_T d;

  // MATLAB Function 'DiscreteSecondOrderSection/MATLAB Function': '<S137>:1'
  // '<S137>:1:4' wt = tau*w;
  wt = rtu_tau * rtu_w;

  // '<S137>:1:5' p = 2*zeta*wt;
  p = 2.0 * rtu_zeta * wt;

  // '<S137>:1:6' q = wt^2;
  wt *= wt;

  // '<S137>:1:7' r = 1+q;
  // '<S137>:1:8' d = p+r;
  d = (wt + 1.0) + p;

  // '<S137>:1:9' a = q/d;
  localB->a = wt / d;

  // '<S137>:1:10' b = (1-q)/d;
  localB->b = (1.0 - wt) / d;

  // '<S137>:1:11' c = (r-p)/d;
  localB->c = ((wt + 1.0) - p) / d;
}

//
// Output and update for atomic system:
//    '<S6>/MATLAB Function'
//    '<S6>/MATLAB Function1'
//
void Template_v_MATLABFunction_k(const real_T rtu_u[9],
  B_MATLABFunction_Template_v_p_T *localB)
{
  // MATLAB Function 'Gyroscope & Acceleration Algorithms/MATLAB Function': '<S133>:1' 
  // '<S133>:1:3' y = reshape(u,[9,1]);
  memcpy(&localB->y[0], &rtu_u[0], 9U * sizeof(real_T));
}

//
// Output and update for atomic system:
//    '<S397>/MATLAB Function'
//    '<S398>/MATLAB Function'
//    '<S399>/MATLAB Function'
//
void Template_v_MATLABFunction_d(real_T rtu_TIME, real_T rtu_SERVER,
  B_MATLABFunction_Template_v_e_T *localB)
{
  real_T r;
  boolean_T rEQ0;
  real_T q;

  // MATLAB Function 'Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/MATLAB Function': '<S412>:1' 
  // '<S412>:1:3' if mod(TIME,SERVER) == 0
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
    // '<S412>:1:4' y = 1;
    localB->y = 1.0;
  } else {
    // '<S412>:1:5' else
    // '<S412>:1:6' y = 0;
    localB->y = 0.0;
  }
}

//
// Output and update for action system:
//    '<S8>/Change BLUE Behavior'
//    '<S9>/Change BLUE Behavior'
//    '<S14>/Change BLUE Behavior'
//
void Template_ChangeBLUEBehavior(P_ChangeBLUEBehavior_Template_T *localP, real_T
  *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S149>/BLUE_Fx' incorporates:
  //   Constant: '<S149>/Constant3'

  *rtd_BLUE_Fx = localP->Constant3_Value;

  // DataStoreWrite: '<S149>/BLUE_Fy' incorporates:
  //   Constant: '<S149>/Constant4'

  *rtd_BLUE_Fy = localP->Constant4_Value;

  // DataStoreWrite: '<S149>/BLUE_Tz' incorporates:
  //   Constant: '<S149>/Constant5'

  *rtd_BLUE_Tz = localP->Constant5_Value;

  // DataStoreWrite: '<S149>/Data Store Write4' incorporates:
  //   Constant: '<S149>/Puck State'

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
  // If: '<S8>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
  //   Constant: '<S151>/Constant'
  //   Constant: '<S8>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 2.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S8>/Change BLACK Behavior' incorporates:
    //   ActionPort: '<S148>/Action Port'

    // DataStoreWrite: '<S148>/BLACK_Fx' incorporates:
    //   Constant: '<S148>/Constant3'

    *rtd_BLACK_Fx = localP->Constant3_Value;

    // DataStoreWrite: '<S148>/BLACK_Fy' incorporates:
    //   Constant: '<S148>/Constant4'

    *rtd_BLACK_Fy = localP->Constant4_Value;

    // DataStoreWrite: '<S148>/BLACK_Tz' incorporates:
    //   Constant: '<S148>/Constant5'

    *rtd_BLACK_Tz = localP->Constant5_Value;

    // DataStoreWrite: '<S148>/Data Store Write4' incorporates:
    //   Constant: '<S148>/Puck State'

    *rtd_Float_State = localP->PuckState_Value;

    // End of Outputs for SubSystem: '<S8>/Change BLACK Behavior'
  }

  // End of If: '<S8>/This IF block determines whether or not to run the BLACK sim//exp' 

  // If: '<S8>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
  //   Constant: '<S151>/Constant'
  //   Constant: '<S8>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 3.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S8>/Change BLUE Behavior' incorporates:
    //   ActionPort: '<S149>/Action Port'

    Template_ChangeBLUEBehavior(&localP->ChangeBLUEBehavior, rtd_BLUE_Fx,
      rtd_BLUE_Fy, rtd_BLUE_Tz, rtd_Float_State);

    // End of Outputs for SubSystem: '<S8>/Change BLUE Behavior'
  }

  // End of If: '<S8>/This IF block determines whether or not to run the BLUE sim//exp' 

  // If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
  //   Constant: '<S151>/Constant'
  //   Constant: '<S8>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 1.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S8>/Change RED Behavior' incorporates:
    //   ActionPort: '<S150>/Action Port'

    // DataStoreWrite: '<S150>/RED_Fx' incorporates:
    //   Constant: '<S150>/Constant'

    *rtd_RED_Fx = localP->Constant_Value;

    // DataStoreWrite: '<S150>/RED_Fy' incorporates:
    //   Constant: '<S150>/Constant1'

    *rtd_RED_Fy = localP->Constant1_Value;

    // DataStoreWrite: '<S150>/RED_Tz' incorporates:
    //   Constant: '<S150>/Constant2'

    *rtd_RED_Tz = localP->Constant2_Value;

    // DataStoreWrite: '<S150>/RED_Tz_RW' incorporates:
    //   Constant: '<S150>/Constant3'

    *rtd_RED_Tz_RW = localP->Constant3_Value_h;

    // DataStoreWrite: '<S150>/Data Store Write' incorporates:
    //   Constant: '<S150>/Constant4'

    *rtd_RED_Tz_Shoulder = localP->Constant4_Value_g;

    // DataStoreWrite: '<S150>/Data Store Write1' incorporates:
    //   Constant: '<S150>/Constant5'

    *rtd_RED_Tz_Elbow = localP->Constant5_Value_e;

    // DataStoreWrite: '<S150>/Data Store Write2' incorporates:
    //   Constant: '<S150>/Constant6'

    *rtd_RED_Tz_Wrist = localP->Constant6_Value;

    // DataStoreWrite: '<S150>/Data Store Write4' incorporates:
    //   Constant: '<S150>/Puck State'

    *rtd_Float_State = localP->PuckState_Value_b;

    // End of Outputs for SubSystem: '<S8>/Change RED Behavior'
  }

  // End of If: '<S8>/This IF block determines whether or not to run the RED sim//exp ' 
}

//
// Output and update for atomic system:
//    '<S163>/MATLAB Function2'
//    '<S176>/MATLAB Function2'
//    '<S189>/MATLAB Function2'
//    '<S211>/MATLAB Function2'
//    '<S246>/MATLAB Function2'
//    '<S259>/MATLAB Function2'
//    '<S277>/MATLAB Function2'
//    '<S311>/MATLAB Function2'
//    '<S324>/MATLAB Function2'
//    '<S337>/MATLAB Function2'
//    ...
//
void Template__MATLABFunction2_o(real_T rtu_z, B_MATLABFunction2_Template__n_T
  *localB)
{
  real_T Ox_tmp_tmp;
  real_T Ox_tmp_tmp_0;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function2': '<S170>:1' 
  // '<S170>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
  Ox_tmp_tmp = sin(rtu_z);
  Ox_tmp_tmp_0 = cos(rtu_z);
  localB->Ox[0] = 0.0;
  localB->Ox[0] += Ox_tmp_tmp_0;
  localB->Ox[0] += Ox_tmp_tmp * 0.0;
  localB->Ox[1] = 0.0;
  localB->Ox[1] += -Ox_tmp_tmp;
  localB->Ox[1] += Ox_tmp_tmp_0 * 0.0;

  // '<S170>:1:7' Oy = [cos(z) sin(z); -sin(z) cos(z)]*[0;1];
  localB->Oy[0] = 0.0;
  localB->Oy[0] += cos(rtu_z) * 0.0;
  localB->Oy[0] += Ox_tmp_tmp;
  localB->Oy[1] = 0.0;
  localB->Oy[1] += -sin(rtu_z) * 0.0;
  localB->Oy[1] += Ox_tmp_tmp_0;
}

//
// Output and update for atomic system:
//    '<S163>/MATLAB Function3'
//    '<S176>/MATLAB Function3'
//    '<S189>/MATLAB Function3'
//    '<S211>/MATLAB Function3'
//    '<S225>/MATLAB Function3'
//    '<S246>/MATLAB Function3'
//    '<S259>/MATLAB Function3'
//    '<S277>/MATLAB Function3'
//    '<S291>/MATLAB Function3'
//    '<S311>/MATLAB Function3'
//    ...
//
void Template_v3_MATLABFunction3(real_T rtu_z, B_MATLABFunction3_Template_v3_T
  *localB)
{
  real_T Ox_tmp;
  real_T Ox_tmp_0;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function3': '<S171>:1' 
  // '<S171>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
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
//    '<S163>/MATLAB Function4'
//    '<S176>/MATLAB Function4'
//    '<S189>/MATLAB Function4'
//    '<S211>/MATLAB Function4'
//    '<S225>/MATLAB Function4'
//    '<S246>/MATLAB Function4'
//    '<S259>/MATLAB Function4'
//    '<S277>/MATLAB Function4'
//    '<S291>/MATLAB Function4'
//    '<S311>/MATLAB Function4'
//    ...
//
void Template_v3_MATLABFunction4(const real_T rtu_Oy[2], const real_T rtu_e_in[2],
  B_MATLABFunction4_Template_v3_T *localB)
{
  real_T y;
  real_T scale;
  real_T absxk;
  real_T t;

  // MATLAB Function 'Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function4': '<S172>:1' 
  // '<S172>:1:3' a = sign(Oy'*e_in);
  // '<S172>:1:4' e_out = -a*norm(e_in);
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
//    '<S199>/Sub-Phase #2 '
//    '<S199>/Sub-Phase #3 '
//
void Template_v3_03_20_SubPhase2(P_SubPhase2_Template_v3_03_20_T *localP, real_T
  *rtd_BLACK_Fx, real_T *rtd_BLACK_Fy, real_T *rtd_BLACK_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S204>/BLACK_Fx' incorporates:
  //   Constant: '<S204>/Constant'

  *rtd_BLACK_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S204>/BLACK_Fy' incorporates:
  //   Constant: '<S204>/Constant'

  *rtd_BLACK_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S204>/BLACK_Tz' incorporates:
  //   Constant: '<S204>/Constant'

  *rtd_BLACK_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S204>/Data Store Write3' incorporates:
  //   Constant: '<S204>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for atomic system:
//    '<S227>/MATLAB Function'
//    '<S293>/MATLAB Function'
//
void Template_v_MATLABFunction_n(real_T rtu_u, B_MATLABFunction_Template_v_h_T
  *localB)
{
  // MATLAB Function 'Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function': '<S228>:1' 
  // '<S228>:1:3' wrappedAngle = atan2(sin(u),cos(u));
  localB->wrappedAngle = rt_atan2d_snf(sin(rtu_u), cos(rtu_u));
}

//
// Output and update for atomic system:
//    '<S225>/MATLAB Function2'
//    '<S291>/MATLAB Function2'
//
void Template_MATLABFunction2_o0(real_T rtu_z, B_MATLABFunction2_Template__l_T
  *localB)
{
  real_T Ox_tmp_tmp;
  real_T Ox_tmp_tmp_0;

  // MATLAB Function 'Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function2': '<S235>:1' 
  // '<S235>:1:6' Ox = [cos(z) sin(z); -sin(z) cos(z)]*[1;0];
  Ox_tmp_tmp = sin(rtu_z);
  Ox_tmp_tmp_0 = cos(rtu_z);
  localB->Ox[0] = 0.0;
  localB->Ox[0] += Ox_tmp_tmp_0;
  localB->Ox[0] += Ox_tmp_tmp * 0.0;
  localB->Ox[1] = 0.0;
  localB->Ox[1] += -Ox_tmp_tmp;
  localB->Ox[1] += Ox_tmp_tmp_0 * 0.0;

  // '<S235>:1:7' Oy = [cos(z) sin(z); -sin(z) cos(z)]*[0;1];
  localB->Oy[0] = 0.0;
  localB->Oy[0] += cos(rtu_z) * 0.0;
  localB->Oy[0] += Ox_tmp_tmp;
  localB->Oy[1] = 0.0;
  localB->Oy[1] += -sin(rtu_z) * 0.0;
  localB->Oy[1] += Ox_tmp_tmp_0;
}

//
// System initialize for action system:
//    '<S200>/Sub-Phase #1'
//    '<S200>/Sub-Phase #4'
//
void Template_v3__SubPhase1_Init(B_SubPhase1_Template_v3_03_20_T *localB,
  DW_SubPhase1_Template_v3_03_2_T *localDW, P_SubPhase1_Template_v3_03_20_T
  *localP)
{
  // InitializeConditions for Delay: '<S249>/Delay1'
  localDW->icLoad = 1U;

  // InitializeConditions for Delay: '<S251>/Delay1'
  localDW->icLoad_p = 1U;

  // InitializeConditions for Delay: '<S247>/Delay1'
  localDW->icLoad_d = 1U;

  // SystemInitialize for IfAction SubSystem: '<S249>/Hold this value'
  // SystemInitialize for Outport: '<S250>/Out1'
  localB->In1_p = localP->Out1_Y0_m;

  // End of SystemInitialize for SubSystem: '<S249>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S251>/Hold this value'
  // SystemInitialize for Outport: '<S252>/Out1'
  localB->In1 = localP->Out1_Y0_p;

  // End of SystemInitialize for SubSystem: '<S251>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S247>/Hold this value'
  // SystemInitialize for Outport: '<S248>/Out1'
  localB->In1_j = localP->Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S247>/Hold this value'
}

//
// Output and update for action system:
//    '<S200>/Sub-Phase #1'
//    '<S200>/Sub-Phase #4'
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

  // Sum: '<S238>/Subtract' incorporates:
  //   Constant: '<S238>/Desired Px (BLUE)'

  rtb_Subtract_k = Template_v3_03_2020a_P.init_states_BLUE[0] - *rtd_BLUE_Px;

  // Delay: '<S249>/Delay1'
  if (localDW->icLoad != 0) {
    localDW->Delay1_DSTATE = rtb_Subtract_k;
  }

  // Sum: '<S249>/Sum6' incorporates:
  //   Delay: '<S249>/Delay1'

  rtb_Sum6_el = rtb_Subtract_k - localDW->Delay1_DSTATE;

  // If: '<S249>/if we went through a "step"' incorporates:
  //   Inport: '<S250>/In1'

  if (rtb_Sum6_el != 0.0) {
    // Outputs for IfAction SubSystem: '<S249>/Hold this value' incorporates:
    //   ActionPort: '<S250>/Action Port'

    localB->In1_p = rtb_Sum6_el;

    // End of Outputs for SubSystem: '<S249>/Hold this value'
  }

  // End of If: '<S249>/if we went through a "step"'

  // Sum: '<S244>/Sum3' incorporates:
  //   Gain: '<S244>/kd_xb'
  //   Gain: '<S244>/kp_xb'
  //   Gain: '<S249>/divide by delta T'

  *rtd_BLUE_Fx = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_p *
    Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
    rtb_Subtract_k;

  // Sum: '<S238>/Subtract1' incorporates:
  //   Constant: '<S238>/Desired Py (BLUE)'

  rtb_Sum6_el = Template_v3_03_2020a_P.init_states_BLUE[1] - *rtd_BLUE_Py;

  // Delay: '<S251>/Delay1'
  if (localDW->icLoad_p != 0) {
    localDW->Delay1_DSTATE_g = rtb_Sum6_el;
  }

  // Sum: '<S251>/Sum6' incorporates:
  //   Delay: '<S251>/Delay1'

  rtb_Sum6_pwx = rtb_Sum6_el - localDW->Delay1_DSTATE_g;

  // If: '<S251>/if we went through a "step"' incorporates:
  //   Inport: '<S252>/In1'

  if (rtb_Sum6_pwx != 0.0) {
    // Outputs for IfAction SubSystem: '<S251>/Hold this value' incorporates:
    //   ActionPort: '<S252>/Action Port'

    localB->In1 = rtb_Sum6_pwx;

    // End of Outputs for SubSystem: '<S251>/Hold this value'
  }

  // End of If: '<S251>/if we went through a "step"'

  // Sum: '<S245>/Sum3' incorporates:
  //   Gain: '<S245>/kd_yb'
  //   Gain: '<S245>/kp_yb'
  //   Gain: '<S251>/divide by delta T'

  *rtd_BLUE_Fy = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1 *
    Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
    rtb_Sum6_el;

  // MATLAB Function: '<S246>/MATLAB Function2' incorporates:
  //   Constant: '<S238>/Desired Attitude (BLUE)'

  Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLUE[2],
    &localB->sf_MATLABFunction2);

  // MATLAB Function: '<S246>/MATLAB Function3'
  Template_v3_MATLABFunction3(*rtd_BLUE_Rz, &localB->sf_MATLABFunction3);

  // Sum: '<S246>/Subtract2'
  localB->rtb_Subtract2_e_m[0] = localB->sf_MATLABFunction2.Ox[0] -
    localB->sf_MATLABFunction3.Ox[0];
  localB->rtb_Subtract2_e_m[1] = localB->sf_MATLABFunction2.Ox[1] -
    localB->sf_MATLABFunction3.Ox[1];

  // MATLAB Function: '<S246>/MATLAB Function4'
  Template_v3_MATLABFunction4(localB->sf_MATLABFunction2.Oy,
    localB->rtb_Subtract2_e_m, &localB->sf_MATLABFunction4);

  // Delay: '<S247>/Delay1'
  if (localDW->icLoad_d != 0) {
    localDW->Delay1_DSTATE_f = localB->sf_MATLABFunction4.e_out;
  }

  // Sum: '<S247>/Sum6' incorporates:
  //   Delay: '<S247>/Delay1'

  rtb_Sum6_pwx = localB->sf_MATLABFunction4.e_out - localDW->Delay1_DSTATE_f;

  // If: '<S247>/if we went through a "step"' incorporates:
  //   Inport: '<S248>/In1'

  if (rtb_Sum6_pwx != 0.0) {
    // Outputs for IfAction SubSystem: '<S247>/Hold this value' incorporates:
    //   ActionPort: '<S248>/Action Port'

    localB->In1_j = rtb_Sum6_pwx;

    // End of Outputs for SubSystem: '<S247>/Hold this value'
  }

  // End of If: '<S247>/if we went through a "step"'

  // Sum: '<S243>/Sum3' incorporates:
  //   Gain: '<S243>/kd_tb'
  //   Gain: '<S243>/kp_tb'
  //   Gain: '<S247>/divide by delta T'

  *rtd_BLUE_Tz = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_j *
    Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
    localB->sf_MATLABFunction4.e_out;

  // DataStoreWrite: '<S238>/Data Store Write1' incorporates:
  //   Constant: '<S238>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;

  // Update for Delay: '<S249>/Delay1'
  localDW->icLoad = 0U;
  localDW->Delay1_DSTATE = rtb_Subtract_k;

  // Update for Delay: '<S251>/Delay1'
  localDW->icLoad_p = 0U;
  localDW->Delay1_DSTATE_g = rtb_Sum6_el;

  // Update for Delay: '<S247>/Delay1'
  localDW->icLoad_d = 0U;
  localDW->Delay1_DSTATE_f = localB->sf_MATLABFunction4.e_out;
}

//
// Output and update for action system:
//    '<S200>/Sub-Phase #2 '
//    '<S200>/Sub-Phase #3 '
//
void Template_v3_03__SubPhase2_m(P_SubPhase2_Template_v3_03__h_T *localP, real_T
  *rtd_BLUE_Fx, real_T *rtd_BLUE_Fy, real_T *rtd_BLUE_Tz, real_T
  *rtd_Float_State)
{
  // DataStoreWrite: '<S239>/BLUE_Fx' incorporates:
  //   Constant: '<S239>/Constant'

  *rtd_BLUE_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S239>/BLUE_Fy' incorporates:
  //   Constant: '<S239>/Constant'

  *rtd_BLUE_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S239>/BLUE_Tz' incorporates:
  //   Constant: '<S239>/Constant'

  *rtd_BLUE_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S239>/Data Store Write1' incorporates:
  //   Constant: '<S239>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// Output and update for action system:
//    '<S201>/Sub-Phase #2 '
//    '<S201>/Sub-Phase #3 '
//
void Template_v3_03__SubPhase2_g(P_SubPhase2_Template_v3_03__g_T *localP, real_T
  *rtd_Float_State, real_T *rtd_RED_Fx, real_T *rtd_RED_Fy, real_T *rtd_RED_Tz,
  real_T *rtd_RED_Tz_Elbow, real_T *rtd_RED_Tz_RW, real_T *rtd_RED_Tz_Shoulder,
  real_T *rtd_RED_Tz_Wrist)
{
  // DataStoreWrite: '<S270>/RED_Fx' incorporates:
  //   Constant: '<S270>/Constant'

  *rtd_RED_Fx = localP->Constant_Value;

  // DataStoreWrite: '<S270>/RED_Fy' incorporates:
  //   Constant: '<S270>/Constant'

  *rtd_RED_Fy = localP->Constant_Value;

  // DataStoreWrite: '<S270>/RED_Tz' incorporates:
  //   Constant: '<S270>/Constant'

  *rtd_RED_Tz = localP->Constant_Value;

  // DataStoreWrite: '<S270>/RED_Tz_RW' incorporates:
  //   Constant: '<S270>/Constant1'

  *rtd_RED_Tz_RW = localP->Constant1_Value;

  // DataStoreWrite: '<S270>/Data Store Write' incorporates:
  //   Constant: '<S270>/Constant4'

  *rtd_RED_Tz_Shoulder = localP->Constant4_Value;

  // DataStoreWrite: '<S270>/Data Store Write1' incorporates:
  //   Constant: '<S270>/Constant5'

  *rtd_RED_Tz_Elbow = localP->Constant5_Value;

  // DataStoreWrite: '<S270>/Data Store Write2' incorporates:
  //   Constant: '<S270>/Constant6'

  *rtd_RED_Tz_Wrist = localP->Constant6_Value;

  // DataStoreWrite: '<S270>/Data Store Write3' incorporates:
  //   Constant: '<S270>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;
}

//
// System initialize for action system:
//    '<S12>/Change BLUE Behavior'
//    '<S13>/Change BLUE Behavior'
//
void T_ChangeBLUEBehavior_c_Init(B_ChangeBLUEBehavior_Templa_k_T *localB,
  DW_ChangeBLUEBehavior_Templ_i_T *localDW, P_ChangeBLUEBehavior_Templa_c_T
  *localP)
{
  // InitializeConditions for Delay: '<S327>/Delay1'
  localDW->icLoad = 1U;

  // InitializeConditions for Delay: '<S329>/Delay1'
  localDW->icLoad_h = 1U;

  // InitializeConditions for Delay: '<S325>/Delay1'
  localDW->icLoad_l = 1U;

  // SystemInitialize for IfAction SubSystem: '<S327>/Hold this value'
  // SystemInitialize for Outport: '<S328>/Out1'
  localB->In1_k = localP->Out1_Y0_k;

  // End of SystemInitialize for SubSystem: '<S327>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S329>/Hold this value'
  // SystemInitialize for Outport: '<S330>/Out1'
  localB->In1 = localP->Out1_Y0_n;

  // End of SystemInitialize for SubSystem: '<S329>/Hold this value'

  // SystemInitialize for IfAction SubSystem: '<S325>/Hold this value'
  // SystemInitialize for Outport: '<S326>/Out1'
  localB->In1_a = localP->Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S325>/Hold this value'
}

//
// Output and update for action system:
//    '<S12>/Change BLUE Behavior'
//    '<S13>/Change BLUE Behavior'
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

  // Sum: '<S305>/Subtract' incorporates:
  //   Constant: '<S305>/Desired Px (BLUE)'

  rtb_Subtract_hb = Template_v3_03_2020a_P.home_states_BLUE[0] - *rtd_BLUE_Px;

  // Delay: '<S327>/Delay1'
  if (localDW->icLoad != 0) {
    localDW->Delay1_DSTATE = rtb_Subtract_hb;
  }

  // Sum: '<S327>/Sum6' incorporates:
  //   Delay: '<S327>/Delay1'

  rtb_Sum6_mk = rtb_Subtract_hb - localDW->Delay1_DSTATE;

  // If: '<S327>/if we went through a "step"' incorporates:
  //   Inport: '<S328>/In1'

  if (rtb_Sum6_mk != 0.0) {
    // Outputs for IfAction SubSystem: '<S327>/Hold this value' incorporates:
    //   ActionPort: '<S328>/Action Port'

    localB->In1_k = rtb_Sum6_mk;

    // End of Outputs for SubSystem: '<S327>/Hold this value'
  }

  // End of If: '<S327>/if we went through a "step"'

  // Sum: '<S322>/Sum3' incorporates:
  //   Gain: '<S322>/kd_xb'
  //   Gain: '<S322>/kp_xb'
  //   Gain: '<S327>/divide by delta T'

  *rtd_BLUE_Fx = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_k *
    Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
    rtb_Subtract_hb;

  // Sum: '<S305>/Subtract1' incorporates:
  //   Constant: '<S305>/Desired Py (BLUE)'

  rtb_Sum6_mk = Template_v3_03_2020a_P.home_states_BLUE[1] - *rtd_BLUE_Py;

  // Delay: '<S329>/Delay1'
  if (localDW->icLoad_h != 0) {
    localDW->Delay1_DSTATE_n = rtb_Sum6_mk;
  }

  // Sum: '<S329>/Sum6' incorporates:
  //   Delay: '<S329>/Delay1'

  rtb_Sum6_ka = rtb_Sum6_mk - localDW->Delay1_DSTATE_n;

  // If: '<S329>/if we went through a "step"' incorporates:
  //   Inport: '<S330>/In1'

  if (rtb_Sum6_ka != 0.0) {
    // Outputs for IfAction SubSystem: '<S329>/Hold this value' incorporates:
    //   ActionPort: '<S330>/Action Port'

    localB->In1 = rtb_Sum6_ka;

    // End of Outputs for SubSystem: '<S329>/Hold this value'
  }

  // End of If: '<S329>/if we went through a "step"'

  // Sum: '<S323>/Sum3' incorporates:
  //   Gain: '<S323>/kd_yb'
  //   Gain: '<S323>/kp_yb'
  //   Gain: '<S329>/divide by delta T'

  *rtd_BLUE_Fy = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1 *
    Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
    rtb_Sum6_mk;

  // MATLAB Function: '<S324>/MATLAB Function2' incorporates:
  //   Constant: '<S305>/Desired Attitude (BLUE)'

  Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLUE[2],
    &localB->sf_MATLABFunction2);

  // MATLAB Function: '<S324>/MATLAB Function3'
  Template_v3_MATLABFunction3(*rtd_BLUE_Rz, &localB->sf_MATLABFunction3);

  // Sum: '<S324>/Subtract2'
  localB->rtb_Subtract2_b1_m[0] = localB->sf_MATLABFunction2.Ox[0] -
    localB->sf_MATLABFunction3.Ox[0];
  localB->rtb_Subtract2_b1_m[1] = localB->sf_MATLABFunction2.Ox[1] -
    localB->sf_MATLABFunction3.Ox[1];

  // MATLAB Function: '<S324>/MATLAB Function4'
  Template_v3_MATLABFunction4(localB->sf_MATLABFunction2.Oy,
    localB->rtb_Subtract2_b1_m, &localB->sf_MATLABFunction4);

  // Delay: '<S325>/Delay1'
  if (localDW->icLoad_l != 0) {
    localDW->Delay1_DSTATE_k = localB->sf_MATLABFunction4.e_out;
  }

  // Sum: '<S325>/Sum6' incorporates:
  //   Delay: '<S325>/Delay1'

  rtb_Sum6_ka = localB->sf_MATLABFunction4.e_out - localDW->Delay1_DSTATE_k;

  // If: '<S325>/if we went through a "step"' incorporates:
  //   Inport: '<S326>/In1'

  if (rtb_Sum6_ka != 0.0) {
    // Outputs for IfAction SubSystem: '<S325>/Hold this value' incorporates:
    //   ActionPort: '<S326>/Action Port'

    localB->In1_a = rtb_Sum6_ka;

    // End of Outputs for SubSystem: '<S325>/Hold this value'
  }

  // End of If: '<S325>/if we went through a "step"'

  // Sum: '<S321>/Sum3' incorporates:
  //   Gain: '<S321>/kd_tb'
  //   Gain: '<S321>/kp_tb'
  //   Gain: '<S325>/divide by delta T'

  *rtd_BLUE_Tz = 1.0 / Template_v3_03_2020a_P.serverRate * localB->In1_a *
    Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
    localB->sf_MATLABFunction4.e_out;

  // DataStoreWrite: '<S305>/Data Store Write3' incorporates:
  //   Constant: '<S305>/Puck State'

  *rtd_Float_State = localP->PuckState_Value;

  // Update for Delay: '<S327>/Delay1'
  localDW->icLoad = 0U;
  localDW->Delay1_DSTATE = rtb_Subtract_hb;

  // Update for Delay: '<S329>/Delay1'
  localDW->icLoad_h = 0U;
  localDW->Delay1_DSTATE_n = rtb_Sum6_mk;

  // Update for Delay: '<S325>/Delay1'
  localDW->icLoad_l = 0U;
  localDW->Delay1_DSTATE_k = localB->sf_MATLABFunction4.e_out;
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
  memcpy(&Template_v3_03_2020a_B.x[0], &u[0], 9U * sizeof(real_T));
  Template_v3_03_2020a_B.p1 = 1;
  Template_v3_03_2020a_B.p2 = 3;
  Template_v3_03_2020a_B.p3 = 6;
  Template_v3_03_2020a_B.absx11 = fabs(u[0]);
  Template_v3_03_2020a_B.absx21 = fabs(u[1]);
  Template_v3_03_2020a_B.absx31 = fabs(u[2]);
  if ((Template_v3_03_2020a_B.absx21 > Template_v3_03_2020a_B.absx11) &&
      (Template_v3_03_2020a_B.absx21 > Template_v3_03_2020a_B.absx31)) {
    Template_v3_03_2020a_B.p1 = 4;
    Template_v3_03_2020a_B.p2 = 0;
    Template_v3_03_2020a_B.x[0] = u[1];
    Template_v3_03_2020a_B.x[1] = u[0];
    Template_v3_03_2020a_B.x[3] = u[4];
    Template_v3_03_2020a_B.x[4] = u[3];
    Template_v3_03_2020a_B.x[6] = u[7];
    Template_v3_03_2020a_B.x[7] = u[6];
  } else {
    if (Template_v3_03_2020a_B.absx31 > Template_v3_03_2020a_B.absx11) {
      Template_v3_03_2020a_B.p1 = 7;
      Template_v3_03_2020a_B.p3 = 0;
      Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.x[0];
      Template_v3_03_2020a_B.x[0] = u[2];
      Template_v3_03_2020a_B.x[5] = Template_v3_03_2020a_B.x[3];
      Template_v3_03_2020a_B.x[3] = u[5];
      Template_v3_03_2020a_B.x[8] = Template_v3_03_2020a_B.x[6];
      Template_v3_03_2020a_B.x[6] = u[8];
    }
  }

  Template_v3_03_2020a_B.absx31 = Template_v3_03_2020a_B.x[1] /
    Template_v3_03_2020a_B.x[0];
  Template_v3_03_2020a_B.x[1] = Template_v3_03_2020a_B.absx31;
  Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x[2] /
    Template_v3_03_2020a_B.x[0];
  Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.x[4] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x[3];
  Template_v3_03_2020a_B.x[5] -= Template_v3_03_2020a_B.absx11 *
    Template_v3_03_2020a_B.x[3];
  Template_v3_03_2020a_B.x[7] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x[6];
  Template_v3_03_2020a_B.x[8] -= Template_v3_03_2020a_B.absx11 *
    Template_v3_03_2020a_B.x[6];
  if (fabs(Template_v3_03_2020a_B.x[5]) > fabs(Template_v3_03_2020a_B.x[4])) {
    Template_v3_03_2020a_B.itmp = Template_v3_03_2020a_B.p2;
    Template_v3_03_2020a_B.p2 = Template_v3_03_2020a_B.p3;
    Template_v3_03_2020a_B.p3 = Template_v3_03_2020a_B.itmp;
    Template_v3_03_2020a_B.x[1] = Template_v3_03_2020a_B.absx11;
    Template_v3_03_2020a_B.x[2] = Template_v3_03_2020a_B.absx31;
    Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x[4];
    Template_v3_03_2020a_B.x[4] = Template_v3_03_2020a_B.x[5];
    Template_v3_03_2020a_B.x[5] = Template_v3_03_2020a_B.absx11;
    Template_v3_03_2020a_B.absx11 = Template_v3_03_2020a_B.x[7];
    Template_v3_03_2020a_B.x[7] = Template_v3_03_2020a_B.x[8];
    Template_v3_03_2020a_B.x[8] = Template_v3_03_2020a_B.absx11;
  }

  Template_v3_03_2020a_B.absx31 = Template_v3_03_2020a_B.x[5] /
    Template_v3_03_2020a_B.x[4];
  Template_v3_03_2020a_B.x[8] -= Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x[7];
  Template_v3_03_2020a_B.absx11 = (Template_v3_03_2020a_B.absx31 *
    Template_v3_03_2020a_B.x[1] - Template_v3_03_2020a_B.x[2]) /
    Template_v3_03_2020a_B.x[8];
  Template_v3_03_2020a_B.absx21 = -(Template_v3_03_2020a_B.x[7] *
    Template_v3_03_2020a_B.absx11 + Template_v3_03_2020a_B.x[1]) /
    Template_v3_03_2020a_B.x[4];
  y[Template_v3_03_2020a_B.p1 - 1] = ((1.0 - Template_v3_03_2020a_B.x[3] *
    Template_v3_03_2020a_B.absx21) - Template_v3_03_2020a_B.x[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x[0];
  y[Template_v3_03_2020a_B.p1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p1 + 1] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.absx11 = -Template_v3_03_2020a_B.absx31 /
    Template_v3_03_2020a_B.x[8];
  Template_v3_03_2020a_B.absx21 = (1.0 - Template_v3_03_2020a_B.x[7] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x[4];
  y[Template_v3_03_2020a_B.p2] = -(Template_v3_03_2020a_B.x[3] *
    Template_v3_03_2020a_B.absx21 + Template_v3_03_2020a_B.x[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x[0];
  y[Template_v3_03_2020a_B.p2 + 1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p2 + 2] = Template_v3_03_2020a_B.absx11;
  Template_v3_03_2020a_B.absx11 = 1.0 / Template_v3_03_2020a_B.x[8];
  Template_v3_03_2020a_B.absx21 = -Template_v3_03_2020a_B.x[7] *
    Template_v3_03_2020a_B.absx11 / Template_v3_03_2020a_B.x[4];
  y[Template_v3_03_2020a_B.p3] = -(Template_v3_03_2020a_B.x[3] *
    Template_v3_03_2020a_B.absx21 + Template_v3_03_2020a_B.x[6] *
    Template_v3_03_2020a_B.absx11) / Template_v3_03_2020a_B.x[0];
  y[Template_v3_03_2020a_B.p3 + 1] = Template_v3_03_2020a_B.absx21;
  y[Template_v3_03_2020a_B.p3 + 2] = Template_v3_03_2020a_B.absx11;
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
    MW_gpioTerminate(21U);
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
    static const int8_T b[8] = { -1, -1, 0, 0, 1, 1, 0, 0 };

    static const int8_T c[8] = { 0, 0, 1, 1, 0, 0, -1, -1 };

    // S-Function (sdspFromNetwork): '<S6>/UDP Receive1'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
    Template_v3_03_2020a_B.yElIdx = 9;
    LibOutputs_Network(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U],
                       &Template_v3_03_2020a_B.UDPReceive1_o1[0U],
                       &Template_v3_03_2020a_B.yElIdx);
    if (*sErr != 0) {
      rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
      rtmSetStopRequested(Template_v3_03_2020a_M, 1);
    }

    // End of S-Function (sdspFromNetwork): '<S6>/UDP Receive1'

    // MATLAB Function: '<S6>/MATLAB Function1'
    Template_v_MATLABFunction_k(Template_v3_03_2020a_B.UDPReceive1_o1,
      &Template_v3_03_2020a_B.sf_MATLABFunction1);

    // Gain: '<S6>/Gain2'
    Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_P.Gain2_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[3];
    Template_v3_03_2020a_B.rtb_Gain2_idx_1 = Template_v3_03_2020a_P.Gain2_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[4];
    Template_v3_03_2020a_B.rtb_Gain2_idx_2 = Template_v3_03_2020a_P.Gain2_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[5];

    // Sum: '<S146>/Sum' incorporates:
    //   UnitDelay: '<S146>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Sum_hq_idx_0 =
      Template_v3_03_2020a_B.rtb_Gain2_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE[0];
    Template_v3_03_2020a_B.rtb_Sum_hq_idx_1 =
      Template_v3_03_2020a_B.rtb_Gain2_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE[1];
    Template_v3_03_2020a_B.rtb_Sum_hq_idx_2 =
      Template_v3_03_2020a_B.rtb_Gain2_idx_2 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE[2];

    // MATLAB Function: '<S146>/MATLAB Function' incorporates:
    //   Constant: '<S146>/Constant'
    //   Constant: '<S146>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_g,
      Template_v3_03_2020a_P.Constant1_Value_kx,
      &Template_v3_03_2020a_B.sf_MATLABFunction_f);

    // Product: '<S146>/Product1'
    Template_v3_03_2020a_B.Product1[0] = Template_v3_03_2020a_B.rtb_Sum_hq_idx_0
      * Template_v3_03_2020a_B.sf_MATLABFunction_f.a;
    Template_v3_03_2020a_B.Product1[1] = Template_v3_03_2020a_B.rtb_Sum_hq_idx_1
      * Template_v3_03_2020a_B.sf_MATLABFunction_f.a;
    Template_v3_03_2020a_B.Product1[2] = Template_v3_03_2020a_B.rtb_Sum_hq_idx_2
      * Template_v3_03_2020a_B.sf_MATLABFunction_f.a;

    // DataStoreWrite: '<S6>/RED_Px13'
    Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Product1[0];

    // DataStoreWrite: '<S6>/RED_Px14'
    Template_v3_03_2020a_B.BLACK_AccelY = Template_v3_03_2020a_B.Product1[1];

    // DataStoreWrite: '<S6>/RED_Px15'
    Template_v3_03_2020a_B.BLACK_AccelZ = Template_v3_03_2020a_B.Product1[2];

    // Gain: '<S6>/Gain3'
    Template_v3_03_2020a_B.rtb_Gain3_idx_0 = Template_v3_03_2020a_P.Gain3_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[0];
    Template_v3_03_2020a_B.rtb_Gain3_idx_1 = Template_v3_03_2020a_P.Gain3_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[1];
    Template_v3_03_2020a_B.rtb_Gain3_idx_2 = Template_v3_03_2020a_P.Gain3_Gain *
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[2];

    // Sum: '<S144>/Sum' incorporates:
    //   UnitDelay: '<S144>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Sum_m_idx_0 =
      Template_v3_03_2020a_B.rtb_Gain3_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[0];
    Template_v3_03_2020a_B.rtb_Sum_m_idx_1 =
      Template_v3_03_2020a_B.rtb_Gain3_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[1];
    Template_v3_03_2020a_B.rtb_Sum_m_idx_2 =
      Template_v3_03_2020a_B.rtb_Gain3_idx_2 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[2];

    // MATLAB Function: '<S144>/MATLAB Function' incorporates:
    //   Constant: '<S144>/Constant'
    //   Constant: '<S144>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_l,
      Template_v3_03_2020a_P.Constant1_Value_ko,
      &Template_v3_03_2020a_B.sf_MATLABFunction_b2);

    // Product: '<S144>/Product1'
    Template_v3_03_2020a_B.Product1_i[0] =
      Template_v3_03_2020a_B.rtb_Sum_m_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.a;
    Template_v3_03_2020a_B.Product1_i[1] =
      Template_v3_03_2020a_B.rtb_Sum_m_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.a;
    Template_v3_03_2020a_B.Product1_i[2] =
      Template_v3_03_2020a_B.rtb_Sum_m_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.a;

    // Sum: '<S142>/Sum' incorporates:
    //   UnitDelay: '<S142>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Product2_n_idx_0 =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[6] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[0];
    Template_v3_03_2020a_B.rtb_Product2_n_idx_1 =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[7] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[1];
    Template_v3_03_2020a_B.rtb_Product2_n_idx_2 =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[8] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[2];

    // MATLAB Function: '<S142>/MATLAB Function' incorporates:
    //   Constant: '<S142>/Constant'
    //   Constant: '<S142>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_p,
      Template_v3_03_2020a_P.Constant1_Value_fy,
      &Template_v3_03_2020a_B.sf_MATLABFunction_b);

    // Product: '<S142>/Product1'
    Template_v3_03_2020a_B.Product1_p[0] =
      Template_v3_03_2020a_B.rtb_Product2_n_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.a;
    Template_v3_03_2020a_B.Product1_p[1] =
      Template_v3_03_2020a_B.rtb_Product2_n_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.a;
    Template_v3_03_2020a_B.Product1_p[2] =
      Template_v3_03_2020a_B.rtb_Product2_n_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.a;
    Template_v3_03_2020a_AHRS2(Template_v3_03_2020a_B.Product1,
      Template_v3_03_2020a_B.Product1_i, Template_v3_03_2020a_B.Product1_p,
      &Template_v3_03_2020a_B.AHRS1, &Template_v3_03_2020a_DW.AHRS1,
      &Template_v3_03_2020a_P.AHRS1);

    // DataStoreWrite: '<S6>/RED_Px16'
    Template_v3_03_2020a_B.BLACK_GyroX = Template_v3_03_2020a_B.AHRS1.AHRS2_o2[0];

    // DataStoreWrite: '<S6>/RED_Px17'
    Template_v3_03_2020a_B.BLACK_GyroY = Template_v3_03_2020a_B.AHRS1.AHRS2_o2[1];

    // DataStoreWrite: '<S6>/RED_Px18'
    Template_v3_03_2020a_B.BLACK_GyroZ = Template_v3_03_2020a_B.AHRS1.AHRS2_o2[2];

    // S-Function (sdspFromNetwork): '<S6>/UDP Receive'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    Template_v3_03_2020a_B.yElIdx = 9;
    LibOutputs_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U],
                       &Template_v3_03_2020a_B.UDPReceive_o1[0U],
                       &Template_v3_03_2020a_B.yElIdx);
    if (*sErr != 0) {
      rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
      rtmSetStopRequested(Template_v3_03_2020a_M, 1);
    }

    // End of S-Function (sdspFromNetwork): '<S6>/UDP Receive'

    // MATLAB Function: '<S6>/MATLAB Function'
    Template_v_MATLABFunction_k(Template_v3_03_2020a_B.UDPReceive_o1,
      &Template_v3_03_2020a_B.sf_MATLABFunction_kz);

    // Gain: '<S6>/Gain1'
    Template_v3_03_2020a_B.rtb_Gain1_n_idx_0 = Template_v3_03_2020a_P.Gain1_Gain
      * Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[3];
    Template_v3_03_2020a_B.rtb_Gain1_n_idx_1 = Template_v3_03_2020a_P.Gain1_Gain
      * Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[4];
    Template_v3_03_2020a_B.rtb_Gain1_n_idx_2 = Template_v3_03_2020a_P.Gain1_Gain
      * Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[5];

    // Sum: '<S138>/Sum' incorporates:
    //   UnitDelay: '<S138>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Sum_e_idx_0 =
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[0];
    Template_v3_03_2020a_B.rtb_Sum_e_idx_1 =
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[1];
    Template_v3_03_2020a_B.rtb_Sum_e_idx_2 =
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_2 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[2];

    // MATLAB Function: '<S138>/MATLAB Function' incorporates:
    //   Constant: '<S138>/Constant'
    //   Constant: '<S138>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_i,
      Template_v3_03_2020a_P.Constant1_Value_i,
      &Template_v3_03_2020a_B.sf_MATLABFunction_p);

    // Product: '<S138>/Product1'
    Template_v3_03_2020a_B.Product1_e[0] =
      Template_v3_03_2020a_B.rtb_Sum_e_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.a;
    Template_v3_03_2020a_B.Product1_e[1] =
      Template_v3_03_2020a_B.rtb_Sum_e_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.a;
    Template_v3_03_2020a_B.Product1_e[2] =
      Template_v3_03_2020a_B.rtb_Sum_e_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.a;

    // Gain: '<S6>/Gain'
    Template_v3_03_2020a_B.rtb_Gain_idx_0 = Template_v3_03_2020a_P.Gain_Gain_h *
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[0];
    Template_v3_03_2020a_B.rtb_Gain_idx_1 = Template_v3_03_2020a_P.Gain_Gain_h *
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[1];
    Template_v3_03_2020a_B.rtb_Gain_idx_2 = Template_v3_03_2020a_P.Gain_Gain_h *
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[2];

    // Sum: '<S140>/Sum' incorporates:
    //   UnitDelay: '<S140>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Sum_a_idx_0 =
      Template_v3_03_2020a_B.rtb_Gain_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[0];
    Template_v3_03_2020a_B.rtb_Sum_a_idx_1 =
      Template_v3_03_2020a_B.rtb_Gain_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[1];
    Template_v3_03_2020a_B.rtb_Sum_a_idx_2 =
      Template_v3_03_2020a_B.rtb_Gain_idx_2 +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[2];

    // MATLAB Function: '<S140>/MATLAB Function' incorporates:
    //   Constant: '<S140>/Constant'
    //   Constant: '<S140>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_k,
      Template_v3_03_2020a_P.Constant1_Value_n,
      &Template_v3_03_2020a_B.sf_MATLABFunction_k);

    // Product: '<S140>/Product1'
    Template_v3_03_2020a_B.Product1_o[0] =
      Template_v3_03_2020a_B.rtb_Sum_a_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.a;
    Template_v3_03_2020a_B.Product1_o[1] =
      Template_v3_03_2020a_B.rtb_Sum_a_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.a;
    Template_v3_03_2020a_B.Product1_o[2] =
      Template_v3_03_2020a_B.rtb_Sum_a_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.a;

    // Sum: '<S136>/Sum' incorporates:
    //   UnitDelay: '<S136>/Unit Delay1'

    Template_v3_03_2020a_B.rtb_Product2_f_idx_0 =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[6] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[0];
    Template_v3_03_2020a_B.rtb_Product2_f_idx_1 =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[7] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[1];
    Template_v3_03_2020a_B.rtb_Product2_f_idx_2 =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[8] +
      Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[2];

    // MATLAB Function: '<S136>/MATLAB Function' incorporates:
    //   Constant: '<S136>/Constant'
    //   Constant: '<S136>/Constant1'
    //   Constant: '<S6>/Constant'

    Template_v_MATLABFunction_e(Template_v3_03_2020a_P.Constant_Value_o,
      Template_v3_03_2020a_P.Constant_Value_ko,
      Template_v3_03_2020a_P.Constant1_Value_h,
      &Template_v3_03_2020a_B.sf_MATLABFunction);

    // Product: '<S136>/Product1'
    Template_v3_03_2020a_B.Product1_a[0] =
      Template_v3_03_2020a_B.rtb_Product2_f_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction.a;
    Template_v3_03_2020a_B.Product1_a[1] =
      Template_v3_03_2020a_B.rtb_Product2_f_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction.a;
    Template_v3_03_2020a_B.Product1_a[2] =
      Template_v3_03_2020a_B.rtb_Product2_f_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction.a;
    Template_v3_03_2020a_AHRS2(Template_v3_03_2020a_B.Product1_e,
      Template_v3_03_2020a_B.Product1_o, Template_v3_03_2020a_B.Product1_a,
      &Template_v3_03_2020a_B.AHRS2, &Template_v3_03_2020a_DW.AHRS2,
      &Template_v3_03_2020a_P.AHRS2);

    // DataStoreWrite: '<S6>/RED_Px7'
    Template_v3_03_2020a_B.RED_GyroX = Template_v3_03_2020a_B.AHRS2.AHRS2_o2[0];

    // DataStoreWrite: '<S6>/RED_Px8'
    Template_v3_03_2020a_B.RED_GyroY = Template_v3_03_2020a_B.AHRS2.AHRS2_o2[1];

    // DataStoreWrite: '<S6>/RED_Px9'
    Template_v3_03_2020a_B.RED_GyroZ = Template_v3_03_2020a_B.AHRS2.AHRS2_o2[2];

    // S-Function (sdspFromNetwork): '<S6>/UDP Receive2'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
    Template_v3_03_2020a_B.yElIdx = 6;
    LibOutputs_Network(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U],
                       &Template_v3_03_2020a_B.UDPReceive2_o1[0U],
                       &Template_v3_03_2020a_B.yElIdx);
    if (*sErr != 0) {
      rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
      rtmSetStopRequested(Template_v3_03_2020a_M, 1);
    }

    // End of S-Function (sdspFromNetwork): '<S6>/UDP Receive2'

    // Sum: '<S136>/Sum2' incorporates:
    //   Product: '<S136>/Product5'

    // MATLAB Function 'Gyroscope & Acceleration Algorithms/MATLAB Function2': '<S135>:1' 
    // '<S135>:1:3' y = reshape(u,[6,1]);
    Template_v3_03_2020a_B.rtb_Sum2_h_idx_0 =
      Template_v3_03_2020a_B.rtb_Product2_f_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction.b +
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[6];
    Template_v3_03_2020a_B.rtb_Sum2_h_idx_1 =
      Template_v3_03_2020a_B.rtb_Product2_f_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction.b +
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[7];

    // Product: '<S136>/Product2'
    Template_v3_03_2020a_B.rtb_Product2_f_idx_0 *=
      Template_v3_03_2020a_B.sf_MATLABFunction.c;
    Template_v3_03_2020a_B.rtb_Product2_f_idx_1 *=
      Template_v3_03_2020a_B.sf_MATLABFunction.c;

    // Sum: '<S136>/Sum1' incorporates:
    //   Gain: '<S136>/Gain1'
    //   Product: '<S136>/Product5'
    //   Sum: '<S136>/Sum2'
    //   UnitDelay: '<S136>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1[0] = Template_v3_03_2020a_P.Gain1_Gain_k *
      Template_v3_03_2020a_B.rtb_Sum2_h_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE[0];
    Template_v3_03_2020a_B.Sum1[1] = Template_v3_03_2020a_P.Gain1_Gain_k *
      Template_v3_03_2020a_B.rtb_Sum2_h_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE[1];
    Template_v3_03_2020a_B.Sum1[2] =
      (Template_v3_03_2020a_B.rtb_Product2_f_idx_2 *
       Template_v3_03_2020a_B.sf_MATLABFunction.b +
       Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[8]) *
      Template_v3_03_2020a_P.Gain1_Gain_k +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE[2];

    // Sum: '<S136>/Sum3' incorporates:
    //   Product: '<S136>/Product2'

    Template_v3_03_2020a_B.Sum3[0] =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[6] -
      Template_v3_03_2020a_B.rtb_Product2_f_idx_0;
    Template_v3_03_2020a_B.Sum3[1] =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[7] -
      Template_v3_03_2020a_B.rtb_Product2_f_idx_1;
    Template_v3_03_2020a_B.Sum3[2] =
      Template_v3_03_2020a_B.sf_MATLABFunction_kz.y[8] -
      Template_v3_03_2020a_B.rtb_Product2_f_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction.c;

    // Sum: '<S138>/Sum1' incorporates:
    //   Gain: '<S138>/Gain1'
    //   Product: '<S138>/Product5'
    //   Sum: '<S138>/Sum2'
    //   UnitDelay: '<S138>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1_d[0] = (Template_v3_03_2020a_B.rtb_Sum_e_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.b +
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_0) *
      Template_v3_03_2020a_P.Gain1_Gain_c +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[0];
    Template_v3_03_2020a_B.Sum1_d[1] = (Template_v3_03_2020a_B.rtb_Sum_e_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.b +
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_1) *
      Template_v3_03_2020a_P.Gain1_Gain_c +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[1];
    Template_v3_03_2020a_B.Sum1_d[2] = (Template_v3_03_2020a_B.rtb_Sum_e_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.b +
      Template_v3_03_2020a_B.rtb_Gain1_n_idx_2) *
      Template_v3_03_2020a_P.Gain1_Gain_c +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[2];

    // Sum: '<S138>/Sum3' incorporates:
    //   Product: '<S138>/Product2'

    Template_v3_03_2020a_B.Sum3_k[0] = Template_v3_03_2020a_B.rtb_Gain1_n_idx_0
      - Template_v3_03_2020a_B.rtb_Sum_e_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.c;
    Template_v3_03_2020a_B.Sum3_k[1] = Template_v3_03_2020a_B.rtb_Gain1_n_idx_1
      - Template_v3_03_2020a_B.rtb_Sum_e_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.c;
    Template_v3_03_2020a_B.Sum3_k[2] = Template_v3_03_2020a_B.rtb_Gain1_n_idx_2
      - Template_v3_03_2020a_B.rtb_Sum_e_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_p.c;

    // Sum: '<S140>/Sum1' incorporates:
    //   Gain: '<S140>/Gain1'
    //   Product: '<S140>/Product5'
    //   Sum: '<S140>/Sum2'
    //   UnitDelay: '<S140>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1_g[0] = (Template_v3_03_2020a_B.rtb_Sum_a_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.b +
      Template_v3_03_2020a_B.rtb_Gain_idx_0) *
      Template_v3_03_2020a_P.Gain1_Gain_d +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[0];
    Template_v3_03_2020a_B.Sum1_g[1] = (Template_v3_03_2020a_B.rtb_Sum_a_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.b +
      Template_v3_03_2020a_B.rtb_Gain_idx_1) *
      Template_v3_03_2020a_P.Gain1_Gain_d +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[1];
    Template_v3_03_2020a_B.Sum1_g[2] = (Template_v3_03_2020a_B.rtb_Sum_a_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.b +
      Template_v3_03_2020a_B.rtb_Gain_idx_2) *
      Template_v3_03_2020a_P.Gain1_Gain_d +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[2];

    // Sum: '<S140>/Sum3' incorporates:
    //   Product: '<S140>/Product2'

    Template_v3_03_2020a_B.Sum3_f[0] = Template_v3_03_2020a_B.rtb_Gain_idx_0 -
      Template_v3_03_2020a_B.rtb_Sum_a_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.c;
    Template_v3_03_2020a_B.Sum3_f[1] = Template_v3_03_2020a_B.rtb_Gain_idx_1 -
      Template_v3_03_2020a_B.rtb_Sum_a_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.c;
    Template_v3_03_2020a_B.Sum3_f[2] = Template_v3_03_2020a_B.rtb_Gain_idx_2 -
      Template_v3_03_2020a_B.rtb_Sum_a_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_k.c;

    // Sum: '<S142>/Sum2' incorporates:
    //   Product: '<S142>/Product5'

    Template_v3_03_2020a_B.rtb_Sum2_h_idx_0 =
      Template_v3_03_2020a_B.rtb_Product2_n_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.b +
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[6];
    Template_v3_03_2020a_B.rtb_Sum2_h_idx_1 =
      Template_v3_03_2020a_B.rtb_Product2_n_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.b +
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[7];

    // Product: '<S142>/Product2'
    Template_v3_03_2020a_B.rtb_Product2_n_idx_0 *=
      Template_v3_03_2020a_B.sf_MATLABFunction_b.c;
    Template_v3_03_2020a_B.rtb_Product2_n_idx_1 *=
      Template_v3_03_2020a_B.sf_MATLABFunction_b.c;

    // Sum: '<S142>/Sum1' incorporates:
    //   Gain: '<S142>/Gain1'
    //   Product: '<S142>/Product5'
    //   Sum: '<S142>/Sum2'
    //   UnitDelay: '<S142>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1_b[0] = Template_v3_03_2020a_P.Gain1_Gain_dn *
      Template_v3_03_2020a_B.rtb_Sum2_h_idx_0 +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[0];
    Template_v3_03_2020a_B.Sum1_b[1] = Template_v3_03_2020a_P.Gain1_Gain_dn *
      Template_v3_03_2020a_B.rtb_Sum2_h_idx_1 +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[1];
    Template_v3_03_2020a_B.Sum1_b[2] =
      (Template_v3_03_2020a_B.rtb_Product2_n_idx_2 *
       Template_v3_03_2020a_B.sf_MATLABFunction_b.b +
       Template_v3_03_2020a_B.sf_MATLABFunction1.y[8]) *
      Template_v3_03_2020a_P.Gain1_Gain_dn +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[2];

    // Sum: '<S142>/Sum3' incorporates:
    //   Product: '<S142>/Product2'

    Template_v3_03_2020a_B.Sum3_b[0] =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[6] -
      Template_v3_03_2020a_B.rtb_Product2_n_idx_0;
    Template_v3_03_2020a_B.Sum3_b[1] =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[7] -
      Template_v3_03_2020a_B.rtb_Product2_n_idx_1;
    Template_v3_03_2020a_B.Sum3_b[2] =
      Template_v3_03_2020a_B.sf_MATLABFunction1.y[8] -
      Template_v3_03_2020a_B.rtb_Product2_n_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b.c;

    // Sum: '<S144>/Sum1' incorporates:
    //   Gain: '<S144>/Gain1'
    //   Product: '<S144>/Product5'
    //   Sum: '<S144>/Sum2'
    //   UnitDelay: '<S144>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1_k[0] = (Template_v3_03_2020a_B.rtb_Sum_m_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.b +
      Template_v3_03_2020a_B.rtb_Gain3_idx_0) *
      Template_v3_03_2020a_P.Gain1_Gain_g +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[0];
    Template_v3_03_2020a_B.Sum1_k[1] = (Template_v3_03_2020a_B.rtb_Sum_m_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.b +
      Template_v3_03_2020a_B.rtb_Gain3_idx_1) *
      Template_v3_03_2020a_P.Gain1_Gain_g +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[1];
    Template_v3_03_2020a_B.Sum1_k[2] = (Template_v3_03_2020a_B.rtb_Sum_m_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.b +
      Template_v3_03_2020a_B.rtb_Gain3_idx_2) *
      Template_v3_03_2020a_P.Gain1_Gain_g +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[2];

    // Sum: '<S144>/Sum3' incorporates:
    //   Product: '<S144>/Product2'

    Template_v3_03_2020a_B.Sum3_c[0] = Template_v3_03_2020a_B.rtb_Gain3_idx_0 -
      Template_v3_03_2020a_B.rtb_Sum_m_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.c;
    Template_v3_03_2020a_B.Sum3_c[1] = Template_v3_03_2020a_B.rtb_Gain3_idx_1 -
      Template_v3_03_2020a_B.rtb_Sum_m_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.c;
    Template_v3_03_2020a_B.Sum3_c[2] = Template_v3_03_2020a_B.rtb_Gain3_idx_2 -
      Template_v3_03_2020a_B.rtb_Sum_m_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_b2.c;

    // Sum: '<S146>/Sum1' incorporates:
    //   Gain: '<S146>/Gain1'
    //   Product: '<S146>/Product5'
    //   Sum: '<S146>/Sum2'
    //   UnitDelay: '<S146>/Unit Delay2'

    Template_v3_03_2020a_B.Sum1_j[0] = (Template_v3_03_2020a_B.rtb_Sum_hq_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.b +
      Template_v3_03_2020a_B.rtb_Gain2_idx_0) *
      Template_v3_03_2020a_P.Gain1_Gain_o +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[0];
    Template_v3_03_2020a_B.Sum1_j[1] = (Template_v3_03_2020a_B.rtb_Sum_hq_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.b +
      Template_v3_03_2020a_B.rtb_Gain2_idx_1) *
      Template_v3_03_2020a_P.Gain1_Gain_o +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[1];
    Template_v3_03_2020a_B.Sum1_j[2] = (Template_v3_03_2020a_B.rtb_Sum_hq_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.b +
      Template_v3_03_2020a_B.rtb_Gain2_idx_2) *
      Template_v3_03_2020a_P.Gain1_Gain_o +
      Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[2];

    // Sum: '<S146>/Sum3' incorporates:
    //   Product: '<S146>/Product2'

    Template_v3_03_2020a_B.Sum3_n[0] = Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
      Template_v3_03_2020a_B.rtb_Sum_hq_idx_0 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.c;
    Template_v3_03_2020a_B.Sum3_n[1] = Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
      Template_v3_03_2020a_B.rtb_Sum_hq_idx_1 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.c;
    Template_v3_03_2020a_B.Sum3_n[2] = Template_v3_03_2020a_B.rtb_Gain2_idx_2 -
      Template_v3_03_2020a_B.rtb_Sum_hq_idx_2 *
      Template_v3_03_2020a_B.sf_MATLABFunction_f.c;

    // If: '<Root>/Separate Phases' incorporates:
    //   Constant: '<Root>/Constant'
    //   Constant: '<Root>/Constant1'
    //   Constant: '<Root>/Constant2'
    //   Constant: '<Root>/Constant3'
    //   Constant: '<Root>/Constant4'
    //   Constant: '<Root>/Constant6'
    //   Constant: '<S14>/Constant'
    //   Constant: '<S393>/Constant'
    //   DataStoreRead: '<S17>/Universal_Time'
    //   If: '<S14>/This IF block determines whether or not to run the BLACK sim//exp'

    if (Template_v3_03_2020a_DW.Univ_Time < Template_v3_03_2020a_P.Phase0_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #0:  Wait for Synchronization' incorporates:
      //   ActionPort: '<S8>/Action Port'

      Phase0WaitforSynchronizatio
        (&Template_v3_03_2020a_P.Phase0WaitforSynchronization,
         &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
         &Template_v3_03_2020a_DW.BLACK_Tz, &Template_v3_03_2020a_DW.BLUE_Fx,
         &Template_v3_03_2020a_DW.BLUE_Fy, &Template_v3_03_2020a_DW.BLUE_Tz,
         &Template_v3_03_2020a_DW.Float_State, &Template_v3_03_2020a_DW.RED_Fx,
         &Template_v3_03_2020a_DW.RED_Fy, &Template_v3_03_2020a_DW.RED_Tz,
         &Template_v3_03_2020a_B.rtb_Gain2_idx_0,
         &Template_v3_03_2020a_DW.RED_Tz_RW,
         &Template_v3_03_2020a_B.rtb_Gain2_idx_1,
         &Template_v3_03_2020a_B.rtb_Gain2_idx_2);

      // End of Outputs for SubSystem: '<Root>/Phase #0:  Wait for Synchronization' 
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase1_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #1:  Start Floating ' incorporates:
      //   ActionPort: '<S9>/Action Port'

      Phase0WaitforSynchronizatio(&Template_v3_03_2020a_P.Phase1StartFloating,
        &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
        &Template_v3_03_2020a_DW.BLACK_Tz, &Template_v3_03_2020a_DW.BLUE_Fx,
        &Template_v3_03_2020a_DW.BLUE_Fy, &Template_v3_03_2020a_DW.BLUE_Tz,
        &Template_v3_03_2020a_DW.Float_State, &Template_v3_03_2020a_DW.RED_Fx,
        &Template_v3_03_2020a_DW.RED_Fy, &Template_v3_03_2020a_DW.RED_Tz,
        &Template_v3_03_2020a_B.rtb_Gain2_idx_0,
        &Template_v3_03_2020a_DW.RED_Tz_RW,
        &Template_v3_03_2020a_B.rtb_Gain2_idx_1,
        &Template_v3_03_2020a_B.rtb_Gain2_idx_2);

      // End of Outputs for SubSystem: '<Root>/Phase #1:  Start Floating '
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase2_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #2:  Move to  Initial Position' incorporates:
      //   ActionPort: '<S10>/Action Port'

      // If: '<S10>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S159>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S156>/Action Port'

        // Sum: '<S156>/Subtract' incorporates:
        //   Constant: '<S156>/Desired Px (BLACK)'
        //   DataStoreRead: '<S156>/BLACK_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.init_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S166>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ns != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_k =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S166>/Sum6' incorporates:
        //   Delay: '<S166>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_k;

        // If: '<S166>/if we went through a "step"' incorporates:
        //   Inport: '<S167>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S166>/Hold this value' incorporates:
          //   ActionPort: '<S167>/Action Port'

          Template_v3_03_2020a_B.In1_e = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S166>/Hold this value'
        }

        // End of If: '<S166>/if we went through a "step"'

        // Sum: '<S161>/Sum3' incorporates:
        //   DataStoreWrite: '<S156>/BLACK_Fx'
        //   Gain: '<S161>/kd_xb'
        //   Gain: '<S161>/kp_xb'
        //   Gain: '<S166>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_e *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Sum: '<S156>/Subtract1' incorporates:
        //   Constant: '<S156>/Desired Py (BLACK)'
        //   DataStoreRead: '<S156>/BLACK_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.init_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S168>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_k1 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_dv =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S168>/Sum6' incorporates:
        //   Delay: '<S168>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_dv;

        // If: '<S168>/if we went through a "step"' incorporates:
        //   Inport: '<S169>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S168>/Hold this value' incorporates:
          //   ActionPort: '<S169>/Action Port'

          Template_v3_03_2020a_B.In1_gc = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S168>/Hold this value'
        }

        // End of If: '<S168>/if we went through a "step"'

        // Sum: '<S162>/Sum3' incorporates:
        //   DataStoreWrite: '<S156>/BLACK_Fy'
        //   Gain: '<S162>/kd_yb'
        //   Gain: '<S162>/kp_yb'
        //   Gain: '<S168>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_gc *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // MATLAB Function: '<S163>/MATLAB Function2' incorporates:
        //   Constant: '<S156>/Desired Attitude (BLACK)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_o);

        // MATLAB Function: '<S163>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S156>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3);

        // Sum: '<S163>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_o.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_o.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3.Ox[1];

        // MATLAB Function: '<S163>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_o.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4);

        // Delay: '<S164>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ep != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_jd =
            Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;
        }

        // Sum: '<S164>/Sum6' incorporates:
        //   Delay: '<S164>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_jd;

        // If: '<S164>/if we went through a "step"' incorporates:
        //   Inport: '<S165>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S164>/Hold this value' incorporates:
          //   ActionPort: '<S165>/Action Port'

          Template_v3_03_2020a_B.In1_fa = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S164>/Hold this value'
        }

        // End of If: '<S164>/if we went through a "step"'

        // Sum: '<S160>/Sum3' incorporates:
        //   DataStoreWrite: '<S156>/BLACK_Tz'
        //   Gain: '<S160>/kd_tb'
        //   Gain: '<S160>/kp_tb'
        //   Gain: '<S164>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fa *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;

        // DataStoreWrite: '<S156>/Data Store Write3' incorporates:
        //   Constant: '<S156>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value;

        // Update for Delay: '<S166>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ns = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_k =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S168>/Delay1'
        Template_v3_03_2020a_DW.icLoad_k1 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_dv =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // Update for Delay: '<S164>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ep = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_jd =
          Template_v3_03_2020a_B.sf_MATLABFunction4.e_out;

        // End of Outputs for SubSystem: '<S10>/Change BLACK Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S10>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S159>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S157>/Action Port'

        // Sum: '<S157>/Subtract' incorporates:
        //   Constant: '<S157>/Desired Px (BLUE)'
        //   DataStoreRead: '<S157>/BLUE_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.init_states_BLUE[0] -
          Template_v3_03_2020a_DW.BLUE_Px;

        // Delay: '<S179>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dy != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_fb =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S179>/Sum6' incorporates:
        //   Delay: '<S179>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_fb;

        // If: '<S179>/if we went through a "step"' incorporates:
        //   Inport: '<S180>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S179>/Hold this value' incorporates:
          //   ActionPort: '<S180>/Action Port'

          Template_v3_03_2020a_B.In1_lc = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S179>/Hold this value'
        }

        // End of If: '<S179>/if we went through a "step"'

        // Sum: '<S174>/Sum3' incorporates:
        //   DataStoreWrite: '<S157>/BLUE_Fx'
        //   Gain: '<S174>/kd_xb'
        //   Gain: '<S174>/kp_xb'
        //   Gain: '<S179>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_lc *
          Template_v3_03_2020a_P.Kd_xblue + Template_v3_03_2020a_P.Kp_xblue *
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Sum: '<S157>/Subtract1' incorporates:
        //   Constant: '<S157>/Desired Py (BLUE)'
        //   DataStoreRead: '<S157>/BLUE_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.init_states_BLUE[1] -
          Template_v3_03_2020a_DW.BLUE_Py;

        // Delay: '<S181>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_hf != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_n1 =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S181>/Sum6' incorporates:
        //   Delay: '<S181>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_n1;

        // If: '<S181>/if we went through a "step"' incorporates:
        //   Inport: '<S182>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S181>/Hold this value' incorporates:
          //   ActionPort: '<S182>/Action Port'

          Template_v3_03_2020a_B.In1_jwx =
            Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S181>/Hold this value'
        }

        // End of If: '<S181>/if we went through a "step"'

        // Sum: '<S175>/Sum3' incorporates:
        //   DataStoreWrite: '<S157>/BLUE_Fy'
        //   Gain: '<S175>/kd_yb'
        //   Gain: '<S175>/kp_yb'
        //   Gain: '<S181>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jwx *
          Template_v3_03_2020a_P.Kd_yblue + Template_v3_03_2020a_P.Kp_yblue *
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // MATLAB Function: '<S176>/MATLAB Function2' incorporates:
        //   Constant: '<S157>/Desired Attitude (BLUE)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLUE[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_m);

        // MATLAB Function: '<S176>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S157>/BLUE_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLUE_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_c);

        // Sum: '<S176>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_m.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_m.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c.Ox[1];

        // MATLAB Function: '<S176>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_m.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_c);

        // Delay: '<S177>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_kl != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_cq =
            Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;
        }

        // Sum: '<S177>/Sum6' incorporates:
        //   Delay: '<S177>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_cq;

        // If: '<S177>/if we went through a "step"' incorporates:
        //   Inport: '<S178>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S177>/Hold this value' incorporates:
          //   ActionPort: '<S178>/Action Port'

          Template_v3_03_2020a_B.In1_ov = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S177>/Hold this value'
        }

        // End of If: '<S177>/if we went through a "step"'

        // Sum: '<S173>/Sum3' incorporates:
        //   DataStoreWrite: '<S157>/BLUE_Tz'
        //   Gain: '<S173>/kd_tb'
        //   Gain: '<S173>/kp_tb'
        //   Gain: '<S177>/divide by delta T'

        Template_v3_03_2020a_DW.BLUE_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ov *
          Template_v3_03_2020a_P.Kd_tblue + Template_v3_03_2020a_P.Kp_tblue *
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;

        // DataStoreWrite: '<S157>/Data Store Write3' incorporates:
        //   Constant: '<S157>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_o;

        // Update for Delay: '<S179>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dy = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_fb =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S181>/Delay1'
        Template_v3_03_2020a_DW.icLoad_hf = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_n1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // Update for Delay: '<S177>/Delay1'
        Template_v3_03_2020a_DW.icLoad_kl = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_cq =
          Template_v3_03_2020a_B.sf_MATLABFunction4_c.e_out;

        // End of Outputs for SubSystem: '<S10>/Change BLUE Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S10>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S10>/Constant'
      //   Constant: '<S159>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S10>/Change RED Behavior' incorporates:
        //   ActionPort: '<S158>/Action Port'

        // MATLAB Function: '<S189>/MATLAB Function2' incorporates:
        //   Constant: '<S158>/Constant'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_ol);

        // MATLAB Function: '<S189>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S158>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_k);

        // Sum: '<S189>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_k.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_k.Ox[1];

        // MATLAB Function: '<S189>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_ol.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_b);

        // Delay: '<S190>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ji != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_ct =
            Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;
        }

        // Sum: '<S190>/Sum6' incorporates:
        //   Delay: '<S190>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_ct;

        // If: '<S190>/if we went through a "step"' incorporates:
        //   Inport: '<S191>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
          // Outputs for IfAction SubSystem: '<S190>/Hold this value' incorporates:
          //   ActionPort: '<S191>/Action Port'

          Template_v3_03_2020a_B.In1_k = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // End of Outputs for SubSystem: '<S190>/Hold this value'
        }

        // End of If: '<S190>/if we went through a "step"'

        // Sum: '<S186>/Sum3' incorporates:
        //   DataStoreWrite: '<S158>/RED_Tz'
        //   Gain: '<S186>/kd_tr'
        //   Gain: '<S186>/kp_tr'
        //   Gain: '<S190>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_k * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;

        // Sum: '<S158>/Subtract' incorporates:
        //   Constant: '<S158>/Constant1'
        //   DataStoreRead: '<S158>/RED_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.init_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S192>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a1 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_bm =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S192>/Sum6' incorporates:
        //   Delay: '<S192>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_bm;

        // If: '<S192>/if we went through a "step"' incorporates:
        //   Inport: '<S193>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S192>/Hold this value' incorporates:
          //   ActionPort: '<S193>/Action Port'

          Template_v3_03_2020a_B.In1_cr = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S192>/Hold this value'
        }

        // End of If: '<S192>/if we went through a "step"'

        // Sum: '<S187>/Sum3' incorporates:
        //   DataStoreWrite: '<S158>/RED_Fx'
        //   Gain: '<S187>/kd_xr'
        //   Gain: '<S187>/kp_xr'
        //   Gain: '<S192>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_cr * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // DataStoreWrite: '<S158>/RED_Tz_RW1' incorporates:
        //   Constant: '<S158>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant2_Value;

        // Sum: '<S158>/Subtract1' incorporates:
        //   Constant: '<S158>/Constant3'
        //   DataStoreRead: '<S158>/RED_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.init_states_RED[1] -
          Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S194>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_o0 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_pr =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S194>/Sum6' incorporates:
        //   Delay: '<S194>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_pr;

        // If: '<S194>/if we went through a "step"' incorporates:
        //   Inport: '<S195>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S194>/Hold this value' incorporates:
          //   ActionPort: '<S195>/Action Port'

          Template_v3_03_2020a_B.In1_if = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S194>/Hold this value'
        }

        // End of If: '<S194>/if we went through a "step"'

        // Sum: '<S188>/Sum3' incorporates:
        //   DataStoreWrite: '<S158>/RED_Fy'
        //   Gain: '<S188>/kd_yr'
        //   Gain: '<S188>/kp_yr'
        //   Gain: '<S194>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_if * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // DataStoreWrite: '<S158>/Data Store Write3' incorporates:
        //   Constant: '<S158>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_l;

        // Update for Delay: '<S190>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ji = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_ct =
          Template_v3_03_2020a_B.sf_MATLABFunction4_b.e_out;

        // Update for Delay: '<S192>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a1 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_bm =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S194>/Delay1'
        Template_v3_03_2020a_DW.icLoad_o0 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_pr =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // End of Outputs for SubSystem: '<S10>/Change RED Behavior'
      }

      // End of If: '<S10>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase3_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #3: Experiment' incorporates:
      //   ActionPort: '<S11>/Action Port'

      // If: '<S11>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S202>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S199>/Action Port'

        // If: '<S199>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S199>/Constant1'
        //   Constant: '<S199>/Constant2'
        //   Constant: '<S199>/Constant3'
        //   Constant: '<S199>/Constant4'
        //   DataStoreRead: '<S207>/Universal_Time'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S199>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S203>/Action Port'

          // Sum: '<S203>/Subtract' incorporates:
          //   Constant: '<S203>/Desired X-Position (BLACK)'
          //   DataStoreRead: '<S203>/BLACK_Px'

          Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
            Template_v3_03_2020a_P.init_states_BLACK[0] -
            Template_v3_03_2020a_DW.BLACK_Px;

          // Delay: '<S214>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ot != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_gi =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;
          }

          // Sum: '<S214>/Sum6' incorporates:
          //   Delay: '<S214>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_gi;

          // If: '<S214>/if we went through a "step"' incorporates:
          //   Inport: '<S215>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
            // Outputs for IfAction SubSystem: '<S214>/Hold this value' incorporates:
            //   ActionPort: '<S215>/Action Port'

            Template_v3_03_2020a_B.In1_cw =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // End of Outputs for SubSystem: '<S214>/Hold this value'
          }

          // End of If: '<S214>/if we went through a "step"'

          // Sum: '<S209>/Sum3' incorporates:
          //   DataStoreWrite: '<S203>/BLACK_Fx'
          //   Gain: '<S209>/kd_xb'
          //   Gain: '<S209>/kp_xb'
          //   Gain: '<S214>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_cw *
            Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // Sum: '<S203>/Subtract1' incorporates:
          //   Constant: '<S203>/Desired Y-Position (BLACK)'
          //   DataStoreRead: '<S203>/BLACK_Py '

          Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
            Template_v3_03_2020a_P.init_states_BLACK[1] -
            Template_v3_03_2020a_DW.BLACK_Py;

          // Delay: '<S216>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_k != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_pe =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;
          }

          // Sum: '<S216>/Sum6' incorporates:
          //   Delay: '<S216>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_pe;

          // If: '<S216>/if we went through a "step"' incorporates:
          //   Inport: '<S217>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
            // Outputs for IfAction SubSystem: '<S216>/Hold this value' incorporates:
            //   ActionPort: '<S217>/Action Port'

            Template_v3_03_2020a_B.In1_ly =
              Template_v3_03_2020a_B.rtb_Gain2_idx_2;

            // End of Outputs for SubSystem: '<S216>/Hold this value'
          }

          // End of If: '<S216>/if we went through a "step"'

          // Sum: '<S210>/Sum3' incorporates:
          //   DataStoreWrite: '<S203>/BLACK_Fy'
          //   Gain: '<S210>/kd_yb'
          //   Gain: '<S210>/kp_yb'
          //   Gain: '<S216>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ly *
            Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // MATLAB Function: '<S211>/MATLAB Function2' incorporates:
          //   Constant: '<S203>/Desired Attitude (BLACK)'

          Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_BLACK[2],
            &Template_v3_03_2020a_B.sf_MATLABFunction2_i);

          // MATLAB Function: '<S211>/MATLAB Function3' incorporates:
          //   DataStoreRead: '<S203>/BLACK_Rz'

          Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
            &Template_v3_03_2020a_B.sf_MATLABFunction3_l);

          // Sum: '<S211>/Subtract2'
          Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_i.Ox[0] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_l.Ox[0];
          Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_i.Ox[1] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_l.Ox[1];

          // MATLAB Function: '<S211>/MATLAB Function4'
          Template_v3_MATLABFunction4
            (Template_v3_03_2020a_B.sf_MATLABFunction2_i.Oy,
             Template_v3_03_2020a_B.rtb_Subtract2_f_p,
             &Template_v3_03_2020a_B.sf_MATLABFunction4_d);

          // Delay: '<S212>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_l != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_lu =
              Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;
          }

          // Sum: '<S212>/Sum6' incorporates:
          //   Delay: '<S212>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out -
            Template_v3_03_2020a_DW.Delay1_DSTATE_lu;

          // If: '<S212>/if we went through a "step"' incorporates:
          //   Inport: '<S213>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
            // Outputs for IfAction SubSystem: '<S212>/Hold this value' incorporates:
            //   ActionPort: '<S213>/Action Port'

            Template_v3_03_2020a_B.In1_ab =
              Template_v3_03_2020a_B.rtb_Gain2_idx_2;

            // End of Outputs for SubSystem: '<S212>/Hold this value'
          }

          // End of If: '<S212>/if we went through a "step"'

          // Sum: '<S208>/Sum3' incorporates:
          //   DataStoreWrite: '<S203>/BLACK_Tz'
          //   Gain: '<S208>/kd_tb'
          //   Gain: '<S208>/kp_tb'
          //   Gain: '<S212>/divide by delta T'

          Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ab *
            Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;

          // DataStoreWrite: '<S203>/Data Store Write3' incorporates:
          //   Constant: '<S203>/Puck State'

          Template_v3_03_2020a_DW.Float_State =
            Template_v3_03_2020a_P.PuckState_Value_n;

          // Update for Delay: '<S214>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ot = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_gi =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // Update for Delay: '<S216>/Delay1'
          Template_v3_03_2020a_DW.icLoad_k = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_pe =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // Update for Delay: '<S212>/Delay1'
          Template_v3_03_2020a_DW.icLoad_l = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_lu =
            Template_v3_03_2020a_B.sf_MATLABFunction4_d.e_out;

          // End of Outputs for SubSystem: '<S199>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S199>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S204>/Action Port'

          Template_v3_03_20_SubPhase2(&Template_v3_03_2020a_P.SubPhase2,
            &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
            &Template_v3_03_2020a_DW.BLACK_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S199>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S199>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S205>/Action Port'

          Template_v3_03_20_SubPhase2(&Template_v3_03_2020a_P.SubPhase3,
            &Template_v3_03_2020a_DW.BLACK_Fx, &Template_v3_03_2020a_DW.BLACK_Fy,
            &Template_v3_03_2020a_DW.BLACK_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S199>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S199>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S206>/Action Port'

            // Sum: '<S206>/Subtract' incorporates:
            //   Constant: '<S206>/Desired X-Position (BLACK)'
            //   DataStoreRead: '<S206>/BLACK_Px'

            Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
              Template_v3_03_2020a_P.xLength / 2.0 -
              Template_v3_03_2020a_DW.BLACK_Px;

            // Delay: '<S231>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_b != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_bl =
                Template_v3_03_2020a_B.rtb_Gain2_idx_0;
            }

            // Sum: '<S231>/Sum6' incorporates:
            //   Delay: '<S231>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
              Template_v3_03_2020a_DW.Delay1_DSTATE_bl;

            // If: '<S231>/if we went through a "step"' incorporates:
            //   Inport: '<S232>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
              // Outputs for IfAction SubSystem: '<S231>/Hold this value' incorporates:
              //   ActionPort: '<S232>/Action Port'

              Template_v3_03_2020a_B.In1_bd =
                Template_v3_03_2020a_B.rtb_Gain2_idx_1;

              // End of Outputs for SubSystem: '<S231>/Hold this value'
            }

            // End of If: '<S231>/if we went through a "step"'

            // Sum: '<S223>/Sum3' incorporates:
            //   DataStoreWrite: '<S206>/BLACK_Fx'
            //   Gain: '<S223>/kd_xb'
            //   Gain: '<S223>/kp_xb'
            //   Gain: '<S231>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bd *
              Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;

            // Sum: '<S206>/Subtract1' incorporates:
            //   Constant: '<S206>/Desired Y-Position (BLACK)'
            //   DataStoreRead: '<S206>/BLACK_Py '

            Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
              Template_v3_03_2020a_P.yLength / 2.0 -
              Template_v3_03_2020a_DW.BLACK_Py;

            // Delay: '<S233>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_n5 != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_g =
                Template_v3_03_2020a_B.rtb_Gain2_idx_1;
            }

            // Sum: '<S233>/Sum6' incorporates:
            //   Delay: '<S233>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
              Template_v3_03_2020a_DW.Delay1_DSTATE_g;

            // If: '<S233>/if we went through a "step"' incorporates:
            //   Inport: '<S234>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
              // Outputs for IfAction SubSystem: '<S233>/Hold this value' incorporates:
              //   ActionPort: '<S234>/Action Port'

              Template_v3_03_2020a_B.In1_l =
                Template_v3_03_2020a_B.rtb_Gain2_idx_2;

              // End of Outputs for SubSystem: '<S233>/Hold this value'
            }

            // End of If: '<S233>/if we went through a "step"'

            // Sum: '<S224>/Sum3' incorporates:
            //   DataStoreWrite: '<S206>/BLACK_Fy'
            //   Gain: '<S224>/kd_yb'
            //   Gain: '<S224>/kp_yb'
            //   Gain: '<S233>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_l *
              Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // MATLAB Function: '<S227>/MATLAB Function' incorporates:
            //   Constant: '<S221>/Desired Rate (BLACK)'
            //   Constant: '<S226>/Constant1'
            //   DataStoreRead: '<S226>/Universal_Time'
            //   Product: '<S221>/Product'
            //   Sum: '<S226>/Subtract'

            Template_v_MATLABFunction_n
              (Template_v3_03_2020a_P.DesiredRateBLACK_Value *
               (Template_v3_03_2020a_DW.Univ_Time -
                Template_v3_03_2020a_P.Phase3_SubPhase3_End),
               &Template_v3_03_2020a_B.sf_MATLABFunction_n);

            // MATLAB Function: '<S225>/MATLAB Function2'
            Template_MATLABFunction2_o0
              (Template_v3_03_2020a_B.sf_MATLABFunction_n.wrappedAngle,
               &Template_v3_03_2020a_B.sf_MATLABFunction2_o0);

            // MATLAB Function: '<S225>/MATLAB Function3' incorporates:
            //   DataStoreRead: '<S206>/BLACK_Rz'

            Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
              &Template_v3_03_2020a_B.sf_MATLABFunction3_b);

            // Sum: '<S225>/Subtract2'
            Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
              Template_v3_03_2020a_B.sf_MATLABFunction2_o0.Ox[0] -
              Template_v3_03_2020a_B.sf_MATLABFunction3_b.Ox[0];
            Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
              Template_v3_03_2020a_B.sf_MATLABFunction2_o0.Ox[1] -
              Template_v3_03_2020a_B.sf_MATLABFunction3_b.Ox[1];

            // MATLAB Function: '<S225>/MATLAB Function4'
            Template_v3_MATLABFunction4
              (Template_v3_03_2020a_B.sf_MATLABFunction2_o0.Oy,
               Template_v3_03_2020a_B.rtb_Subtract2_f_p,
               &Template_v3_03_2020a_B.sf_MATLABFunction4_bk);

            // Delay: '<S229>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_fj != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_p0 =
                Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;
            }

            // Sum: '<S229>/Sum6' incorporates:
            //   Delay: '<S229>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out -
              Template_v3_03_2020a_DW.Delay1_DSTATE_p0;

            // If: '<S229>/if we went through a "step"' incorporates:
            //   Inport: '<S230>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
              // Outputs for IfAction SubSystem: '<S229>/Hold this value' incorporates:
              //   ActionPort: '<S230>/Action Port'

              Template_v3_03_2020a_B.In1_gd =
                Template_v3_03_2020a_B.rtb_Gain2_idx_2;

              // End of Outputs for SubSystem: '<S229>/Hold this value'
            }

            // End of If: '<S229>/if we went through a "step"'

            // Sum: '<S222>/Sum3' incorporates:
            //   DataStoreWrite: '<S206>/BLACK_Tz'
            //   Gain: '<S222>/kd_tb'
            //   Gain: '<S222>/kp_tb'
            //   Gain: '<S229>/divide by delta T'

            Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_gd *
              Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;

            // DataStoreWrite: '<S206>/Data Store Write3' incorporates:
            //   Constant: '<S206>/Puck State'

            Template_v3_03_2020a_DW.Float_State =
              Template_v3_03_2020a_P.PuckState_Value_e;

            // Update for Delay: '<S231>/Delay1'
            Template_v3_03_2020a_DW.icLoad_b = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_bl =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;

            // Update for Delay: '<S233>/Delay1'
            Template_v3_03_2020a_DW.icLoad_n5 = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_g =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // Update for Delay: '<S229>/Delay1'
            Template_v3_03_2020a_DW.icLoad_fj = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_p0 =
              Template_v3_03_2020a_B.sf_MATLABFunction4_bk.e_out;

            // End of Outputs for SubSystem: '<S199>/Sub-Phase #4'
          }
        }

        // End of If: '<S199>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S11>/Change BLACK Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S11>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S202>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S200>/Action Port'

        // If: '<S200>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S200>/Constant1'
        //   Constant: '<S200>/Constant2'
        //   Constant: '<S200>/Constant3'
        //   Constant: '<S200>/Constant4'
        //   DataStoreRead: '<S242>/Universal_Time'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S200>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S238>/Action Port'

          Template_v3_03_20_SubPhase1(&Template_v3_03_2020a_B.SubPhase1_a,
            &Template_v3_03_2020a_DW.SubPhase1_a,
            &Template_v3_03_2020a_P.SubPhase1_a,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
            &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S200>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S200>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S239>/Action Port'

          Template_v3_03__SubPhase2_m(&Template_v3_03_2020a_P.SubPhase2_m,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S200>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S200>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S240>/Action Port'

          Template_v3_03__SubPhase2_m(&Template_v3_03_2020a_P.SubPhase3_p,
            &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
            &Template_v3_03_2020a_DW.BLUE_Tz,
            &Template_v3_03_2020a_DW.Float_State);

          // End of Outputs for SubSystem: '<S200>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S200>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S241>/Action Port'

            Template_v3_03_20_SubPhase1(&Template_v3_03_2020a_B.SubPhase4_f,
              &Template_v3_03_2020a_DW.SubPhase4_f,
              &Template_v3_03_2020a_P.SubPhase4_f,
              &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
              &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
              &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
              &Template_v3_03_2020a_DW.Float_State);

            // End of Outputs for SubSystem: '<S200>/Sub-Phase #4'
          }
        }

        // End of If: '<S200>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S11>/Change BLUE Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S11>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S11>/Constant'
      //   Constant: '<S202>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S11>/Change RED Behavior' incorporates:
        //   ActionPort: '<S201>/Action Port'

        // If: '<S201>/Experiment Sub-Phases' incorporates:
        //   Constant: '<S201>/Constant1'
        //   Constant: '<S201>/Constant2'
        //   Constant: '<S201>/Constant3'
        //   Constant: '<S201>/Constant4'
        //   DataStoreRead: '<S273>/Universal_Time'

        if (Template_v3_03_2020a_DW.Univ_Time <
            Template_v3_03_2020a_P.Phase3_SubPhase1_End) {
          // Outputs for IfAction SubSystem: '<S201>/Sub-Phase #1' incorporates:
          //   ActionPort: '<S269>/Action Port'

          // DataStoreWrite: '<S269>/RED_Tz_RW' incorporates:
          //   Constant: '<S269>/Constant1'

          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Constant1_Value;

          // MATLAB Function: '<S277>/MATLAB Function2' incorporates:
          //   Constant: '<S269>/Desired Attitude (RED)'

          Template__MATLABFunction2_o(Template_v3_03_2020a_P.init_states_RED[2],
            &Template_v3_03_2020a_B.sf_MATLABFunction2_a);

          // MATLAB Function: '<S277>/MATLAB Function3' incorporates:
          //   DataStoreRead: '<S269>/RED_Rz'

          Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
            &Template_v3_03_2020a_B.sf_MATLABFunction3_bj);

          // Sum: '<S277>/Subtract2'
          Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_a.Ox[0] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_bj.Ox[0];
          Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
            Template_v3_03_2020a_B.sf_MATLABFunction2_a.Ox[1] -
            Template_v3_03_2020a_B.sf_MATLABFunction3_bj.Ox[1];

          // MATLAB Function: '<S277>/MATLAB Function4'
          Template_v3_MATLABFunction4
            (Template_v3_03_2020a_B.sf_MATLABFunction2_a.Oy,
             Template_v3_03_2020a_B.rtb_Subtract2_f_p,
             &Template_v3_03_2020a_B.sf_MATLABFunction4_k);

          // Delay: '<S278>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_n != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_a =
              Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;
          }

          // Sum: '<S278>/Sum6' incorporates:
          //   Delay: '<S278>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out -
            Template_v3_03_2020a_DW.Delay1_DSTATE_a;

          // If: '<S278>/if we went through a "step"' incorporates:
          //   Inport: '<S279>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
            // Outputs for IfAction SubSystem: '<S278>/Hold this value' incorporates:
            //   ActionPort: '<S279>/Action Port'

            Template_v3_03_2020a_B.In1_n =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;

            // End of Outputs for SubSystem: '<S278>/Hold this value'
          }

          // End of If: '<S278>/if we went through a "step"'

          // Sum: '<S274>/Sum3' incorporates:
          //   DataStoreWrite: '<S269>/RED_Tz'
          //   Gain: '<S274>/kd_tr'
          //   Gain: '<S274>/kp_tr'
          //   Gain: '<S278>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Tz = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_n *
            Template_v3_03_2020a_P.Kd_tr + Template_v3_03_2020a_P.Kp_tr *
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;

          // Sum: '<S269>/Subtract' incorporates:
          //   Constant: '<S269>/Desired X-Position (RED)'
          //   DataStoreRead: '<S269>/RED_Px'

          Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
            Template_v3_03_2020a_P.init_states_RED[0] -
            Template_v3_03_2020a_DW.RED_Px;

          // Delay: '<S280>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_er != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_j =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;
          }

          // Sum: '<S280>/Sum6' incorporates:
          //   Delay: '<S280>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_j;

          // If: '<S280>/if we went through a "step"' incorporates:
          //   Inport: '<S281>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
            // Outputs for IfAction SubSystem: '<S280>/Hold this value' incorporates:
            //   ActionPort: '<S281>/Action Port'

            Template_v3_03_2020a_B.In1_jwe =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // End of Outputs for SubSystem: '<S280>/Hold this value'
          }

          // End of If: '<S280>/if we went through a "step"'

          // Sum: '<S275>/Sum3' incorporates:
          //   DataStoreWrite: '<S269>/RED_Fx'
          //   Gain: '<S275>/kd_xr'
          //   Gain: '<S275>/kp_xr'
          //   Gain: '<S280>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Fx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jwe *
            Template_v3_03_2020a_P.Kd_xr + Template_v3_03_2020a_P.Kp_xr *
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // Sum: '<S269>/Subtract1' incorporates:
          //   Constant: '<S269>/Desired Y-Position (RED)'
          //   DataStoreRead: '<S269>/RED_Py '

          Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
            Template_v3_03_2020a_P.init_states_RED[1] -
            Template_v3_03_2020a_DW.RED_Py;

          // Delay: '<S282>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ej != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_bb =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;
          }

          // Sum: '<S282>/Sum6' incorporates:
          //   Delay: '<S282>/Delay1'

          Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_bb;

          // If: '<S282>/if we went through a "step"' incorporates:
          //   Inport: '<S283>/In1'

          if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
            // Outputs for IfAction SubSystem: '<S282>/Hold this value' incorporates:
            //   ActionPort: '<S283>/Action Port'

            Template_v3_03_2020a_B.In1_jw =
              Template_v3_03_2020a_B.rtb_Gain2_idx_2;

            // End of Outputs for SubSystem: '<S282>/Hold this value'
          }

          // End of If: '<S282>/if we went through a "step"'

          // Sum: '<S276>/Sum3' incorporates:
          //   DataStoreWrite: '<S269>/RED_Fy'
          //   Gain: '<S276>/kd_yr'
          //   Gain: '<S276>/kp_yr'
          //   Gain: '<S282>/divide by delta T'

          Template_v3_03_2020a_DW.RED_Fy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jw *
            Template_v3_03_2020a_P.Kd_yr + Template_v3_03_2020a_P.Kp_yr *
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // DataStoreWrite: '<S269>/Data Store Write3' incorporates:
          //   Constant: '<S269>/Puck State'

          Template_v3_03_2020a_DW.Float_State =
            Template_v3_03_2020a_P.PuckState_Value_c;

          // Update for Delay: '<S278>/Delay1'
          Template_v3_03_2020a_DW.icLoad_n = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_a =
            Template_v3_03_2020a_B.sf_MATLABFunction4_k.e_out;

          // Update for Delay: '<S280>/Delay1'
          Template_v3_03_2020a_DW.icLoad_er = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_j =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // Update for Delay: '<S282>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ej = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_bb =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S201>/Sub-Phase #1'
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase2_End) {
          // Outputs for IfAction SubSystem: '<S201>/Sub-Phase #2 ' incorporates:
          //   ActionPort: '<S270>/Action Port'

          Template_v3_03__SubPhase2_g(&Template_v3_03_2020a_P.SubPhase2_g,
            &Template_v3_03_2020a_DW.Float_State,
            &Template_v3_03_2020a_DW.RED_Fx, &Template_v3_03_2020a_DW.RED_Fy,
            &Template_v3_03_2020a_DW.RED_Tz,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_0,
            &Template_v3_03_2020a_DW.RED_Tz_RW,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_1,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_2);

          // End of Outputs for SubSystem: '<S201>/Sub-Phase #2 '
        } else if (Template_v3_03_2020a_DW.Univ_Time <
                   Template_v3_03_2020a_P.Phase3_SubPhase3_End) {
          // Outputs for IfAction SubSystem: '<S201>/Sub-Phase #3 ' incorporates:
          //   ActionPort: '<S271>/Action Port'

          Template_v3_03__SubPhase2_g(&Template_v3_03_2020a_P.SubPhase3_b,
            &Template_v3_03_2020a_DW.Float_State,
            &Template_v3_03_2020a_DW.RED_Fx, &Template_v3_03_2020a_DW.RED_Fy,
            &Template_v3_03_2020a_DW.RED_Tz,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_0,
            &Template_v3_03_2020a_DW.RED_Tz_RW,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_1,
            &Template_v3_03_2020a_B.rtb_Gain2_idx_2);

          // End of Outputs for SubSystem: '<S201>/Sub-Phase #3 '
        } else {
          if (Template_v3_03_2020a_DW.Univ_Time <
              Template_v3_03_2020a_P.Phase3_SubPhase4_End) {
            // Outputs for IfAction SubSystem: '<S201>/Sub-Phase #4' incorporates:
            //   ActionPort: '<S272>/Action Port'

            // MATLAB Function: '<S293>/MATLAB Function' incorporates:
            //   Constant: '<S287>/Desired Rate (BLACK)'
            //   Constant: '<S292>/Constant1'
            //   DataStoreRead: '<S292>/Universal_Time'
            //   Product: '<S287>/Product'
            //   Sum: '<S292>/Subtract'

            Template_v_MATLABFunction_n
              (Template_v3_03_2020a_P.DesiredRateBLACK_Value_g *
               (Template_v3_03_2020a_DW.Univ_Time -
                Template_v3_03_2020a_P.Phase3_SubPhase3_End),
               &Template_v3_03_2020a_B.sf_MATLABFunction_ik);

            // MATLAB Function: '<S291>/MATLAB Function2'
            Template_MATLABFunction2_o0
              (Template_v3_03_2020a_B.sf_MATLABFunction_ik.wrappedAngle,
               &Template_v3_03_2020a_B.sf_MATLABFunction2_p);

            // MATLAB Function: '<S291>/MATLAB Function3' incorporates:
            //   DataStoreRead: '<S272>/RED_Rz'

            Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
              &Template_v3_03_2020a_B.sf_MATLABFunction3_f);

            // Sum: '<S291>/Subtract2'
            Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
              Template_v3_03_2020a_B.sf_MATLABFunction2_p.Ox[0] -
              Template_v3_03_2020a_B.sf_MATLABFunction3_f.Ox[0];
            Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
              Template_v3_03_2020a_B.sf_MATLABFunction2_p.Ox[1] -
              Template_v3_03_2020a_B.sf_MATLABFunction3_f.Ox[1];

            // MATLAB Function: '<S291>/MATLAB Function4'
            Template_v3_MATLABFunction4
              (Template_v3_03_2020a_B.sf_MATLABFunction2_p.Oy,
               Template_v3_03_2020a_B.rtb_Subtract2_f_p,
               &Template_v3_03_2020a_B.sf_MATLABFunction4_i);

            // Delay: '<S295>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_c != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_hr =
                Template_v3_03_2020a_B.sf_MATLABFunction4_i.e_out;
            }

            // Sum: '<S295>/Sum6' incorporates:
            //   Delay: '<S295>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
              Template_v3_03_2020a_B.sf_MATLABFunction4_i.e_out -
              Template_v3_03_2020a_DW.Delay1_DSTATE_hr;

            // If: '<S295>/if we went through a "step"' incorporates:
            //   Inport: '<S296>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
              // Outputs for IfAction SubSystem: '<S295>/Hold this value' incorporates:
              //   ActionPort: '<S296>/Action Port'

              Template_v3_03_2020a_B.In1_ow =
                Template_v3_03_2020a_B.rtb_Gain2_idx_0;

              // End of Outputs for SubSystem: '<S295>/Hold this value'
            }

            // End of If: '<S295>/if we went through a "step"'

            // Sum: '<S288>/Sum3' incorporates:
            //   DataStoreWrite: '<S272>/RED_Tz'
            //   Gain: '<S288>/kd_tr'
            //   Gain: '<S288>/kp_tr'
            //   Gain: '<S295>/divide by delta T'

            Template_v3_03_2020a_DW.RED_Tz = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ow *
              Template_v3_03_2020a_P.Kd_tr + Template_v3_03_2020a_P.Kp_tr *
              Template_v3_03_2020a_B.sf_MATLABFunction4_i.e_out;

            // DataStoreWrite: '<S272>/RED_Tz_RW' incorporates:
            //   Constant: '<S272>/Constant1'

            Template_v3_03_2020a_DW.RED_Tz_RW =
              Template_v3_03_2020a_P.Constant1_Value_f;

            // Sum: '<S272>/Subtract' incorporates:
            //   Constant: '<S272>/Desired X-Position (RED)'
            //   DataStoreRead: '<S272>/RED_Px'

            Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
              Template_v3_03_2020a_P.init_states_RED[0] -
              Template_v3_03_2020a_DW.RED_Px;

            // Delay: '<S297>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_a3 != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_c =
                Template_v3_03_2020a_B.rtb_Gain2_idx_0;
            }

            // Sum: '<S297>/Sum6' incorporates:
            //   Delay: '<S297>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
              Template_v3_03_2020a_DW.Delay1_DSTATE_c;

            // If: '<S297>/if we went through a "step"' incorporates:
            //   Inport: '<S298>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
              // Outputs for IfAction SubSystem: '<S297>/Hold this value' incorporates:
              //   ActionPort: '<S298>/Action Port'

              Template_v3_03_2020a_B.In1_o =
                Template_v3_03_2020a_B.rtb_Gain2_idx_1;

              // End of Outputs for SubSystem: '<S297>/Hold this value'
            }

            // End of If: '<S297>/if we went through a "step"'

            // Sum: '<S289>/Sum3' incorporates:
            //   DataStoreWrite: '<S272>/RED_Fx'
            //   Gain: '<S289>/kd_xr'
            //   Gain: '<S289>/kp_xr'
            //   Gain: '<S297>/divide by delta T'

            Template_v3_03_2020a_DW.RED_Fx = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_o *
              Template_v3_03_2020a_P.Kd_xr + Template_v3_03_2020a_P.Kp_xr *
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;

            // Sum: '<S272>/Subtract1' incorporates:
            //   Constant: '<S272>/Desired Y-Position (RED)'
            //   DataStoreRead: '<S272>/RED_Py '

            Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
              Template_v3_03_2020a_P.init_states_RED[1] -
              Template_v3_03_2020a_DW.RED_Py;

            // Delay: '<S299>/Delay1'
            if (Template_v3_03_2020a_DW.icLoad_my != 0) {
              Template_v3_03_2020a_DW.Delay1_DSTATE_d =
                Template_v3_03_2020a_B.rtb_Gain2_idx_1;
            }

            // Sum: '<S299>/Sum6' incorporates:
            //   Delay: '<S299>/Delay1'

            Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
              Template_v3_03_2020a_DW.Delay1_DSTATE_d;

            // If: '<S299>/if we went through a "step"' incorporates:
            //   Inport: '<S300>/In1'

            if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
              // Outputs for IfAction SubSystem: '<S299>/Hold this value' incorporates:
              //   ActionPort: '<S300>/Action Port'

              Template_v3_03_2020a_B.In1_a =
                Template_v3_03_2020a_B.rtb_Gain2_idx_2;

              // End of Outputs for SubSystem: '<S299>/Hold this value'
            }

            // End of If: '<S299>/if we went through a "step"'

            // Sum: '<S290>/Sum3' incorporates:
            //   DataStoreWrite: '<S272>/RED_Fy'
            //   Gain: '<S290>/kd_yr'
            //   Gain: '<S290>/kp_yr'
            //   Gain: '<S299>/divide by delta T'

            Template_v3_03_2020a_DW.RED_Fy = 1.0 /
              Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_a *
              Template_v3_03_2020a_P.Kd_yr + Template_v3_03_2020a_P.Kp_yr *
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // DataStoreWrite: '<S272>/Data Store Write3' incorporates:
            //   Constant: '<S272>/Puck State'

            Template_v3_03_2020a_DW.Float_State =
              Template_v3_03_2020a_P.PuckState_Value_f;

            // Update for Delay: '<S295>/Delay1'
            Template_v3_03_2020a_DW.icLoad_c = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_hr =
              Template_v3_03_2020a_B.sf_MATLABFunction4_i.e_out;

            // Update for Delay: '<S297>/Delay1'
            Template_v3_03_2020a_DW.icLoad_a3 = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_c =
              Template_v3_03_2020a_B.rtb_Gain2_idx_0;

            // Update for Delay: '<S299>/Delay1'
            Template_v3_03_2020a_DW.icLoad_my = 0U;
            Template_v3_03_2020a_DW.Delay1_DSTATE_d =
              Template_v3_03_2020a_B.rtb_Gain2_idx_1;

            // End of Outputs for SubSystem: '<S201>/Sub-Phase #4'
          }
        }

        // End of If: '<S201>/Experiment Sub-Phases'
        // End of Outputs for SubSystem: '<S11>/Change RED Behavior'
      }

      // End of If: '<S11>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #3: Experiment'
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase4_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #4:  Return Home' incorporates:
      //   ActionPort: '<S12>/Action Port'

      // If: '<S12>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S307>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S304>/Action Port'

        // Sum: '<S304>/Subtract' incorporates:
        //   Constant: '<S304>/Desired Px (BLACK)'
        //   DataStoreRead: '<S304>/BLACK_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.home_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S314>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dq != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_lt =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S314>/Sum6' incorporates:
        //   Delay: '<S314>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_lt;

        // If: '<S314>/if we went through a "step"' incorporates:
        //   Inport: '<S315>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S314>/Hold this value' incorporates:
          //   ActionPort: '<S315>/Action Port'

          Template_v3_03_2020a_B.In1_fx = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S314>/Hold this value'
        }

        // End of If: '<S314>/if we went through a "step"'

        // Sum: '<S309>/Sum3' incorporates:
        //   DataStoreWrite: '<S304>/BLACK_Fx'
        //   Gain: '<S309>/kd_xb'
        //   Gain: '<S309>/kp_xb'
        //   Gain: '<S314>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fx *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Sum: '<S304>/Subtract1' incorporates:
        //   Constant: '<S304>/Desired Py (BLACK)'
        //   DataStoreRead: '<S304>/BLACK_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.home_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S316>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_h != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_im =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S316>/Sum6' incorporates:
        //   Delay: '<S316>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_im;

        // If: '<S316>/if we went through a "step"' incorporates:
        //   Inport: '<S317>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S316>/Hold this value' incorporates:
          //   ActionPort: '<S317>/Action Port'

          Template_v3_03_2020a_B.In1_d0 = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S316>/Hold this value'
        }

        // End of If: '<S316>/if we went through a "step"'

        // Sum: '<S310>/Sum3' incorporates:
        //   DataStoreWrite: '<S304>/BLACK_Fy'
        //   Gain: '<S310>/kd_yb'
        //   Gain: '<S310>/kp_yb'
        //   Gain: '<S316>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_d0 *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // MATLAB Function: '<S311>/MATLAB Function2' incorporates:
        //   Constant: '<S304>/Desired Attitude (BLACK)'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_pt);

        // MATLAB Function: '<S311>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S304>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_bv);

        // Sum: '<S311>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_pt.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bv.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_pt.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bv.Ox[1];

        // MATLAB Function: '<S311>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_pt.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_l);

        // Delay: '<S312>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_o != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_f =
            Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;
        }

        // Sum: '<S312>/Sum6' incorporates:
        //   Delay: '<S312>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_f;

        // If: '<S312>/if we went through a "step"' incorporates:
        //   Inport: '<S313>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S312>/Hold this value' incorporates:
          //   ActionPort: '<S313>/Action Port'

          Template_v3_03_2020a_B.In1_fk = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S312>/Hold this value'
        }

        // End of If: '<S312>/if we went through a "step"'

        // Sum: '<S308>/Sum3' incorporates:
        //   DataStoreWrite: '<S304>/BLACK_Tz'
        //   Gain: '<S308>/kd_tb'
        //   Gain: '<S308>/kp_tb'
        //   Gain: '<S312>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fk *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;

        // DataStoreWrite: '<S304>/Data Store Write3' incorporates:
        //   Constant: '<S304>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_fj;

        // Update for Delay: '<S314>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dq = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_lt =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S316>/Delay1'
        Template_v3_03_2020a_DW.icLoad_h = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_im =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // Update for Delay: '<S312>/Delay1'
        Template_v3_03_2020a_DW.icLoad_o = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_f =
          Template_v3_03_2020a_B.sf_MATLABFunction4_l.e_out;

        // End of Outputs for SubSystem: '<S12>/Change BLACK Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S12>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S307>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S305>/Action Port'

        Templa_ChangeBLUEBehavior_g
          (&Template_v3_03_2020a_B.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_DW.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_P.ChangeBLUEBehavior_gj,
           &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
           &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
           &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
           &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S12>/Change BLUE Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S12>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S12>/Constant'
      //   Constant: '<S307>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S12>/Change RED Behavior' incorporates:
        //   ActionPort: '<S306>/Action Port'

        // MATLAB Function: '<S337>/MATLAB Function2' incorporates:
        //   Constant: '<S306>/Constant'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_ia);

        // MATLAB Function: '<S337>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S306>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_c1);

        // Sum: '<S337>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c1.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_c1.Ox[1];

        // MATLAB Function: '<S337>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_ia.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_n);

        // Delay: '<S338>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_dh != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_i =
            Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;
        }

        // Sum: '<S338>/Sum6' incorporates:
        //   Delay: '<S338>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_i;

        // If: '<S338>/if we went through a "step"' incorporates:
        //   Inport: '<S339>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
          // Outputs for IfAction SubSystem: '<S338>/Hold this value' incorporates:
          //   ActionPort: '<S339>/Action Port'

          Template_v3_03_2020a_B.In1_h = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

          // End of Outputs for SubSystem: '<S338>/Hold this value'
        }

        // End of If: '<S338>/if we went through a "step"'

        // Sum: '<S334>/Sum3' incorporates:
        //   DataStoreWrite: '<S306>/RED_Tz'
        //   Gain: '<S334>/kd_tr'
        //   Gain: '<S334>/kp_tr'
        //   Gain: '<S338>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_h * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;

        // Sum: '<S306>/Subtract' incorporates:
        //   Constant: '<S306>/Constant1'
        //   DataStoreRead: '<S306>/RED_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.home_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S340>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a2 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_h =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S340>/Sum6' incorporates:
        //   Delay: '<S340>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_h;

        // If: '<S340>/if we went through a "step"' incorporates:
        //   Inport: '<S341>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S340>/Hold this value' incorporates:
          //   ActionPort: '<S341>/Action Port'

          Template_v3_03_2020a_B.In1_b = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S340>/Hold this value'
        }

        // End of If: '<S340>/if we went through a "step"'

        // Sum: '<S335>/Sum3' incorporates:
        //   DataStoreWrite: '<S306>/RED_Fx'
        //   Gain: '<S335>/kd_xr'
        //   Gain: '<S335>/kp_xr'
        //   Gain: '<S340>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_b * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // DataStoreWrite: '<S306>/RED_Tz_RW1' incorporates:
        //   Constant: '<S306>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant2_Value_g;

        // Sum: '<S306>/Subtract1' incorporates:
        //   Constant: '<S306>/Constant3'
        //   DataStoreRead: '<S306>/RED_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.home_states_RED[1] -
          Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S342>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_f != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_l =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S342>/Sum6' incorporates:
        //   Delay: '<S342>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_l;

        // If: '<S342>/if we went through a "step"' incorporates:
        //   Inport: '<S343>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S342>/Hold this value' incorporates:
          //   ActionPort: '<S343>/Action Port'

          Template_v3_03_2020a_B.In1_f = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S342>/Hold this value'
        }

        // End of If: '<S342>/if we went through a "step"'

        // Sum: '<S336>/Sum3' incorporates:
        //   DataStoreWrite: '<S306>/RED_Fy'
        //   Gain: '<S336>/kd_yr'
        //   Gain: '<S336>/kp_yr'
        //   Gain: '<S342>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_f * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // DataStoreWrite: '<S306>/Data Store Write3' incorporates:
        //   Constant: '<S306>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_od;

        // Update for Delay: '<S338>/Delay1'
        Template_v3_03_2020a_DW.icLoad_dh = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_i =
          Template_v3_03_2020a_B.sf_MATLABFunction4_n.e_out;

        // Update for Delay: '<S340>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a2 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_h =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S342>/Delay1'
        Template_v3_03_2020a_DW.icLoad_f = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_l =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // End of Outputs for SubSystem: '<S12>/Change RED Behavior'
      }

      // End of If: '<S12>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #4:  Return Home'
    } else if (Template_v3_03_2020a_DW.Univ_Time <
               Template_v3_03_2020a_P.Phase5_End) {
      // Outputs for IfAction SubSystem: '<Root>/Phase #5:  Hold Home' incorporates:
      //   ActionPort: '<S13>/Action Port'

      // If: '<S13>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
      //   Constant: '<S13>/Constant'
      //   Constant: '<S350>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S347>/Action Port'

        // Sum: '<S347>/Subtract' incorporates:
        //   Constant: '<S347>/Constant'
        //   DataStoreRead: '<S347>/BLACK_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.home_states_BLACK[0] -
          Template_v3_03_2020a_DW.BLACK_Px;

        // Delay: '<S357>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_e != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_o =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S357>/Sum6' incorporates:
        //   Delay: '<S357>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_o;

        // If: '<S357>/if we went through a "step"' incorporates:
        //   Inport: '<S358>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S357>/Hold this value' incorporates:
          //   ActionPort: '<S358>/Action Port'

          Template_v3_03_2020a_B.In1_i = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S357>/Hold this value'
        }

        // End of If: '<S357>/if we went through a "step"'

        // Sum: '<S352>/Sum3' incorporates:
        //   DataStoreWrite: '<S347>/BLACK_Fx'
        //   Gain: '<S352>/kd_xb'
        //   Gain: '<S352>/kp_xb'
        //   Gain: '<S357>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_i *
          Template_v3_03_2020a_P.Kd_xb + Template_v3_03_2020a_P.Kp_xb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Sum: '<S347>/Subtract1' incorporates:
        //   Constant: '<S347>/Constant2'
        //   DataStoreRead: '<S347>/BLACK_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.home_states_BLACK[1] -
          Template_v3_03_2020a_DW.BLACK_Py;

        // Delay: '<S359>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_m != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_p =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S359>/Sum6' incorporates:
        //   Delay: '<S359>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_p;

        // If: '<S359>/if we went through a "step"' incorporates:
        //   Inport: '<S360>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S359>/Hold this value' incorporates:
          //   ActionPort: '<S360>/Action Port'

          Template_v3_03_2020a_B.In1_c = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S359>/Hold this value'
        }

        // End of If: '<S359>/if we went through a "step"'

        // Sum: '<S353>/Sum3' incorporates:
        //   DataStoreWrite: '<S347>/BLACK_Fy'
        //   Gain: '<S353>/kd_yb'
        //   Gain: '<S353>/kp_yb'
        //   Gain: '<S359>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Fy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_c *
          Template_v3_03_2020a_P.Kd_yb + Template_v3_03_2020a_P.Kp_yb *
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // MATLAB Function: '<S354>/MATLAB Function2' incorporates:
        //   Constant: '<S347>/Constant3'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_BLACK[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_g);

        // MATLAB Function: '<S354>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S347>/BLACK_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.BLACK_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_o);

        // Sum: '<S354>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_g.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_o.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_g.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_o.Ox[1];

        // MATLAB Function: '<S354>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_g.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_de);

        // Delay: '<S355>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_d != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_b =
            Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;
        }

        // Sum: '<S355>/Sum6' incorporates:
        //   Delay: '<S355>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_b;

        // If: '<S355>/if we went through a "step"' incorporates:
        //   Inport: '<S356>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S355>/Hold this value' incorporates:
          //   ActionPort: '<S356>/Action Port'

          Template_v3_03_2020a_B.In1_g = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S355>/Hold this value'
        }

        // End of If: '<S355>/if we went through a "step"'

        // Sum: '<S351>/Sum3' incorporates:
        //   DataStoreWrite: '<S347>/BLACK_Tz'
        //   Gain: '<S351>/kd_tb'
        //   Gain: '<S351>/kp_tb'
        //   Gain: '<S355>/divide by delta T'

        Template_v3_03_2020a_DW.BLACK_Tz = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_g *
          Template_v3_03_2020a_P.Kd_tb + Template_v3_03_2020a_P.Kp_tb *
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;

        // DataStoreWrite: '<S347>/Data Store Write3' incorporates:
        //   Constant: '<S347>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_g;

        // Update for Delay: '<S357>/Delay1'
        Template_v3_03_2020a_DW.icLoad_e = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_o =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S359>/Delay1'
        Template_v3_03_2020a_DW.icLoad_m = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_p =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // Update for Delay: '<S355>/Delay1'
        Template_v3_03_2020a_DW.icLoad_d = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_b =
          Template_v3_03_2020a_B.sf_MATLABFunction4_de.e_out;

        // End of Outputs for SubSystem: '<S13>/Change BLACK Behavior'
      }

      // End of If: '<S13>/This IF block determines whether or not to run the BLACK sim//exp' 

      // If: '<S13>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S13>/Constant'
      //   Constant: '<S350>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S348>/Action Port'

        Templa_ChangeBLUEBehavior_g(&Template_v3_03_2020a_B.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_DW.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_P.ChangeBLUEBehavior_b,
          &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
          &Template_v3_03_2020a_DW.BLUE_Px, &Template_v3_03_2020a_DW.BLUE_Py,
          &Template_v3_03_2020a_DW.BLUE_Rz, &Template_v3_03_2020a_DW.BLUE_Tz,
          &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S13>/Change BLUE Behavior'
      }

      // End of If: '<S13>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S13>/Constant'
      //   Constant: '<S350>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S13>/Change RED Behavior' incorporates:
        //   ActionPort: '<S349>/Action Port'

        // Sum: '<S349>/Subtract' incorporates:
        //   Constant: '<S349>/Constant'
        //   DataStoreRead: '<S349>/RED_Px'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.home_states_RED[0] -
          Template_v3_03_2020a_DW.RED_Px;

        // Delay: '<S383>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // Sum: '<S383>/Sum6' incorporates:
        //   Delay: '<S383>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0 -
          Template_v3_03_2020a_DW.Delay1_DSTATE;

        // If: '<S383>/if we went through a "step"' incorporates:
        //   Inport: '<S384>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_1 != 0.0) {
          // Outputs for IfAction SubSystem: '<S383>/Hold this value' incorporates:
          //   ActionPort: '<S384>/Action Port'

          Template_v3_03_2020a_B.In1_j = Template_v3_03_2020a_B.rtb_Gain2_idx_1;

          // End of Outputs for SubSystem: '<S383>/Hold this value'
        }

        // End of If: '<S383>/if we went through a "step"'

        // Sum: '<S378>/Sum3' incorporates:
        //   DataStoreWrite: '<S349>/RED_Fx'
        //   Gain: '<S378>/kd_xr'
        //   Gain: '<S378>/kp_xr'
        //   Gain: '<S383>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_j * Template_v3_03_2020a_P.Kd_xr +
          Template_v3_03_2020a_P.Kp_xr * Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // DataStoreWrite: '<S349>/RED_Tz_RW' incorporates:
        //   Constant: '<S349>/Constant1'

        Template_v3_03_2020a_DW.RED_Tz_RW =
          Template_v3_03_2020a_P.Constant1_Value_k;

        // Sum: '<S349>/Subtract1' incorporates:
        //   Constant: '<S349>/Constant2'
        //   DataStoreRead: '<S349>/RED_Py '

        Template_v3_03_2020a_B.rtb_Gain2_idx_1 =
          Template_v3_03_2020a_P.home_states_RED[1] -
          Template_v3_03_2020a_DW.RED_Py;

        // Delay: '<S385>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_j != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_m =
            Template_v3_03_2020a_B.rtb_Gain2_idx_1;
        }

        // Sum: '<S385>/Sum6' incorporates:
        //   Delay: '<S385>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1 -
          Template_v3_03_2020a_DW.Delay1_DSTATE_m;

        // If: '<S385>/if we went through a "step"' incorporates:
        //   Inport: '<S386>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S385>/Hold this value' incorporates:
          //   ActionPort: '<S386>/Action Port'

          Template_v3_03_2020a_B.In1 = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S385>/Hold this value'
        }

        // End of If: '<S385>/if we went through a "step"'

        // Sum: '<S379>/Sum3' incorporates:
        //   DataStoreWrite: '<S349>/RED_Fy'
        //   Gain: '<S379>/kd_yr'
        //   Gain: '<S379>/kp_yr'
        //   Gain: '<S385>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Fy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1 * Template_v3_03_2020a_P.Kd_yr +
          Template_v3_03_2020a_P.Kp_yr * Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // MATLAB Function: '<S380>/MATLAB Function2' incorporates:
        //   Constant: '<S349>/Constant3'

        Template__MATLABFunction2_o(Template_v3_03_2020a_P.home_states_RED[2],
          &Template_v3_03_2020a_B.sf_MATLABFunction2_mx);

        // MATLAB Function: '<S380>/MATLAB Function3' incorporates:
        //   DataStoreRead: '<S349>/RED_Rz'

        Template_v3_MATLABFunction3(Template_v3_03_2020a_DW.RED_Rz,
          &Template_v3_03_2020a_B.sf_MATLABFunction3_bc);

        // Sum: '<S380>/Subtract2'
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[0] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Ox[0] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bc.Ox[0];
        Template_v3_03_2020a_B.rtb_Subtract2_f_p[1] =
          Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Ox[1] -
          Template_v3_03_2020a_B.sf_MATLABFunction3_bc.Ox[1];

        // MATLAB Function: '<S380>/MATLAB Function4'
        Template_v3_MATLABFunction4
          (Template_v3_03_2020a_B.sf_MATLABFunction2_mx.Oy,
           Template_v3_03_2020a_B.rtb_Subtract2_f_p,
           &Template_v3_03_2020a_B.sf_MATLABFunction4_df);

        // Delay: '<S381>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_a != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_n =
            Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;
        }

        // Sum: '<S381>/Sum6' incorporates:
        //   Delay: '<S381>/Delay1'

        Template_v3_03_2020a_B.rtb_Gain2_idx_2 =
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out -
          Template_v3_03_2020a_DW.Delay1_DSTATE_n;

        // If: '<S381>/if we went through a "step"' incorporates:
        //   Inport: '<S382>/In1'

        if (Template_v3_03_2020a_B.rtb_Gain2_idx_2 != 0.0) {
          // Outputs for IfAction SubSystem: '<S381>/Hold this value' incorporates:
          //   ActionPort: '<S382>/Action Port'

          Template_v3_03_2020a_B.In1_d = Template_v3_03_2020a_B.rtb_Gain2_idx_2;

          // End of Outputs for SubSystem: '<S381>/Hold this value'
        }

        // End of If: '<S381>/if we went through a "step"'

        // Sum: '<S377>/Sum3' incorporates:
        //   DataStoreWrite: '<S349>/RED_Tz'
        //   Gain: '<S377>/kd_tr'
        //   Gain: '<S377>/kp_tr'
        //   Gain: '<S381>/divide by delta T'

        Template_v3_03_2020a_DW.RED_Tz = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_d * Template_v3_03_2020a_P.Kd_tr +
          Template_v3_03_2020a_P.Kp_tr *
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;

        // DataStoreWrite: '<S349>/Data Store Write3' incorporates:
        //   Constant: '<S349>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_es;

        // Update for Delay: '<S383>/Delay1'
        Template_v3_03_2020a_DW.icLoad = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE =
          Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // Update for Delay: '<S385>/Delay1'
        Template_v3_03_2020a_DW.icLoad_j = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_m =
          Template_v3_03_2020a_B.rtb_Gain2_idx_1;

        // Update for Delay: '<S381>/Delay1'
        Template_v3_03_2020a_DW.icLoad_a = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_n =
          Template_v3_03_2020a_B.sf_MATLABFunction4_df.e_out;

        // End of Outputs for SubSystem: '<S13>/Change RED Behavior'
      }

      // End of If: '<S13>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #5:  Hold Home'
    } else {
      // Outputs for IfAction SubSystem: '<Root>/Phase #6:  Stop Floating and Spin Down RW' incorporates:
      //   ActionPort: '<S14>/Action Port'

      if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S14>/Change BLACK Behavior' incorporates:
        //   ActionPort: '<S390>/Action Port'

        // If: '<S14>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
        //   Constant: '<S390>/Constant3'
        //   Constant: '<S390>/Constant4'
        //   Constant: '<S390>/Constant5'
        //   Constant: '<S390>/Puck State'
        //   DataStoreWrite: '<S390>/BLACK_Fx'
        //   DataStoreWrite: '<S390>/BLACK_Fy'
        //   DataStoreWrite: '<S390>/BLACK_Tz'
        //   DataStoreWrite: '<S390>/Data Store Write3'

        Template_v3_03_2020a_DW.BLACK_Fx =
          Template_v3_03_2020a_P.Constant3_Value;
        Template_v3_03_2020a_DW.BLACK_Fy =
          Template_v3_03_2020a_P.Constant4_Value_e;
        Template_v3_03_2020a_DW.BLACK_Tz =
          Template_v3_03_2020a_P.Constant5_Value_n;
        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_gd;

        // End of Outputs for SubSystem: '<S14>/Change BLACK Behavior'
      }

      // If: '<S14>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
      //   Constant: '<S14>/Constant'
      //   Constant: '<S393>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S14>/Change BLUE Behavior' incorporates:
        //   ActionPort: '<S391>/Action Port'

        Template_ChangeBLUEBehavior(&Template_v3_03_2020a_P.ChangeBLUEBehavior_k,
          &Template_v3_03_2020a_DW.BLUE_Fx, &Template_v3_03_2020a_DW.BLUE_Fy,
          &Template_v3_03_2020a_DW.BLUE_Tz, &Template_v3_03_2020a_DW.Float_State);

        // End of Outputs for SubSystem: '<S14>/Change BLUE Behavior'
      }

      // End of If: '<S14>/This IF block determines whether or not to run the BLUE sim//exp' 

      // If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
      //   Constant: '<S14>/Constant'
      //   Constant: '<S393>/Constant'

      if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
          (Template_v3_03_2020a_P.simMode == 1.0)) {
        // Outputs for IfAction SubSystem: '<S14>/Change RED Behavior' incorporates:
        //   ActionPort: '<S392>/Action Port'

        // DataStoreWrite: '<S392>/RED_Fx' incorporates:
        //   Constant: '<S392>/Constant'

        Template_v3_03_2020a_DW.RED_Fx = Template_v3_03_2020a_P.Constant_Value;

        // DataStoreWrite: '<S392>/RED_Fy' incorporates:
        //   Constant: '<S392>/Constant1'

        Template_v3_03_2020a_DW.RED_Fy =
          Template_v3_03_2020a_P.Constant1_Value_l;

        // DataStoreWrite: '<S392>/RED_Tz' incorporates:
        //   Constant: '<S392>/Constant2'

        Template_v3_03_2020a_DW.RED_Tz =
          Template_v3_03_2020a_P.Constant2_Value_m;

        // DataStoreWrite: '<S392>/Data Store Write3' incorporates:
        //   Constant: '<S392>/Puck State'

        Template_v3_03_2020a_DW.Float_State =
          Template_v3_03_2020a_P.PuckState_Value_h;

        // Gain: '<S392>/Gain' incorporates:
        //   DataStoreRead: '<S392>/RED_dRz_Speed'

        Template_v3_03_2020a_B.rtb_Gain2_idx_0 =
          Template_v3_03_2020a_P.Gain_Gain *
          Template_v3_03_2020a_DW.RED_dRz_RW_Sat;

        // Saturate: '<S392>/Saturation'
        if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 >
            Template_v3_03_2020a_P.Saturation_UpperSat) {
          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Saturation_UpperSat;
        } else if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 <
                   Template_v3_03_2020a_P.Saturation_LowerSat) {
          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_P.Saturation_LowerSat;
        } else {
          Template_v3_03_2020a_DW.RED_Tz_RW =
            Template_v3_03_2020a_B.rtb_Gain2_idx_0;
        }

        // End of Saturate: '<S392>/Saturation'
        // End of Outputs for SubSystem: '<S14>/Change RED Behavior'
      }

      // End of If: '<S14>/This IF block determines whether or not to run the RED sim//exp ' 
      // End of Outputs for SubSystem: '<Root>/Phase #6:  Stop Floating and Spin Down RW' 
    }

    // End of If: '<Root>/Separate Phases'

    // If: '<Root>/If running a simulation,  grab the simulated states.' incorporates:
    //   Constant: '<S7>/Constant'
    //   DiscreteIntegrator: '<S394>/Velocity to Position'
    //   DiscreteIntegrator: '<S395>/Velocity to Position'
    //   DiscreteIntegrator: '<S396>/Velocity to Position'
    //   Inport: '<S413>/In'
    //   Inport: '<S415>/In'
    //   Inport: '<S417>/In'
    //   RandomNumber: '<S394>/Random Number'
    //   RandomNumber: '<S395>/Random Number'
    //   RandomNumber: '<S396>/Random Number'
    //   Sum: '<S394>/Sum'
    //   Sum: '<S395>/Sum'
    //   Sum: '<S396>/Sum'

    if (Template_v3_03_2020a_P.simMode == 1.0) {
      // Outputs for IfAction SubSystem: '<Root>/Simulate Plant Dynamics' incorporates:
      //   ActionPort: '<S16>/Action Port'

      // MATLAB Function: '<S397>/MATLAB Function' incorporates:
      //   Constant: '<S397>/Constant1'
      //   DataStoreRead: '<S397>/Data Store Read2'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_d);

      // Outputs for Triggered SubSystem: '<S397>/Sample and Hold1' incorporates:
      //   TriggerPort: '<S413>/Trigger'

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

      // End of Outputs for SubSystem: '<S397>/Sample and Hold1'

      // DataStoreWrite: '<S16>/BLACK_Px' incorporates:
      //   DiscreteIntegrator: '<S394>/Velocity to Position'
      //   Inport: '<S413>/In'
      //   RandomNumber: '<S394>/Random Number'
      //   Sum: '<S394>/Sum'

      Template_v3_03_2020a_DW.BLACK_Px = Template_v3_03_2020a_B.In_n[0];

      // DataStoreWrite: '<S16>/BLACK_Py'
      Template_v3_03_2020a_DW.BLACK_Py = Template_v3_03_2020a_B.In_n[1];

      // DataStoreWrite: '<S16>/BLACK_Rz'
      Template_v3_03_2020a_DW.BLACK_Rz = Template_v3_03_2020a_B.In_n[2];

      // Delay: '<S405>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_kp != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_nq = Template_v3_03_2020a_B.In_n[2];
      }

      // Sum: '<S405>/Sum6' incorporates:
      //   Delay: '<S405>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_n[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_nq;

      // If: '<S405>/if we went through a "step"' incorporates:
      //   Inport: '<S423>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S405>/Hold this value' incorporates:
        //   ActionPort: '<S423>/Action Port'

        Template_v3_03_2020a_B.In1_m = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S405>/Hold this value'
      }

      // End of If: '<S405>/if we went through a "step"'

      // Gain: '<S405>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLACK_RzD'

      Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
        Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_m;

      // Delay: '<S403>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_k3 != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_mb = Template_v3_03_2020a_B.In_n[0];
      }

      // Sum: '<S403>/Sum6' incorporates:
      //   Delay: '<S403>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_n[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_mb;

      // If: '<S403>/if we went through a "step"' incorporates:
      //   Inport: '<S421>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S403>/Hold this value' incorporates:
        //   ActionPort: '<S421>/Action Port'

        Template_v3_03_2020a_B.In1_k4 = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S403>/Hold this value'
      }

      // End of If: '<S403>/if we went through a "step"'

      // Gain: '<S403>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLACK_Vx'

      Template_v3_03_2020a_DW.BLACK_Vx = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_k4;

      // Delay: '<S404>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_jz != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_pz = Template_v3_03_2020a_B.In_n[1];
      }

      // Sum: '<S404>/Sum6' incorporates:
      //   Delay: '<S404>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_n[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_pz;

      // If: '<S404>/if we went through a "step"' incorporates:
      //   Inport: '<S422>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S404>/Hold this value' incorporates:
        //   ActionPort: '<S422>/Action Port'

        Template_v3_03_2020a_B.In1_ey = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S404>/Hold this value'
      }

      // End of If: '<S404>/if we went through a "step"'

      // Gain: '<S404>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLACK_Vy'

      Template_v3_03_2020a_DW.BLACK_Vy = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_ey;

      // MATLAB Function: '<S398>/MATLAB Function' incorporates:
      //   Constant: '<S398>/Constant1'
      //   DataStoreRead: '<S398>/Data Store Read2'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_ap);

      // Outputs for Triggered SubSystem: '<S398>/Sample and Hold1' incorporates:
      //   TriggerPort: '<S415>/Trigger'

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

      // End of Outputs for SubSystem: '<S398>/Sample and Hold1'

      // DataStoreWrite: '<S16>/BLUE_Px ' incorporates:
      //   DiscreteIntegrator: '<S395>/Velocity to Position'
      //   Inport: '<S415>/In'
      //   RandomNumber: '<S395>/Random Number'
      //   Sum: '<S395>/Sum'

      Template_v3_03_2020a_DW.BLUE_Px = Template_v3_03_2020a_B.In_p[0];

      // DataStoreWrite: '<S16>/BLUE_Py'
      Template_v3_03_2020a_DW.BLUE_Py = Template_v3_03_2020a_B.In_p[1];

      // DataStoreWrite: '<S16>/BLUE_Rz'
      Template_v3_03_2020a_DW.BLUE_Rz = Template_v3_03_2020a_B.In_p[2];

      // Delay: '<S408>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_cs != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_nm = Template_v3_03_2020a_B.In_p[2];
      }

      // Sum: '<S408>/Sum6' incorporates:
      //   Delay: '<S408>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_p[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_nm;

      // If: '<S408>/if we went through a "step"' incorporates:
      //   Inport: '<S426>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S408>/Hold this value' incorporates:
        //   ActionPort: '<S426>/Action Port'

        Template_v3_03_2020a_B.In1_jt = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S408>/Hold this value'
      }

      // End of If: '<S408>/if we went through a "step"'

      // Gain: '<S408>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLUE_RzD'

      Template_v3_03_2020a_DW.BLUE_RzD = 1.0 / Template_v3_03_2020a_P.serverRate
        * Template_v3_03_2020a_B.In1_jt;

      // Delay: '<S406>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_dc != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_e = Template_v3_03_2020a_B.In_p[0];
      }

      // Sum: '<S406>/Sum6' incorporates:
      //   Delay: '<S406>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_p[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_e;

      // If: '<S406>/if we went through a "step"' incorporates:
      //   Inport: '<S424>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S406>/Hold this value' incorporates:
        //   ActionPort: '<S424>/Action Port'

        Template_v3_03_2020a_B.In1_ad = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S406>/Hold this value'
      }

      // End of If: '<S406>/if we went through a "step"'

      // Gain: '<S406>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLUE_Vx'

      Template_v3_03_2020a_DW.BLUE_Vx = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_ad;

      // Delay: '<S407>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_nu != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ho = Template_v3_03_2020a_B.In_p[1];
      }

      // Sum: '<S407>/Sum6' incorporates:
      //   Delay: '<S407>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In_p[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ho;

      // If: '<S407>/if we went through a "step"' incorporates:
      //   Inport: '<S425>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S407>/Hold this value' incorporates:
        //   ActionPort: '<S425>/Action Port'

        Template_v3_03_2020a_B.In1_ac = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S407>/Hold this value'
      }

      // End of If: '<S407>/if we went through a "step"'

      // Gain: '<S407>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/BLUE_Vy'

      Template_v3_03_2020a_DW.BLUE_Vy = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_ac;

      // MATLAB Function: '<S399>/MATLAB Function' incorporates:
      //   Constant: '<S399>/Constant'
      //   DataStoreRead: '<S399>/Data Store Read1'

      Template_v_MATLABFunction_d(Template_v3_03_2020a_DW.Univ_Time,
        Template_v3_03_2020a_P.serverRate,
        &Template_v3_03_2020a_B.sf_MATLABFunction_kv);

      // Outputs for Triggered SubSystem: '<S399>/Sample and Hold' incorporates:
      //   TriggerPort: '<S417>/Trigger'

      Template_v3_03_2020a_B.zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
        &Template_v3_03_2020a_PrevZCX.SampleandHold_Trig_ZCE,
        (Template_v3_03_2020a_B.sf_MATLABFunction_kv.y));
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

      // End of Outputs for SubSystem: '<S399>/Sample and Hold'

      // DataStoreWrite: '<S16>/RED_Px' incorporates:
      //   DiscreteIntegrator: '<S396>/Velocity to Position'
      //   Inport: '<S417>/In'
      //   RandomNumber: '<S396>/Random Number'
      //   Sum: '<S396>/Sum'

      Template_v3_03_2020a_DW.RED_Px = Template_v3_03_2020a_B.In[0];

      // DataStoreWrite: '<S16>/RED_Py'
      Template_v3_03_2020a_DW.RED_Py = Template_v3_03_2020a_B.In[1];

      // DataStoreWrite: '<S16>/RED_Rz'
      Template_v3_03_2020a_DW.RED_Rz = Template_v3_03_2020a_B.In[2];

      // Delay: '<S402>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_mt != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ew = Template_v3_03_2020a_B.In[2];
      }

      // Sum: '<S402>/Sum6' incorporates:
      //   Delay: '<S402>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In[2] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ew;

      // If: '<S402>/if we went through a "step"' incorporates:
      //   Inport: '<S420>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S402>/Hold this value' incorporates:
        //   ActionPort: '<S420>/Action Port'

        Template_v3_03_2020a_B.In1_o1 = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S402>/Hold this value'
      }

      // End of If: '<S402>/if we went through a "step"'

      // Gain: '<S402>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/RED_RzD'

      Template_v3_03_2020a_DW.RED_RzD = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_o1;

      // Delay: '<S400>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_bq != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_ch = Template_v3_03_2020a_B.In[0];
      }

      // Sum: '<S400>/Sum6' incorporates:
      //   Delay: '<S400>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In[0] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_ch;

      // If: '<S400>/if we went through a "step"' incorporates:
      //   Inport: '<S418>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S400>/Hold this value' incorporates:
        //   ActionPort: '<S418>/Action Port'

        Template_v3_03_2020a_B.In1_nu = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S400>/Hold this value'
      }

      // End of If: '<S400>/if we went through a "step"'

      // Gain: '<S400>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/RED_Vx'

      Template_v3_03_2020a_DW.RED_Vx = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_nu;

      // Delay: '<S401>/Delay1'
      if (Template_v3_03_2020a_DW.icLoad_cn != 0) {
        Template_v3_03_2020a_DW.Delay1_DSTATE_it = Template_v3_03_2020a_B.In[1];
      }

      // Sum: '<S401>/Sum6' incorporates:
      //   Delay: '<S401>/Delay1'

      Template_v3_03_2020a_B.rtb_Gain2_idx_0 = Template_v3_03_2020a_B.In[1] -
        Template_v3_03_2020a_DW.Delay1_DSTATE_it;

      // If: '<S401>/if we went through a "step"' incorporates:
      //   Inport: '<S419>/In1'

      if (Template_v3_03_2020a_B.rtb_Gain2_idx_0 != 0.0) {
        // Outputs for IfAction SubSystem: '<S401>/Hold this value' incorporates:
        //   ActionPort: '<S419>/Action Port'

        Template_v3_03_2020a_B.In1_af = Template_v3_03_2020a_B.rtb_Gain2_idx_0;

        // End of Outputs for SubSystem: '<S401>/Hold this value'
      }

      // End of If: '<S401>/if we went through a "step"'

      // Gain: '<S401>/divide by delta T' incorporates:
      //   DataStoreWrite: '<S16>/RED_Vy'

      Template_v3_03_2020a_DW.RED_Vy = 1.0 / Template_v3_03_2020a_P.serverRate *
        Template_v3_03_2020a_B.In1_af;

      // Update for RandomNumber: '<S394>/Random Number'
      // MATLAB Function 'Simulate Plant Dynamics/BLACK Dynamics Model/MATLAB Function': '<S409>:1' 
      // '<S409>:1:5' x_ddot     = zeros(3,1);
      // '<S409>:1:9' m_BLACK    = model_param(3);
      // '<S409>:1:10' I_BLACK    = model_param(4);
      // '<S409>:1:13' Fx        = control_inputs(1);
      // '<S409>:1:14' Fy        = control_inputs(2);
      // '<S409>:1:15' Tz        = control_inputs(3);
      // '<S409>:1:18' x_ddot(1) = Fx/m_BLACK;
      // '<S409>:1:19' x_ddot(2) = Fy/m_BLACK;
      // '<S409>:1:20' x_ddot(3) = Tz/I_BLACK;
      // MATLAB Function 'Simulate Plant Dynamics/BLUE  Dynamics Model/MATLAB Function': '<S410>:1' 
      // '<S410>:1:5' x_ddot     = zeros(3,1);
      // '<S410>:1:9' m_BLUE    = model_param(5);
      // '<S410>:1:10' I_BLUE    = model_param(6);
      // '<S410>:1:13' Fx        = control_inputs(1);
      // '<S410>:1:14' Fy        = control_inputs(2);
      // '<S410>:1:15' Tz        = control_inputs(3);
      // '<S410>:1:18' x_ddot(1) = Fx/m_BLUE;
      // '<S410>:1:19' x_ddot(2) = Fy/m_BLUE;
      // '<S410>:1:20' x_ddot(3) = Tz/I_BLUE;
      // MATLAB Function 'Simulate Plant Dynamics/RED Dynamics Model/MATLAB Function': '<S411>:1' 
      // '<S411>:1:5' x_ddot     = zeros(3,1);
      // '<S411>:1:9' m_RED    = model_param(1);
      // '<S411>:1:10' I_RED    = model_param(2);
      // '<S411>:1:13' Fx        = control_inputs(1);
      // '<S411>:1:14' Fy        = control_inputs(2);
      // '<S411>:1:15' Tz        = control_inputs(3);
      // '<S411>:1:18' x_ddot(1) = Fx/m_RED;
      // '<S411>:1:19' x_ddot(2) = Fy/m_RED;
      // '<S411>:1:20' x_ddot(3) = Tz/I_RED;
      Template_v3_03_2020a_DW.NextOutput = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed) * sqrt
        (Template_v3_03_2020a_P.noise_variance_BLACK) +
        Template_v3_03_2020a_P.RandomNumber_Mean;

      // Update for Delay: '<S405>/Delay1'
      Template_v3_03_2020a_DW.icLoad_kp = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_nq = Template_v3_03_2020a_B.In_n[2];

      // Update for Delay: '<S403>/Delay1'
      Template_v3_03_2020a_DW.icLoad_k3 = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_mb = Template_v3_03_2020a_B.In_n[0];

      // Update for Delay: '<S404>/Delay1'
      Template_v3_03_2020a_DW.icLoad_jz = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_pz = Template_v3_03_2020a_B.In_n[1];

      // Update for RandomNumber: '<S395>/Random Number'
      Template_v3_03_2020a_DW.NextOutput_g = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed_d) * sqrt
        (Template_v3_03_2020a_P.noise_variance_BLUE) +
        Template_v3_03_2020a_P.RandomNumber_Mean_b;

      // Update for Delay: '<S408>/Delay1'
      Template_v3_03_2020a_DW.icLoad_cs = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_nm = Template_v3_03_2020a_B.In_p[2];

      // Update for Delay: '<S406>/Delay1'
      Template_v3_03_2020a_DW.icLoad_dc = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_e = Template_v3_03_2020a_B.In_p[0];

      // Update for Delay: '<S407>/Delay1'
      Template_v3_03_2020a_DW.icLoad_nu = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ho = Template_v3_03_2020a_B.In_p[1];

      // Update for RandomNumber: '<S396>/Random Number'
      Template_v3_03_2020a_DW.NextOutput_l = Temp_rt_nrand_Upu32_Yd_f_pw_snf
        (&Template_v3_03_2020a_DW.RandSeed_m) * sqrt
        (Template_v3_03_2020a_P.noise_variance_RED) +
        Template_v3_03_2020a_P.RandomNumber_Mean_e;

      // Update for Delay: '<S402>/Delay1'
      Template_v3_03_2020a_DW.icLoad_mt = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ew = Template_v3_03_2020a_B.In[2];

      // Update for Delay: '<S400>/Delay1'
      Template_v3_03_2020a_DW.icLoad_bq = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_ch = Template_v3_03_2020a_B.In[0];

      // Update for Delay: '<S401>/Delay1'
      Template_v3_03_2020a_DW.icLoad_cn = 0U;
      Template_v3_03_2020a_DW.Delay1_DSTATE_it = Template_v3_03_2020a_B.In[1];

      // Update for DiscreteIntegrator: '<S394>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S394>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0];

      // Update for DiscreteIntegrator: '<S395>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S395>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0];

      // Update for DiscreteIntegrator: '<S396>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S396>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[0] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0];

      // Update for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLACK_Fx_Sat'
      //   MATLAB Function: '<S394>/MATLAB Function'
      //   SignalConversion generated from: '<S409>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0] +=
        Template_v3_03_2020a_DW.BLACK_Fx_Sat /
        Template_v3_03_2020a_P.model_param[2] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLUE_Fx_Sat '
      //   MATLAB Function: '<S395>/MATLAB Function'
      //   SignalConversion generated from: '<S410>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0] +=
        Template_v3_03_2020a_DW.BLUE_Fx_Sat /
        Template_v3_03_2020a_P.model_param[4] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/RED_Fx_Sat'
      //   MATLAB Function: '<S396>/MATLAB Function'
      //   SignalConversion generated from: '<S411>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0] +=
        Template_v3_03_2020a_DW.RED_Fx_Sat / Template_v3_03_2020a_P.model_param
        [0] * Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // Update for DiscreteIntegrator: '<S394>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S394>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1];

      // Update for DiscreteIntegrator: '<S395>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S395>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1];

      // Update for DiscreteIntegrator: '<S396>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S396>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[1] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1];

      // Update for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLACK_Fy_Sat'
      //   MATLAB Function: '<S394>/MATLAB Function'
      //   SignalConversion generated from: '<S409>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1] +=
        Template_v3_03_2020a_DW.BLACK_Fy_Sat /
        Template_v3_03_2020a_P.model_param[2] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLUE_Fy_Sat'
      //   MATLAB Function: '<S395>/MATLAB Function'
      //   SignalConversion generated from: '<S410>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1] +=
        Template_v3_03_2020a_DW.BLUE_Fy_Sat /
        Template_v3_03_2020a_P.model_param[4] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/RED_Fy_Sat'
      //   MATLAB Function: '<S396>/MATLAB Function'
      //   SignalConversion generated from: '<S411>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1] +=
        Template_v3_03_2020a_DW.RED_Fy_Sat / Template_v3_03_2020a_P.model_param
        [0] * Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // Update for DiscreteIntegrator: '<S394>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S394>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2];

      // Update for DiscreteIntegrator: '<S395>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S395>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_f *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2];

      // Update for DiscreteIntegrator: '<S396>/Velocity to Position' incorporates:
      //   DiscreteIntegrator: '<S396>/Acceleration  to Velocity'

      Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[2] +=
        Template_v3_03_2020a_P.VelocitytoPosition_gainval_a *
        Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2];

      // Update for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLACK_Tz_Sat'
      //   MATLAB Function: '<S394>/MATLAB Function'
      //   SignalConversion generated from: '<S409>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2] +=
        Template_v3_03_2020a_DW.BLACK_Tz_Sat /
        Template_v3_03_2020a_P.model_param[3] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainval;

      // Update for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/BLUE_Tz_Sat'
      //   MATLAB Function: '<S395>/MATLAB Function'
      //   SignalConversion generated from: '<S410>/ SFunction '

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2] +=
        Template_v3_03_2020a_DW.BLUE_Tz_Sat /
        Template_v3_03_2020a_P.model_param[5] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_b;

      // Update for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' incorporates:
      //   DataStoreRead: '<S16>/Data Store Read'
      //   DataStoreRead: '<S16>/RED_Tz_Sat'
      //   MATLAB Function: '<S396>/MATLAB Function'
      //   Sum: '<S16>/Sum'

      Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2] +=
        (Template_v3_03_2020a_DW.RED_Tz_Sat +
         Template_v3_03_2020a_DW.RED_Tz_RW_Sat) /
        Template_v3_03_2020a_P.model_param[1] *
        Template_v3_03_2020a_P.AccelerationtoVelocity_gainva_k;

      // End of Outputs for SubSystem: '<Root>/Simulate Plant Dynamics'
    }

    // End of If: '<Root>/If running a simulation,  grab the simulated states.'

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
    //   DataStoreRead: '<S1>/RED_Vx 1'
    //   DataStoreRead: '<S1>/RED_Vx 3'
    //   DataStoreRead: '<S1>/RED_Vx 4'
    //   DataStoreRead: '<S1>/RED_Vy'
    //   DataStoreRead: '<S1>/RED_Vy1'
    //   DataStoreRead: '<S1>/RED_Vy3'
    //   DataStoreRead: '<S1>/RED_Vy4'
    //   DataStoreRead: '<S1>/RED_Vz'
    //   DataStoreRead: '<S1>/RED_Vz1'
    //   DataStoreRead: '<S1>/RED_Vz3'
    //   DataStoreRead: '<S1>/RED_Vz4'
    //   DataStoreRead: '<S1>/Universal_Time'
    //   DataStoreWrite: '<S6>/RED_Px10'
    //   DataStoreWrite: '<S6>/RED_Px11'
    //   DataStoreWrite: '<S6>/RED_Px12'

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
      Template_v3_03_2020a_B.RED_GyroX;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[11] =
      Template_v3_03_2020a_B.RED_GyroY;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[12] =
      Template_v3_03_2020a_B.RED_GyroZ;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[13] = 0.0;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[14] = 0.0;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[15] = 0.0;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[16] =
      Template_v3_03_2020a_DW.BLACK_Fx_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[17] =
      Template_v3_03_2020a_DW.BLACK_Fy_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[18] =
      Template_v3_03_2020a_DW.BLACK_Tz_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[19] =
      Template_v3_03_2020a_DW.BLACK_Px;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[20] =
      Template_v3_03_2020a_DW.BLACK_Py;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[21] =
      Template_v3_03_2020a_DW.BLACK_Rz;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[22] =
      Template_v3_03_2020a_DW.BLACK_Vx;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[23] =
      Template_v3_03_2020a_DW.BLACK_Vy;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[24] =
      Template_v3_03_2020a_DW.BLACK_RzD;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[25] =
      Template_v3_03_2020a_B.BLACK_GyroX;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[26] =
      Template_v3_03_2020a_B.BLACK_GyroY;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[27] =
      Template_v3_03_2020a_B.BLACK_GyroZ;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[28] =
      Template_v3_03_2020a_B.BLACK_AccelX;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[29] =
      Template_v3_03_2020a_B.BLACK_AccelY;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[30] =
      Template_v3_03_2020a_B.BLACK_AccelZ;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[31] =
      Template_v3_03_2020a_DW.BLUE_Fx_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[32] =
      Template_v3_03_2020a_DW.BLUE_Fy_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[33] =
      Template_v3_03_2020a_DW.BLUE_Tz_Sat;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[34] =
      Template_v3_03_2020a_DW.BLUE_Px;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[35] =
      Template_v3_03_2020a_DW.BLUE_Py;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[36] =
      Template_v3_03_2020a_DW.BLUE_Rz;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[37] =
      Template_v3_03_2020a_DW.BLUE_Vx;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[38] =
      Template_v3_03_2020a_DW.BLUE_Vy;
    Template_v3_03_2020a_B.TmpSignalConversionAtToWork[39] =
      Template_v3_03_2020a_DW.BLUE_RzD;

    // ToWorkspace: '<S1>/To Workspace'
    rt_UpdateLogVar((LogVar *)(LogVar*)
                    (Template_v3_03_2020a_DW.ToWorkspace_PWORK.LoggedData),
                    &Template_v3_03_2020a_B.TmpSignalConversionAtToWork[0], 0);

    // If: '<S2>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S19>/Constant'

    if (Template_v3_03_2020a_P.simMode == 0.0) {
      // Outputs for IfAction SubSystem: '<S2>/Change RED Behavior' incorporates:
      //   ActionPort: '<S18>/Action Port'

      // MATLABSystem: '<S20>/Digital Write' incorporates:
      //   DataStoreRead: '<S18>/Data Store Read'

      Template_v3_03_2020a_B.BLACK_AccelX = rt_roundd_snf
        (Template_v3_03_2020a_DW.Magnet_State);
      if (Template_v3_03_2020a_B.BLACK_AccelX < 256.0) {
        if (Template_v3_03_2020a_B.BLACK_AccelX >= 0.0) {
          Template_v3_03_2020a_B.u = static_cast<uint8_T>
            (Template_v3_03_2020a_B.BLACK_AccelX);
        } else {
          Template_v3_03_2020a_B.u = 0U;
        }
      } else {
        Template_v3_03_2020a_B.u = MAX_uint8_T;
      }

      MW_gpioWrite(10U, Template_v3_03_2020a_B.u);

      // End of MATLABSystem: '<S20>/Digital Write'

      // MATLABSystem: '<S21>/Digital Write' incorporates:
      //   DataStoreRead: '<S18>/Data Store Read1'

      Template_v3_03_2020a_B.BLACK_AccelX = rt_roundd_snf
        (Template_v3_03_2020a_DW.Float_State);
      if (Template_v3_03_2020a_B.BLACK_AccelX < 256.0) {
        if (Template_v3_03_2020a_B.BLACK_AccelX >= 0.0) {
          Template_v3_03_2020a_B.u = static_cast<uint8_T>
            (Template_v3_03_2020a_B.BLACK_AccelX);
        } else {
          Template_v3_03_2020a_B.u = 0U;
        }
      } else {
        Template_v3_03_2020a_B.u = MAX_uint8_T;
      }

      MW_gpioWrite(26U, Template_v3_03_2020a_B.u);

      // End of MATLABSystem: '<S21>/Digital Write'
      // End of Outputs for SubSystem: '<S2>/Change RED Behavior'
    }

    // End of If: '<S2>/This IF block determines whether or not to run the RED sim//exp ' 

    // If: '<S3>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
    //   Constant: '<S25>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S22>/BLACK_Fx'
    //   DataStoreRead: '<S22>/BLACK_Fy'
    //   Product: '<S28>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S28>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change BLACK Behavior' incorporates:
      //   ActionPort: '<S22>/Action Port'

      // MATLAB Function: '<S32>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S27>/BLACK_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.BLACK_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix);

      // MATLAB Function: '<S27>/MATLAB Function1'
      // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function1': '<S30>:1' 
      // '<S30>:1:3' Vec1 = [ -1
      // '<S30>:1:4'          -1
      // '<S30>:1:5'           0
      // '<S30>:1:6'           0
      // '<S30>:1:7'           1
      // '<S30>:1:8'           1
      // '<S30>:1:9'           0
      // '<S30>:1:10'           0 ];
      // '<S30>:1:12' Vec2 = [  0
      // '<S30>:1:13'           0
      // '<S30>:1:14'           1
      // '<S30>:1:15'           1
      // '<S30>:1:16'           0
      // '<S30>:1:17'           0
      // '<S30>:1:18'          -1
      // '<S30>:1:19'          -1 ];
      // '<S30>:1:21' Vec3 = thruster_dist2CG_BLACK./1000;
      // '<S30>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S30>:1:25' Mat2 = diag((F_thrusters_BLACK));
      memset(&Template_v3_03_2020a_B.Mat2[0], 0, sizeof(real_T) << 6U);

      // '<S30>:1:27' H    = Mat1*Mat2;
      // MATLAB Function 'From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S29>:1' 
      // '<S29>:1:3' Vec1 = [ -1
      // '<S29>:1:4'          -1
      // '<S29>:1:5'           0
      // '<S29>:1:6'           0
      // '<S29>:1:7'           1
      // '<S29>:1:8'           1
      // '<S29>:1:9'           0
      // '<S29>:1:10'           0 ];
      // '<S29>:1:12' Vec2 = [  0
      // '<S29>:1:13'           0
      // '<S29>:1:14'           1
      // '<S29>:1:15'           1
      // '<S29>:1:16'           0
      // '<S29>:1:17'           0
      // '<S29>:1:18'          -1
      // '<S29>:1:19'          -1 ];
      // '<S29>:1:21' Vec3 = thruster_dist2CG_BLACK./1000;
      // '<S29>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S29>:1:25' Mat2 = diag((F_thrusters_BLACK./2));
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.Mat2[Template_v3_03_2020a_B.yElIdx +
          (Template_v3_03_2020a_B.yElIdx << 3)] =
          Template_v3_03_2020a_P.F_thrusters_BLACK[Template_v3_03_2020a_B.yElIdx];

        // MATLAB Function: '<S27>/MATLAB Function'
        Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
          =
          Template_v3_03_2020a_P.F_thrusters_BLACK[Template_v3_03_2020a_B.yElIdx]
          / 2.0;
      }

      // MATLAB Function: '<S27>/MATLAB Function'
      memset(&Template_v3_03_2020a_B.Mat2_m[0], 0, sizeof(real_T) << 6U);

      // '<S29>:1:27' H    = Mat1*Mat2;
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.Mat2_m[Template_v3_03_2020a_B.yElIdx +
          (Template_v3_03_2020a_B.yElIdx << 3)] =
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx] =
          b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 1] =
          c[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_BLACK[Template_v3_03_2020a_B.yElIdx]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset1] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset1] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] * Template_v3_03_2020a_B.Mat2_m
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // PermuteDimensions: '<S33>/transpose'
      Template_v3_03_2020a_B.yElIdx = 0;
      Template_v3_03_2020a_B.uElOffset1 = 0;
      for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 < 3;
           Template_v3_03_2020a_B.ntIdx1++) {
        Template_v3_03_2020a_B.uElOffset0 = Template_v3_03_2020a_B.uElOffset1;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.yElIdx] =
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset0];
          Template_v3_03_2020a_B.yElIdx++;
          Template_v3_03_2020a_B.uElOffset0 += 3;
        }

        Template_v3_03_2020a_B.uElOffset1++;
      }

      // End of PermuteDimensions: '<S33>/transpose'

      // MATLAB Function: '<S28>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S22>/BLACK_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.BLACK_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_h);

      // Product: '<S33>/Product'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.rtb_H_bu_c[Template_v3_03_2020a_B.uElOffset1] =
            0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.rtb_H_bu_c[Template_v3_03_2020a_B.uElOffset1]
              += Template_v3_03_2020a_B.H_bu[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] *
              Template_v3_03_2020a_B.transpose_d[(Template_v3_03_2020a_B.yElIdx <<
              3) + Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S33>/Product1' incorporates:
      //   Product: '<S33>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.rtb_H_bu_c,
        Template_v3_03_2020a_B.dv);
      Template_v3_03_2020a_B.BLACK_AccelX =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[0] *
        Template_v3_03_2020a_DW.BLACK_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[2] *
        Template_v3_03_2020a_DW.BLACK_Fy;

      // Product: '<S28>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S22>/BLACK_Fx'
      //   DataStoreRead: '<S22>/BLACK_Fy'
      //   SignalConversion generated from: '<S28>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.BLACK_AccelY =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[1] *
        Template_v3_03_2020a_DW.BLACK_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_h.C_bI[3] *
        Template_v3_03_2020a_DW.BLACK_Fy;

      // Product: '<S33>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.ntIdx1 +
            (Template_v3_03_2020a_B.yElIdx << 3);
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.ntIdx1];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx + 1] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.ntIdx1 + 8];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx + 2] *
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.ntIdx1 +
            16];
        }
      }

      // End of Product: '<S33>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.BLACK_AccelZ =
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx + 16] *
          Template_v3_03_2020a_DW.BLACK_Tz +
          (Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx + 8] *
           Template_v3_03_2020a_B.BLACK_AccelY +
           Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx] *
           Template_v3_03_2020a_B.BLACK_AccelX);

        // Saturate: '<S27>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S22>/BLACK_Tz'
        //   Product: '<S27>/Product'
        //   SignalConversion generated from: '<S27>/Product'

        if (Template_v3_03_2020a_B.BLACK_AccelZ >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat;
        } else if (Template_v3_03_2020a_B.BLACK_AccelZ <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_B.BLACK_AccelZ;
        }

        // End of Saturate: '<S27>/Remove Negatives'
      }

      // MATLAB Function: '<S27>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S22>/BLACK_Tz'
      //   Product: '<S27>/Product'
      //   SignalConversion generated from: '<S27>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b,
        &Template_v3_03_2020a_B.sf_MATLABFunction2_j);

      // MATLAB Function: '<S27>/MATLAB Function1'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx] =
          b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 1] =
          c[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_BLACK[Template_v3_03_2020a_B.yElIdx]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.uElOffset1] =
            0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.uElOffset1]
              += Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] * Template_v3_03_2020a_B.Mat2
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S27>/Product1'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] = 0.0;
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] +=
            Template_v3_03_2020a_B.transpose_d[3 * Template_v3_03_2020a_B.ntIdx1
            + Template_v3_03_2020a_B.yElIdx] *
            Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[Template_v3_03_2020a_B.ntIdx1];
        }
      }

      // End of Product: '<S27>/Product1'

      // DataStoreWrite: '<S27>/BLACK_Fx_Sat' incorporates:
      //   Product: '<S32>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLACK_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S27>/BLACK_Fy_Sat' incorporates:
      //   Product: '<S32>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLACK_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S27>/BLACK_Tz_Sat'
      Template_v3_03_2020a_DW.BLACK_Tz_Sat = Template_v3_03_2020a_B.x_ddot_d[2];

      // End of Outputs for SubSystem: '<S3>/Change BLACK Behavior'
    }

    // End of If: '<S3>/This IF block determines whether or not to run the BLACK sim//exp' 

    // If: '<S3>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
    //   Constant: '<S25>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S23>/BLUE_Fx'
    //   DataStoreRead: '<S23>/BLUE_Fy'
    //   Product: '<S37>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S37>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 3.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change BLUE Behavior' incorporates:
      //   ActionPort: '<S23>/Action Port'

      // MATLAB Function: '<S41>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S36>/BLUE_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.BLUE_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_i);

      // MATLAB Function: '<S36>/MATLAB Function1'
      Template_v3__MATLABFunction(&Template_v3_03_2020a_B.sf_MATLABFunction1_b);

      // MATLAB Function: '<S36>/MATLAB Function'
      Template_v3__MATLABFunction(&Template_v3_03_2020a_B.sf_MATLABFunction_i);

      // PermuteDimensions: '<S42>/transpose'
      Template_v3_03_2020a_B.yElIdx = 0;
      Template_v3_03_2020a_B.uElOffset1 = 0;
      for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 < 3;
           Template_v3_03_2020a_B.ntIdx1++) {
        Template_v3_03_2020a_B.uElOffset0 = Template_v3_03_2020a_B.uElOffset1;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.yElIdx] =
            Template_v3_03_2020a_B.sf_MATLABFunction_i.H[Template_v3_03_2020a_B.uElOffset0];
          Template_v3_03_2020a_B.yElIdx++;
          Template_v3_03_2020a_B.uElOffset0 += 3;
        }

        Template_v3_03_2020a_B.uElOffset1++;
      }

      // End of PermuteDimensions: '<S42>/transpose'

      // MATLAB Function: '<S37>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S23>/BLUE_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.BLUE_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_f);

      // Product: '<S42>/Product'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.dv[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          for (Template_v3_03_2020a_B.uElOffset1 = 0;
               Template_v3_03_2020a_B.uElOffset1 < 8;
               Template_v3_03_2020a_B.uElOffset1++) {
            Template_v3_03_2020a_B.dv[Template_v3_03_2020a_B.ntIdx0] +=
              Template_v3_03_2020a_B.sf_MATLABFunction_i.H[3 *
              Template_v3_03_2020a_B.uElOffset1 + Template_v3_03_2020a_B.ntIdx1]
              * Template_v3_03_2020a_B.transpose_p
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.uElOffset1];
          }
        }
      }

      // Product: '<S42>/Product1' incorporates:
      //   Product: '<S42>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.dv,
        Template_v3_03_2020a_B.rtb_H_bu_c);
      Template_v3_03_2020a_B.BLACK_AccelX =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[0] *
        Template_v3_03_2020a_DW.BLUE_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[2] *
        Template_v3_03_2020a_DW.BLUE_Fy;

      // Product: '<S37>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S23>/BLUE_Fx'
      //   DataStoreRead: '<S23>/BLUE_Fy'
      //   SignalConversion generated from: '<S37>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.BLACK_AccelY =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[1] *
        Template_v3_03_2020a_DW.BLUE_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_f.C_bI[3] *
        Template_v3_03_2020a_DW.BLUE_Fy;

      // Product: '<S42>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.ntIdx1 +
            (Template_v3_03_2020a_B.yElIdx << 3);
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] = 0.0;
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.rtb_H_bu_c[3 * Template_v3_03_2020a_B.yElIdx]
            * Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx1];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.rtb_H_bu_c[3 * Template_v3_03_2020a_B.yElIdx
            + 1] *
            Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx1 + 8];
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.rtb_H_bu_c[3 * Template_v3_03_2020a_B.yElIdx
            + 2] *
            Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx1 +
            16];
        }
      }

      // End of Product: '<S42>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.BLACK_AccelZ =
          Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx + 16] *
          Template_v3_03_2020a_DW.BLUE_Tz +
          (Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx + 8] *
           Template_v3_03_2020a_B.BLACK_AccelY +
           Template_v3_03_2020a_B.b[Template_v3_03_2020a_B.yElIdx] *
           Template_v3_03_2020a_B.BLACK_AccelX);

        // Saturate: '<S36>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S23>/BLUE_Tz'
        //   Product: '<S36>/Product'
        //   SignalConversion generated from: '<S36>/Product'

        if (Template_v3_03_2020a_B.BLACK_AccelZ >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat_p) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat_p;
        } else if (Template_v3_03_2020a_B.BLACK_AccelZ <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat_c) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat_c;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_B.BLACK_AccelZ;
        }

        // End of Saturate: '<S36>/Remove Negatives'
      }

      // MATLAB Function: '<S36>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S23>/BLUE_Tz'
      //   Product: '<S36>/Product'
      //   SignalConversion generated from: '<S36>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b,
        &Template_v3_03_2020a_B.sf_MATLABFunction2_n);

      // Product: '<S36>/Product1'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] = 0.0;
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] +=
            Template_v3_03_2020a_B.sf_MATLABFunction1_b.H[3 *
            Template_v3_03_2020a_B.ntIdx1 + Template_v3_03_2020a_B.yElIdx] *
            Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[Template_v3_03_2020a_B.ntIdx1];
        }
      }

      // End of Product: '<S36>/Product1'

      // DataStoreWrite: '<S36>/BLUE_Fx_Sat' incorporates:
      //   Product: '<S41>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLUE_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S36>/BLUE_Fy_Sat' incorporates:
      //   Product: '<S41>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.BLUE_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_i.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S36>/BLUE_Tz_Sat'
      Template_v3_03_2020a_DW.BLUE_Tz_Sat = Template_v3_03_2020a_B.x_ddot_d[2];

      // End of Outputs for SubSystem: '<S3>/Change BLUE Behavior'
    }

    // End of If: '<S3>/This IF block determines whether or not to run the BLUE sim//exp' 

    // If: '<S3>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
    //   Constant: '<S25>/Constant'
    //   Constant: '<S3>/Constant'
    //   DataStoreRead: '<S24>/RED_Fx'
    //   DataStoreRead: '<S24>/RED_Fy'
    //   Product: '<S46>/Rotate F_I to F_b'
    //   SignalConversion generated from: '<S46>/Rotate F_I to F_b'

    if ((Template_v3_03_2020a_P.WhoAmI == 1.0) ||
        (Template_v3_03_2020a_P.simMode == 1.0)) {
      // Outputs for IfAction SubSystem: '<S3>/Change RED Behavior' incorporates:
      //   ActionPort: '<S24>/Action Port'

      // MATLAB Function: '<S50>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S45>/RED_Rz'

      Templa_CreateRotationMatrix(Template_v3_03_2020a_DW.RED_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_l);

      // MATLAB Function: '<S45>/MATLAB Function1'
      // MATLAB Function 'From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function1': '<S48>:1' 
      // '<S48>:1:3' Vec1 = [ -1
      // '<S48>:1:4'          -1
      // '<S48>:1:5'           0
      // '<S48>:1:6'           0
      // '<S48>:1:7'           1
      // '<S48>:1:8'           1
      // '<S48>:1:9'           0
      // '<S48>:1:10'           0 ];
      // '<S48>:1:12' Vec2 = [  0
      // '<S48>:1:13'           0
      // '<S48>:1:14'           1
      // '<S48>:1:15'           1
      // '<S48>:1:16'           0
      // '<S48>:1:17'           0
      // '<S48>:1:18'          -1
      // '<S48>:1:19'          -1 ];
      // '<S48>:1:21' Vec3 = thruster_dist2CG_RED./1000;
      // '<S48>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S48>:1:25' Mat2 = diag((F_thrusters_RED));
      memset(&Template_v3_03_2020a_B.Mat2[0], 0, sizeof(real_T) << 6U);

      // '<S48>:1:27' H    = Mat1*Mat2;
      // MATLAB Function 'From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function': '<S47>:1' 
      // '<S47>:1:3' Vec1 = [ -1
      // '<S47>:1:4'          -1
      // '<S47>:1:5'           0
      // '<S47>:1:6'           0
      // '<S47>:1:7'           1
      // '<S47>:1:8'           1
      // '<S47>:1:9'           0
      // '<S47>:1:10'           0 ];
      // '<S47>:1:12' Vec2 = [  0
      // '<S47>:1:13'           0
      // '<S47>:1:14'           1
      // '<S47>:1:15'           1
      // '<S47>:1:16'           0
      // '<S47>:1:17'           0
      // '<S47>:1:18'          -1
      // '<S47>:1:19'          -1 ];
      // '<S47>:1:21' Vec3 = thruster_dist2CG_RED./1000;
      // '<S47>:1:23' Mat1 = [Vec1, Vec2, Vec3]';
      // '<S47>:1:25' Mat2 = diag((F_thrusters_RED./2));
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.Mat2[Template_v3_03_2020a_B.yElIdx +
          (Template_v3_03_2020a_B.yElIdx << 3)] =
          Template_v3_03_2020a_P.F_thrusters_RED[Template_v3_03_2020a_B.yElIdx];

        // MATLAB Function: '<S45>/MATLAB Function'
        Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
          = Template_v3_03_2020a_P.F_thrusters_RED[Template_v3_03_2020a_B.yElIdx]
          / 2.0;
      }

      // MATLAB Function: '<S45>/MATLAB Function'
      memset(&Template_v3_03_2020a_B.Mat2_m[0], 0, sizeof(real_T) << 6U);

      // '<S47>:1:27' H    = Mat1*Mat2;
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.Mat2_m[Template_v3_03_2020a_B.yElIdx +
          (Template_v3_03_2020a_B.yElIdx << 3)] =
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx] =
          b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 1] =
          c[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_RED[Template_v3_03_2020a_B.yElIdx]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset1] = 0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset1] +=
              Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] * Template_v3_03_2020a_B.Mat2_m
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // PermuteDimensions: '<S51>/transpose'
      Template_v3_03_2020a_B.yElIdx = 0;
      Template_v3_03_2020a_B.uElOffset1 = 0;
      for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 < 3;
           Template_v3_03_2020a_B.ntIdx1++) {
        Template_v3_03_2020a_B.uElOffset0 = Template_v3_03_2020a_B.uElOffset1;
        for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
             8; Template_v3_03_2020a_B.ntIdx0++) {
          Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.yElIdx] =
            Template_v3_03_2020a_B.H_bu[Template_v3_03_2020a_B.uElOffset0];
          Template_v3_03_2020a_B.yElIdx++;
          Template_v3_03_2020a_B.uElOffset0 += 3;
        }

        Template_v3_03_2020a_B.uElOffset1++;
      }

      // End of PermuteDimensions: '<S51>/transpose'

      // MATLAB Function: '<S46>/Create Rotation Matrix' incorporates:
      //   DataStoreRead: '<S24>/RED_Rz'

      Temp_CreateRotationMatrix_h(Template_v3_03_2020a_DW.RED_Rz,
        &Template_v3_03_2020a_B.sf_CreateRotationMatrix_n);

      // Product: '<S51>/Product'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.rtb_H_bu_c[Template_v3_03_2020a_B.uElOffset1] =
            0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.rtb_H_bu_c[Template_v3_03_2020a_B.uElOffset1]
              += Template_v3_03_2020a_B.H_bu[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] * Template_v3_03_2020a_B.transpose
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S51>/Product1' incorporates:
      //   Product: '<S51>/Product'

      Template_v3_03_2_rt_invd3x3_snf(Template_v3_03_2020a_B.rtb_H_bu_c,
        Template_v3_03_2020a_B.dv);
      Template_v3_03_2020a_B.BLACK_AccelX =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[0] *
        Template_v3_03_2020a_DW.RED_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[2] *
        Template_v3_03_2020a_DW.RED_Fy;

      // Product: '<S46>/Rotate F_I to F_b' incorporates:
      //   DataStoreRead: '<S24>/RED_Fx'
      //   DataStoreRead: '<S24>/RED_Fy'
      //   SignalConversion generated from: '<S46>/Rotate F_I to F_b'

      Template_v3_03_2020a_B.BLACK_AccelY =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[1] *
        Template_v3_03_2020a_DW.RED_Fx +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_n.C_bI[3] *
        Template_v3_03_2020a_DW.RED_Fy;

      // Product: '<S51>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.ntIdx0 = Template_v3_03_2020a_B.ntIdx1 +
            (Template_v3_03_2020a_B.yElIdx << 3);
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] =
            0.0;
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.ntIdx1];
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx + 1] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.ntIdx1 + 8];
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.ntIdx0] +=
            Template_v3_03_2020a_B.dv[3 * Template_v3_03_2020a_B.yElIdx + 2] *
            Template_v3_03_2020a_B.transpose[Template_v3_03_2020a_B.ntIdx1 + 16];
        }
      }

      // End of Product: '<S51>/Product2'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.BLACK_AccelZ =
          Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.yElIdx + 16]
          * Template_v3_03_2020a_DW.RED_Tz +
          (Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.yElIdx + 8]
           * Template_v3_03_2020a_B.BLACK_AccelY +
           Template_v3_03_2020a_B.transpose_p[Template_v3_03_2020a_B.yElIdx] *
           Template_v3_03_2020a_B.BLACK_AccelX);

        // Saturate: '<S45>/Remove Negatives' incorporates:
        //   DataStoreRead: '<S24>/RED_Tz'
        //   Product: '<S45>/Product'
        //   SignalConversion generated from: '<S45>/Product'

        if (Template_v3_03_2020a_B.BLACK_AccelZ >
            Template_v3_03_2020a_P.RemoveNegatives_UpperSat_d) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_UpperSat_d;
        } else if (Template_v3_03_2020a_B.BLACK_AccelZ <
                   Template_v3_03_2020a_P.RemoveNegatives_LowerSat_a) {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_P.RemoveNegatives_LowerSat_a;
        } else {
          Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b[Template_v3_03_2020a_B.yElIdx]
            = Template_v3_03_2020a_B.BLACK_AccelZ;
        }

        // End of Saturate: '<S45>/Remove Negatives'
      }

      // MATLAB Function: '<S45>/MATLAB Function2' incorporates:
      //   DataStoreRead: '<S24>/RED_Tz'
      //   Product: '<S45>/Product'
      //   SignalConversion generated from: '<S45>/Product'

      Template_v3_MATLABFunction2(Template_v3_03_2020a_B.rtb_RemoveNegatives_i_b,
        &Template_v3_03_2020a_B.sf_MATLABFunction2_l);

      // MATLAB Function: '<S45>/MATLAB Function1'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx] =
          b[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 1] =
          c[Template_v3_03_2020a_B.yElIdx];
        Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.yElIdx + 2] =
          Template_v3_03_2020a_P.thruster_dist2CG_RED[Template_v3_03_2020a_B.yElIdx]
          / 1000.0;
      }

      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 8;
           Template_v3_03_2020a_B.yElIdx++) {
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             3; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.uElOffset1 = Template_v3_03_2020a_B.ntIdx1 + 3 *
            Template_v3_03_2020a_B.yElIdx;
          Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.uElOffset1] =
            0.0;
          for (Template_v3_03_2020a_B.ntIdx0 = 0; Template_v3_03_2020a_B.ntIdx0 <
               8; Template_v3_03_2020a_B.ntIdx0++) {
            Template_v3_03_2020a_B.transpose_d[Template_v3_03_2020a_B.uElOffset1]
              += Template_v3_03_2020a_B.b[3 * Template_v3_03_2020a_B.ntIdx0 +
              Template_v3_03_2020a_B.ntIdx1] * Template_v3_03_2020a_B.Mat2
              [(Template_v3_03_2020a_B.yElIdx << 3) +
              Template_v3_03_2020a_B.ntIdx0];
          }
        }
      }

      // Product: '<S45>/Product1'
      for (Template_v3_03_2020a_B.yElIdx = 0; Template_v3_03_2020a_B.yElIdx < 3;
           Template_v3_03_2020a_B.yElIdx++) {
        Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] = 0.0;
        for (Template_v3_03_2020a_B.ntIdx1 = 0; Template_v3_03_2020a_B.ntIdx1 <
             8; Template_v3_03_2020a_B.ntIdx1++) {
          Template_v3_03_2020a_B.x_ddot_d[Template_v3_03_2020a_B.yElIdx] +=
            Template_v3_03_2020a_B.transpose_d[3 * Template_v3_03_2020a_B.ntIdx1
            + Template_v3_03_2020a_B.yElIdx] *
            Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[Template_v3_03_2020a_B.ntIdx1];
        }
      }

      // End of Product: '<S45>/Product1'

      // DataStoreWrite: '<S45>/RED_Fx_Sat' incorporates:
      //   Product: '<S50>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.RED_Fx_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[0] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[2] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S45>/RED_Fy_Sat' incorporates:
      //   Product: '<S50>/Rotate F_b to F_I'

      Template_v3_03_2020a_DW.RED_Fy_Sat =
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[1] *
        Template_v3_03_2020a_B.x_ddot_d[0] +
        Template_v3_03_2020a_B.sf_CreateRotationMatrix_l.C_Ib[3] *
        Template_v3_03_2020a_B.x_ddot_d[1];

      // DataStoreWrite: '<S45>/RED_Tz_Sat'
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
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[7]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[7];
      Template_v3_03_2020a_DW.RateTransition1_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[1] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[2]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[2];

      // RateTransition: '<S3>/Rate Transition2' incorporates:
      //   Sum: '<S3>/Sum'
      //   Sum: '<S3>/Sum1'

      Template_v3_03_2020a_DW.RateTransition2_Buffer =
        Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[2];
      Template_v3_03_2020a_DW.RateTransition3_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[3] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[4]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[4];
      Template_v3_03_2020a_DW.RateTransition4_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[4] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[3]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[3];
      Template_v3_03_2020a_DW.RateTransition5_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[5] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[6]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[6];
      Template_v3_03_2020a_DW.RateTransition6_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[6] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[5]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[5];
      Template_v3_03_2020a_DW.RateTransition7_Buffer =
        (Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[7] +
         Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[0]) +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[0];
      Template_v3_03_2020a_DW.RateTransition8_Buffer =
        Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[1] +
        Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[1];
    }

    // End of RateTransition: '<S3>/Rate Transition'

    // If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' incorporates:
    //   Constant: '<S74>/Constant'

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
      // Disable for If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      switch (Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei) {
       case 0:
        // Disable for Enabled SubSystem: '<S110>/Enabled Subsystem'
        if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
          Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = false;
        }

        // End of Disable for SubSystem: '<S110>/Enabled Subsystem'
        break;

       case 1:
        // Disable for If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 
        Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

        // Disable for If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
          // Disable for Enabled SubSystem: '<S93>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
          }

          // End of Disable for SubSystem: '<S93>/Enabled Subsystem'
        }

        Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;
        break;
      }

      Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei = -1;

      // End of Disable for If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
    }

    switch (Template_v3_03_2020a_B.rtAction) {
     case 0:
      // Outputs for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S75>/Action Port'

      // If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' incorporates:
      //   Constant: '<S75>/Which PLATFORM is being used?'
      //   Delay: '<S117>/Delay'
      //   Inport: '<S118>/In1'
      //   Logic: '<S117>/Logical Operator'
      //   Logic: '<S117>/Logical Operator1'

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
          // Disable for Enabled SubSystem: '<S110>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE_p = false;
          }

          // End of Disable for SubSystem: '<S110>/Enabled Subsystem'
          break;

         case 1:
          // Disable for If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 
          Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

          // Disable for If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
          if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
            // Disable for Enabled SubSystem: '<S93>/Enabled Subsystem'
            if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
              Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
            }

            // End of Disable for SubSystem: '<S93>/Enabled Subsystem'
          }

          Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;
          break;
        }
      }

      switch (Template_v3_03_2020a_B.rtAction) {
       case 0:
        // Outputs for IfAction SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' incorporates:
        //   ActionPort: '<S77>/Action Port'

        Templa_StreamPhaseSpaceData(&Template_v3_03_2020a_B.StreamPhaseSpaceData);

        // DataStoreWrite: '<S77>/RED_Px1'
        Template_v3_03_2020a_DW.RED_Px =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];

        // Delay: '<S111>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_ezp != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_as =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];
        }

        // Sum: '<S111>/Sum6' incorporates:
        //   Delay: '<S111>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_as;

        // If: '<S111>/if we went through a "step"' incorporates:
        //   Inport: '<S121>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S111>/Hold this value' incorporates:
          //   ActionPort: '<S121>/Action Port'

          Template_v3_03_2020a_B.In1_np = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S111>/Hold this value'
        }

        // End of If: '<S111>/if we went through a "step"'

        // Gain: '<S111>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Px2'

        Template_v3_03_2020a_DW.RED_Vx = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_np;

        // Delay: '<S114>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_gv != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_au =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];
        }

        // Sum: '<S114>/Sum6' incorporates:
        //   Delay: '<S114>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_au;

        // If: '<S114>/if we went through a "step"' incorporates:
        //   Inport: '<S124>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S114>/Hold this value' incorporates:
          //   ActionPort: '<S124>/Action Port'

          Template_v3_03_2020a_B.In1_bx = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S114>/Hold this value'
        }

        // End of If: '<S114>/if we went through a "step"'

        // Gain: '<S114>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Px3'

        Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bx;

        // DataStoreWrite: '<S77>/RED_Px4'
        Template_v3_03_2020a_DW.BLACK_Px =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];

        // DataStoreWrite: '<S77>/RED_Px5'
        Template_v3_03_2020a_DW.BLACK_Py =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];

        // DataStoreWrite: '<S77>/RED_Px6'
        Template_v3_03_2020a_DW.BLACK_Rz =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];

        // DataStoreWrite: '<S77>/RED_Py1'
        Template_v3_03_2020a_DW.RED_Py =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];

        // Delay: '<S112>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_en != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_fk =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];
        }

        // Sum: '<S112>/Sum6' incorporates:
        //   Delay: '<S112>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_fk;

        // If: '<S112>/if we went through a "step"' incorporates:
        //   Inport: '<S122>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S112>/Hold this value' incorporates:
          //   ActionPort: '<S122>/Action Port'

          Template_v3_03_2020a_B.In1_n2 = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S112>/Hold this value'
        }

        // End of If: '<S112>/if we went through a "step"'

        // Gain: '<S112>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Py2'

        Template_v3_03_2020a_DW.RED_Vy = 1.0 / Template_v3_03_2020a_P.serverRate
          * Template_v3_03_2020a_B.In1_n2;

        // Delay: '<S115>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_f2 != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_kq =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];
        }

        // Sum: '<S115>/Sum6' incorporates:
        //   Delay: '<S115>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5] -
          Template_v3_03_2020a_DW.Delay1_DSTATE_kq;

        // If: '<S115>/if we went through a "step"' incorporates:
        //   Inport: '<S125>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S115>/Hold this value' incorporates:
          //   ActionPort: '<S125>/Action Port'

          Template_v3_03_2020a_B.In1_jc = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S115>/Hold this value'
        }

        // End of If: '<S115>/if we went through a "step"'

        // Gain: '<S115>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Py3'

        Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jc;

        // DataStoreWrite: '<S77>/RED_Rz1'
        Template_v3_03_2020a_DW.RED_Rz =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];

        // S-Function (sdspunwrap2): '<S77>/Unwrap'
        if (Template_v3_03_2020a_DW.Unwrap_FirstStep_c) {
          Template_v3_03_2020a_DW.Unwrap_Prev_a =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];
          Template_v3_03_2020a_DW.Unwrap_FirstStep_c = false;
        }

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_DW.Unwrap_Cumsum_e;
        Template_v3_03_2020a_B.BLACK_AccelY =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3] -
          Template_v3_03_2020a_DW.Unwrap_Prev_a;
        Template_v3_03_2020a_B.BLACK_AccelZ =
          Template_v3_03_2020a_B.BLACK_AccelY - floor
          ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
           6.2831853071795862) * 6.2831853071795862;
        if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
            (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
          Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
        }

        Template_v3_03_2020a_B.BLACK_AccelY =
          Template_v3_03_2020a_B.BLACK_AccelZ -
          Template_v3_03_2020a_B.BLACK_AccelY;
        if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap_Cumsum_e +
            Template_v3_03_2020a_B.BLACK_AccelY;
        }

        Template_v3_03_2020a_B.Unwrap_g =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3] +
          Template_v3_03_2020a_B.BLACK_AccelX;
        Template_v3_03_2020a_DW.Unwrap_Prev_a =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[3];
        Template_v3_03_2020a_DW.Unwrap_Cumsum_e =
          Template_v3_03_2020a_B.BLACK_AccelX;

        // End of S-Function (sdspunwrap2): '<S77>/Unwrap'

        // Delay: '<S113>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_db != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_c1 =
            Template_v3_03_2020a_B.Unwrap_g;
        }

        // Sum: '<S113>/Sum6' incorporates:
        //   Delay: '<S113>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap_g -
          Template_v3_03_2020a_DW.Delay1_DSTATE_c1;

        // If: '<S113>/if we went through a "step"' incorporates:
        //   Inport: '<S123>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S113>/Hold this value' incorporates:
          //   ActionPort: '<S123>/Action Port'

          Template_v3_03_2020a_B.In1_mo = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S113>/Hold this value'
        }

        // End of If: '<S113>/if we went through a "step"'

        // Gain: '<S113>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Rz2'

        Template_v3_03_2020a_DW.RED_RzD = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_mo;

        // S-Function (sdspunwrap2): '<S77>/Unwrap1'
        if (Template_v3_03_2020a_DW.Unwrap1_FirstStep_f) {
          Template_v3_03_2020a_DW.Unwrap1_Prev_o =
            Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];
          Template_v3_03_2020a_DW.Unwrap1_FirstStep_f = false;
        }

        Template_v3_03_2020a_B.BLACK_AccelX =
          Template_v3_03_2020a_DW.Unwrap1_Cumsum_n;
        Template_v3_03_2020a_B.BLACK_AccelY =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6] -
          Template_v3_03_2020a_DW.Unwrap1_Prev_o;
        Template_v3_03_2020a_B.BLACK_AccelZ =
          Template_v3_03_2020a_B.BLACK_AccelY - floor
          ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
           6.2831853071795862) * 6.2831853071795862;
        if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
            (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
          Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
        }

        Template_v3_03_2020a_B.BLACK_AccelY =
          Template_v3_03_2020a_B.BLACK_AccelZ -
          Template_v3_03_2020a_B.BLACK_AccelY;
        if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap1_Cumsum_n +
            Template_v3_03_2020a_B.BLACK_AccelY;
        }

        Template_v3_03_2020a_B.Unwrap1_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6] +
          Template_v3_03_2020a_B.BLACK_AccelX;
        Template_v3_03_2020a_DW.Unwrap1_Prev_o =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[6];
        Template_v3_03_2020a_DW.Unwrap1_Cumsum_n =
          Template_v3_03_2020a_B.BLACK_AccelX;

        // End of S-Function (sdspunwrap2): '<S77>/Unwrap1'

        // Delay: '<S116>/Delay1'
        if (Template_v3_03_2020a_DW.icLoad_es != 0) {
          Template_v3_03_2020a_DW.Delay1_DSTATE_ems =
            Template_v3_03_2020a_B.Unwrap1_o;
        }

        // Sum: '<S116>/Sum6' incorporates:
        //   Delay: '<S116>/Delay1'

        Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap1_o -
          Template_v3_03_2020a_DW.Delay1_DSTATE_ems;

        // If: '<S116>/if we went through a "step"' incorporates:
        //   Inport: '<S126>/In1'

        if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
          // Outputs for IfAction SubSystem: '<S116>/Hold this value' incorporates:
          //   ActionPort: '<S126>/Action Port'

          Template_v3_03_2020a_B.In1_j1 = Template_v3_03_2020a_B.BLACK_AccelX;

          // End of Outputs for SubSystem: '<S116>/Hold this value'
        }

        // End of If: '<S116>/if we went through a "step"'

        // Gain: '<S116>/divide by delta T' incorporates:
        //   DataStoreWrite: '<S77>/RED_Rz3'

        Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
          Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_j1;

        // DataTypeConversion: '<S117>/Data Type Conversion'
        Template_v3_03_2020a_B.DataTypeConversion_m =
          (Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[0]
           != 0.0);

        // Outputs for Enabled SubSystem: '<S110>/Enabled Subsystem' incorporates:
        //   EnablePort: '<S118>/Enable'

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

        // End of Outputs for SubSystem: '<S110>/Enabled Subsystem'

        // Sum: '<S110>/Subtract' incorporates:
        //   DataStoreWrite: '<S77>/Universal_Time1'
        //   Delay: '<S117>/Delay'
        //   Inport: '<S118>/In1'
        //   Logic: '<S117>/Logical Operator'
        //   Logic: '<S117>/Logical Operator1'

        Template_v3_03_2020a_DW.Univ_Time =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[0] -
          Template_v3_03_2020a_B.In1_jww;

        // End of Outputs for SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 
        break;

       case 1:
        // Outputs for IfAction SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' incorporates:
        //   ActionPort: '<S76>/Action Port'

        // If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
        //   Constant: '<S76>/Constant'
        //   Constant: '<S78>/Constant'

        Template_v3_03_2020a_B.rtAction = -1;
        if ((Template_v3_03_2020a_P.WhoAmI == 2.0) ||
            (Template_v3_03_2020a_P.simMode == 1.0)) {
          Template_v3_03_2020a_B.rtAction = 0;

          // Outputs for IfAction SubSystem: '<S76>/Obtain BLACK States' incorporates:
          //   ActionPort: '<S79>/Action Port'

          // S-Function (sdspFromNetwork): '<S79>/UDP Receive'
          sErr = GetErrorBuffer
            (&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
          Template_v3_03_2020a_B.yElIdx = 13;
          LibOutputs_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U],
                             &Template_v3_03_2020a_B.UDPReceive_o1_p[0U],
                             &Template_v3_03_2020a_B.yElIdx);
          if (*sErr != 0) {
            rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
            rtmSetStopRequested(Template_v3_03_2020a_M, 1);
          }

          // End of S-Function (sdspFromNetwork): '<S79>/UDP Receive'

          // DataStoreWrite: '<S79>/RED_Px1'
          Template_v3_03_2020a_DW.RED_Px =
            Template_v3_03_2020a_B.UDPReceive_o1_p[1];

          // Delay: '<S81>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_nv != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_bz =
              Template_v3_03_2020a_B.UDPReceive_o1_p[1];
          }

          // Sum: '<S81>/Sum6' incorporates:
          //   Delay: '<S81>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.UDPReceive_o1_p[1] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_bz;

          // If: '<S81>/if we went through a "step"' incorporates:
          //   Inport: '<S87>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S81>/Hold this value' incorporates:
            //   ActionPort: '<S87>/Action Port'

            Template_v3_03_2020a_B.In1_et = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S81>/Hold this value'
          }

          // End of If: '<S81>/if we went through a "step"'

          // Gain: '<S81>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Px2'

          Template_v3_03_2020a_DW.RED_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_et;

          // Delay: '<S84>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_bj != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_mi =
              Template_v3_03_2020a_B.UDPReceive_o1_p[4];
          }

          // Sum: '<S84>/Sum6' incorporates:
          //   Delay: '<S84>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.UDPReceive_o1_p[4] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_mi;

          // If: '<S84>/if we went through a "step"' incorporates:
          //   Inport: '<S90>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S84>/Hold this value' incorporates:
            //   ActionPort: '<S90>/Action Port'

            Template_v3_03_2020a_B.In1_aw = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S84>/Hold this value'
          }

          // End of If: '<S84>/if we went through a "step"'

          // Gain: '<S84>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Px3'

          Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_aw;

          // DataStoreWrite: '<S79>/RED_Px4'
          Template_v3_03_2020a_DW.BLACK_Px =
            Template_v3_03_2020a_B.UDPReceive_o1_p[4];

          // DataStoreWrite: '<S79>/RED_Px5'
          Template_v3_03_2020a_DW.BLACK_Py =
            Template_v3_03_2020a_B.UDPReceive_o1_p[5];

          // DataStoreWrite: '<S79>/RED_Px6'
          Template_v3_03_2020a_DW.BLACK_Rz =
            Template_v3_03_2020a_B.UDPReceive_o1_p[6];

          // DataStoreWrite: '<S79>/RED_Py1'
          Template_v3_03_2020a_DW.RED_Py =
            Template_v3_03_2020a_B.UDPReceive_o1_p[2];

          // Delay: '<S82>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_d0 != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_ea =
              Template_v3_03_2020a_B.UDPReceive_o1_p[2];
          }

          // Sum: '<S82>/Sum6' incorporates:
          //   Delay: '<S82>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.UDPReceive_o1_p[2] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_ea;

          // If: '<S82>/if we went through a "step"' incorporates:
          //   Inport: '<S88>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S82>/Hold this value' incorporates:
            //   ActionPort: '<S88>/Action Port'

            Template_v3_03_2020a_B.In1_ky2 = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S82>/Hold this value'
          }

          // End of If: '<S82>/if we went through a "step"'

          // Gain: '<S82>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Py2'

          Template_v3_03_2020a_DW.RED_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ky2;

          // Delay: '<S85>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_fjc != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_of =
              Template_v3_03_2020a_B.UDPReceive_o1_p[5];
          }

          // Sum: '<S85>/Sum6' incorporates:
          //   Delay: '<S85>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.UDPReceive_o1_p[5] -
            Template_v3_03_2020a_DW.Delay1_DSTATE_of;

          // If: '<S85>/if we went through a "step"' incorporates:
          //   Inport: '<S91>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S85>/Hold this value' incorporates:
            //   ActionPort: '<S91>/Action Port'

            Template_v3_03_2020a_B.In1_ky = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S85>/Hold this value'
          }

          // End of If: '<S85>/if we went through a "step"'

          // Gain: '<S85>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Py3'

          Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_ky;

          // DataStoreWrite: '<S79>/RED_Rz1'
          Template_v3_03_2020a_DW.RED_Rz =
            Template_v3_03_2020a_B.UDPReceive_o1_p[3];

          // S-Function (sdspunwrap2): '<S79>/Unwrap'
          if (Template_v3_03_2020a_DW.Unwrap_FirstStep_h) {
            Template_v3_03_2020a_DW.Unwrap_Prev_e =
              Template_v3_03_2020a_B.UDPReceive_o1_p[3];
            Template_v3_03_2020a_DW.Unwrap_FirstStep_h = false;
          }

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap_Cumsum_f;
          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.UDPReceive_o1_p[3] -
            Template_v3_03_2020a_DW.Unwrap_Prev_e;
          Template_v3_03_2020a_B.BLACK_AccelZ =
            Template_v3_03_2020a_B.BLACK_AccelY - floor
            ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
             6.2831853071795862) * 6.2831853071795862;
          if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
              (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
            Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
          }

          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.BLACK_AccelZ -
            Template_v3_03_2020a_B.BLACK_AccelY;
          if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
            Template_v3_03_2020a_B.BLACK_AccelX =
              Template_v3_03_2020a_DW.Unwrap_Cumsum_f +
              Template_v3_03_2020a_B.BLACK_AccelY;
          }

          Template_v3_03_2020a_DW.Unwrap_Prev_e =
            Template_v3_03_2020a_B.UDPReceive_o1_p[3];
          Template_v3_03_2020a_B.Unwrap_d =
            Template_v3_03_2020a_B.UDPReceive_o1_p[3] +
            Template_v3_03_2020a_B.BLACK_AccelX;
          Template_v3_03_2020a_DW.Unwrap_Cumsum_f =
            Template_v3_03_2020a_B.BLACK_AccelX;

          // End of S-Function (sdspunwrap2): '<S79>/Unwrap'

          // Delay: '<S83>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_dyz != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_k2 =
              Template_v3_03_2020a_B.Unwrap_d;
          }

          // Sum: '<S83>/Sum6' incorporates:
          //   Delay: '<S83>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap_d
            - Template_v3_03_2020a_DW.Delay1_DSTATE_k2;

          // If: '<S83>/if we went through a "step"' incorporates:
          //   Inport: '<S89>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S83>/Hold this value' incorporates:
            //   ActionPort: '<S89>/Action Port'

            Template_v3_03_2020a_B.In1_fxz = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S83>/Hold this value'
          }

          // End of If: '<S83>/if we went through a "step"'

          // Gain: '<S83>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Rz2'

          Template_v3_03_2020a_DW.RED_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_fxz;

          // S-Function (sdspunwrap2): '<S79>/Unwrap1'
          if (Template_v3_03_2020a_DW.Unwrap1_FirstStep_j) {
            Template_v3_03_2020a_DW.Unwrap1_Prev_a =
              Template_v3_03_2020a_B.UDPReceive_o1_p[6];
            Template_v3_03_2020a_DW.Unwrap1_FirstStep_j = false;
          }

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap1_Cumsum_a;
          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.UDPReceive_o1_p[6] -
            Template_v3_03_2020a_DW.Unwrap1_Prev_a;
          Template_v3_03_2020a_B.BLACK_AccelZ =
            Template_v3_03_2020a_B.BLACK_AccelY - floor
            ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
             6.2831853071795862) * 6.2831853071795862;
          if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
              (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
            Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
          }

          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.BLACK_AccelZ -
            Template_v3_03_2020a_B.BLACK_AccelY;
          if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
            Template_v3_03_2020a_B.BLACK_AccelX =
              Template_v3_03_2020a_DW.Unwrap1_Cumsum_a +
              Template_v3_03_2020a_B.BLACK_AccelY;
          }

          Template_v3_03_2020a_DW.Unwrap1_Prev_a =
            Template_v3_03_2020a_B.UDPReceive_o1_p[6];
          Template_v3_03_2020a_B.Unwrap1_f =
            Template_v3_03_2020a_B.UDPReceive_o1_p[6] +
            Template_v3_03_2020a_B.BLACK_AccelX;
          Template_v3_03_2020a_DW.Unwrap1_Cumsum_a =
            Template_v3_03_2020a_B.BLACK_AccelX;

          // End of S-Function (sdspunwrap2): '<S79>/Unwrap1'

          // Delay: '<S86>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_p != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_b2 =
              Template_v3_03_2020a_B.Unwrap1_f;
          }

          // Sum: '<S86>/Sum6' incorporates:
          //   Delay: '<S86>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap1_f
            - Template_v3_03_2020a_DW.Delay1_DSTATE_b2;

          // If: '<S86>/if we went through a "step"' incorporates:
          //   Inport: '<S92>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S86>/Hold this value' incorporates:
            //   ActionPort: '<S92>/Action Port'

            Template_v3_03_2020a_B.In1_m4 = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S86>/Hold this value'
          }

          // End of If: '<S86>/if we went through a "step"'

          // Gain: '<S86>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S79>/RED_Rz3'

          Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_m4;

          // DataStoreWrite: '<S79>/Universal_Time1'
          Template_v3_03_2020a_DW.Univ_Time =
            Template_v3_03_2020a_B.UDPReceive_o1_p[0];

          // End of Outputs for SubSystem: '<S76>/Obtain BLACK States'
        }

        Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn =
          Template_v3_03_2020a_B.rtAction;

        // End of If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 

        // If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
        //   Constant: '<S76>/Constant'
        //   Constant: '<S78>/Constant'
        //   Delay: '<S100>/Delay'
        //   Inport: '<S101>/In1'
        //   Logic: '<S100>/Logical Operator'
        //   Logic: '<S100>/Logical Operator1'

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
          // Disable for Enabled SubSystem: '<S93>/Enabled Subsystem'
          if (Template_v3_03_2020a_DW.EnabledSubsystem_MODE) {
            Template_v3_03_2020a_DW.EnabledSubsystem_MODE = false;
          }

          // End of Disable for SubSystem: '<S93>/Enabled Subsystem'
        }

        if (Template_v3_03_2020a_B.rtAction == 0) {
          // Outputs for IfAction SubSystem: '<S76>/Obtain RED States' incorporates:
          //   ActionPort: '<S80>/Action Port'

          Templa_StreamPhaseSpaceData
            (&Template_v3_03_2020a_B.StreamPhaseSpaceData_p);

          // DataStoreWrite: '<S80>/RED_Px1'
          Template_v3_03_2020a_DW.RED_Px =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1];

          // Delay: '<S94>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ku != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_oy =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              1];
          }

          // Sum: '<S94>/Sum6' incorporates:
          //   Delay: '<S94>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_oy;

          // If: '<S94>/if we went through a "step"' incorporates:
          //   Inport: '<S104>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S94>/Hold this value' incorporates:
            //   ActionPort: '<S104>/Action Port'

            Template_v3_03_2020a_B.In1_of = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S94>/Hold this value'
          }

          // End of If: '<S94>/if we went through a "step"'

          // Gain: '<S94>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Px2'

          Template_v3_03_2020a_DW.RED_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_of;

          // Delay: '<S97>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_h0 != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_cj =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              4];
          }

          // Sum: '<S97>/Sum6' incorporates:
          //   Delay: '<S97>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_cj;

          // If: '<S97>/if we went through a "step"' incorporates:
          //   Inport: '<S107>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S97>/Hold this value' incorporates:
            //   ActionPort: '<S107>/Action Port'

            Template_v3_03_2020a_B.In1_g5 = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S97>/Hold this value'
          }

          // End of If: '<S97>/if we went through a "step"'

          // Gain: '<S97>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Px3'

          Template_v3_03_2020a_DW.BLACK_Vx = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_g5;

          // DataStoreWrite: '<S80>/RED_Px4'
          Template_v3_03_2020a_DW.BLACK_Px =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4];

          // DataStoreWrite: '<S80>/RED_Px5'
          Template_v3_03_2020a_DW.BLACK_Py =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5];

          // DataStoreWrite: '<S80>/RED_Px6'
          Template_v3_03_2020a_DW.BLACK_Rz =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6];

          // DataStoreWrite: '<S80>/RED_Py1'
          Template_v3_03_2020a_DW.RED_Py =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2];

          // Delay: '<S95>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_hc != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_em =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              2];
          }

          // Sum: '<S95>/Sum6' incorporates:
          //   Delay: '<S95>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_em;

          // If: '<S95>/if we went through a "step"' incorporates:
          //   Inport: '<S105>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S95>/Hold this value' incorporates:
            //   ActionPort: '<S105>/Action Port'

            Template_v3_03_2020a_B.In1_bd2 = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S95>/Hold this value'
          }

          // End of If: '<S95>/if we went through a "step"'

          // Gain: '<S95>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Py2'

          Template_v3_03_2020a_DW.RED_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bd2;

          // Delay: '<S98>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_ez != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_cc =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              5];
          }

          // Sum: '<S98>/Sum6' incorporates:
          //   Delay: '<S98>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5]
            - Template_v3_03_2020a_DW.Delay1_DSTATE_cc;

          // If: '<S98>/if we went through a "step"' incorporates:
          //   Inport: '<S108>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S98>/Hold this value' incorporates:
            //   ActionPort: '<S108>/Action Port'

            Template_v3_03_2020a_B.In1_p = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S98>/Hold this value'
          }

          // End of If: '<S98>/if we went through a "step"'

          // Gain: '<S98>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Py3'

          Template_v3_03_2020a_DW.BLACK_Vy = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_p;

          // DataStoreWrite: '<S80>/RED_Rz1'
          Template_v3_03_2020a_DW.RED_Rz =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3];

          // S-Function (sdspunwrap2): '<S80>/Unwrap'
          if (Template_v3_03_2020a_DW.Unwrap_FirstStep) {
            Template_v3_03_2020a_DW.Unwrap_Prev =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              3];
            Template_v3_03_2020a_DW.Unwrap_FirstStep = false;
          }

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap_Cumsum;
          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3]
            - Template_v3_03_2020a_DW.Unwrap_Prev;
          Template_v3_03_2020a_B.BLACK_AccelZ =
            Template_v3_03_2020a_B.BLACK_AccelY - floor
            ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
             6.2831853071795862) * 6.2831853071795862;
          if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
              (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
            Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
          }

          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.BLACK_AccelZ -
            Template_v3_03_2020a_B.BLACK_AccelY;
          if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
            Template_v3_03_2020a_B.BLACK_AccelX =
              Template_v3_03_2020a_DW.Unwrap_Cumsum +
              Template_v3_03_2020a_B.BLACK_AccelY;
          }

          Template_v3_03_2020a_B.Unwrap =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3]
            + Template_v3_03_2020a_B.BLACK_AccelX;
          Template_v3_03_2020a_DW.Unwrap_Prev =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[3];
          Template_v3_03_2020a_DW.Unwrap_Cumsum =
            Template_v3_03_2020a_B.BLACK_AccelX;

          // End of S-Function (sdspunwrap2): '<S80>/Unwrap'

          // Delay: '<S96>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_os != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_f0 =
              Template_v3_03_2020a_B.Unwrap;
          }

          // Sum: '<S96>/Sum6' incorporates:
          //   Delay: '<S96>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap -
            Template_v3_03_2020a_DW.Delay1_DSTATE_f0;

          // If: '<S96>/if we went through a "step"' incorporates:
          //   Inport: '<S106>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S96>/Hold this value' incorporates:
            //   ActionPort: '<S106>/Action Port'

            Template_v3_03_2020a_B.In1_jh = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S96>/Hold this value'
          }

          // End of If: '<S96>/if we went through a "step"'

          // Gain: '<S96>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Rz2'

          Template_v3_03_2020a_DW.RED_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_jh;

          // S-Function (sdspunwrap2): '<S80>/Unwrap1'
          if (Template_v3_03_2020a_DW.Unwrap1_FirstStep) {
            Template_v3_03_2020a_DW.Unwrap1_Prev =
              Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[
              6];
            Template_v3_03_2020a_DW.Unwrap1_FirstStep = false;
          }

          Template_v3_03_2020a_B.BLACK_AccelX =
            Template_v3_03_2020a_DW.Unwrap1_Cumsum;
          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6]
            - Template_v3_03_2020a_DW.Unwrap1_Prev;
          Template_v3_03_2020a_B.BLACK_AccelZ =
            Template_v3_03_2020a_B.BLACK_AccelY - floor
            ((Template_v3_03_2020a_B.BLACK_AccelY + 3.1415926535897931) /
             6.2831853071795862) * 6.2831853071795862;
          if ((Template_v3_03_2020a_B.BLACK_AccelZ == -3.1415926535897931) &&
              (Template_v3_03_2020a_B.BLACK_AccelY > 0.0)) {
            Template_v3_03_2020a_B.BLACK_AccelZ = 3.1415926535897931;
          }

          Template_v3_03_2020a_B.BLACK_AccelY =
            Template_v3_03_2020a_B.BLACK_AccelZ -
            Template_v3_03_2020a_B.BLACK_AccelY;
          if (fabs(Template_v3_03_2020a_B.BLACK_AccelY) > 3.1415926535897931) {
            Template_v3_03_2020a_B.BLACK_AccelX =
              Template_v3_03_2020a_DW.Unwrap1_Cumsum +
              Template_v3_03_2020a_B.BLACK_AccelY;
          }

          Template_v3_03_2020a_B.Unwrap1 =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6]
            + Template_v3_03_2020a_B.BLACK_AccelX;
          Template_v3_03_2020a_DW.Unwrap1_Prev =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[6];
          Template_v3_03_2020a_DW.Unwrap1_Cumsum =
            Template_v3_03_2020a_B.BLACK_AccelX;

          // End of S-Function (sdspunwrap2): '<S80>/Unwrap1'

          // Delay: '<S99>/Delay1'
          if (Template_v3_03_2020a_DW.icLoad_g != 0) {
            Template_v3_03_2020a_DW.Delay1_DSTATE_iu =
              Template_v3_03_2020a_B.Unwrap1;
          }

          // Sum: '<S99>/Sum6' incorporates:
          //   Delay: '<S99>/Delay1'

          Template_v3_03_2020a_B.BLACK_AccelX = Template_v3_03_2020a_B.Unwrap1 -
            Template_v3_03_2020a_DW.Delay1_DSTATE_iu;

          // If: '<S99>/if we went through a "step"' incorporates:
          //   Inport: '<S109>/In1'

          if (Template_v3_03_2020a_B.BLACK_AccelX != 0.0) {
            // Outputs for IfAction SubSystem: '<S99>/Hold this value' incorporates:
            //   ActionPort: '<S109>/Action Port'

            Template_v3_03_2020a_B.In1_bs = Template_v3_03_2020a_B.BLACK_AccelX;

            // End of Outputs for SubSystem: '<S99>/Hold this value'
          }

          // End of If: '<S99>/if we went through a "step"'

          // Gain: '<S99>/divide by delta T' incorporates:
          //   DataStoreWrite: '<S80>/RED_Rz3'

          Template_v3_03_2020a_DW.BLACK_RzD = 1.0 /
            Template_v3_03_2020a_P.serverRate * Template_v3_03_2020a_B.In1_bs;

          // DataTypeConversion: '<S100>/Data Type Conversion'
          Template_v3_03_2020a_B.DataTypeConversion =
            (Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData
             [0] != 0.0);

          // Outputs for Enabled SubSystem: '<S93>/Enabled Subsystem' incorporates:
          //   EnablePort: '<S101>/Enable'

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

          // End of Outputs for SubSystem: '<S93>/Enabled Subsystem'

          // Sum: '<S93>/Subtract' incorporates:
          //   DataStoreWrite: '<S80>/Universal_Time1'
          //   Delay: '<S100>/Delay'
          //   Inport: '<S101>/In1'
          //   Logic: '<S100>/Logical Operator'
          //   Logic: '<S100>/Logical Operator1'

          Template_v3_03_2020a_DW.Univ_Time =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[0]
            - Template_v3_03_2020a_B.In1_f5;

          // SignalConversion generated from: '<S80>/Send BLACK States to  BLACK Platform' incorporates:
          //   DataStoreWrite: '<S80>/Universal_Time1'

          Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[0] =
            Template_v3_03_2020a_DW.Univ_Time;
          memcpy(&Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[1],
                 &Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData
                 [1], 12U * sizeof(real_T));

          // End of Outputs for SubSystem: '<S76>/Obtain RED States'
        }

        // End of If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
        // End of Outputs for SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' 
        break;
      }

      // End of If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      // End of Outputs for SubSystem: '<S5>/Use Hardware to Obtain States'
      break;

     case 1:
      // Outputs for IfAction SubSystem: '<S5>/Initialize Universal Time (Simulation)' incorporates:
      //   ActionPort: '<S73>/Action Port'

      // Clock: '<S73>/Set Universal Time (If this is a simulation)' incorporates:
      //   DataStoreWrite: '<S73>/Universal_Time'

      Template_v3_03_2020a_DW.Univ_Time = Template_v3_03_2020a_M->Timing.t[0];

      // End of Outputs for SubSystem: '<S5>/Initialize Universal Time (Simulation)' 
      break;
    }

    // End of If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Clock: '<S15>/Set Universal Time (If this is a simulation)'
    Template_v3_03_2020a_B.SetUniversalTimeIfthisisasimula =
      Template_v3_03_2020a_M->Timing.t[0];
  }

  // Matfile logging
  rt_UpdateTXYLogVars(Template_v3_03_2020a_M->rtwLogInfo,
                      (Template_v3_03_2020a_M->Timing.t));

  {
    char_T *sErr;

    // Update for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[0] =
      Template_v3_03_2020a_B.Sum1_j[0];

    // Update for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[0] =
      Template_v3_03_2020a_B.Sum1_k[0];

    // Update for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[0] =
      Template_v3_03_2020a_B.Sum1_b[0];

    // Update for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[0] =
      Template_v3_03_2020a_B.Sum1_d[0];

    // Update for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[0] =
      Template_v3_03_2020a_B.Sum1_g[0];

    // Update for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[0] =
      Template_v3_03_2020a_B.Sum1[0];

    // Update for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[0] = Template_v3_03_2020a_B.Sum3[0];

    // Update for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[0] =
      Template_v3_03_2020a_B.Sum3_k[0];

    // Update for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[0] =
      Template_v3_03_2020a_B.Sum3_f[0];

    // Update for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[0] =
      Template_v3_03_2020a_B.Sum3_b[0];

    // Update for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[0] =
      Template_v3_03_2020a_B.Sum3_c[0];

    // Update for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[0] =
      Template_v3_03_2020a_B.Sum3_n[0];

    // Update for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[1] =
      Template_v3_03_2020a_B.Sum1_j[1];

    // Update for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[1] =
      Template_v3_03_2020a_B.Sum1_k[1];

    // Update for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[1] =
      Template_v3_03_2020a_B.Sum1_b[1];

    // Update for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[1] =
      Template_v3_03_2020a_B.Sum1_d[1];

    // Update for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[1] =
      Template_v3_03_2020a_B.Sum1_g[1];

    // Update for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[1] =
      Template_v3_03_2020a_B.Sum1[1];

    // Update for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[1] = Template_v3_03_2020a_B.Sum3[1];

    // Update for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[1] =
      Template_v3_03_2020a_B.Sum3_k[1];

    // Update for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[1] =
      Template_v3_03_2020a_B.Sum3_f[1];

    // Update for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[1] =
      Template_v3_03_2020a_B.Sum3_b[1];

    // Update for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[1] =
      Template_v3_03_2020a_B.Sum3_c[1];

    // Update for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[1] =
      Template_v3_03_2020a_B.Sum3_n[1];

    // Update for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[2] =
      Template_v3_03_2020a_B.Sum1_j[2];

    // Update for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[2] =
      Template_v3_03_2020a_B.Sum1_k[2];

    // Update for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[2] =
      Template_v3_03_2020a_B.Sum1_b[2];

    // Update for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[2] =
      Template_v3_03_2020a_B.Sum1_d[2];

    // Update for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[2] =
      Template_v3_03_2020a_B.Sum1_g[2];

    // Update for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[2] =
      Template_v3_03_2020a_B.Sum1[2];

    // Update for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[2] = Template_v3_03_2020a_B.Sum3[2];

    // Update for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[2] =
      Template_v3_03_2020a_B.Sum3_k[2];

    // Update for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[2] =
      Template_v3_03_2020a_B.Sum3_f[2];

    // Update for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[2] =
      Template_v3_03_2020a_B.Sum3_b[2];

    // Update for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[2] =
      Template_v3_03_2020a_B.Sum3_c[2];

    // Update for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[2] =
      Template_v3_03_2020a_B.Sum3_n[2];

    // Update for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    if (Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe == 0) {
      // Update for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' incorporates:
      //   ActionPort: '<S75>/Action Port'

      // Update for If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      switch (Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei) {
       case 0:
        // Update for IfAction SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' incorporates:
        //   ActionPort: '<S77>/Action Port'

        // Update for Delay: '<S111>/Delay1'
        Template_v3_03_2020a_DW.icLoad_ezp = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_as =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[1];

        // Update for Delay: '<S114>/Delay1'
        Template_v3_03_2020a_DW.icLoad_gv = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_au =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[4];

        // Update for Delay: '<S112>/Delay1'
        Template_v3_03_2020a_DW.icLoad_en = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_fk =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[2];

        // Update for Delay: '<S115>/Delay1'
        Template_v3_03_2020a_DW.icLoad_f2 = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_kq =
          Template_v3_03_2020a_B.StreamPhaseSpaceData.StreamPhaseSpaceData[5];

        // Update for Delay: '<S113>/Delay1'
        Template_v3_03_2020a_DW.icLoad_db = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_c1 =
          Template_v3_03_2020a_B.Unwrap_g;

        // Update for Delay: '<S116>/Delay1'
        Template_v3_03_2020a_DW.icLoad_es = 0U;
        Template_v3_03_2020a_DW.Delay1_DSTATE_ems =
          Template_v3_03_2020a_B.Unwrap1_o;

        // Update for Delay: '<S117>/Delay'
        Template_v3_03_2020a_DW.Delay_DSTATE_h =
          Template_v3_03_2020a_B.DataTypeConversion_m;

        // End of Update for SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 
        break;

       case 1:
        // Update for IfAction SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' incorporates:
        //   ActionPort: '<S76>/Action Port'

        // Update for If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn == 0) {
          // Update for IfAction SubSystem: '<S76>/Obtain BLACK States' incorporates:
          //   ActionPort: '<S79>/Action Port'

          // Update for Delay: '<S81>/Delay1'
          Template_v3_03_2020a_DW.icLoad_nv = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_bz =
            Template_v3_03_2020a_B.UDPReceive_o1_p[1];

          // Update for Delay: '<S84>/Delay1'
          Template_v3_03_2020a_DW.icLoad_bj = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_mi =
            Template_v3_03_2020a_B.UDPReceive_o1_p[4];

          // Update for Delay: '<S82>/Delay1'
          Template_v3_03_2020a_DW.icLoad_d0 = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_ea =
            Template_v3_03_2020a_B.UDPReceive_o1_p[2];

          // Update for Delay: '<S85>/Delay1'
          Template_v3_03_2020a_DW.icLoad_fjc = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_of =
            Template_v3_03_2020a_B.UDPReceive_o1_p[5];

          // Update for Delay: '<S83>/Delay1'
          Template_v3_03_2020a_DW.icLoad_dyz = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_k2 =
            Template_v3_03_2020a_B.Unwrap_d;

          // Update for Delay: '<S86>/Delay1'
          Template_v3_03_2020a_DW.icLoad_p = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_b2 =
            Template_v3_03_2020a_B.Unwrap1_f;

          // End of Update for SubSystem: '<S76>/Obtain BLACK States'
        }

        // End of Update for If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 

        // Update for If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
        if (Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o == 0) {
          // Update for IfAction SubSystem: '<S76>/Obtain RED States' incorporates:
          //   ActionPort: '<S80>/Action Port'

          // Update for Delay: '<S94>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ku = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_oy =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[1];

          // Update for Delay: '<S97>/Delay1'
          Template_v3_03_2020a_DW.icLoad_h0 = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_cj =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[4];

          // Update for Delay: '<S95>/Delay1'
          Template_v3_03_2020a_DW.icLoad_hc = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_em =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[2];

          // Update for Delay: '<S98>/Delay1'
          Template_v3_03_2020a_DW.icLoad_ez = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_cc =
            Template_v3_03_2020a_B.StreamPhaseSpaceData_p.StreamPhaseSpaceData[5];

          // Update for Delay: '<S96>/Delay1'
          Template_v3_03_2020a_DW.icLoad_os = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_f0 =
            Template_v3_03_2020a_B.Unwrap;

          // Update for Delay: '<S99>/Delay1'
          Template_v3_03_2020a_DW.icLoad_g = 0U;
          Template_v3_03_2020a_DW.Delay1_DSTATE_iu =
            Template_v3_03_2020a_B.Unwrap1;

          // Update for Delay: '<S100>/Delay'
          Template_v3_03_2020a_DW.Delay_DSTATE_l =
            Template_v3_03_2020a_B.DataTypeConversion;

          // Update for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 
          sErr = GetErrorBuffer
            (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U]);
          LibUpdate_Network
            (&Template_v3_03_2020a_DW.SendBLACKStatestoBLACKPlatform_[0U],
             &Template_v3_03_2020a_B.TmpSignalConversionAtSendBLACKS[0U], 13);
          if (*sErr != 0) {
            rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
            rtmSetStopRequested(Template_v3_03_2020a_M, 1);
          }

          // End of Update for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 
          // End of Update for SubSystem: '<S76>/Obtain RED States'
        }

        // End of Update for If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
        // End of Update for SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' 
        break;
      }

      // End of Update for If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
      // End of Update for SubSystem: '<S5>/Use Hardware to Obtain States'
    }

    // End of Update for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 

    // Update for S-Function (sdspToNetwork): '<S15>/UDP Send'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
    LibUpdate_Network(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U],
                      &Template_v3_03_2020a_B.SetUniversalTimeIfthisisasimula, 1);
    if (*sErr != 0) {
      rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
      rtmSetStopRequested(Template_v3_03_2020a_M, 1);
    }

    // End of Update for S-Function (sdspToNetwork): '<S15>/UDP Send'
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
  // MATLABSystem: '<S26>/RED T1 - BLACK T8' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T1 - BLACK T8'

  // MATLABSystem: '<S26>/RED T2 - BLACK T3' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T2 - BLACK T3'

  // MATLABSystem: '<S26>/RED T3' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T3'

  // MATLABSystem: '<S26>/RED T4 - BLACK T5' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T4 - BLACK T5'

  // MATLABSystem: '<S26>/RED T5 - BLACK T4' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T5 - BLACK T4'

  // MATLABSystem: '<S26>/RED T6 - BLACK T7' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T6 - BLACK T7'

  // MATLABSystem: '<S26>/RED T7 - BLACK T6' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T7 - BLACK T6'

  // MATLABSystem: '<S26>/RED T8 - BLACK T1' incorporates:
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

  // End of MATLABSystem: '<S26>/RED T8 - BLACK T1'

  // MATLABSystem: '<S26>/BLACK T2' incorporates:
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

  // End of MATLABSystem: '<S26>/BLACK T2'
  // End of Outputs for SubSystem: '<S3>/Send Commands to PWM Blocks'

  // If: '<S4>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
  //   Constant: '<S4>/Constant'
  //   Constant: '<S57>/Constant'

  if ((Template_v3_03_2020a_P.WhoAmI == 1.0) || (Template_v3_03_2020a_P.simMode ==
       1.0)) {
    // Outputs for IfAction SubSystem: '<S4>/Change RED Behavior' incorporates:
    //   ActionPort: '<S56>/Action Port'

    // Saturate: '<S58>/Saturate Torque'
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

    // End of Saturate: '<S58>/Saturate Torque'

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    // MATLABSystem: '<S70>/Digital Read'
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

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Sum: '<S58>/Sum' incorporates:
    //   DataStoreWrite: '<S56>/RED_Tz_RW_Sat'
    //   Delay: '<S58>/Delay'
    //   MATLAB Function: '<S58>/Calculate RW RPM Increment'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal/Calculate RW RPM Increment': '<S60>:1' 
    // '<S60>:1:3' dRPM_RW =  (Tz_Sat/0.007244720)*(60/2/pi)*0.1;
    sampleTime = Template_v3_03_2020a_DW.RED_Tz_RW_Sat / 0.00724472 *
      9.5492965855137211 * 0.1 + Template_v3_03_2020a_DW.Delay_DSTATE;

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    // MATLAB Function: '<S59>/Check if RW is Ready' incorporates:
    //   DataStoreWrite: '<S59>/RED_RW_Speed'
    //   Delay: '<S63>/Delay1'
    //   Delay: '<S63>/Delay2'
    //   Delay: '<S63>/Delay3'
    //   Delay: '<S63>/Delay4'
    //   Delay: '<S63>/Delay5'
    //   MATLABSystem: '<S70>/Digital Read'
    //   MinMax: '<S63>/Mostly zeros?'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Check if RW is Ready': '<S61>:1' 
    // '<S61>:1:3' if Status == 0
    if ((!rtb_DigitalRead_0) || (!Template_v3_03_2020a_DW.Delay1_DSTATE_kt) || (
         !Template_v3_03_2020a_DW.Delay2_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay5_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay3_DSTATE[0U]) ||
        (!Template_v3_03_2020a_DW.Delay4_DSTATE[0U])) {
      // '<S61>:1:4' EnableSig    = 1;
      rtb_EnableSig = 1;

      // '<S61>:1:5' WheelRPM_Out = WheelRPM_In;
      Template_v3_03_2020a_DW.RED_dRz_RW_Sat = sampleTime;
    } else {
      // '<S61>:1:6' else
      // '<S61>:1:7' EnableSig    = 0;
      rtb_EnableSig = 0;

      // '<S61>:1:8' WheelRPM_Out = 0;
      Template_v3_03_2020a_DW.RED_dRz_RW_Sat = 0.0;
    }

    // End of MATLAB Function: '<S59>/Check if RW is Ready'
    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Product: '<S62>/Divide' incorporates:
    //   Constant: '<S62>/Gearbox  Ratio'
    //   DataStoreWrite: '<S59>/RED_RW_Speed'

    rtb_SaturateMotor = Template_v3_03_2020a_DW.RED_dRz_RW_Sat *
      Template_v3_03_2020a_P.GearboxRatio_Value;

    // Saturate: '<S59>/Saturate Motor'
    if (rtb_SaturateMotor > Template_v3_03_2020a_P.SaturateMotor_UpperSat) {
      rtb_SaturateMotor = Template_v3_03_2020a_P.SaturateMotor_UpperSat;
    } else {
      if (rtb_SaturateMotor < Template_v3_03_2020a_P.SaturateMotor_LowerSat) {
        rtb_SaturateMotor = Template_v3_03_2020a_P.SaturateMotor_LowerSat;
      }
    }

    // End of Saturate: '<S59>/Saturate Motor'

    // MATLAB Function: '<S59>/Get RW Direction'
    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Get RW Direction': '<S64>:1' 
    // '<S64>:1:3' if MotorRPM_Sat > 0
    if (rtb_SaturateMotor > 0.0) {
      // '<S64>:1:4' WheelDirection = 0;
      rtb_WheelDirection = 0;
    } else {
      // '<S64>:1:5' else
      // '<S64>:1:6' WheelDirection = 1;
      rtb_WheelDirection = 1;
    }

    // End of MATLAB Function: '<S59>/Get RW Direction'

    // Outputs for Atomic SubSystem: '<S59>/Send Direction to Motor Controller'
    // MATLABSystem: '<S71>/Digital Write'
    MW_gpioWrite(21U, static_cast<uint8_T>(rtb_WheelDirection));

    // End of Outputs for SubSystem: '<S59>/Send Direction to Motor Controller'

    // MATLAB Function: '<S59>/RPM to PWM Value' incorporates:
    //   Abs: '<S59>/Abs'

    // MATLAB Function 'From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/RPM to PWM Value': '<S66>:1' 
    // '<S66>:1:3' PWMRange = 0.9-0.1;
    // '<S66>:1:5' MotorPWM = ((MotorRPM_Sat*PWMRange)/7000) + 0.1;
    rtb_SaturateMotor = fabs(rtb_SaturateMotor) * 0.8 / 7000.0 + 0.1;

    // Outputs for Atomic SubSystem: '<S59>/Send PWM to Motor Controller'
    // MATLABSystem: '<S68>/PWM1'
    if (!(rtb_SaturateMotor < 1.0)) {
      rtb_SaturateMotor = 1.0;
    }

    EXT_PWMBlock_setDutyCycle(Template_v3_03_2020a_DW.obj_d.PinNumber,
      rtb_SaturateMotor);

    // End of MATLABSystem: '<S68>/PWM1'
    // End of Outputs for SubSystem: '<S59>/Send PWM to Motor Controller'

    // Outputs for Atomic SubSystem: '<S59>/Turn on Motor'
    // MATLABSystem: '<S72>/Digital Write'
    MW_gpioWrite(25U, static_cast<uint8_T>(rtb_EnableSig));

    // End of Outputs for SubSystem: '<S59>/Turn on Motor'

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    // Update for Delay: '<S63>/Delay1' incorporates:
    //   MATLABSystem: '<S70>/Digital Read'

    Template_v3_03_2020a_DW.Delay1_DSTATE_kt = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Update for Delay: '<S63>/Delay2' incorporates:
    //   MATLABSystem: '<S70>/Digital Read'

    Template_v3_03_2020a_DW.Delay2_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay2_DSTATE[1];

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay2_DSTATE[1] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Update for Delay: '<S63>/Delay5' incorporates:
    //   MATLABSystem: '<S70>/Digital Read'

    Template_v3_03_2020a_DW.Delay5_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay5_DSTATE[1];
    Template_v3_03_2020a_DW.Delay5_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay5_DSTATE[2];

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay5_DSTATE[2] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Update for Delay: '<S63>/Delay3' incorporates:
    //   MATLABSystem: '<S70>/Digital Read'

    Template_v3_03_2020a_DW.Delay3_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[1];
    Template_v3_03_2020a_DW.Delay3_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[2];
    Template_v3_03_2020a_DW.Delay3_DSTATE[2] =
      Template_v3_03_2020a_DW.Delay3_DSTATE[3];

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay3_DSTATE[3] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Update for Delay: '<S63>/Delay4' incorporates:
    //   MATLABSystem: '<S70>/Digital Read'

    Template_v3_03_2020a_DW.Delay4_DSTATE[0] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[1];
    Template_v3_03_2020a_DW.Delay4_DSTATE[1] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[2];
    Template_v3_03_2020a_DW.Delay4_DSTATE[2] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[3];
    Template_v3_03_2020a_DW.Delay4_DSTATE[3] =
      Template_v3_03_2020a_DW.Delay4_DSTATE[4];

    // Outputs for Atomic SubSystem: '<S59>/Obtain RW Status'
    Template_v3_03_2020a_DW.Delay4_DSTATE[4] = rtb_DigitalRead_0;

    // End of Outputs for SubSystem: '<S59>/Obtain RW Status'

    // Saturate: '<S58>/Saturate RPM'
    if (sampleTime > Template_v3_03_2020a_P.SaturateRPM_UpperSat) {
      // Update for Delay: '<S58>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE =
        Template_v3_03_2020a_P.SaturateRPM_UpperSat;
    } else if (sampleTime < Template_v3_03_2020a_P.SaturateRPM_LowerSat) {
      // Update for Delay: '<S58>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE =
        Template_v3_03_2020a_P.SaturateRPM_LowerSat;
    } else {
      // Update for Delay: '<S58>/Delay'
      Template_v3_03_2020a_DW.Delay_DSTATE = sampleTime;
    }

    // End of Saturate: '<S58>/Saturate RPM'
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
  rtmSetTFinal(Template_v3_03_2020a_M, 191.0);
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

  // Matfile logging
  rt_StartDataLoggingWithStartTime(Template_v3_03_2020a_M->rtwLogInfo, 0.0,
    rtmGetTFinal(Template_v3_03_2020a_M),
    Template_v3_03_2020a_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Template_v3_03_2020a_M)));

  {
    char_T *sErr;
    int32_T ret;
    uint32_T tseed;
    int32_T t;
    static const char_T tmp[45] =
      "Unable to configure pin %u for PWM output.\\n";

    // SetupRuntimeResources for ToWorkspace: '<S1>/To Workspace'
    {
      int_T dimensions[1] = { 40 };

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
        40,
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

    // Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive1'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U], 0,
                        "0.0.0.0", Template_v3_03_2020a_P.UDPReceive1_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive1'

    // Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U], 0,
                        "0.0.0.0", Template_v3_03_2020a_P.UDPReceive_Port_e,
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

    // End of Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive'

    // Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive2'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U], 0,
                        "0.0.0.0", Template_v3_03_2020a_P.UDPReceive2_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S6>/UDP Receive2'

    // Start for If: '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
    Template_v3_03_2020a_DW.Ifperforminganexperimentgrabthe = -1;

    // Start for S-Function (sdspToNetwork): '<S15>/UDP Send'
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

    // End of Start for S-Function (sdspToNetwork): '<S15>/UDP Send'

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

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k4;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[0] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_ji;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[0] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k4;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[1] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_ji;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[1] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_e;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_m[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_o[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_p[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_k4;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_d[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_l;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay1'
    Template_v3_03_2020a_DW.UnitDelay1_DSTATE_ot[2] =
      Template_v3_03_2020a_P.UnitDelay1_InitialCondition_a;

    // InitializeConditions for UnitDelay: '<S136>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S138>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_n[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_j;

    // InitializeConditions for UnitDelay: '<S140>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_p[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_g;

    // InitializeConditions for UnitDelay: '<S142>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_c[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_ji;

    // InitializeConditions for UnitDelay: '<S144>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_j[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_b;

    // InitializeConditions for UnitDelay: '<S146>/Unit Delay2'
    Template_v3_03_2020a_DW.UnitDelay2_DSTATE_d[2] =
      Template_v3_03_2020a_P.UnitDelay2_InitialCondition_e;

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 
    // SystemInitialize for IfAction SubSystem: '<S10>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S166>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ns = 1U;

    // InitializeConditions for Delay: '<S168>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k1 = 1U;

    // InitializeConditions for Delay: '<S164>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ep = 1U;

    // SystemInitialize for IfAction SubSystem: '<S166>/Hold this value'
    // SystemInitialize for Outport: '<S167>/Out1'
    Template_v3_03_2020a_B.In1_e = Template_v3_03_2020a_P.Out1_Y0_av;

    // End of SystemInitialize for SubSystem: '<S166>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S168>/Hold this value'
    // SystemInitialize for Outport: '<S169>/Out1'
    Template_v3_03_2020a_B.In1_gc = Template_v3_03_2020a_P.Out1_Y0_g;

    // End of SystemInitialize for SubSystem: '<S168>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S164>/Hold this value'
    // SystemInitialize for Outport: '<S165>/Out1'
    Template_v3_03_2020a_B.In1_fa = Template_v3_03_2020a_P.Out1_Y0_mp;

    // End of SystemInitialize for SubSystem: '<S164>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S10>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S10>/Change BLUE Behavior'
    // InitializeConditions for Delay: '<S179>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dy = 1U;

    // InitializeConditions for Delay: '<S181>/Delay1'
    Template_v3_03_2020a_DW.icLoad_hf = 1U;

    // InitializeConditions for Delay: '<S177>/Delay1'
    Template_v3_03_2020a_DW.icLoad_kl = 1U;

    // SystemInitialize for IfAction SubSystem: '<S179>/Hold this value'
    // SystemInitialize for Outport: '<S180>/Out1'
    Template_v3_03_2020a_B.In1_lc = Template_v3_03_2020a_P.Out1_Y0_a4;

    // End of SystemInitialize for SubSystem: '<S179>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S181>/Hold this value'
    // SystemInitialize for Outport: '<S182>/Out1'
    Template_v3_03_2020a_B.In1_jwx = Template_v3_03_2020a_P.Out1_Y0_nv;

    // End of SystemInitialize for SubSystem: '<S181>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S177>/Hold this value'
    // SystemInitialize for Outport: '<S178>/Out1'
    Template_v3_03_2020a_B.In1_ov = Template_v3_03_2020a_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S177>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S10>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S10>/Change RED Behavior'
    // InitializeConditions for Delay: '<S190>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ji = 1U;

    // InitializeConditions for Delay: '<S192>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a1 = 1U;

    // InitializeConditions for Delay: '<S194>/Delay1'
    Template_v3_03_2020a_DW.icLoad_o0 = 1U;

    // SystemInitialize for IfAction SubSystem: '<S190>/Hold this value'
    // SystemInitialize for Outport: '<S191>/Out1'
    Template_v3_03_2020a_B.In1_k = Template_v3_03_2020a_P.Out1_Y0_fr;

    // End of SystemInitialize for SubSystem: '<S190>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S192>/Hold this value'
    // SystemInitialize for Outport: '<S193>/Out1'
    Template_v3_03_2020a_B.In1_cr = Template_v3_03_2020a_P.Out1_Y0_bk;

    // End of SystemInitialize for SubSystem: '<S192>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S194>/Hold this value'
    // SystemInitialize for Outport: '<S195>/Out1'
    Template_v3_03_2020a_B.In1_if = Template_v3_03_2020a_P.Out1_Y0_j2;

    // End of SystemInitialize for SubSystem: '<S194>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S10>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #2:  Move to  Initial Position' 

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #3: Experiment'
    // SystemInitialize for IfAction SubSystem: '<S11>/Change BLACK Behavior'
    // SystemInitialize for IfAction SubSystem: '<S199>/Sub-Phase #1'
    // InitializeConditions for Delay: '<S214>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ot = 1U;

    // InitializeConditions for Delay: '<S216>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k = 1U;

    // InitializeConditions for Delay: '<S212>/Delay1'
    Template_v3_03_2020a_DW.icLoad_l = 1U;

    // SystemInitialize for IfAction SubSystem: '<S214>/Hold this value'
    // SystemInitialize for Outport: '<S215>/Out1'
    Template_v3_03_2020a_B.In1_cw = Template_v3_03_2020a_P.Out1_Y0_bd;

    // End of SystemInitialize for SubSystem: '<S214>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S216>/Hold this value'
    // SystemInitialize for Outport: '<S217>/Out1'
    Template_v3_03_2020a_B.In1_ly = Template_v3_03_2020a_P.Out1_Y0_ai;

    // End of SystemInitialize for SubSystem: '<S216>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S212>/Hold this value'
    // SystemInitialize for Outport: '<S213>/Out1'
    Template_v3_03_2020a_B.In1_ab = Template_v3_03_2020a_P.Out1_Y0_pn;

    // End of SystemInitialize for SubSystem: '<S212>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S199>/Sub-Phase #1'

    // SystemInitialize for IfAction SubSystem: '<S199>/Sub-Phase #4'
    // InitializeConditions for Delay: '<S231>/Delay1'
    Template_v3_03_2020a_DW.icLoad_b = 1U;

    // InitializeConditions for Delay: '<S233>/Delay1'
    Template_v3_03_2020a_DW.icLoad_n5 = 1U;

    // InitializeConditions for Delay: '<S229>/Delay1'
    Template_v3_03_2020a_DW.icLoad_fj = 1U;

    // SystemInitialize for IfAction SubSystem: '<S231>/Hold this value'
    // SystemInitialize for Outport: '<S232>/Out1'
    Template_v3_03_2020a_B.In1_bd = Template_v3_03_2020a_P.Out1_Y0_bw;

    // End of SystemInitialize for SubSystem: '<S231>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S233>/Hold this value'
    // SystemInitialize for Outport: '<S234>/Out1'
    Template_v3_03_2020a_B.In1_l = Template_v3_03_2020a_P.Out1_Y0_ac;

    // End of SystemInitialize for SubSystem: '<S233>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S229>/Hold this value'
    // SystemInitialize for Outport: '<S230>/Out1'
    Template_v3_03_2020a_B.In1_gd = Template_v3_03_2020a_P.Out1_Y0_ln;

    // End of SystemInitialize for SubSystem: '<S229>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S199>/Sub-Phase #4'
    // End of SystemInitialize for SubSystem: '<S11>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S11>/Change BLUE Behavior'
    // SystemInitialize for IfAction SubSystem: '<S200>/Sub-Phase #1'
    Template_v3__SubPhase1_Init(&Template_v3_03_2020a_B.SubPhase1_a,
      &Template_v3_03_2020a_DW.SubPhase1_a, &Template_v3_03_2020a_P.SubPhase1_a);

    // End of SystemInitialize for SubSystem: '<S200>/Sub-Phase #1'

    // SystemInitialize for IfAction SubSystem: '<S200>/Sub-Phase #4'
    Template_v3__SubPhase1_Init(&Template_v3_03_2020a_B.SubPhase4_f,
      &Template_v3_03_2020a_DW.SubPhase4_f, &Template_v3_03_2020a_P.SubPhase4_f);

    // End of SystemInitialize for SubSystem: '<S200>/Sub-Phase #4'
    // End of SystemInitialize for SubSystem: '<S11>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S11>/Change RED Behavior'
    // SystemInitialize for IfAction SubSystem: '<S201>/Sub-Phase #1'
    // InitializeConditions for Delay: '<S278>/Delay1'
    Template_v3_03_2020a_DW.icLoad_n = 1U;

    // InitializeConditions for Delay: '<S280>/Delay1'
    Template_v3_03_2020a_DW.icLoad_er = 1U;

    // InitializeConditions for Delay: '<S282>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ej = 1U;

    // SystemInitialize for IfAction SubSystem: '<S278>/Hold this value'
    // SystemInitialize for Outport: '<S279>/Out1'
    Template_v3_03_2020a_B.In1_n = Template_v3_03_2020a_P.Out1_Y0_at;

    // End of SystemInitialize for SubSystem: '<S278>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S280>/Hold this value'
    // SystemInitialize for Outport: '<S281>/Out1'
    Template_v3_03_2020a_B.In1_jwe = Template_v3_03_2020a_P.Out1_Y0_dw;

    // End of SystemInitialize for SubSystem: '<S280>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S282>/Hold this value'
    // SystemInitialize for Outport: '<S283>/Out1'
    Template_v3_03_2020a_B.In1_jw = Template_v3_03_2020a_P.Out1_Y0_jd;

    // End of SystemInitialize for SubSystem: '<S282>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S201>/Sub-Phase #1'

    // SystemInitialize for IfAction SubSystem: '<S201>/Sub-Phase #4'
    // InitializeConditions for Delay: '<S295>/Delay1'
    Template_v3_03_2020a_DW.icLoad_c = 1U;

    // InitializeConditions for Delay: '<S297>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a3 = 1U;

    // InitializeConditions for Delay: '<S299>/Delay1'
    Template_v3_03_2020a_DW.icLoad_my = 1U;

    // SystemInitialize for IfAction SubSystem: '<S295>/Hold this value'
    // SystemInitialize for Outport: '<S296>/Out1'
    Template_v3_03_2020a_B.In1_ow = Template_v3_03_2020a_P.Out1_Y0_gm;

    // End of SystemInitialize for SubSystem: '<S295>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S297>/Hold this value'
    // SystemInitialize for Outport: '<S298>/Out1'
    Template_v3_03_2020a_B.In1_o = Template_v3_03_2020a_P.Out1_Y0_eb;

    // End of SystemInitialize for SubSystem: '<S297>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S299>/Hold this value'
    // SystemInitialize for Outport: '<S300>/Out1'
    Template_v3_03_2020a_B.In1_a = Template_v3_03_2020a_P.Out1_Y0_hc;

    // End of SystemInitialize for SubSystem: '<S299>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S201>/Sub-Phase #4'
    // End of SystemInitialize for SubSystem: '<S11>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #3: Experiment'

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #4:  Return Home'
    // SystemInitialize for IfAction SubSystem: '<S12>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S314>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dq = 1U;

    // InitializeConditions for Delay: '<S316>/Delay1'
    Template_v3_03_2020a_DW.icLoad_h = 1U;

    // InitializeConditions for Delay: '<S312>/Delay1'
    Template_v3_03_2020a_DW.icLoad_o = 1U;

    // SystemInitialize for IfAction SubSystem: '<S314>/Hold this value'
    // SystemInitialize for Outport: '<S315>/Out1'
    Template_v3_03_2020a_B.In1_fx = Template_v3_03_2020a_P.Out1_Y0_mr;

    // End of SystemInitialize for SubSystem: '<S314>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S316>/Hold this value'
    // SystemInitialize for Outport: '<S317>/Out1'
    Template_v3_03_2020a_B.In1_d0 = Template_v3_03_2020a_P.Out1_Y0_i0;

    // End of SystemInitialize for SubSystem: '<S316>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S312>/Hold this value'
    // SystemInitialize for Outport: '<S313>/Out1'
    Template_v3_03_2020a_B.In1_fk = Template_v3_03_2020a_P.Out1_Y0_jr;

    // End of SystemInitialize for SubSystem: '<S312>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S12>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S12>/Change BLUE Behavior'
    T_ChangeBLUEBehavior_c_Init(&Template_v3_03_2020a_B.ChangeBLUEBehavior_gj,
      &Template_v3_03_2020a_DW.ChangeBLUEBehavior_gj,
      &Template_v3_03_2020a_P.ChangeBLUEBehavior_gj);

    // End of SystemInitialize for SubSystem: '<S12>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S12>/Change RED Behavior'
    // InitializeConditions for Delay: '<S338>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dh = 1U;

    // InitializeConditions for Delay: '<S340>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a2 = 1U;

    // InitializeConditions for Delay: '<S342>/Delay1'
    Template_v3_03_2020a_DW.icLoad_f = 1U;

    // SystemInitialize for IfAction SubSystem: '<S338>/Hold this value'
    // SystemInitialize for Outport: '<S339>/Out1'
    Template_v3_03_2020a_B.In1_h = Template_v3_03_2020a_P.Out1_Y0_nf;

    // End of SystemInitialize for SubSystem: '<S338>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S340>/Hold this value'
    // SystemInitialize for Outport: '<S341>/Out1'
    Template_v3_03_2020a_B.In1_b = Template_v3_03_2020a_P.Out1_Y0_gb;

    // End of SystemInitialize for SubSystem: '<S340>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S342>/Hold this value'
    // SystemInitialize for Outport: '<S343>/Out1'
    Template_v3_03_2020a_B.In1_f = Template_v3_03_2020a_P.Out1_Y0_da;

    // End of SystemInitialize for SubSystem: '<S342>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S12>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #4:  Return Home'

    // SystemInitialize for IfAction SubSystem: '<Root>/Phase #5:  Hold Home'
    // SystemInitialize for IfAction SubSystem: '<S13>/Change BLACK Behavior'
    // InitializeConditions for Delay: '<S357>/Delay1'
    Template_v3_03_2020a_DW.icLoad_e = 1U;

    // InitializeConditions for Delay: '<S359>/Delay1'
    Template_v3_03_2020a_DW.icLoad_m = 1U;

    // InitializeConditions for Delay: '<S355>/Delay1'
    Template_v3_03_2020a_DW.icLoad_d = 1U;

    // SystemInitialize for IfAction SubSystem: '<S357>/Hold this value'
    // SystemInitialize for Outport: '<S358>/Out1'
    Template_v3_03_2020a_B.In1_i = Template_v3_03_2020a_P.Out1_Y0_fj;

    // End of SystemInitialize for SubSystem: '<S357>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S359>/Hold this value'
    // SystemInitialize for Outport: '<S360>/Out1'
    Template_v3_03_2020a_B.In1_c = Template_v3_03_2020a_P.Out1_Y0_bm;

    // End of SystemInitialize for SubSystem: '<S359>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S355>/Hold this value'
    // SystemInitialize for Outport: '<S356>/Out1'
    Template_v3_03_2020a_B.In1_g = Template_v3_03_2020a_P.Out1_Y0_gx;

    // End of SystemInitialize for SubSystem: '<S355>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S13>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S13>/Change BLUE Behavior'
    T_ChangeBLUEBehavior_c_Init(&Template_v3_03_2020a_B.ChangeBLUEBehavior_b,
      &Template_v3_03_2020a_DW.ChangeBLUEBehavior_b,
      &Template_v3_03_2020a_P.ChangeBLUEBehavior_b);

    // End of SystemInitialize for SubSystem: '<S13>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S13>/Change RED Behavior'
    // InitializeConditions for Delay: '<S383>/Delay1'
    Template_v3_03_2020a_DW.icLoad = 1U;

    // InitializeConditions for Delay: '<S385>/Delay1'
    Template_v3_03_2020a_DW.icLoad_j = 1U;

    // InitializeConditions for Delay: '<S381>/Delay1'
    Template_v3_03_2020a_DW.icLoad_a = 1U;

    // SystemInitialize for IfAction SubSystem: '<S383>/Hold this value'
    // SystemInitialize for Outport: '<S384>/Out1'
    Template_v3_03_2020a_B.In1_j = Template_v3_03_2020a_P.Out1_Y0_bs;

    // End of SystemInitialize for SubSystem: '<S383>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S385>/Hold this value'
    // SystemInitialize for Outport: '<S386>/Out1'
    Template_v3_03_2020a_B.In1 = Template_v3_03_2020a_P.Out1_Y0_c5;

    // End of SystemInitialize for SubSystem: '<S385>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S381>/Hold this value'
    // SystemInitialize for Outport: '<S382>/Out1'
    Template_v3_03_2020a_B.In1_d = Template_v3_03_2020a_P.Out1_Y0_i3;

    // End of SystemInitialize for SubSystem: '<S381>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S13>/Change RED Behavior'
    // End of SystemInitialize for SubSystem: '<Root>/Phase #5:  Hold Home'

    // SystemInitialize for IfAction SubSystem: '<Root>/Simulate Plant Dynamics' 
    // InitializeConditions for DiscreteIntegrator: '<S394>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[0] =
      Template_v3_03_2020a_P.drop_states_BLACK[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[1] =
      Template_v3_03_2020a_P.drop_states_BLACK[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE[2] =
      Template_v3_03_2020a_P.drop_states_BLACK[2];

    // InitializeConditions for RandomNumber: '<S394>/Random Number'
    Template_v3_03_2020a_B.d = floor(Template_v3_03_2020a_P.RandomNumber_Seed);
    if (rtIsNaN(Template_v3_03_2020a_B.d) || rtIsInf(Template_v3_03_2020a_B.d))
    {
      Template_v3_03_2020a_B.d = 0.0;
    } else {
      Template_v3_03_2020a_B.d = fmod(Template_v3_03_2020a_B.d, 4.294967296E+9);
    }

    tseed = Template_v3_03_2020a_B.d < 0.0 ? static_cast<uint32_T>
      (-static_cast<int32_T>(static_cast<uint32_T>(-Template_v3_03_2020a_B.d))) :
      static_cast<uint32_T>(Template_v3_03_2020a_B.d);
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

    // End of InitializeConditions for RandomNumber: '<S394>/Random Number'

    // InitializeConditions for Delay: '<S405>/Delay1'
    Template_v3_03_2020a_DW.icLoad_kp = 1U;

    // InitializeConditions for Delay: '<S403>/Delay1'
    Template_v3_03_2020a_DW.icLoad_k3 = 1U;

    // InitializeConditions for Delay: '<S404>/Delay1'
    Template_v3_03_2020a_DW.icLoad_jz = 1U;

    // InitializeConditions for DiscreteIntegrator: '<S395>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[0] =
      Template_v3_03_2020a_P.drop_states_BLUE[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[1] =
      Template_v3_03_2020a_P.drop_states_BLUE[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_a[2] =
      Template_v3_03_2020a_P.drop_states_BLUE[2];

    // InitializeConditions for RandomNumber: '<S395>/Random Number'
    Template_v3_03_2020a_B.d = floor(Template_v3_03_2020a_P.RandomNumber_Seed_k);
    if (rtIsNaN(Template_v3_03_2020a_B.d) || rtIsInf(Template_v3_03_2020a_B.d))
    {
      Template_v3_03_2020a_B.d = 0.0;
    } else {
      Template_v3_03_2020a_B.d = fmod(Template_v3_03_2020a_B.d, 4.294967296E+9);
    }

    tseed = Template_v3_03_2020a_B.d < 0.0 ? static_cast<uint32_T>
      (-static_cast<int32_T>(static_cast<uint32_T>(-Template_v3_03_2020a_B.d))) :
      static_cast<uint32_T>(Template_v3_03_2020a_B.d);
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

    // End of InitializeConditions for RandomNumber: '<S395>/Random Number'

    // InitializeConditions for Delay: '<S408>/Delay1'
    Template_v3_03_2020a_DW.icLoad_cs = 1U;

    // InitializeConditions for Delay: '<S406>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dc = 1U;

    // InitializeConditions for Delay: '<S407>/Delay1'
    Template_v3_03_2020a_DW.icLoad_nu = 1U;

    // InitializeConditions for DiscreteIntegrator: '<S396>/Velocity to Position' 
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[0] =
      Template_v3_03_2020a_P.drop_states_RED[0];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[1] =
      Template_v3_03_2020a_P.drop_states_RED[1];
    Template_v3_03_2020a_DW.VelocitytoPosition_DSTATE_f[2] =
      Template_v3_03_2020a_P.drop_states_RED[2];

    // InitializeConditions for RandomNumber: '<S396>/Random Number'
    Template_v3_03_2020a_B.d = floor(Template_v3_03_2020a_P.RandomNumber_Seed_i);
    if (rtIsNaN(Template_v3_03_2020a_B.d) || rtIsInf(Template_v3_03_2020a_B.d))
    {
      Template_v3_03_2020a_B.d = 0.0;
    } else {
      Template_v3_03_2020a_B.d = fmod(Template_v3_03_2020a_B.d, 4.294967296E+9);
    }

    tseed = Template_v3_03_2020a_B.d < 0.0 ? static_cast<uint32_T>
      (-static_cast<int32_T>(static_cast<uint32_T>(-Template_v3_03_2020a_B.d))) :
      static_cast<uint32_T>(Template_v3_03_2020a_B.d);
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

    // End of InitializeConditions for RandomNumber: '<S396>/Random Number'

    // InitializeConditions for Delay: '<S402>/Delay1'
    Template_v3_03_2020a_DW.icLoad_mt = 1U;

    // InitializeConditions for Delay: '<S400>/Delay1'
    Template_v3_03_2020a_DW.icLoad_bq = 1U;

    // InitializeConditions for Delay: '<S401>/Delay1'
    Template_v3_03_2020a_DW.icLoad_cn = 1U;

    // SystemInitialize for IfAction SubSystem: '<S403>/Hold this value'
    // SystemInitialize for Outport: '<S421>/Out1'
    Template_v3_03_2020a_B.In1_k4 = Template_v3_03_2020a_P.Out1_Y0_c;

    // End of SystemInitialize for SubSystem: '<S403>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S404>/Hold this value'
    // SystemInitialize for Outport: '<S422>/Out1'
    Template_v3_03_2020a_B.In1_ey = Template_v3_03_2020a_P.Out1_Y0_j;

    // End of SystemInitialize for SubSystem: '<S404>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S405>/Hold this value'
    // SystemInitialize for Outport: '<S423>/Out1'
    Template_v3_03_2020a_B.In1_m = Template_v3_03_2020a_P.Out1_Y0_l;

    // End of SystemInitialize for SubSystem: '<S405>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S406>/Hold this value'
    // SystemInitialize for Outport: '<S424>/Out1'
    Template_v3_03_2020a_B.In1_ad = Template_v3_03_2020a_P.Out1_Y0_ia;

    // End of SystemInitialize for SubSystem: '<S406>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S407>/Hold this value'
    // SystemInitialize for Outport: '<S425>/Out1'
    Template_v3_03_2020a_B.In1_ac = Template_v3_03_2020a_P.Out1_Y0_bgo;

    // End of SystemInitialize for SubSystem: '<S407>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S408>/Hold this value'
    // SystemInitialize for Outport: '<S426>/Out1'
    Template_v3_03_2020a_B.In1_jt = Template_v3_03_2020a_P.Out1_Y0_kc;

    // End of SystemInitialize for SubSystem: '<S408>/Hold this value'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[0] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S397>/Sample and Hold1'
    // SystemInitialize for Outport: '<S413>/ '
    Template_v3_03_2020a_B.In_n[0] = Template_v3_03_2020a_P._Y0[0];

    // End of SystemInitialize for SubSystem: '<S397>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S398>/Sample and Hold1'
    // SystemInitialize for Outport: '<S415>/ '
    Template_v3_03_2020a_B.In_p[0] = Template_v3_03_2020a_P._Y0_g[0];

    // End of SystemInitialize for SubSystem: '<S398>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S399>/Sample and Hold'
    // SystemInitialize for Outport: '<S417>/ '
    Template_v3_03_2020a_B.In[0] = Template_v3_03_2020a_P._Y0_l[0];

    // End of SystemInitialize for SubSystem: '<S399>/Sample and Hold'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[1] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S397>/Sample and Hold1'
    // SystemInitialize for Outport: '<S413>/ '
    Template_v3_03_2020a_B.In_n[1] = Template_v3_03_2020a_P._Y0[1];

    // End of SystemInitialize for SubSystem: '<S397>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S398>/Sample and Hold1'
    // SystemInitialize for Outport: '<S415>/ '
    Template_v3_03_2020a_B.In_p[1] = Template_v3_03_2020a_P._Y0_g[1];

    // End of SystemInitialize for SubSystem: '<S398>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S399>/Sample and Hold'
    // SystemInitialize for Outport: '<S417>/ '
    Template_v3_03_2020a_B.In[1] = Template_v3_03_2020a_P._Y0_l[1];

    // End of SystemInitialize for SubSystem: '<S399>/Sample and Hold'

    // InitializeConditions for DiscreteIntegrator: '<S394>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC;

    // InitializeConditions for DiscreteIntegrator: '<S395>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_b[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_p;

    // InitializeConditions for DiscreteIntegrator: '<S396>/Acceleration  to Velocity' 
    Template_v3_03_2020a_DW.AccelerationtoVelocity_DSTATE_m[2] =
      Template_v3_03_2020a_P.AccelerationtoVelocity_IC_c;

    // SystemInitialize for Triggered SubSystem: '<S397>/Sample and Hold1'
    // SystemInitialize for Outport: '<S413>/ '
    Template_v3_03_2020a_B.In_n[2] = Template_v3_03_2020a_P._Y0[2];

    // End of SystemInitialize for SubSystem: '<S397>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S398>/Sample and Hold1'
    // SystemInitialize for Outport: '<S415>/ '
    Template_v3_03_2020a_B.In_p[2] = Template_v3_03_2020a_P._Y0_g[2];

    // End of SystemInitialize for SubSystem: '<S398>/Sample and Hold1'

    // SystemInitialize for Triggered SubSystem: '<S399>/Sample and Hold'
    // SystemInitialize for Outport: '<S417>/ '
    Template_v3_03_2020a_B.In[2] = Template_v3_03_2020a_P._Y0_l[2];

    // End of SystemInitialize for SubSystem: '<S399>/Sample and Hold'

    // SystemInitialize for IfAction SubSystem: '<S400>/Hold this value'
    // SystemInitialize for Outport: '<S418>/Out1'
    Template_v3_03_2020a_B.In1_nu = Template_v3_03_2020a_P.Out1_Y0_dj;

    // End of SystemInitialize for SubSystem: '<S400>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S401>/Hold this value'
    // SystemInitialize for Outport: '<S419>/Out1'
    Template_v3_03_2020a_B.In1_af = Template_v3_03_2020a_P.Out1_Y0_kb;

    // End of SystemInitialize for SubSystem: '<S401>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S402>/Hold this value'
    // SystemInitialize for Outport: '<S420>/Out1'
    Template_v3_03_2020a_B.In1_o1 = Template_v3_03_2020a_P.Out1_Y0_pm;

    // End of SystemInitialize for SubSystem: '<S402>/Hold this value'
    // End of SystemInitialize for SubSystem: '<Root>/Simulate Plant Dynamics'

    // SystemInitialize for IfAction SubSystem: '<S2>/Change RED Behavior'
    // Start for MATLABSystem: '<S20>/Digital Write'
    Template_v3_03_2020a_DW.obj_i.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_i.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_i.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_i.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_i.isInitialized = 1;
    MW_gpioInit(10U, true);
    Template_v3_03_2020a_DW.obj_i.isSetupComplete = true;

    // Start for MATLABSystem: '<S21>/Digital Write'
    Template_v3_03_2020a_DW.obj_a.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_a.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_a.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_a.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_a.isInitialized = 1;
    MW_gpioInit(26U, true);
    Template_v3_03_2020a_DW.obj_a.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S2>/Change RED Behavior'

    // SystemInitialize for Atomic SubSystem: '<S3>/Send Commands to PWM Blocks' 
    // Start for MATLABSystem: '<S26>/RED T1 - BLACK T8'
    Template_v3_03_2020a_DW.obj_m.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_m.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_m.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_m.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_m.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_m.PinNumber = 27U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_m.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_m.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T1 - BLACK T8'

    // Start for MATLABSystem: '<S26>/RED T2 - BLACK T3'
    Template_v3_03_2020a_DW.obj_ma.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_ma.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_ma.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_ma.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_ma.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_ma.PinNumber = 19U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_ma.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_ma.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_ma.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T2 - BLACK T3'

    // Start for MATLABSystem: '<S26>/RED T3'
    Template_v3_03_2020a_DW.obj_h.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_h.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_h.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_h.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_h.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_h.PinNumber = 4U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_h.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_h.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T3'

    // Start for MATLABSystem: '<S26>/RED T4 - BLACK T5'
    Template_v3_03_2020a_DW.obj_k.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_k.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_k.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_k.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_k.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_k.PinNumber = 22U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_k.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_k.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T4 - BLACK T5'

    // Start for MATLABSystem: '<S26>/RED T5 - BLACK T4'
    Template_v3_03_2020a_DW.obj_hw.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_hw.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_hw.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_hw.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_hw.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_hw.PinNumber = 5U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_hw.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_hw.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_hw.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T5 - BLACK T4'

    // Start for MATLABSystem: '<S26>/RED T6 - BLACK T7'
    Template_v3_03_2020a_DW.obj_hf.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_hf.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_hf.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_hf.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_hf.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_hf.PinNumber = 6U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_hf.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_hf.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_hf.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T6 - BLACK T7'

    // Start for MATLABSystem: '<S26>/RED T7 - BLACK T6'
    Template_v3_03_2020a_DW.obj_c.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_c.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_c.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_c.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_c.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_c.PinNumber = 13U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_c.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_c.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T7 - BLACK T6'

    // Start for MATLABSystem: '<S26>/RED T8 - BLACK T1'
    Template_v3_03_2020a_DW.obj_f.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_f.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_f.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_f.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_f.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_f.PinNumber = 17U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_f.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_f.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/RED T8 - BLACK T1'

    // Start for MATLABSystem: '<S26>/BLACK T2'
    Template_v3_03_2020a_DW.obj_ci.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_ci.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_ci.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_ci.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_ci.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_ci.PinNumber = 9U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_ci.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_ci.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_ci.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S26>/BLACK T2'
    // End of SystemInitialize for SubSystem: '<S3>/Send Commands to PWM Blocks' 

    // SystemInitialize for IfAction SubSystem: '<S3>/Change BLACK Behavior'
    // SystemInitialize for Outport: '<S22>/BLACK PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2_j.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.BLACKPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S22>/BLACK PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change BLACK Behavior'

    // SystemInitialize for IfAction SubSystem: '<S3>/Change BLUE Behavior'
    // SystemInitialize for Outport: '<S23>/BLUE PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2_n.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.BLUEPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S23>/BLUE PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change BLUE Behavior'

    // SystemInitialize for IfAction SubSystem: '<S3>/Change RED Behavior'
    // SystemInitialize for Outport: '<S24>/RED PWM'
    for (ret = 0; ret < 8; ret++) {
      Template_v3_03_2020a_B.sf_MATLABFunction2_l.ThrustPer_Final[ret] =
        Template_v3_03_2020a_P.REDPWM_Y0;
    }

    // End of SystemInitialize for Outport: '<S24>/RED PWM'
    // End of SystemInitialize for SubSystem: '<S3>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S4>/Change RED Behavior'
    // InitializeConditions for Delay: '<S63>/Delay1'
    Template_v3_03_2020a_DW.Delay1_DSTATE_kt =
      Template_v3_03_2020a_P.Delay1_InitialCondition;

    // InitializeConditions for Delay: '<S63>/Delay2'
    Template_v3_03_2020a_DW.Delay2_DSTATE[0] =
      Template_v3_03_2020a_P.Delay2_InitialCondition;
    Template_v3_03_2020a_DW.Delay2_DSTATE[1] =
      Template_v3_03_2020a_P.Delay2_InitialCondition;

    // InitializeConditions for Delay: '<S63>/Delay5'
    Template_v3_03_2020a_DW.Delay5_DSTATE[0] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;
    Template_v3_03_2020a_DW.Delay5_DSTATE[1] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;
    Template_v3_03_2020a_DW.Delay5_DSTATE[2] =
      Template_v3_03_2020a_P.Delay5_InitialCondition;

    // InitializeConditions for Delay: '<S63>/Delay3'
    Template_v3_03_2020a_DW.Delay3_DSTATE[0] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[1] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[2] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;
    Template_v3_03_2020a_DW.Delay3_DSTATE[3] =
      Template_v3_03_2020a_P.Delay3_InitialCondition;

    // InitializeConditions for Delay: '<S63>/Delay4'
    for (ret = 0; ret < 5; ret++) {
      Template_v3_03_2020a_DW.Delay4_DSTATE[ret] =
        Template_v3_03_2020a_P.Delay4_InitialCondition;
    }

    // End of InitializeConditions for Delay: '<S63>/Delay4'

    // InitializeConditions for Delay: '<S58>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE =
      Template_v3_03_2020a_P.Delay_InitialCondition;

    // SystemInitialize for Atomic SubSystem: '<S59>/Send Direction to Motor Controller' 
    // Start for MATLABSystem: '<S71>/Digital Write'
    Template_v3_03_2020a_DW.obj_b.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_b.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_b.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_b.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_b.isInitialized = 1;
    MW_gpioInit(21U, true);
    Template_v3_03_2020a_DW.obj_b.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S59>/Send Direction to Motor Controller' 

    // SystemInitialize for Atomic SubSystem: '<S59>/Send PWM to Motor Controller' 
    // Start for MATLABSystem: '<S68>/PWM1'
    Template_v3_03_2020a_DW.obj_d.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_d.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_d.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_d.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_d.isInitialized = 1;
    Template_v3_03_2020a_DW.obj_d.PinNumber = 18U;
    ret = EXT_PWMBlock_init(Template_v3_03_2020a_DW.obj_d.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        Template_v3_03_2020a_B.cv[ret] = tmp[ret];
      }

      printf(Template_v3_03_2020a_B.cv, Template_v3_03_2020a_DW.obj_d.PinNumber);
    }

    Template_v3_03_2020a_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S68>/PWM1'
    // End of SystemInitialize for SubSystem: '<S59>/Send PWM to Motor Controller' 

    // SystemInitialize for Atomic SubSystem: '<S59>/Turn on Motor'
    // Start for MATLABSystem: '<S72>/Digital Write'
    Template_v3_03_2020a_DW.obj_cp.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj_cp.isInitialized = 0;
    Template_v3_03_2020a_DW.obj_cp.matlabCodegenIsDeleted = false;
    Template_v3_03_2020a_DW.obj_cp.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj_cp.isInitialized = 1;
    MW_gpioInit(25U, true);
    Template_v3_03_2020a_DW.obj_cp.isSetupComplete = true;

    // End of SystemInitialize for SubSystem: '<S59>/Turn on Motor'

    // SystemInitialize for Atomic SubSystem: '<S59>/Obtain RW Status'
    // Start for MATLABSystem: '<S70>/Digital Read'
    Template_v3_03_2020a_DW.obj.matlabCodegenIsDeleted = true;
    Template_v3_03_2020a_DW.obj.isInitialized = 0;
    Template_v3_03_2020a_DW.obj.matlabCodegenIsDeleted = false;
    if (((!rtIsInf(Template_v3_03_2020a_P.DigitalRead_SampleTime)) && (!rtIsNaN
          (Template_v3_03_2020a_P.DigitalRead_SampleTime))) || rtIsInf
        (Template_v3_03_2020a_P.DigitalRead_SampleTime)) {
      Template_v3_03_2020a_B.sampleTime =
        Template_v3_03_2020a_P.DigitalRead_SampleTime;
    }

    Template_v3_03_2020a_DW.obj.SampleTime = Template_v3_03_2020a_B.sampleTime;
    Template_v3_03_2020a_DW.obj.isSetupComplete = false;
    Template_v3_03_2020a_DW.obj.isInitialized = 1;
    MW_gpioInit(24U, false);
    Template_v3_03_2020a_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S70>/Digital Read'
    // End of SystemInitialize for SubSystem: '<S59>/Obtain RW Status'
    // End of SystemInitialize for SubSystem: '<S4>/Change RED Behavior'

    // SystemInitialize for IfAction SubSystem: '<S5>/Use Hardware to Obtain States' 
    // Start for If: '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
    Template_v3_03_2020a_DW.Checkwhetherbothplatformsarebei = -1;

    // SystemInitialize for IfAction SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' 
    // Start for If: '<S76>/This IF block determines whether or not to run the BLACK sim//exp' 
    Template_v3_03_2020a_DW.ThisIFblockdetermineswhetherorn = -1;

    // Start for If: '<S76>/This IF block determines whether or not to run the RED sim//exp ' 
    Template_v3_03_2020a_DW.ThisIFblockdetermineswhethero_o = -1;

    // SystemInitialize for IfAction SubSystem: '<S76>/Obtain BLACK States'
    // Start for S-Function (sdspFromNetwork): '<S79>/UDP Receive'
    sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
    CreateUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
    if (*sErr == 0) {
      LibCreate_Network(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U], 0,
                        "0.0.0.0", Template_v3_03_2020a_P.UDPReceive_Port,
                        "0.0.0.0", -1, 8192, 8, 0);
    }

    if (*sErr == 0) {
      LibStart(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
    }

    if (*sErr != 0) {
      DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
      if (*sErr != 0) {
        rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
        rtmSetStopRequested(Template_v3_03_2020a_M, 1);
      }
    }

    // End of Start for S-Function (sdspFromNetwork): '<S79>/UDP Receive'

    // InitializeConditions for Delay: '<S81>/Delay1'
    Template_v3_03_2020a_DW.icLoad_nv = 1U;

    // InitializeConditions for Delay: '<S84>/Delay1'
    Template_v3_03_2020a_DW.icLoad_bj = 1U;

    // InitializeConditions for Delay: '<S82>/Delay1'
    Template_v3_03_2020a_DW.icLoad_d0 = 1U;

    // InitializeConditions for Delay: '<S85>/Delay1'
    Template_v3_03_2020a_DW.icLoad_fjc = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S79>/Unwrap'
    Template_v3_03_2020a_DW.Unwrap_FirstStep_h = true;

    // InitializeConditions for Delay: '<S83>/Delay1'
    Template_v3_03_2020a_DW.icLoad_dyz = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S79>/Unwrap1'
    Template_v3_03_2020a_DW.Unwrap1_FirstStep_j = true;

    // InitializeConditions for Delay: '<S86>/Delay1'
    Template_v3_03_2020a_DW.icLoad_p = 1U;

    // SystemInitialize for IfAction SubSystem: '<S81>/Hold this value'
    // SystemInitialize for Outport: '<S87>/Out1'
    Template_v3_03_2020a_B.In1_et = Template_v3_03_2020a_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S81>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S82>/Hold this value'
    // SystemInitialize for Outport: '<S88>/Out1'
    Template_v3_03_2020a_B.In1_ky2 = Template_v3_03_2020a_P.Out1_Y0_ni;

    // End of SystemInitialize for SubSystem: '<S82>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S83>/Hold this value'
    // SystemInitialize for Outport: '<S89>/Out1'
    Template_v3_03_2020a_B.In1_fxz = Template_v3_03_2020a_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S83>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S84>/Hold this value'
    // SystemInitialize for Outport: '<S90>/Out1'
    Template_v3_03_2020a_B.In1_aw = Template_v3_03_2020a_P.Out1_Y0_dr;

    // End of SystemInitialize for SubSystem: '<S84>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S85>/Hold this value'
    // SystemInitialize for Outport: '<S91>/Out1'
    Template_v3_03_2020a_B.In1_ky = Template_v3_03_2020a_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S85>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S86>/Hold this value'
    // SystemInitialize for Outport: '<S92>/Out1'
    Template_v3_03_2020a_B.In1_m4 = Template_v3_03_2020a_P.Out1_Y0_i;

    // End of SystemInitialize for SubSystem: '<S86>/Hold this value'
    // End of SystemInitialize for SubSystem: '<S76>/Obtain BLACK States'

    // SystemInitialize for IfAction SubSystem: '<S76>/Obtain RED States'
    // Start for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 
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

    // End of Start for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 

    // InitializeConditions for Delay: '<S94>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ku = 1U;

    // InitializeConditions for Delay: '<S97>/Delay1'
    Template_v3_03_2020a_DW.icLoad_h0 = 1U;

    // InitializeConditions for Delay: '<S95>/Delay1'
    Template_v3_03_2020a_DW.icLoad_hc = 1U;

    // InitializeConditions for Delay: '<S98>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ez = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S80>/Unwrap'
    Template_v3_03_2020a_DW.Unwrap_FirstStep = true;

    // InitializeConditions for Delay: '<S96>/Delay1'
    Template_v3_03_2020a_DW.icLoad_os = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S80>/Unwrap1'
    Template_v3_03_2020a_DW.Unwrap1_FirstStep = true;

    // InitializeConditions for Delay: '<S99>/Delay1'
    Template_v3_03_2020a_DW.icLoad_g = 1U;

    // InitializeConditions for Delay: '<S100>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE_l =
      Template_v3_03_2020a_P.Delay_InitialCondition_n;

    // SystemInitialize for Enabled SubSystem: '<S93>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S101>/Out1'
    Template_v3_03_2020a_B.In1_f5 = Template_v3_03_2020a_P.Out1_Y0_as;

    // End of SystemInitialize for SubSystem: '<S93>/Enabled Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S94>/Hold this value'
    // SystemInitialize for Outport: '<S104>/Out1'
    Template_v3_03_2020a_B.In1_of = Template_v3_03_2020a_P.Out1_Y0_p;

    // End of SystemInitialize for SubSystem: '<S94>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S95>/Hold this value'
    // SystemInitialize for Outport: '<S105>/Out1'
    Template_v3_03_2020a_B.In1_bd2 = Template_v3_03_2020a_P.Out1_Y0_f;

    // End of SystemInitialize for SubSystem: '<S95>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S96>/Hold this value'
    // SystemInitialize for Outport: '<S106>/Out1'
    Template_v3_03_2020a_B.In1_jh = Template_v3_03_2020a_P.Out1_Y0_fy;

    // End of SystemInitialize for SubSystem: '<S96>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S97>/Hold this value'
    // SystemInitialize for Outport: '<S107>/Out1'
    Template_v3_03_2020a_B.In1_g5 = Template_v3_03_2020a_P.Out1_Y0_e2;

    // End of SystemInitialize for SubSystem: '<S97>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S98>/Hold this value'
    // SystemInitialize for Outport: '<S108>/Out1'
    Template_v3_03_2020a_B.In1_p = Template_v3_03_2020a_P.Out1_Y0_kz;

    // End of SystemInitialize for SubSystem: '<S98>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S99>/Hold this value'
    // SystemInitialize for Outport: '<S109>/Out1'
    Template_v3_03_2020a_B.In1_bs = Template_v3_03_2020a_P.Out1_Y0_bg;

    // End of SystemInitialize for SubSystem: '<S99>/Hold this value'
    T_StreamPhaseSpaceData_Init(&Template_v3_03_2020a_DW.StreamPhaseSpaceData_p);

    // End of SystemInitialize for SubSystem: '<S76>/Obtain RED States'
    // End of SystemInitialize for SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' 

    // SystemInitialize for IfAction SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 
    // InitializeConditions for Delay: '<S111>/Delay1'
    Template_v3_03_2020a_DW.icLoad_ezp = 1U;

    // InitializeConditions for Delay: '<S114>/Delay1'
    Template_v3_03_2020a_DW.icLoad_gv = 1U;

    // InitializeConditions for Delay: '<S112>/Delay1'
    Template_v3_03_2020a_DW.icLoad_en = 1U;

    // InitializeConditions for Delay: '<S115>/Delay1'
    Template_v3_03_2020a_DW.icLoad_f2 = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S77>/Unwrap'
    Template_v3_03_2020a_DW.Unwrap_FirstStep_c = true;

    // InitializeConditions for Delay: '<S113>/Delay1'
    Template_v3_03_2020a_DW.icLoad_db = 1U;

    // InitializeConditions for S-Function (sdspunwrap2): '<S77>/Unwrap1'
    Template_v3_03_2020a_DW.Unwrap1_FirstStep_f = true;

    // InitializeConditions for Delay: '<S116>/Delay1'
    Template_v3_03_2020a_DW.icLoad_es = 1U;

    // InitializeConditions for Delay: '<S117>/Delay'
    Template_v3_03_2020a_DW.Delay_DSTATE_h =
      Template_v3_03_2020a_P.Delay_InitialCondition_d;

    // SystemInitialize for Enabled SubSystem: '<S110>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S118>/Out1'
    Template_v3_03_2020a_B.In1_jww = Template_v3_03_2020a_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S110>/Enabled Subsystem'

    // SystemInitialize for IfAction SubSystem: '<S111>/Hold this value'
    // SystemInitialize for Outport: '<S121>/Out1'
    Template_v3_03_2020a_B.In1_np = Template_v3_03_2020a_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S111>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S112>/Hold this value'
    // SystemInitialize for Outport: '<S122>/Out1'
    Template_v3_03_2020a_B.In1_n2 = Template_v3_03_2020a_P.Out1_Y0_b;

    // End of SystemInitialize for SubSystem: '<S112>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S113>/Hold this value'
    // SystemInitialize for Outport: '<S123>/Out1'
    Template_v3_03_2020a_B.In1_mo = Template_v3_03_2020a_P.Out1_Y0_d;

    // End of SystemInitialize for SubSystem: '<S113>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S114>/Hold this value'
    // SystemInitialize for Outport: '<S124>/Out1'
    Template_v3_03_2020a_B.In1_bx = Template_v3_03_2020a_P.Out1_Y0_n;

    // End of SystemInitialize for SubSystem: '<S114>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S115>/Hold this value'
    // SystemInitialize for Outport: '<S125>/Out1'
    Template_v3_03_2020a_B.In1_jc = Template_v3_03_2020a_P.Out1_Y0_no;

    // End of SystemInitialize for SubSystem: '<S115>/Hold this value'

    // SystemInitialize for IfAction SubSystem: '<S116>/Hold this value'
    // SystemInitialize for Outport: '<S126>/Out1'
    Template_v3_03_2020a_B.In1_j1 = Template_v3_03_2020a_P.Out1_Y0_m;

    // End of SystemInitialize for SubSystem: '<S116>/Hold this value'
    T_StreamPhaseSpaceData_Init(&Template_v3_03_2020a_DW.StreamPhaseSpaceData);

    // End of SystemInitialize for SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 
    // End of SystemInitialize for SubSystem: '<S5>/Use Hardware to Obtain States' 
    Template_v3_03_2_AHRS2_Init(Template_v3_03_2020a_B.Product1,
      &Template_v3_03_2020a_DW.AHRS1, &Template_v3_03_2020a_P.AHRS1);
    Template_v3_03_2_AHRS2_Init(Template_v3_03_2020a_B.Product1_e,
      &Template_v3_03_2020a_DW.AHRS2, &Template_v3_03_2020a_P.AHRS2);
  }
}

// Model terminate function
void Template_v3_03_2020a_terminate(void)
{
  char_T *sErr;

  // Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive1'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U], 0);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive1_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive1'

  // Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U], 0);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive'

  // Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive2'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U], 0);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive2_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S6>/UDP Receive2'
  // Terminate for IfAction SubSystem: '<S2>/Change RED Behavior'
  // Terminate for MATLABSystem: '<S20>/Digital Write'
  matlabCodegenHandle_matlabCod_a(&Template_v3_03_2020a_DW.obj_i);

  // Terminate for MATLABSystem: '<S21>/Digital Write'
  matlabCodegenHandle_matlabCo_az(&Template_v3_03_2020a_DW.obj_a);

  // End of Terminate for SubSystem: '<S2>/Change RED Behavior'

  // Terminate for IfAction SubSystem: '<S5>/Use Hardware to Obtain States'
  // Terminate for IfAction SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 
  T_StreamPhaseSpaceData_Term(&Template_v3_03_2020a_DW.StreamPhaseSpaceData);

  // End of Terminate for SubSystem: '<S75>/Using RED, BLACK, BLUE, or RED + ARM' 

  // Terminate for IfAction SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM' 
  // Terminate for IfAction SubSystem: '<S76>/Obtain BLACK States'
  // Terminate for S-Function (sdspFromNetwork): '<S79>/UDP Receive'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U], 0);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPReceive_NetworkLib_c[0U]);

  // End of Terminate for S-Function (sdspFromNetwork): '<S79>/UDP Receive'
  // End of Terminate for SubSystem: '<S76>/Obtain BLACK States'

  // Terminate for IfAction SubSystem: '<S76>/Obtain RED States'
  T_StreamPhaseSpaceData_Term(&Template_v3_03_2020a_DW.StreamPhaseSpaceData_p);

  // Terminate for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 
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

  // End of Terminate for S-Function (sdspToNetwork): '<S80>/Send BLACK States to  BLACK Platform' 
  // End of Terminate for SubSystem: '<S76>/Obtain RED States'
  // End of Terminate for SubSystem: '<S75>/Using RED+BLACK, or RED+BLACK+ARM'
  // End of Terminate for SubSystem: '<S5>/Use Hardware to Obtain States'

  // Terminate for S-Function (sdspToNetwork): '<S15>/UDP Send'
  sErr = GetErrorBuffer(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
  LibTerminate(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);
  if (*sErr != 0) {
    rtmSetErrorStatus(Template_v3_03_2020a_M, sErr);
    rtmSetStopRequested(Template_v3_03_2020a_M, 1);
  }

  LibDestroy(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U], 1);
  DestroyUDPInterface(&Template_v3_03_2020a_DW.UDPSend_NetworkLib[0U]);

  // End of Terminate for S-Function (sdspToNetwork): '<S15>/UDP Send'

  // Terminate for Atomic SubSystem: '<S3>/Send Commands to PWM Blocks'
  // Terminate for MATLABSystem: '<S26>/RED T1 - BLACK T8'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_m);

  // Terminate for MATLABSystem: '<S26>/RED T2 - BLACK T3'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_ma);

  // Terminate for MATLABSystem: '<S26>/RED T3'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_h);

  // Terminate for MATLABSystem: '<S26>/RED T4 - BLACK T5'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_k);

  // Terminate for MATLABSystem: '<S26>/RED T5 - BLACK T4'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_hw);

  // Terminate for MATLABSystem: '<S26>/RED T6 - BLACK T7'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_hf);

  // Terminate for MATLABSystem: '<S26>/RED T7 - BLACK T6'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_c);

  // Terminate for MATLABSystem: '<S26>/RED T8 - BLACK T1'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_f);

  // Terminate for MATLABSystem: '<S26>/BLACK T2'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_ci);

  // End of Terminate for SubSystem: '<S3>/Send Commands to PWM Blocks'

  // Terminate for IfAction SubSystem: '<S4>/Change RED Behavior'
  // Terminate for Atomic SubSystem: '<S59>/Obtain RW Status'
  // Terminate for MATLABSystem: '<S70>/Digital Read'
  matlabCodegenHandl_az3k1jii5tit(&Template_v3_03_2020a_DW.obj);

  // End of Terminate for SubSystem: '<S59>/Obtain RW Status'

  // Terminate for Atomic SubSystem: '<S59>/Send Direction to Motor Controller'
  // Terminate for MATLABSystem: '<S71>/Digital Write'
  matlabCodegenHand_az3k1jii5titu(&Template_v3_03_2020a_DW.obj_b);

  // End of Terminate for SubSystem: '<S59>/Send Direction to Motor Controller'

  // Terminate for Atomic SubSystem: '<S59>/Send PWM to Motor Controller'
  // Terminate for MATLABSystem: '<S68>/PWM1'
  matlabCodegenHandle_matlabC_az3(&Template_v3_03_2020a_DW.obj_d);

  // End of Terminate for SubSystem: '<S59>/Send PWM to Motor Controller'

  // Terminate for Atomic SubSystem: '<S59>/Turn on Motor'
  // Terminate for MATLABSystem: '<S72>/Digital Write'
  matlabCodegenHa_az3k1jii5titugc(&Template_v3_03_2020a_DW.obj_cp);

  // End of Terminate for SubSystem: '<S59>/Turn on Motor'
  // End of Terminate for SubSystem: '<S4>/Change RED Behavior'
}
