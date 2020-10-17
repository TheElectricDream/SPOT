//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ShowIMU_RED.cpp
//
// Code generated for Simulink model 'ShowIMU_RED'.
//
// Model version                  : 1.24
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Tue Aug  4 08:52:03 2020
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
static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3]);
static void ShowIMU_RED_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9]);
static void ShowI_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d);
static void Sho_quaternioncg_quaternioncg_d(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d);
static void ShowIMU_R_quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
  real_T x_d, real_T y_a, real_T y_b, real_T y_c, real_T y_d, real_T *o_a,
  real_T *o_b, real_T *o_c, real_T *o_d);
static void IMUFusionCommon_predictOrientat(const
  fusion_simulink_ahrsfilter_Sh_T *obj, const real_T gfast[3], const real_T
  offset[3], real_T qorient_a, real_T qorient_b, real_T qorient_c, real_T
  qorient_d, real_T *b_qorient_a, real_T *b_qorient_b, real_T *b_qorient_c,
  real_T *b_qorient_d);
static void ShowIMU_R_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9]);
static void Show_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9]);
static real_T ShowIMU_RED_norm(const real_T x[3]);
static void ShowIMU_RED_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void ShowIMU_R_quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d);
static void ShowIM_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void ShowIM_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d);
static void ShowIMU_RED_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Sh_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3]);
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
static void ShowIM_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Sh_T *obj);

//
// Output and update for atomic system:
//    '<S4>/MATLAB Function'
//    '<S6>/MATLAB Function'
//    '<S8>/MATLAB Function'
//
void ShowIMU_RED_MATLABFunction(real_T rtu_w, real_T rtu_zeta, real_T rtu_tau,
  real_T *rty_a, real_T *rty_b, real_T *rty_c)
{
  real_T wt;
  real_T p;
  real_T d;
  wt = rtu_tau * rtu_w;
  p = 2.0 * rtu_zeta * wt;
  wt *= wt;
  d = (wt + 1.0) + p;
  *rty_a = wt / d;
  *rty_b = (1.0 - wt) / d;
  *rty_c = ((wt + 1.0) - p) / d;
}

static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3])
{
  av[0] = gfast[0] - offset[0];
  av[1] = gfast[1] - offset[1];
  av[2] = gfast[2] - offset[2];
}

static void ShowIMU_RED_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9])
{
  boolean_T nanPageIdx;
  boolean_T y[3];
  int32_T xpageoffset;
  int32_T b_i;
  boolean_T exitg1;
  ShowIMU_RED_B.Reast[0] = a[1] * m[2] - a[2] * m[1];
  ShowIMU_RED_B.Reast[1] = a[2] * m[0] - a[0] * m[2];
  ShowIMU_RED_B.Reast[2] = a[0] * m[1] - a[1] * m[0];
  R[6] = a[0];
  R[3] = ShowIMU_RED_B.Reast[0];
  R[7] = a[1];
  R[4] = ShowIMU_RED_B.Reast[1];
  R[8] = a[2];
  R[5] = ShowIMU_RED_B.Reast[2];
  R[0] = ShowIMU_RED_B.Reast[1] * a[2] - ShowIMU_RED_B.Reast[2] * a[1];
  R[1] = ShowIMU_RED_B.Reast[2] * a[0] - ShowIMU_RED_B.Reast[0] * a[2];
  R[2] = ShowIMU_RED_B.Reast[0] * a[1] - ShowIMU_RED_B.Reast[1] * a[0];
  for (b_i = 0; b_i < 9; b_i++) {
    ShowIMU_RED_B.x[b_i] = R[b_i] * R[b_i];
  }

  for (b_i = 0; b_i < 3; b_i++) {
    xpageoffset = b_i * 3;
    ShowIMU_RED_B.Reast[b_i] = ShowIMU_RED_B.x[xpageoffset + 2] +
      (ShowIMU_RED_B.x[xpageoffset + 1] + ShowIMU_RED_B.x[xpageoffset]);
  }

  ShowIMU_RED_B.Reast[0] = std::sqrt(ShowIMU_RED_B.Reast[0]);
  ShowIMU_RED_B.Reast[1] = std::sqrt(ShowIMU_RED_B.Reast[1]);
  ShowIMU_RED_B.Reast[2] = std::sqrt(ShowIMU_RED_B.Reast[2]);
  std::memcpy(&ShowIMU_RED_B.x[0], &R[0], 9U * sizeof(real_T));
  for (b_i = 0; b_i < 3; b_i++) {
    R[3 * b_i] = ShowIMU_RED_B.x[3 * b_i] / ShowIMU_RED_B.Reast[b_i];
    xpageoffset = 3 * b_i + 1;
    R[xpageoffset] = ShowIMU_RED_B.x[xpageoffset] / ShowIMU_RED_B.Reast[b_i];
    xpageoffset = 3 * b_i + 2;
    R[xpageoffset] = ShowIMU_RED_B.x[xpageoffset] / ShowIMU_RED_B.Reast[b_i];
  }

  for (b_i = 0; b_i < 9; b_i++) {
    ShowIMU_RED_B.b[b_i] = rtIsNaN(R[b_i]);
  }

  y[0] = false;
  y[1] = false;
  y[2] = false;
  b_i = 1;
  exitg1 = false;
  while ((!exitg1) && (b_i <= 3)) {
    if (ShowIMU_RED_B.b[b_i - 1]) {
      y[0] = true;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  b_i = 4;
  exitg1 = false;
  while ((!exitg1) && (b_i <= 6)) {
    if (ShowIMU_RED_B.b[b_i - 1]) {
      y[1] = true;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  b_i = 7;
  exitg1 = false;
  while ((!exitg1) && (b_i <= 9)) {
    if (ShowIMU_RED_B.b[b_i - 1]) {
      y[2] = true;
      exitg1 = true;
    } else {
      b_i++;
    }
  }

  nanPageIdx = false;
  b_i = 0;
  exitg1 = false;
  while ((!exitg1) && (b_i < 3)) {
    if (!y[b_i]) {
      b_i++;
    } else {
      nanPageIdx = true;
      exitg1 = true;
    }
  }

  if (nanPageIdx) {
    std::memset(&R[0], 0, 9U * sizeof(real_T));
    R[0] = 1.0;
    R[4] = 1.0;
    R[8] = 1.0;
  }
}

static void ShowI_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d)
{
  int32_T b_idx;
  int32_T b_idx_0;
  int32_T k;
  boolean_T exitg1;
  ShowIMU_RED_B.pd = (varargin_1[0] + varargin_1[4]) + varargin_1[8];
  ShowIMU_RED_B.psquared[0] = (ShowIMU_RED_B.pd * 2.0 + 1.0) - ShowIMU_RED_B.pd;
  ShowIMU_RED_B.psquared[1] = (2.0 * varargin_1[0] + 1.0) - ShowIMU_RED_B.pd;
  ShowIMU_RED_B.psquared[2] = (2.0 * varargin_1[4] + 1.0) - ShowIMU_RED_B.pd;
  ShowIMU_RED_B.psquared[3] = (2.0 * varargin_1[8] + 1.0) - ShowIMU_RED_B.pd;
  if (!rtIsNaN(ShowIMU_RED_B.psquared[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 5)) {
      if (!rtIsNaN(ShowIMU_RED_B.psquared[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    ShowIMU_RED_B.pd = ShowIMU_RED_B.psquared[0];
    b_idx = 1;
  } else {
    ShowIMU_RED_B.pd = ShowIMU_RED_B.psquared[b_idx - 1];
    b_idx_0 = b_idx;
    for (k = b_idx + 1; k < 5; k++) {
      ShowIMU_RED_B.d = ShowIMU_RED_B.psquared[k - 1];
      if (ShowIMU_RED_B.pd < ShowIMU_RED_B.d) {
        ShowIMU_RED_B.pd = ShowIMU_RED_B.d;
        b_idx_0 = k;
      }
    }

    b_idx = b_idx_0;
  }

  switch (b_idx) {
   case 1:
    ShowIMU_RED_B.pd = std::sqrt(ShowIMU_RED_B.pd);
    *obj_a = 0.5 * ShowIMU_RED_B.pd;
    ShowIMU_RED_B.pd = 0.5 / ShowIMU_RED_B.pd;
    *obj_b = (varargin_1[7] - varargin_1[5]) * ShowIMU_RED_B.pd;
    *obj_c = (varargin_1[2] - varargin_1[6]) * ShowIMU_RED_B.pd;
    *obj_d = (varargin_1[3] - varargin_1[1]) * ShowIMU_RED_B.pd;
    break;

   case 2:
    ShowIMU_RED_B.pd = std::sqrt(ShowIMU_RED_B.pd);
    *obj_b = 0.5 * ShowIMU_RED_B.pd;
    ShowIMU_RED_B.pd = 0.5 / ShowIMU_RED_B.pd;
    *obj_a = (varargin_1[7] - varargin_1[5]) * ShowIMU_RED_B.pd;
    *obj_c = (varargin_1[3] + varargin_1[1]) * ShowIMU_RED_B.pd;
    *obj_d = (varargin_1[2] + varargin_1[6]) * ShowIMU_RED_B.pd;
    break;

   case 3:
    ShowIMU_RED_B.pd = std::sqrt(ShowIMU_RED_B.pd);
    *obj_c = 0.5 * ShowIMU_RED_B.pd;
    ShowIMU_RED_B.pd = 0.5 / ShowIMU_RED_B.pd;
    *obj_a = (varargin_1[2] - varargin_1[6]) * ShowIMU_RED_B.pd;
    *obj_b = (varargin_1[3] + varargin_1[1]) * ShowIMU_RED_B.pd;
    *obj_d = (varargin_1[7] + varargin_1[5]) * ShowIMU_RED_B.pd;
    break;

   default:
    ShowIMU_RED_B.pd = std::sqrt(ShowIMU_RED_B.pd);
    *obj_d = 0.5 * ShowIMU_RED_B.pd;
    ShowIMU_RED_B.pd = 0.5 / ShowIMU_RED_B.pd;
    *obj_a = (varargin_1[3] - varargin_1[1]) * ShowIMU_RED_B.pd;
    *obj_b = (varargin_1[2] + varargin_1[6]) * ShowIMU_RED_B.pd;
    *obj_c = (varargin_1[7] + varargin_1[5]) * ShowIMU_RED_B.pd;
    break;
  }

  if (*obj_a < 0.0) {
    *obj_a = -*obj_a;
    *obj_b = -*obj_b;
    *obj_c = -*obj_c;
    *obj_d = -*obj_d;
  }
}

static void Sho_quaternioncg_quaternioncg_d(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d)
{
  real_T st;
  *obj_a = 1.0;
  *obj_b = 0.0;
  *obj_c = 0.0;
  *obj_d = 0.0;
  ShowIMU_RED_B.theta = std::sqrt((varargin_1[0] * varargin_1[0] + varargin_1[1]
    * varargin_1[1]) + varargin_1[2] * varargin_1[2]);
  st = std::sin(ShowIMU_RED_B.theta / 2.0);
  if (ShowIMU_RED_B.theta != 0.0) {
    *obj_a = std::cos(ShowIMU_RED_B.theta / 2.0);
    *obj_b = varargin_1[0] / ShowIMU_RED_B.theta * st;
    *obj_c = varargin_1[1] / ShowIMU_RED_B.theta * st;
    *obj_d = varargin_1[2] / ShowIMU_RED_B.theta * st;
  }
}

static void ShowIMU_R_quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
  real_T x_d, real_T y_a, real_T y_b, real_T y_c, real_T y_d, real_T *o_a,
  real_T *o_b, real_T *o_c, real_T *o_d)
{
  *o_a = ((x_a * y_a - x_b * y_b) - x_c * y_c) - x_d * y_d;
  *o_b = ((x_a * y_b + x_b * y_a) + x_c * y_d) - x_d * y_c;
  *o_c = ((x_a * y_c - x_b * y_d) + x_c * y_a) + x_d * y_b;
  *o_d = ((x_a * y_d + x_b * y_c) - x_c * y_b) + x_d * y_a;
}

static void IMUFusionCommon_predictOrientat(const
  fusion_simulink_ahrsfilter_Sh_T *obj, const real_T gfast[3], const real_T
  offset[3], real_T qorient_a, real_T qorient_b, real_T qorient_c, real_T
  qorient_d, real_T *b_qorient_a, real_T *b_qorient_b, real_T *b_qorient_c,
  real_T *b_qorient_d)
{
  ShowIMU_RED_B.c[0] = (gfast[0] - offset[0]) * obj->pSensorPeriod;
  ShowIMU_RED_B.c[1] = (gfast[1] - offset[1]) * obj->pSensorPeriod;
  ShowIMU_RED_B.c[2] = (gfast[2] - offset[2]) * obj->pSensorPeriod;
  Sho_quaternioncg_quaternioncg_d(ShowIMU_RED_B.c,
    &ShowIMU_RED_B.assign_temp_a_g, &ShowIMU_RED_B.assign_temp_b_m,
    &ShowIMU_RED_B.assign_temp_c_n, &ShowIMU_RED_B.assign_temp_d_p);
  ShowIMU_R_quaternionBase_mtimes(qorient_a, qorient_b, qorient_c, qorient_d,
    ShowIMU_RED_B.assign_temp_a_g, ShowIMU_RED_B.assign_temp_b_m,
    ShowIMU_RED_B.assign_temp_c_n, ShowIMU_RED_B.assign_temp_d_p, b_qorient_a,
    b_qorient_b, b_qorient_c, b_qorient_d);
  if (*b_qorient_a < 0.0) {
    *b_qorient_a = -*b_qorient_a;
    *b_qorient_b = -*b_qorient_b;
    *b_qorient_c = -*b_qorient_c;
    *b_qorient_d = -*b_qorient_d;
  }
}

static void ShowIMU_R_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9])
{
  real_T n;
  n = std::sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
  q_a /= n;
  q_b /= n;
  q_c /= n;
  q_d /= n;
  n = q_a * q_b * 2.0;
  ShowIMU_RED_B.ac2 = q_a * q_c * 2.0;
  ShowIMU_RED_B.ad2 = q_a * q_d * 2.0;
  ShowIMU_RED_B.bc2 = q_b * q_c * 2.0;
  ShowIMU_RED_B.bd2 = q_b * q_d * 2.0;
  ShowIMU_RED_B.cd2 = q_c * q_d * 2.0;
  ShowIMU_RED_B.aasq = q_a * q_a * 2.0 - 1.0;
  r[0] = q_b * q_b * 2.0 + ShowIMU_RED_B.aasq;
  r[3] = ShowIMU_RED_B.bc2 + ShowIMU_RED_B.ad2;
  r[6] = ShowIMU_RED_B.bd2 - ShowIMU_RED_B.ac2;
  r[1] = ShowIMU_RED_B.bc2 - ShowIMU_RED_B.ad2;
  r[4] = q_c * q_c * 2.0 + ShowIMU_RED_B.aasq;
  r[7] = ShowIMU_RED_B.cd2 + n;
  r[2] = ShowIMU_RED_B.bd2 + ShowIMU_RED_B.ac2;
  r[5] = ShowIMU_RED_B.cd2 - n;
  r[8] = q_d * q_d * 2.0 + ShowIMU_RED_B.aasq;
}

static void Show_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9])
{
  int32_T i;
  int32_T h_tmp;
  std::memset(&h[0], 0, 9U * sizeof(real_T));
  h[3] = v[2];
  h[6] = -v[1];
  h[7] = v[0];
  for (i = 0; i < 3; i++) {
    ShowIMU_RED_B.h[3 * i] = h[3 * i];
    h_tmp = 3 * i + 1;
    ShowIMU_RED_B.h[h_tmp] = h[h_tmp] - h[i + 3];
    h_tmp = 3 * i + 2;
    ShowIMU_RED_B.h[h_tmp] = h[h_tmp] - h[i + 6];
  }

  std::memcpy(&h[0], &ShowIMU_RED_B.h[0], 9U * sizeof(real_T));
}

static real_T ShowIMU_RED_norm(const real_T x[3])
{
  real_T y;
  real_T t;
  ShowIMU_RED_B.scale = 3.3121686421112381E-170;
  ShowIMU_RED_B.absxk = std::abs(x[0]);
  if (ShowIMU_RED_B.absxk > 3.3121686421112381E-170) {
    y = 1.0;
    ShowIMU_RED_B.scale = ShowIMU_RED_B.absxk;
  } else {
    t = ShowIMU_RED_B.absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  ShowIMU_RED_B.absxk = std::abs(x[1]);
  if (ShowIMU_RED_B.absxk > ShowIMU_RED_B.scale) {
    t = ShowIMU_RED_B.scale / ShowIMU_RED_B.absxk;
    y = y * t * t + 1.0;
    ShowIMU_RED_B.scale = ShowIMU_RED_B.absxk;
  } else {
    t = ShowIMU_RED_B.absxk / ShowIMU_RED_B.scale;
    y += t * t;
  }

  ShowIMU_RED_B.absxk = std::abs(x[2]);
  if (ShowIMU_RED_B.absxk > ShowIMU_RED_B.scale) {
    t = ShowIMU_RED_B.scale / ShowIMU_RED_B.absxk;
    y = y * t * t + 1.0;
    ShowIMU_RED_B.scale = ShowIMU_RED_B.absxk;
  } else {
    t = ShowIMU_RED_B.absxk / ShowIMU_RED_B.scale;
    y += t * t;
  }

  return ShowIMU_RED_B.scale * std::sqrt(y);
}

static void ShowIMU_RED_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d)
{
  *b_q_a = q_a;
  *b_q_b = -q_b;
  *b_q_c = -q_c;
  *b_q_d = -q_d;
}

static void ShowIMU_R_quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d)
{
  *b_obj_a = -obj_a;
  *b_obj_b = -obj_b;
  *b_obj_c = -obj_c;
  *b_obj_d = -obj_d;
}

static void ShowIM_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d)
{
  real_T n;
  n = std::sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
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

static void ShowIM_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d)
{
  *o_a = rhs_a;
  *o_b = rhs_b;
  *o_c = rhs_c;
  *o_d = rhs_d;
}

static void ShowIMU_RED_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Sh_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3])
{
  boolean_T isJamming;
  int32_T jy;
  int32_T H_tmp;
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static const int8_T tmp_0[9] = { -1, 0, 0, 0, -1, 0, 0, 0, -1 };

  IMUFusionCommon_computeAngularV(gyroIn, obj->pGyroOffset, av);
  if (obj->pFirstTime) {
    obj->pFirstTime = false;
    ShowIMU_RED_NED_ecompass(accelIn, magIn, ShowIMU_RED_B.Rprior);
    ShowI_quaternioncg_quaternioncg(ShowIMU_RED_B.Rprior, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  }

  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 3; ShowIMU_RED_B.c_j++) {
    ShowIMU_RED_B.gravityAccelGyroDiff[ShowIMU_RED_B.c_j] = obj->
      pGyroOffset[ShowIMU_RED_B.c_j];
  }

  IMUFusionCommon_predictOrientat(obj, gyroIn,
    ShowIMU_RED_B.gravityAccelGyroDiff, obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &ShowIMU_RED_B.smax,
    &ShowIMU_RED_B.s, &ShowIMU_RED_B.gyroOffsetErr_idx_1,
    &ShowIMU_RED_B.linAccelErr_idx_1);
  obj->pOrientPrior.d = ShowIMU_RED_B.linAccelErr_idx_1;
  obj->pOrientPrior.c = ShowIMU_RED_B.gyroOffsetErr_idx_1;
  obj->pOrientPrior.b = ShowIMU_RED_B.s;
  obj->pOrientPrior.a = ShowIMU_RED_B.smax;
  ShowIMU_R_quaternionBase_rotmat(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, ShowIMU_RED_B.Rprior);
  obj->pLinAccelPrior[0] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[0];
  ShowIMU_RED_B.gravityAccelGyroDiff[0] = (accelIn[0] + obj->pLinAccelPrior[0])
    - ShowIMU_RED_B.Rprior[6];
  obj->pLinAccelPrior[1] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[1];
  ShowIMU_RED_B.gravityAccelGyroDiff[1] = (accelIn[1] + obj->pLinAccelPrior[1])
    - ShowIMU_RED_B.Rprior[7];
  obj->pLinAccelPrior[2] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[2];
  ShowIMU_RED_B.gravityAccelGyroDiff[2] = (accelIn[2] + obj->pLinAccelPrior[2])
    - ShowIMU_RED_B.Rprior[8];
  Show_IMUFusionCommon_buildHPart(&ShowIMU_RED_B.Rprior[6], ShowIMU_RED_B.h1);
  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 3; ShowIMU_RED_B.c_j++) {
    ShowIMU_RED_B.offDiag[ShowIMU_RED_B.c_j] =
      ShowIMU_RED_B.Rprior[ShowIMU_RED_B.c_j + 6] * obj->pMagVec[2] +
      (ShowIMU_RED_B.Rprior[ShowIMU_RED_B.c_j + 3] * obj->pMagVec[1] +
       ShowIMU_RED_B.Rprior[ShowIMU_RED_B.c_j] * obj->pMagVec[0]);
  }

  Show_IMUFusionCommon_buildHPart(ShowIMU_RED_B.offDiag, ShowIMU_RED_B.Rprior);
  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 3; ShowIMU_RED_B.c_j++) {
    ShowIMU_RED_B.smax = ShowIMU_RED_B.Rprior[3 * ShowIMU_RED_B.c_j];
    ShowIMU_RED_B.s = ShowIMU_RED_B.h1[3 * ShowIMU_RED_B.c_j];
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j] = ShowIMU_RED_B.s;
    ShowIMU_RED_B.jp = 6 * (ShowIMU_RED_B.c_j + 3);
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp] = -ShowIMU_RED_B.s * obj->pKalmanPeriod;
    ShowIMU_RED_B.iy = 6 * (ShowIMU_RED_B.c_j + 6);
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy] = tmp[3 * ShowIMU_RED_B.c_j];
    H_tmp = 6 * (ShowIMU_RED_B.c_j + 9);
    ShowIMU_RED_B.H[H_tmp] = 0.0;
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j + 3] = ShowIMU_RED_B.smax;
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp + 3] = -ShowIMU_RED_B.smax *
      obj->pKalmanPeriod;
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy + 3] = 0.0;
    ShowIMU_RED_B.H[H_tmp + 3] = tmp_0[3 * ShowIMU_RED_B.c_j];
    ShowIMU_RED_B.jj = 3 * ShowIMU_RED_B.c_j + 1;
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j + 1] =
      ShowIMU_RED_B.h1[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp + 1] = -ShowIMU_RED_B.h1[ShowIMU_RED_B.jj] *
      obj->pKalmanPeriod;
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy + 1] = tmp[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[H_tmp + 1] = 0.0;
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j + 4] =
      ShowIMU_RED_B.Rprior[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp + 4] =
      -ShowIMU_RED_B.Rprior[ShowIMU_RED_B.jj] * obj->pKalmanPeriod;
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy + 4] = 0.0;
    ShowIMU_RED_B.H[H_tmp + 4] = tmp_0[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.jj = 3 * ShowIMU_RED_B.c_j + 2;
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j + 2] =
      ShowIMU_RED_B.h1[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp + 2] = -ShowIMU_RED_B.h1[ShowIMU_RED_B.jj] *
      obj->pKalmanPeriod;
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy + 2] = tmp[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[H_tmp + 2] = 0.0;
    ShowIMU_RED_B.H[6 * ShowIMU_RED_B.c_j + 5] =
      ShowIMU_RED_B.Rprior[ShowIMU_RED_B.jj];
    ShowIMU_RED_B.H[ShowIMU_RED_B.jp + 5] =
      -ShowIMU_RED_B.Rprior[ShowIMU_RED_B.jj] * obj->pKalmanPeriod;
    ShowIMU_RED_B.H[ShowIMU_RED_B.iy + 5] = 0.0;
    ShowIMU_RED_B.H[H_tmp + 5] = tmp_0[ShowIMU_RED_B.jj];
  }

  std::memcpy(&ShowIMU_RED_B.Qw[0], &obj->pQw[0], 144U * sizeof(real_T));
  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.jp = ShowIMU_RED_B.iy + 6 * ShowIMU_RED_B.c_j;
      ShowIMU_RED_B.H_m[ShowIMU_RED_B.jp] = 0.0;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        ShowIMU_RED_B.H_m[ShowIMU_RED_B.jp] += ShowIMU_RED_B.H[6 * H_tmp +
          ShowIMU_RED_B.iy] * obj->pQw[12 * ShowIMU_RED_B.c_j + H_tmp];
      }
    }
  }

  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 6; ShowIMU_RED_B.c_j++) {
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.smax = 0.0;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        ShowIMU_RED_B.smax += ShowIMU_RED_B.H_m[6 * H_tmp + ShowIMU_RED_B.iy] *
          ShowIMU_RED_B.H[6 * H_tmp + ShowIMU_RED_B.c_j];
      }

      ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_j + 6 * ShowIMU_RED_B.iy] = obj->pQv[6 *
        ShowIMU_RED_B.c_j + ShowIMU_RED_B.iy] + ShowIMU_RED_B.smax;
    }

    ShowIMU_RED_B.b_ipiv[ShowIMU_RED_B.c_j] = static_cast<int8_T>
      (ShowIMU_RED_B.c_j + 1);
  }

  for (ShowIMU_RED_B.jp = 0; ShowIMU_RED_B.jp < 5; ShowIMU_RED_B.jp++) {
    ShowIMU_RED_B.c_j = ShowIMU_RED_B.jp * 7 + 2;
    ShowIMU_RED_B.jj = ShowIMU_RED_B.jp * 7;
    ShowIMU_RED_B.c_d = 6 - ShowIMU_RED_B.jp;
    ShowIMU_RED_B.iy = 1;
    ShowIMU_RED_B.ix = ShowIMU_RED_B.c_j - 2;
    ShowIMU_RED_B.smax = std::abs(ShowIMU_RED_B.c_A[ShowIMU_RED_B.jj]);
    for (H_tmp = 2; H_tmp <= ShowIMU_RED_B.c_d; H_tmp++) {
      ShowIMU_RED_B.ix++;
      ShowIMU_RED_B.s = std::abs(ShowIMU_RED_B.c_A[ShowIMU_RED_B.ix]);
      if (ShowIMU_RED_B.s > ShowIMU_RED_B.smax) {
        ShowIMU_RED_B.iy = H_tmp;
        ShowIMU_RED_B.smax = ShowIMU_RED_B.s;
      }
    }

    if (ShowIMU_RED_B.c_A[(ShowIMU_RED_B.c_j + ShowIMU_RED_B.iy) - 3] != 0.0) {
      if (ShowIMU_RED_B.iy - 1 != 0) {
        ShowIMU_RED_B.iy += ShowIMU_RED_B.jp;
        ShowIMU_RED_B.b_ipiv[ShowIMU_RED_B.jp] = static_cast<int8_T>
          (ShowIMU_RED_B.iy);
        ShowIMU_RED_B.ix = ShowIMU_RED_B.jp;
        ShowIMU_RED_B.iy--;
        for (H_tmp = 0; H_tmp < 6; H_tmp++) {
          ShowIMU_RED_B.smax = ShowIMU_RED_B.c_A[ShowIMU_RED_B.ix];
          ShowIMU_RED_B.c_A[ShowIMU_RED_B.ix] =
            ShowIMU_RED_B.c_A[ShowIMU_RED_B.iy];
          ShowIMU_RED_B.c_A[ShowIMU_RED_B.iy] = ShowIMU_RED_B.smax;
          ShowIMU_RED_B.ix += 6;
          ShowIMU_RED_B.iy += 6;
        }
      }

      ShowIMU_RED_B.iy = ShowIMU_RED_B.c_j - ShowIMU_RED_B.jp;
      for (ShowIMU_RED_B.c_d = ShowIMU_RED_B.c_j; ShowIMU_RED_B.c_d <=
           ShowIMU_RED_B.iy + 4; ShowIMU_RED_B.c_d++) {
        ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_d - 1] /=
          ShowIMU_RED_B.c_A[ShowIMU_RED_B.jj];
      }
    }

    ShowIMU_RED_B.c_d = 4 - ShowIMU_RED_B.jp;
    jy = ShowIMU_RED_B.jj + 6;
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy <= ShowIMU_RED_B.c_d;
         ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.smax = ShowIMU_RED_B.c_A[jy];
      if (ShowIMU_RED_B.c_A[jy] != 0.0) {
        ShowIMU_RED_B.ix = ShowIMU_RED_B.c_j - 1;
        ShowIMU_RED_B.jAcol = ShowIMU_RED_B.jj - ShowIMU_RED_B.jp;
        for (H_tmp = ShowIMU_RED_B.jj + 8; H_tmp <= ShowIMU_RED_B.jAcol + 12;
             H_tmp++) {
          ShowIMU_RED_B.c_A[H_tmp - 1] += ShowIMU_RED_B.c_A[ShowIMU_RED_B.ix] *
            -ShowIMU_RED_B.smax;
          ShowIMU_RED_B.ix++;
        }
      }

      jy += 6;
      ShowIMU_RED_B.jj += 6;
    }
  }

  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.jj = ShowIMU_RED_B.c_j + 12 * ShowIMU_RED_B.iy;
      ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] = 0.0;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] += obj->pQw[12 * H_tmp +
          ShowIMU_RED_B.c_j] * ShowIMU_RED_B.H[6 * H_tmp + ShowIMU_RED_B.iy];
      }
    }
  }

  for (ShowIMU_RED_B.jp = 0; ShowIMU_RED_B.jp < 6; ShowIMU_RED_B.jp++) {
    jy = 12 * ShowIMU_RED_B.jp - 1;
    ShowIMU_RED_B.jAcol = 6 * ShowIMU_RED_B.jp - 1;
    ShowIMU_RED_B.iy = ShowIMU_RED_B.jp - 1;
    for (H_tmp = 0; H_tmp <= ShowIMU_RED_B.iy; H_tmp++) {
      ShowIMU_RED_B.kBcol = 12 * H_tmp - 1;
      ShowIMU_RED_B.c_j = (H_tmp + ShowIMU_RED_B.jAcol) + 1;
      if (ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_j] != 0.0) {
        for (ShowIMU_RED_B.ix = 0; ShowIMU_RED_B.ix < 12; ShowIMU_RED_B.ix++) {
          ShowIMU_RED_B.c_d = ShowIMU_RED_B.ix + 1;
          ShowIMU_RED_B.jj = ShowIMU_RED_B.c_d + jy;
          ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] -=
            ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_j] *
            ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_d + ShowIMU_RED_B.kBcol];
        }
      }
    }

    ShowIMU_RED_B.smax = 1.0 / ShowIMU_RED_B.c_A[(ShowIMU_RED_B.jp +
      ShowIMU_RED_B.jAcol) + 1];
    for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
      ShowIMU_RED_B.jj = (ShowIMU_RED_B.c_j + jy) + 1;
      ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] *= ShowIMU_RED_B.smax;
    }
  }

  for (ShowIMU_RED_B.iy = 5; ShowIMU_RED_B.iy >= 0; ShowIMU_RED_B.iy--) {
    jy = 12 * ShowIMU_RED_B.iy - 1;
    ShowIMU_RED_B.jAcol = 6 * ShowIMU_RED_B.iy - 1;
    for (H_tmp = ShowIMU_RED_B.iy + 2; H_tmp < 7; H_tmp++) {
      ShowIMU_RED_B.kBcol = (H_tmp - 1) * 12 - 1;
      ShowIMU_RED_B.c_j = H_tmp + ShowIMU_RED_B.jAcol;
      if (ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_j] != 0.0) {
        for (ShowIMU_RED_B.ix = 0; ShowIMU_RED_B.ix < 12; ShowIMU_RED_B.ix++) {
          ShowIMU_RED_B.c_d = ShowIMU_RED_B.ix + 1;
          ShowIMU_RED_B.jj = ShowIMU_RED_B.c_d + jy;
          ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] -=
            ShowIMU_RED_B.c_A[ShowIMU_RED_B.c_j] *
            ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_d + ShowIMU_RED_B.kBcol];
        }
      }
    }
  }

  for (ShowIMU_RED_B.iy = 4; ShowIMU_RED_B.iy >= 0; ShowIMU_RED_B.iy--) {
    if (ShowIMU_RED_B.iy + 1 != ShowIMU_RED_B.b_ipiv[ShowIMU_RED_B.iy]) {
      ShowIMU_RED_B.jp = ShowIMU_RED_B.b_ipiv[ShowIMU_RED_B.iy] - 1;
      for (ShowIMU_RED_B.ix = 0; ShowIMU_RED_B.ix < 12; ShowIMU_RED_B.ix++) {
        ShowIMU_RED_B.c_j = 12 * ShowIMU_RED_B.iy + ShowIMU_RED_B.ix;
        ShowIMU_RED_B.smax = ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_j];
        ShowIMU_RED_B.jj = 12 * ShowIMU_RED_B.jp + ShowIMU_RED_B.ix;
        ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_j] =
          ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj];
        ShowIMU_RED_B.b_X[ShowIMU_RED_B.jj] = ShowIMU_RED_B.smax;
      }
    }
  }

  ShowIMU_RED_B.ze[0] = ShowIMU_RED_B.gravityAccelGyroDiff[0];
  ShowIMU_RED_B.ze[3] = magIn[0] - ShowIMU_RED_B.offDiag[0];
  ShowIMU_RED_B.ze[1] = ShowIMU_RED_B.gravityAccelGyroDiff[1];
  ShowIMU_RED_B.ze[4] = magIn[1] - ShowIMU_RED_B.offDiag[1];
  ShowIMU_RED_B.ze[2] = ShowIMU_RED_B.gravityAccelGyroDiff[2];
  ShowIMU_RED_B.ze[5] = magIn[2] - ShowIMU_RED_B.offDiag[2];
  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 3; ShowIMU_RED_B.c_j++) {
    ShowIMU_RED_B.offDiag[ShowIMU_RED_B.c_j] = 0.0;
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.offDiag[ShowIMU_RED_B.c_j] += ShowIMU_RED_B.b_X[(12 *
        ShowIMU_RED_B.iy + ShowIMU_RED_B.c_j) + 9] *
        ShowIMU_RED_B.ze[ShowIMU_RED_B.iy];
    }
  }

  ShowIMU_RED_B.smax = ShowIMU_RED_norm(ShowIMU_RED_B.offDiag);
  isJamming = (ShowIMU_RED_B.smax * ShowIMU_RED_B.smax >
               obj->ExpectedMagneticFieldStrength *
               obj->ExpectedMagneticFieldStrength * 4.0);
  if (isJamming) {
    for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 9; ShowIMU_RED_B.c_j++) {
      ShowIMU_RED_B.h1[ShowIMU_RED_B.c_j] = ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_j
        + 24] * ShowIMU_RED_B.gravityAccelGyroDiff[2] +
        (ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_j + 12] *
         ShowIMU_RED_B.gravityAccelGyroDiff[1] +
         ShowIMU_RED_B.b_X[ShowIMU_RED_B.c_j] *
         ShowIMU_RED_B.gravityAccelGyroDiff[0]);
    }

    ShowIMU_RED_B.gravityAccelGyroDiff[0] = ShowIMU_RED_B.h1[0];
    ShowIMU_RED_B.smax = ShowIMU_RED_B.h1[3];
    ShowIMU_RED_B.s = ShowIMU_RED_B.h1[6];
    ShowIMU_RED_B.gravityAccelGyroDiff[1] = ShowIMU_RED_B.h1[1];
    ShowIMU_RED_B.gyroOffsetErr_idx_1 = ShowIMU_RED_B.h1[4];
    ShowIMU_RED_B.linAccelErr_idx_1 = ShowIMU_RED_B.h1[7];
    ShowIMU_RED_B.gravityAccelGyroDiff[2] = ShowIMU_RED_B.h1[2];
    ShowIMU_RED_B.gyroOffsetErr_idx_2 = ShowIMU_RED_B.h1[5];
    ShowIMU_RED_B.linAccelErr_idx_2 = ShowIMU_RED_B.h1[8];
  } else {
    for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
      ShowIMU_RED_B.xe_post[ShowIMU_RED_B.c_j] = 0.0;
      for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
        ShowIMU_RED_B.xe_post[ShowIMU_RED_B.c_j] += ShowIMU_RED_B.b_X[12 *
          ShowIMU_RED_B.iy + ShowIMU_RED_B.c_j] *
          ShowIMU_RED_B.ze[ShowIMU_RED_B.iy];
      }
    }

    ShowIMU_RED_B.gravityAccelGyroDiff[0] = ShowIMU_RED_B.xe_post[0];
    ShowIMU_RED_B.smax = ShowIMU_RED_B.xe_post[3];
    ShowIMU_RED_B.s = ShowIMU_RED_B.xe_post[6];
    ShowIMU_RED_B.gravityAccelGyroDiff[1] = ShowIMU_RED_B.xe_post[1];
    ShowIMU_RED_B.gyroOffsetErr_idx_1 = ShowIMU_RED_B.xe_post[4];
    ShowIMU_RED_B.linAccelErr_idx_1 = ShowIMU_RED_B.xe_post[7];
    ShowIMU_RED_B.gravityAccelGyroDiff[2] = ShowIMU_RED_B.xe_post[2];
    ShowIMU_RED_B.gyroOffsetErr_idx_2 = ShowIMU_RED_B.xe_post[5];
    ShowIMU_RED_B.linAccelErr_idx_2 = ShowIMU_RED_B.xe_post[8];
  }

  Sho_quaternioncg_quaternioncg_d(ShowIMU_RED_B.gravityAccelGyroDiff,
    &ShowIMU_RED_B.assign_temp_a_p, &ShowIMU_RED_B.assign_temp_b_c,
    &ShowIMU_RED_B.assign_temp_c_f, &ShowIMU_RED_B.assign_temp_d_g);
  ShowIMU_RED_quaternionBase_conj(ShowIMU_RED_B.assign_temp_a_p,
    ShowIMU_RED_B.assign_temp_b_c, ShowIMU_RED_B.assign_temp_c_f,
    ShowIMU_RED_B.assign_temp_d_g, &ShowIMU_RED_B.assign_temp_a,
    &ShowIMU_RED_B.assign_temp_b, &ShowIMU_RED_B.assign_temp_c,
    &ShowIMU_RED_B.assign_temp_d);
  ShowIMU_R_quaternionBase_mtimes(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, ShowIMU_RED_B.assign_temp_a,
    ShowIMU_RED_B.assign_temp_b, ShowIMU_RED_B.assign_temp_c,
    ShowIMU_RED_B.assign_temp_d, &obj->pOrientPost.a, &obj->pOrientPost.b,
    &obj->pOrientPost.c, &obj->pOrientPost.d);
  if (obj->pOrientPost.a < 0.0) {
    ShowIMU_R_quaternionBase_uminus(obj->pOrientPost.a, obj->pOrientPost.b,
      obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  }

  ShowIM_quaternionBase_normalize(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
    &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  ShowIMU_R_quaternionBase_rotmat(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, ShowIMU_RED_B.h1);
  obj->pGyroOffset[0] -= ShowIMU_RED_B.smax;
  obj->pLinAccelPost[0] = obj->pLinAccelPrior[0] - ShowIMU_RED_B.s;
  obj->pGyroOffset[1] -= ShowIMU_RED_B.gyroOffsetErr_idx_1;
  obj->pLinAccelPost[1] = obj->pLinAccelPrior[1] -
    ShowIMU_RED_B.linAccelErr_idx_1;
  obj->pGyroOffset[2] -= ShowIMU_RED_B.gyroOffsetErr_idx_2;
  obj->pLinAccelPost[2] = obj->pLinAccelPrior[2] -
    ShowIMU_RED_B.linAccelErr_idx_2;
  if (!isJamming) {
    for (ShowIMU_RED_B.ix = 0; ShowIMU_RED_B.ix < 3; ShowIMU_RED_B.ix++) {
      ShowIMU_RED_B.jp = ShowIMU_RED_B.ix * 3 - 1;
      ShowIMU_RED_B.gravityAccelGyroDiff[ShowIMU_RED_B.ix] =
        (ShowIMU_RED_B.h1[ShowIMU_RED_B.jp + 1] * ShowIMU_RED_B.offDiag[0] +
         ShowIMU_RED_B.h1[ShowIMU_RED_B.jp + 2] * ShowIMU_RED_B.offDiag[1]) +
        ShowIMU_RED_B.h1[ShowIMU_RED_B.jp + 3] * ShowIMU_RED_B.offDiag[2];
    }

    ShowIMU_RED_B.gravityAccelGyroDiff[0] = obj->pMagVec[0] -
      ShowIMU_RED_B.gravityAccelGyroDiff[0];
    ShowIMU_RED_B.smax = rt_atan2d_snf(obj->pMagVec[2] -
      ShowIMU_RED_B.gravityAccelGyroDiff[2], ShowIMU_RED_B.gravityAccelGyroDiff
      [0]);
    if (ShowIMU_RED_B.smax < -1.5707963267948966) {
      ShowIMU_RED_B.smax = -1.5707963267948966;
    }

    if (ShowIMU_RED_B.smax > 1.5707963267948966) {
      ShowIMU_RED_B.smax = 1.5707963267948966;
    }

    obj->pMagVec[0] = 0.0;
    obj->pMagVec[1] = 0.0;
    obj->pMagVec[2] = 0.0;
    obj->pMagVec[0] = std::cos(ShowIMU_RED_B.smax);
    obj->pMagVec[2] = std::sin(ShowIMU_RED_B.smax);
    obj->pMagVec[0] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[1] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[2] *= obj->ExpectedMagneticFieldStrength;
  }

  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 6; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.jp = ShowIMU_RED_B.iy + 6 * ShowIMU_RED_B.c_j;
      ShowIMU_RED_B.H_m[ShowIMU_RED_B.jp] = 0.0;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        ShowIMU_RED_B.H_m[ShowIMU_RED_B.jp] += ShowIMU_RED_B.H[6 * H_tmp +
          ShowIMU_RED_B.iy] * ShowIMU_RED_B.Qw[12 * ShowIMU_RED_B.c_j + H_tmp];
      }
    }
  }

  for (ShowIMU_RED_B.c_j = 0; ShowIMU_RED_B.c_j < 12; ShowIMU_RED_B.c_j++) {
    for (ShowIMU_RED_B.iy = 0; ShowIMU_RED_B.iy < 12; ShowIMU_RED_B.iy++) {
      ShowIMU_RED_B.smax = 0.0;
      for (H_tmp = 0; H_tmp < 6; H_tmp++) {
        ShowIMU_RED_B.smax += ShowIMU_RED_B.b_X[12 * H_tmp + ShowIMU_RED_B.c_j] *
          ShowIMU_RED_B.H_m[6 * ShowIMU_RED_B.iy + H_tmp];
      }

      ShowIMU_RED_B.jp = 12 * ShowIMU_RED_B.iy + ShowIMU_RED_B.c_j;
      ShowIMU_RED_B.Ppost[ShowIMU_RED_B.jp] = ShowIMU_RED_B.Qw[ShowIMU_RED_B.jp]
        - ShowIMU_RED_B.smax;
    }
  }

  std::memset(&ShowIMU_RED_B.Qw[0], 0, 144U * sizeof(real_T));
  ShowIMU_RED_B.smax = obj->pKalmanPeriod * obj->pKalmanPeriod;
  ShowIMU_RED_B.s = obj->GyroscopeDriftNoise + obj->GyroscopeNoise;
  ShowIMU_RED_B.Qw[0] = (ShowIMU_RED_B.Ppost[39] + ShowIMU_RED_B.s) *
    ShowIMU_RED_B.smax + ShowIMU_RED_B.Ppost[0];
  ShowIMU_RED_B.Qw[39] = ShowIMU_RED_B.Ppost[39] + obj->GyroscopeDriftNoise;
  ShowIMU_RED_B.offDiag[0] = -obj->pKalmanPeriod * ShowIMU_RED_B.Qw[39];
  ShowIMU_RED_B.Qw[13] = (ShowIMU_RED_B.Ppost[52] + ShowIMU_RED_B.s) *
    ShowIMU_RED_B.smax + ShowIMU_RED_B.Ppost[13];
  ShowIMU_RED_B.Qw[52] = ShowIMU_RED_B.Ppost[52] + obj->GyroscopeDriftNoise;
  ShowIMU_RED_B.offDiag[1] = -obj->pKalmanPeriod * ShowIMU_RED_B.Qw[52];
  ShowIMU_RED_B.Qw[26] = (ShowIMU_RED_B.Ppost[65] + ShowIMU_RED_B.s) *
    ShowIMU_RED_B.smax + ShowIMU_RED_B.Ppost[26];
  ShowIMU_RED_B.Qw[65] = ShowIMU_RED_B.Ppost[65] + obj->GyroscopeDriftNoise;
  ShowIMU_RED_B.offDiag[2] = -obj->pKalmanPeriod * ShowIMU_RED_B.Qw[65];
  ShowIMU_RED_B.Qw[3] = ShowIMU_RED_B.offDiag[0];
  ShowIMU_RED_B.Qw[16] = ShowIMU_RED_B.offDiag[1];
  ShowIMU_RED_B.Qw[29] = ShowIMU_RED_B.offDiag[2];
  ShowIMU_RED_B.Qw[36] = ShowIMU_RED_B.offDiag[0];
  ShowIMU_RED_B.Qw[49] = ShowIMU_RED_B.offDiag[1];
  ShowIMU_RED_B.Qw[62] = ShowIMU_RED_B.offDiag[2];
  ShowIMU_RED_B.smax = obj->LinearAccelerationDecayFactor *
    obj->LinearAccelerationDecayFactor;
  ShowIMU_RED_B.Qw[78] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[78] +
    obj->LinearAccelerationNoise;
  ShowIMU_RED_B.Qw[91] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[91] +
    obj->LinearAccelerationNoise;
  ShowIMU_RED_B.Qw[104] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[104] +
    obj->LinearAccelerationNoise;
  ShowIMU_RED_B.smax = obj->MagneticDisturbanceDecayFactor *
    obj->MagneticDisturbanceDecayFactor;
  ShowIMU_RED_B.Qw[117] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[117] +
    obj->MagneticDisturbanceNoise;
  ShowIMU_RED_B.Qw[130] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[130] +
    obj->MagneticDisturbanceNoise;
  ShowIMU_RED_B.Qw[143] = ShowIMU_RED_B.smax * ShowIMU_RED_B.Ppost[143] +
    obj->MagneticDisturbanceNoise;
  std::memcpy(&obj->pQw[0], &ShowIMU_RED_B.Qw[0], 144U * sizeof(real_T));
  ShowIM_quaternioncg_parenAssign(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &orientOut[0], &orientOut[1],
    &orientOut[2], &orientOut[3]);
}

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

static void ShowIM_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Sh_T *obj)
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
  std::memset(&obj->pQv[0], 0, 36U * sizeof(real_T));
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

  std::memcpy(&obj->pQw[0], &tmp[0], 144U * sizeof(real_T));
  obj->pLinAccelPost[0] = 0.0;
  obj->pLinAccelPost[1] = 0.0;
  obj->pLinAccelPost[2] = 0.0;
  obj->pFirstTime = true;
}

// Model step function
void ShowIMU_RED_step(void)
{
  char_T *sErr;
  uint8_T SwappedDataBytes;
  uint8_T status;
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real_T *b;

  // MATLAB Function: '<S6>/MATLAB Function' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S6>/Constant'
  //   Constant: '<S6>/Constant1'

  ShowIMU_RED_MATLABFunction(ShowIMU_RED_P.Constant_Value,
    ShowIMU_RED_P.Constant_Value_i, ShowIMU_RED_P.Constant1_Value,
    &ShowIMU_RED_B.c_g, &ShowIMU_RED_B.b_n, &ShowIMU_RED_B.c_k);

  // MATLABSystem: '<Root>/LSM9DS1 IMU Sensor' incorporates:
  //   Sum: '<S6>/Sum'

  status = 24U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj_e.i2cobj_A_G.MW_I2C_HANDLE,
    106U, &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj_e.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      ShowIMU_RED_B.output_raw, 6U, false, true);
    std::memcpy((void *)&ShowIMU_RED_B.b_RegisterValue[0], (void *)
                &ShowIMU_RED_B.output_raw[0], (uint32_T)((size_t)3 * sizeof
      (int16_T)));
  } else {
    ShowIMU_RED_B.b_RegisterValue[0] = 0;
    ShowIMU_RED_B.b_RegisterValue[1] = 0;
    ShowIMU_RED_B.b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj_e.CalGyroA[0];
  for (ShowIMU_RED_B.i = 0; ShowIMU_RED_B.i < 3; ShowIMU_RED_B.i++) {
    ShowIMU_RED_B.LSM9DS1IMUSensor_o1[ShowIMU_RED_B.i] = ((b[3 * ShowIMU_RED_B.i
      + 1] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[1]) + b[3 *
      ShowIMU_RED_B.i] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[0]))
      + b[3 * ShowIMU_RED_B.i + 2] * static_cast<real_T>
      (ShowIMU_RED_B.b_RegisterValue[2])) +
      ShowIMU_RED_DW.obj_e.CalGyroB[ShowIMU_RED_B.i];
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj_e.i2cobj_A_G.MW_I2C_HANDLE,
    106U, &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj_e.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      ShowIMU_RED_B.output_raw, 6U, false, true);
    std::memcpy((void *)&ShowIMU_RED_B.b_RegisterValue[0], (void *)
                &ShowIMU_RED_B.output_raw[0], (uint32_T)((size_t)3 * sizeof
      (int16_T)));
  } else {
    ShowIMU_RED_B.b_RegisterValue[0] = 0;
    ShowIMU_RED_B.b_RegisterValue[1] = 0;
    ShowIMU_RED_B.b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj_e.CalAccelA[0];
  for (ShowIMU_RED_B.i = 0; ShowIMU_RED_B.i < 3; ShowIMU_RED_B.i++) {
    ShowIMU_RED_B.LSM9DS1IMUSensor_o2[ShowIMU_RED_B.i] = ((b[3 * ShowIMU_RED_B.i
      + 1] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[1]) + b[3 *
      ShowIMU_RED_B.i] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[0]))
      + b[3 * ShowIMU_RED_B.i + 2] * static_cast<real_T>
      (ShowIMU_RED_B.b_RegisterValue[2])) +
      ShowIMU_RED_DW.obj_e.CalAccelB[ShowIMU_RED_B.i];
  }

  status = 40U;
  std::memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
    sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(ShowIMU_RED_DW.obj_e.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(ShowIMU_RED_DW.obj_e.i2cobj_MAG.MW_I2C_HANDLE, 28U,
                      ShowIMU_RED_B.output_raw, 6U, false, true);
    std::memcpy((void *)&ShowIMU_RED_B.b_RegisterValue[0], (void *)
                &ShowIMU_RED_B.output_raw[0], (uint32_T)((size_t)3 * sizeof
      (int16_T)));
  } else {
    ShowIMU_RED_B.b_RegisterValue[0] = 0;
    ShowIMU_RED_B.b_RegisterValue[1] = 0;
    ShowIMU_RED_B.b_RegisterValue[2] = 0;
  }

  b = &ShowIMU_RED_DW.obj_e.CalMagA[0];
  for (ShowIMU_RED_B.i = 0; ShowIMU_RED_B.i < 3; ShowIMU_RED_B.i++) {
    ShowIMU_RED_B.LSM9DS1IMUSensor_o3[ShowIMU_RED_B.i] = ((b[3 * ShowIMU_RED_B.i
      + 1] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[1]) + b[3 *
      ShowIMU_RED_B.i] * static_cast<real_T>(ShowIMU_RED_B.b_RegisterValue[0]))
      + b[3 * ShowIMU_RED_B.i + 2] * static_cast<real_T>
      (ShowIMU_RED_B.b_RegisterValue[2])) +
      ShowIMU_RED_DW.obj_e.CalMagB[ShowIMU_RED_B.i];
    ShowIMU_RED_B.LSM9DS1IMUSensor_o1[ShowIMU_RED_B.i] =
      ShowIMU_RED_B.LSM9DS1IMUSensor_o1[ShowIMU_RED_B.i] * 500.0 / 32768.0;
    ShowIMU_RED_B.LSM9DS1IMUSensor_o2[ShowIMU_RED_B.i] =
      ShowIMU_RED_B.LSM9DS1IMUSensor_o2[ShowIMU_RED_B.i] * 2.0 / 32768.0;
    ShowIMU_RED_B.LSM9DS1IMUSensor_o3[ShowIMU_RED_B.i] =
      ShowIMU_RED_B.LSM9DS1IMUSensor_o3[ShowIMU_RED_B.i] * 4.0 / 32768.0;

    // Sum: '<S6>/Sum' incorporates:
    //   UnitDelay: '<S6>/Unit Delay1'

    ShowIMU_RED_B.b_d = ShowIMU_RED_B.LSM9DS1IMUSensor_o2[ShowIMU_RED_B.i] +
      ShowIMU_RED_DW.UnitDelay1_DSTATE[ShowIMU_RED_B.i];

    // Product: '<S6>/Product1'
    ShowIMU_RED_B.Product1[ShowIMU_RED_B.i] = ShowIMU_RED_B.b_d *
      ShowIMU_RED_B.c_g;
    ShowIMU_RED_B.Sum[ShowIMU_RED_B.i] = ShowIMU_RED_B.b_d;
  }

  // End of MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'

  // MATLAB Function: '<S4>/MATLAB Function' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S4>/Constant'
  //   Constant: '<S4>/Constant1'

  ShowIMU_RED_MATLABFunction(ShowIMU_RED_P.Constant_Value,
    ShowIMU_RED_P.Constant_Value_e, ShowIMU_RED_P.Constant1_Value_g,
    &ShowIMU_RED_B.c_g, &ShowIMU_RED_B.b_d, &ShowIMU_RED_B.c_p);

  // Sum: '<S4>/Sum' incorporates:
  //   UnitDelay: '<S4>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_k_c = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[0] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[0];

  // Product: '<S4>/Product1'
  ShowIMU_RED_B.Product1_b[0] = ShowIMU_RED_B.rtb_Sum_k_c * ShowIMU_RED_B.c_g;

  // Sum: '<S4>/Sum' incorporates:
  //   UnitDelay: '<S4>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_k_idx_0 = ShowIMU_RED_B.rtb_Sum_k_c;
  ShowIMU_RED_B.rtb_Sum_k_c = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[1] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[1];

  // Product: '<S4>/Product1'
  ShowIMU_RED_B.Product1_b[1] = ShowIMU_RED_B.rtb_Sum_k_c * ShowIMU_RED_B.c_g;

  // Sum: '<S4>/Sum' incorporates:
  //   UnitDelay: '<S4>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_k_idx_1 = ShowIMU_RED_B.rtb_Sum_k_c;
  ShowIMU_RED_B.rtb_Sum_k_c = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[2] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[2];

  // Product: '<S4>/Product1'
  ShowIMU_RED_B.Product1_b[2] = ShowIMU_RED_B.rtb_Sum_k_c * ShowIMU_RED_B.c_g;

  // MATLAB Function: '<S8>/MATLAB Function' incorporates:
  //   Constant: '<Root>/Constant'
  //   Constant: '<S8>/Constant'
  //   Constant: '<S8>/Constant1'

  ShowIMU_RED_MATLABFunction(ShowIMU_RED_P.Constant_Value,
    ShowIMU_RED_P.Constant_Value_ec, ShowIMU_RED_P.Constant1_Value_f,
    &ShowIMU_RED_B.a, &ShowIMU_RED_B.b_c, &ShowIMU_RED_B.c_g);

  // Sum: '<S8>/Sum' incorporates:
  //   UnitDelay: '<S8>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_d_b = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[0] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[0];

  // Product: '<S8>/Product1'
  ShowIMU_RED_B.Product1_h[0] = ShowIMU_RED_B.rtb_Sum_d_b * ShowIMU_RED_B.a;

  // Sum: '<S8>/Sum' incorporates:
  //   UnitDelay: '<S8>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_d_idx_0 = ShowIMU_RED_B.rtb_Sum_d_b;
  ShowIMU_RED_B.rtb_Sum_d_b = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[1] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[1];

  // Product: '<S8>/Product1'
  ShowIMU_RED_B.Product1_h[1] = ShowIMU_RED_B.rtb_Sum_d_b * ShowIMU_RED_B.a;

  // Sum: '<S8>/Sum' incorporates:
  //   UnitDelay: '<S8>/Unit Delay1'

  ShowIMU_RED_B.rtb_Sum_d_idx_1 = ShowIMU_RED_B.rtb_Sum_d_b;
  ShowIMU_RED_B.rtb_Sum_d_b = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[2] +
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[2];

  // Product: '<S8>/Product1'
  ShowIMU_RED_B.Product1_h[2] = ShowIMU_RED_B.rtb_Sum_d_b * ShowIMU_RED_B.a;

  // SignalConversion generated from: '<Root>/UDP Send'
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[0] = ShowIMU_RED_B.Product1_b[0];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[1] = ShowIMU_RED_B.Product1_b[1];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[2] = ShowIMU_RED_B.Product1_b[2];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[3] = ShowIMU_RED_B.Product1[0];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[4] = ShowIMU_RED_B.Product1[1];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[5] = ShowIMU_RED_B.Product1[2];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[6] = ShowIMU_RED_B.Product1_h[0];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[7] = ShowIMU_RED_B.Product1_h[1];
  ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[8] = ShowIMU_RED_B.Product1_h[2];

  // Gain: '<Root>/Gain1'
  ShowIMU_RED_B.Gain1[0] = ShowIMU_RED_P.Gain1_Gain * ShowIMU_RED_B.Product1[0];

  // Gain: '<Root>/Gain'
  ShowIMU_RED_B.Gain[0] = ShowIMU_RED_P.Gain_Gain * ShowIMU_RED_B.Product1_b[0];

  // Gain: '<Root>/Gain1'
  ShowIMU_RED_B.Gain1[1] = ShowIMU_RED_P.Gain1_Gain * ShowIMU_RED_B.Product1[1];

  // Gain: '<Root>/Gain'
  ShowIMU_RED_B.Gain[1] = ShowIMU_RED_P.Gain_Gain * ShowIMU_RED_B.Product1_b[1];

  // Gain: '<Root>/Gain1'
  ShowIMU_RED_B.Gain1[2] = ShowIMU_RED_P.Gain1_Gain * ShowIMU_RED_B.Product1[2];

  // Gain: '<Root>/Gain'
  ShowIMU_RED_B.Gain[2] = ShowIMU_RED_P.Gain_Gain * ShowIMU_RED_B.Product1_b[2];

  // MATLABSystem: '<Root>/AHRS'
  if (ShowIMU_RED_DW.obj.AccelerometerNoise !=
      ShowIMU_RED_P.AHRS_AccelerometerNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.AccelerometerNoise =
      ShowIMU_RED_P.AHRS_AccelerometerNoise;
  }

  if (ShowIMU_RED_DW.obj.GyroscopeNoise != ShowIMU_RED_P.AHRS_GyroscopeNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.GyroscopeNoise = ShowIMU_RED_P.AHRS_GyroscopeNoise;
  }

  if (ShowIMU_RED_DW.obj.MagnetometerNoise !=
      ShowIMU_RED_P.AHRS_MagnetometerNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagnetometerNoise = ShowIMU_RED_P.AHRS_MagnetometerNoise;
  }

  if (ShowIMU_RED_DW.obj.GyroscopeDriftNoise !=
      ShowIMU_RED_P.AHRS_GyroscopeDriftNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.GyroscopeDriftNoise =
      ShowIMU_RED_P.AHRS_GyroscopeDriftNoise;
  }

  if (ShowIMU_RED_DW.obj.LinearAccelerationNoise !=
      ShowIMU_RED_P.AHRS_LinearAccelerationNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.LinearAccelerationNoise =
      ShowIMU_RED_P.AHRS_LinearAccelerationNoise;
  }

  if (ShowIMU_RED_DW.obj.MagneticDisturbanceNoise !=
      ShowIMU_RED_P.AHRS_MagneticDisturbanceNoise) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagneticDisturbanceNoise =
      ShowIMU_RED_P.AHRS_MagneticDisturbanceNoise;
  }

  if (ShowIMU_RED_DW.obj.LinearAccelerationDecayFactor !=
      ShowIMU_RED_P.AHRS_LinearAccelerationDecayFac) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.LinearAccelerationDecayFactor =
      ShowIMU_RED_P.AHRS_LinearAccelerationDecayFac;
  }

  if (ShowIMU_RED_DW.obj.MagneticDisturbanceDecayFactor !=
      ShowIMU_RED_P.AHRS_MagneticDisturbanceDecayFa) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagneticDisturbanceDecayFactor =
      ShowIMU_RED_P.AHRS_MagneticDisturbanceDecayFa;
  }

  if (ShowIMU_RED_DW.obj.ExpectedMagneticFieldStrength !=
      ShowIMU_RED_P.AHRS_ExpectedMagneticFieldStren) {
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.ExpectedMagneticFieldStrength =
      ShowIMU_RED_P.AHRS_ExpectedMagneticFieldStren;
  }

  if (ShowIMU_RED_DW.obj.TunablePropsChanged) {
    ShowIMU_RED_DW.obj.TunablePropsChanged = false;
    ShowIMU_RED_B.magMeasNoiseVar = ShowIMU_RED_DW.obj.pKalmanPeriod *
      ShowIMU_RED_DW.obj.pKalmanPeriod * (ShowIMU_RED_DW.obj.GyroscopeDriftNoise
      + ShowIMU_RED_DW.obj.GyroscopeNoise);
    ShowIMU_RED_B.a = ShowIMU_RED_B.magMeasNoiseVar +
      (ShowIMU_RED_DW.obj.AccelerometerNoise +
       ShowIMU_RED_DW.obj.LinearAccelerationNoise);
    ShowIMU_RED_B.magMeasNoiseVar += ShowIMU_RED_DW.obj.MagnetometerNoise +
      ShowIMU_RED_DW.obj.MagneticDisturbanceNoise;
    std::memset(&ShowIMU_RED_DW.obj.pQv[0], 0, 36U * sizeof(real_T));
    for (ShowIMU_RED_B.i = 0; ShowIMU_RED_B.i < 3; ShowIMU_RED_B.i++) {
      ShowIMU_RED_B.i_l = tmp[3 * ShowIMU_RED_B.i];
      ShowIMU_RED_DW.obj.pQv[6 * ShowIMU_RED_B.i] = ShowIMU_RED_B.a *
        static_cast<real_T>(ShowIMU_RED_B.i_l);
      ShowIMU_RED_B.i1 = 6 * (ShowIMU_RED_B.i + 3);
      ShowIMU_RED_DW.obj.pQv[ShowIMU_RED_B.i1 + 3] =
        ShowIMU_RED_B.magMeasNoiseVar * static_cast<real_T>(ShowIMU_RED_B.i_l);
      ShowIMU_RED_B.i_l = tmp[3 * ShowIMU_RED_B.i + 1];
      ShowIMU_RED_DW.obj.pQv[6 * ShowIMU_RED_B.i + 1] = ShowIMU_RED_B.a *
        static_cast<real_T>(ShowIMU_RED_B.i_l);
      ShowIMU_RED_DW.obj.pQv[ShowIMU_RED_B.i1 + 4] =
        ShowIMU_RED_B.magMeasNoiseVar * static_cast<real_T>(ShowIMU_RED_B.i_l);
      ShowIMU_RED_B.i_l = tmp[3 * ShowIMU_RED_B.i + 2];
      ShowIMU_RED_DW.obj.pQv[6 * ShowIMU_RED_B.i + 2] = ShowIMU_RED_B.a *
        static_cast<real_T>(ShowIMU_RED_B.i_l);
      ShowIMU_RED_DW.obj.pQv[ShowIMU_RED_B.i1 + 5] =
        ShowIMU_RED_B.magMeasNoiseVar * static_cast<real_T>(ShowIMU_RED_B.i_l);
    }
  }

  ShowIMU_RED_ahrsfilter_stepImpl(&ShowIMU_RED_DW.obj, ShowIMU_RED_B.Gain1,
    ShowIMU_RED_B.Gain, ShowIMU_RED_B.Product1_h, ShowIMU_RED_B.AHRS_o1,
    ShowIMU_RED_B.AHRS_o2);

  // End of MATLABSystem: '<Root>/AHRS'
  // Sum: '<S8>/Sum1' incorporates:
  //   Gain: '<S8>/Gain1'
  //   Product: '<S8>/Product5'
  //   Sum: '<S8>/Sum2'
  //   UnitDelay: '<S8>/Unit Delay1'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_o[0] = (ShowIMU_RED_B.rtb_Sum_d_idx_0 *
    ShowIMU_RED_B.b_c + ShowIMU_RED_B.LSM9DS1IMUSensor_o3[0]) *
    ShowIMU_RED_P.Gain1_Gain_o + ShowIMU_RED_DW.UnitDelay2_DSTATE[0];

  // Sum: '<S8>/Sum3' incorporates:
  //   Product: '<S8>/Product2'
  //   Product: '<S8>/Product5'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE[0] = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[0] -
    ShowIMU_RED_B.rtb_Sum_d_idx_0 * ShowIMU_RED_B.c_g;

  // Sum: '<S8>/Sum1' incorporates:
  //   Gain: '<S8>/Gain1'
  //   Product: '<S8>/Product5'
  //   Sum: '<S8>/Sum2'
  //   UnitDelay: '<S8>/Unit Delay1'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_o[1] = (ShowIMU_RED_B.rtb_Sum_d_idx_1 *
    ShowIMU_RED_B.b_c + ShowIMU_RED_B.LSM9DS1IMUSensor_o3[1]) *
    ShowIMU_RED_P.Gain1_Gain_o + ShowIMU_RED_DW.UnitDelay2_DSTATE[1];

  // Sum: '<S8>/Sum3' incorporates:
  //   Product: '<S8>/Product2'
  //   Product: '<S8>/Product5'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE[1] = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[1] -
    ShowIMU_RED_B.rtb_Sum_d_idx_1 * ShowIMU_RED_B.c_g;

  // Sum: '<S8>/Sum1' incorporates:
  //   Gain: '<S8>/Gain1'
  //   Product: '<S8>/Product5'
  //   Sum: '<S8>/Sum2'
  //   UnitDelay: '<S8>/Unit Delay1'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_o[2] = (ShowIMU_RED_B.rtb_Sum_d_b *
    ShowIMU_RED_B.b_c + ShowIMU_RED_B.LSM9DS1IMUSensor_o3[2]) *
    ShowIMU_RED_P.Gain1_Gain_o + ShowIMU_RED_DW.UnitDelay2_DSTATE[2];

  // Sum: '<S8>/Sum3' incorporates:
  //   Product: '<S8>/Product2'
  //   UnitDelay: '<S8>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE[2] = ShowIMU_RED_B.LSM9DS1IMUSensor_o3[2] -
    ShowIMU_RED_B.rtb_Sum_d_b * ShowIMU_RED_B.c_g;

  // Sum: '<S4>/Sum1' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Product: '<S4>/Product5'
  //   Sum: '<S4>/Sum2'
  //   UnitDelay: '<S4>/Unit Delay1'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_d[0] = (ShowIMU_RED_B.rtb_Sum_k_idx_0 *
    ShowIMU_RED_B.b_d + ShowIMU_RED_B.LSM9DS1IMUSensor_o1[0]) *
    ShowIMU_RED_P.Gain1_Gain_b + ShowIMU_RED_DW.UnitDelay2_DSTATE_l[0];

  // Sum: '<S4>/Sum3' incorporates:
  //   Product: '<S4>/Product2'
  //   Product: '<S4>/Product5'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_l[0] = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[0] -
    ShowIMU_RED_B.rtb_Sum_k_idx_0 * ShowIMU_RED_B.c_p;

  // Sum: '<S4>/Sum1' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Product: '<S4>/Product5'
  //   Sum: '<S4>/Sum2'
  //   UnitDelay: '<S4>/Unit Delay1'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_d[1] = (ShowIMU_RED_B.rtb_Sum_k_idx_1 *
    ShowIMU_RED_B.b_d + ShowIMU_RED_B.LSM9DS1IMUSensor_o1[1]) *
    ShowIMU_RED_P.Gain1_Gain_b + ShowIMU_RED_DW.UnitDelay2_DSTATE_l[1];

  // Sum: '<S4>/Sum3' incorporates:
  //   Product: '<S4>/Product2'
  //   Product: '<S4>/Product5'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_l[1] = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[1] -
    ShowIMU_RED_B.rtb_Sum_k_idx_1 * ShowIMU_RED_B.c_p;

  // Sum: '<S4>/Sum1' incorporates:
  //   Gain: '<S4>/Gain1'
  //   Product: '<S4>/Product5'
  //   Sum: '<S4>/Sum2'
  //   UnitDelay: '<S4>/Unit Delay1'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE_d[2] = (ShowIMU_RED_B.rtb_Sum_k_c *
    ShowIMU_RED_B.b_d + ShowIMU_RED_B.LSM9DS1IMUSensor_o1[2]) *
    ShowIMU_RED_P.Gain1_Gain_b + ShowIMU_RED_DW.UnitDelay2_DSTATE_l[2];

  // Sum: '<S4>/Sum3' incorporates:
  //   Product: '<S4>/Product2'
  //   UnitDelay: '<S4>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_l[2] = ShowIMU_RED_B.LSM9DS1IMUSensor_o1[2] -
    ShowIMU_RED_B.rtb_Sum_k_c * ShowIMU_RED_B.c_p;

  // Sum: '<S6>/Sum1' incorporates:
  //   Gain: '<S6>/Gain1'
  //   Product: '<S6>/Product5'
  //   Sum: '<S6>/Sum2'
  //   UnitDelay: '<S6>/Unit Delay1'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE[0] = (ShowIMU_RED_B.Sum[0] *
    ShowIMU_RED_B.b_n + ShowIMU_RED_B.LSM9DS1IMUSensor_o2[0]) *
    ShowIMU_RED_P.Gain1_Gain_a + ShowIMU_RED_DW.UnitDelay2_DSTATE_e[0];

  // Sum: '<S6>/Sum3' incorporates:
  //   Product: '<S6>/Product2'
  //   Product: '<S6>/Product5'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_e[0] = ShowIMU_RED_B.LSM9DS1IMUSensor_o2[0] -
    ShowIMU_RED_B.Sum[0] * ShowIMU_RED_B.c_k;

  // Sum: '<S6>/Sum1' incorporates:
  //   Gain: '<S6>/Gain1'
  //   Product: '<S6>/Product5'
  //   Sum: '<S6>/Sum2'
  //   UnitDelay: '<S6>/Unit Delay1'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE[1] = (ShowIMU_RED_B.Sum[1] *
    ShowIMU_RED_B.b_n + ShowIMU_RED_B.LSM9DS1IMUSensor_o2[1]) *
    ShowIMU_RED_P.Gain1_Gain_a + ShowIMU_RED_DW.UnitDelay2_DSTATE_e[1];

  // Sum: '<S6>/Sum3' incorporates:
  //   Product: '<S6>/Product2'
  //   Product: '<S6>/Product5'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_e[1] = ShowIMU_RED_B.LSM9DS1IMUSensor_o2[1] -
    ShowIMU_RED_B.Sum[1] * ShowIMU_RED_B.c_k;

  // Sum: '<S6>/Sum1' incorporates:
  //   Gain: '<S6>/Gain1'
  //   Product: '<S6>/Product5'
  //   Sum: '<S6>/Sum2'
  //   UnitDelay: '<S6>/Unit Delay1'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay1_DSTATE[2] = (ShowIMU_RED_B.Sum[2] *
    ShowIMU_RED_B.b_n + ShowIMU_RED_B.LSM9DS1IMUSensor_o2[2]) *
    ShowIMU_RED_P.Gain1_Gain_a + ShowIMU_RED_DW.UnitDelay2_DSTATE_e[2];

  // Sum: '<S6>/Sum3' incorporates:
  //   Product: '<S6>/Product2'
  //   Product: '<S6>/Product5'
  //   UnitDelay: '<S6>/Unit Delay2'

  ShowIMU_RED_DW.UnitDelay2_DSTATE_e[2] = ShowIMU_RED_B.LSM9DS1IMUSensor_o2[2] -
    ShowIMU_RED_B.Sum[2] * ShowIMU_RED_B.c_k;

  // Update for S-Function (sdspToNetwork): '<Root>/UDP Send'
  sErr = GetErrorBuffer(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U]);
  LibUpdate_Network(&ShowIMU_RED_DW.UDPSend_NetworkLib[0U],
                    &ShowIMU_RED_B.TmpSignalConversionAtUDPSendInp[0U], 9);
  if (*sErr != 0) {
    rtmSetErrorStatus(ShowIMU_RED_M, sErr);
    rtmSetStopRequested(ShowIMU_RED_M, 1);
  }

  // End of Update for S-Function (sdspToNetwork): '<Root>/UDP Send'

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)ShowIMU_RED_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(ShowIMU_RED_M)!=-1) &&
        !((rtmGetTFinal(ShowIMU_RED_M)-ShowIMU_RED_M->Timing.taskTime0) >
          ShowIMU_RED_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(ShowIMU_RED_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ShowIMU_RED_M)) {
      rtmSetErrorStatus(ShowIMU_RED_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  ShowIMU_RED_M->Timing.taskTime0 =
    ((time_T)(++ShowIMU_RED_M->Timing.clockTick0)) *
    ShowIMU_RED_M->Timing.stepSize0;
}

// Model initialize function
void ShowIMU_RED_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(ShowIMU_RED_M, 7200.0);
  ShowIMU_RED_M->Timing.stepSize0 = 0.01;

  // External mode info
  ShowIMU_RED_M->Sizes.checksums[0] = (372344228U);
  ShowIMU_RED_M->Sizes.checksums[1] = (2374689941U);
  ShowIMU_RED_M->Sizes.checksums[2] = (3899720995U);
  ShowIMU_RED_M->Sizes.checksums[3] = (549893384U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    ShowIMU_RED_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ShowIMU_RED_M->extModeInfo,
      &ShowIMU_RED_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ShowIMU_RED_M->extModeInfo,
                        ShowIMU_RED_M->Sizes.checksums);
    rteiSetTPtr(ShowIMU_RED_M->extModeInfo, rtmGetTPtr(ShowIMU_RED_M));
  }

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

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE[0] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[0] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[0] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE[0] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_l[0] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_e[0] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE[1] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[1] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[1] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE[1] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_l[1] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_e[1] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE[2] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_d[2] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_c;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay1'
    ShowIMU_RED_DW.UnitDelay1_DSTATE_o[2] =
      ShowIMU_RED_P.UnitDelay1_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S8>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE[2] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition;

    // InitializeConditions for UnitDelay: '<S4>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_l[2] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_m;

    // InitializeConditions for UnitDelay: '<S6>/Unit Delay2'
    ShowIMU_RED_DW.UnitDelay2_DSTATE_e[2] =
      ShowIMU_RED_P.UnitDelay2_InitialCondition_c;

    // Start for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
    ShowIMU_RED_DW.obj_e.i2cobj_A_G.matlabCodegenIsDeleted = true;
    ShowIMU_RED_DW.obj_e.i2cobj_MAG.matlabCodegenIsDeleted = true;
    ShowIMU_RED_DW.obj_e.matlabCodegenIsDeleted = true;
    ShowI_lsm9ds1Block_lsm9ds1Block(&ShowIMU_RED_DW.obj_e);
    ShowIMU_RED_SystemCore_setup(&ShowIMU_RED_DW.obj_e);

    // Start for MATLABSystem: '<Root>/AHRS'
    ShowIMU_RED_DW.obj.isInitialized = 0;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.AccelerometerNoise =
      ShowIMU_RED_P.AHRS_AccelerometerNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.GyroscopeNoise = ShowIMU_RED_P.AHRS_GyroscopeNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagnetometerNoise = ShowIMU_RED_P.AHRS_MagnetometerNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.GyroscopeDriftNoise =
      ShowIMU_RED_P.AHRS_GyroscopeDriftNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.LinearAccelerationNoise =
      ShowIMU_RED_P.AHRS_LinearAccelerationNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagneticDisturbanceNoise =
      ShowIMU_RED_P.AHRS_MagneticDisturbanceNoise;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.LinearAccelerationDecayFactor =
      ShowIMU_RED_P.AHRS_LinearAccelerationDecayFac;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.MagneticDisturbanceDecayFactor =
      ShowIMU_RED_P.AHRS_MagneticDisturbanceDecayFa;
    if (ShowIMU_RED_DW.obj.isInitialized == 1) {
      ShowIMU_RED_DW.obj.TunablePropsChanged = true;
    }

    ShowIMU_RED_DW.obj.ExpectedMagneticFieldStrength =
      ShowIMU_RED_P.AHRS_ExpectedMagneticFieldStren;
    ShowIMU_RED_DW.obj.isInitialized = 1;
    ShowIMU_RED_DW.obj.pInputPrototype[0] = ShowIMU_RED_B.Gain1[0];
    ShowIMU_RED_DW.obj.pInputPrototype[1] = ShowIMU_RED_B.Gain1[1];
    ShowIMU_RED_DW.obj.pInputPrototype[2] = ShowIMU_RED_B.Gain1[2];
    ShowIMU_RED_DW.obj.pSensorPeriod = 0.01;
    ShowIMU_RED_DW.obj.pKalmanPeriod = ShowIMU_RED_DW.obj.pSensorPeriod;
    ShowIMU_RED_DW.obj.pRefSys = &ShowIMU_RED_DW.gobj_2;
    ShowIMU_RED_DW.obj.TunablePropsChanged = false;

    // End of Start for MATLABSystem: '<Root>/AHRS'

    // InitializeConditions for MATLABSystem: '<Root>/AHRS'
    ShowIM_AHRSFilterBase_resetImpl(&ShowIMU_RED_DW.obj);
  }
}

// Model terminate function
void ShowIMU_RED_terminate(void)
{
  char_T *sErr;

  // Terminate for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  matlabCodegenHandle_matlabCodeg(&ShowIMU_RED_DW.obj_e);
  matlabCodegenHandle_matlabCo_dj(&ShowIMU_RED_DW.obj_e.i2cobj_MAG);
  matlabCodegenHandle_matlabCod_d(&ShowIMU_RED_DW.obj_e.i2cobj_A_G);

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
