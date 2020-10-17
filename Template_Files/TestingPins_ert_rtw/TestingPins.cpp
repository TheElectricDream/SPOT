//
//  TestingPins.cpp
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "TestingPins".
//
//  Model version              : 1.56
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 17 10:45:47 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#include "TestingPins.h"
#include "TestingPins_private.h"

// Block signals (default storage)
B_TestingPins_T TestingPins_B;

// Block states (default storage)
DW_TestingPins_T TestingPins_DW;

// Real-time model
RT_MODEL_TestingPins_T TestingPins_M_ = RT_MODEL_TestingPins_T();
RT_MODEL_TestingPins_T *const TestingPins_M = &TestingPins_M_;

// Forward declaration for local functions
static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3]);
static void TestingPins_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9]);
static void Testi_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d);
static void Tes_quaternioncg_quaternioncg_l(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d);
static void TestingPi_quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
  real_T x_d, real_T y_a, real_T y_b, real_T y_c, real_T y_d, real_T *o_a,
  real_T *o_b, real_T *o_c, real_T *o_d);
static void IMUFusionCommon_predictOrientat(const
  fusion_simulink_ahrsfilter_Te_T *obj, const real_T gfast[3], const real_T
  offset[3], real_T qorient_a, real_T qorient_b, real_T qorient_c, real_T
  qorient_d, real_T *b_qorient_a, real_T *b_qorient_b, real_T *b_qorient_c,
  real_T *b_qorient_d);
static void TestingPi_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9]);
static void Test_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9]);
static real_T TestingPins_norm(const real_T x[3]);
static void TestingPins_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void TestingPi_quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d);
static void Testin_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
static void Testin_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d);
static void TestingPins_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Te_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3]);
static void TestingPin_SystemCore_release_l(const
  raspi_internal_lsm9ds1Block_T_T *obj);
static void TestingPins_SystemCore_delete_l(const
  raspi_internal_lsm9ds1Block_T_T *obj);
static void matlabCodegenHandle_matlabCod_l(raspi_internal_lsm9ds1Block_T_T *obj);
static void TestingP_SystemCore_release_l3s(j_codertarget_raspi_internal__T *obj);
static void TestingPi_SystemCore_delete_l3s(j_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabC_l3s(j_codertarget_raspi_internal__T *obj);
static void TestingPi_SystemCore_release_l3(i_codertarget_raspi_internal__T *obj);
static void TestingPin_SystemCore_delete_l3(i_codertarget_raspi_internal__T *obj);
static void matlabCodegenHandle_matlabCo_l3(i_codertarget_raspi_internal__T *obj);
static void TestingPins_SystemCore_release(const raspi_internal_hts221Block_Te_T
  *obj);
static void TestingPins_SystemCore_delete(const raspi_internal_hts221Block_Te_T *
  obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_hts221Block_Te_T *obj);
static raspi_internal_lsm9ds1Block_T_T *Testi_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_T_T *obj);
static void TestingPins_SystemCore_setup_l(raspi_internal_lsm9ds1Block_T_T *obj);
static void Testin_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Te_T *obj);
static void TestingPins_SystemCore_setup(raspi_internal_hts221Block_Te_T *obj);
static void IMUFusionCommon_computeAngularV(const real_T gfast[3], const real_T
  offset[3], real_T av[3])
{
  av[0] = gfast[0] - offset[0];
  av[1] = gfast[1] - offset[1];
  av[2] = gfast[2] - offset[2];
}

static void TestingPins_NED_ecompass(const real_T a[3], const real_T m[3],
  real_T R[9])
{
  boolean_T nanPageIdx;
  boolean_T y[3];
  int32_T iy;
  int32_T xpageoffset;
  boolean_T exitg1;
  TestingPins_B.Reast[0] = a[1] * m[2] - a[2] * m[1];
  TestingPins_B.Reast[1] = a[2] * m[0] - a[0] * m[2];
  TestingPins_B.Reast[2] = a[0] * m[1] - a[1] * m[0];
  R[6] = a[0];
  R[3] = TestingPins_B.Reast[0];
  R[7] = a[1];
  R[4] = TestingPins_B.Reast[1];
  R[8] = a[2];
  R[5] = TestingPins_B.Reast[2];
  R[0] = TestingPins_B.Reast[1] * a[2] - TestingPins_B.Reast[2] * a[1];
  R[1] = TestingPins_B.Reast[2] * a[0] - TestingPins_B.Reast[0] * a[2];
  R[2] = TestingPins_B.Reast[0] * a[1] - TestingPins_B.Reast[1] * a[0];
  for (iy = 0; iy < 9; iy++) {
    TestingPins_B.x[iy] = R[iy] * R[iy];
  }

  for (iy = 0; iy < 3; iy++) {
    xpageoffset = iy * 3;
    TestingPins_B.Reast[iy] = TestingPins_B.x[xpageoffset + 2] +
      (TestingPins_B.x[xpageoffset + 1] + TestingPins_B.x[xpageoffset]);
  }

  TestingPins_B.Reast[0] = sqrt(TestingPins_B.Reast[0]);
  TestingPins_B.Reast[1] = sqrt(TestingPins_B.Reast[1]);
  TestingPins_B.Reast[2] = sqrt(TestingPins_B.Reast[2]);
  memcpy(&TestingPins_B.x[0], &R[0], 9U * sizeof(real_T));
  for (iy = 0; iy < 3; iy++) {
    R[3 * iy] = TestingPins_B.x[3 * iy] / TestingPins_B.Reast[iy];
    xpageoffset = 3 * iy + 1;
    R[xpageoffset] = TestingPins_B.x[xpageoffset] / TestingPins_B.Reast[iy];
    xpageoffset = 3 * iy + 2;
    R[xpageoffset] = TestingPins_B.x[xpageoffset] / TestingPins_B.Reast[iy];
  }

  for (iy = 0; iy < 9; iy++) {
    TestingPins_B.b[iy] = rtIsNaN(R[iy]);
  }

  y[0] = false;
  y[1] = false;
  y[2] = false;
  xpageoffset = 1;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 3)) {
    if (!TestingPins_B.b[xpageoffset - 1]) {
      xpageoffset++;
    } else {
      y[0] = true;
      exitg1 = true;
    }
  }

  xpageoffset = 4;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 6)) {
    if (!TestingPins_B.b[xpageoffset - 1]) {
      xpageoffset++;
    } else {
      y[1] = true;
      exitg1 = true;
    }
  }

  xpageoffset = 7;
  exitg1 = false;
  while ((!exitg1) && (xpageoffset <= 9)) {
    if (!TestingPins_B.b[xpageoffset - 1]) {
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

static void Testi_quaternioncg_quaternioncg(const real_T varargin_1[9], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d)
{
  int32_T b_k;
  int32_T b_idx;
  int32_T b;
  boolean_T exitg1;
  TestingPins_B.tr = (varargin_1[0] + varargin_1[4]) + varargin_1[8];
  TestingPins_B.psquared[0] = (TestingPins_B.tr * 2.0 + 1.0) - TestingPins_B.tr;
  TestingPins_B.psquared[1] = (2.0 * varargin_1[0] + 1.0) - TestingPins_B.tr;
  TestingPins_B.psquared[2] = (2.0 * varargin_1[4] + 1.0) - TestingPins_B.tr;
  TestingPins_B.psquared[3] = (2.0 * varargin_1[8] + 1.0) - TestingPins_B.tr;
  if (!rtIsNaN(TestingPins_B.psquared[0])) {
    b_idx = 1;
  } else {
    b_idx = 0;
    b_k = 2;
    exitg1 = false;
    while ((!exitg1) && (b_k < 5)) {
      if (!rtIsNaN(TestingPins_B.psquared[b_k - 1])) {
        b_idx = b_k;
        exitg1 = true;
      } else {
        b_k++;
      }
    }
  }

  if (b_idx == 0) {
    TestingPins_B.tr = TestingPins_B.psquared[0];
    b_idx = 1;
  } else {
    TestingPins_B.tr = TestingPins_B.psquared[b_idx - 1];
    b = b_idx;
    for (b_k = b + 1; b_k < 5; b_k++) {
      TestingPins_B.d = TestingPins_B.psquared[b_k - 1];
      if (TestingPins_B.tr < TestingPins_B.d) {
        TestingPins_B.tr = TestingPins_B.d;
        b_idx = b_k;
      }
    }
  }

  switch (b_idx) {
   case 1:
    TestingPins_B.tr = sqrt(TestingPins_B.tr);
    *obj_a = 0.5 * TestingPins_B.tr;
    TestingPins_B.tr = 0.5 / TestingPins_B.tr;
    *obj_b = (varargin_1[7] - varargin_1[5]) * TestingPins_B.tr;
    *obj_c = (varargin_1[2] - varargin_1[6]) * TestingPins_B.tr;
    *obj_d = (varargin_1[3] - varargin_1[1]) * TestingPins_B.tr;
    break;

   case 2:
    TestingPins_B.tr = sqrt(TestingPins_B.tr);
    *obj_b = 0.5 * TestingPins_B.tr;
    TestingPins_B.tr = 0.5 / TestingPins_B.tr;
    *obj_a = (varargin_1[7] - varargin_1[5]) * TestingPins_B.tr;
    *obj_c = (varargin_1[3] + varargin_1[1]) * TestingPins_B.tr;
    *obj_d = (varargin_1[2] + varargin_1[6]) * TestingPins_B.tr;
    break;

   case 3:
    TestingPins_B.tr = sqrt(TestingPins_B.tr);
    *obj_c = 0.5 * TestingPins_B.tr;
    TestingPins_B.tr = 0.5 / TestingPins_B.tr;
    *obj_a = (varargin_1[2] - varargin_1[6]) * TestingPins_B.tr;
    *obj_b = (varargin_1[3] + varargin_1[1]) * TestingPins_B.tr;
    *obj_d = (varargin_1[7] + varargin_1[5]) * TestingPins_B.tr;
    break;

   default:
    TestingPins_B.tr = sqrt(TestingPins_B.tr);
    *obj_d = 0.5 * TestingPins_B.tr;
    TestingPins_B.tr = 0.5 / TestingPins_B.tr;
    *obj_a = (varargin_1[3] - varargin_1[1]) * TestingPins_B.tr;
    *obj_b = (varargin_1[2] + varargin_1[6]) * TestingPins_B.tr;
    *obj_c = (varargin_1[7] + varargin_1[5]) * TestingPins_B.tr;
    break;
  }

  if (*obj_a < 0.0) {
    *obj_a = -*obj_a;
    *obj_b = -*obj_b;
    *obj_c = -*obj_c;
    *obj_d = -*obj_d;
  }
}

static void Tes_quaternioncg_quaternioncg_l(const real_T varargin_1[3], real_T
  *obj_a, real_T *obj_b, real_T *obj_c, real_T *obj_d)
{
  real_T st;
  *obj_a = 1.0;
  *obj_b = 0.0;
  *obj_c = 0.0;
  *obj_d = 0.0;
  TestingPins_B.theta = sqrt((varargin_1[0] * varargin_1[0] + varargin_1[1] *
    varargin_1[1]) + varargin_1[2] * varargin_1[2]);
  st = sin(TestingPins_B.theta / 2.0);
  if (TestingPins_B.theta != 0.0) {
    *obj_a = cos(TestingPins_B.theta / 2.0);
    *obj_b = varargin_1[0] / TestingPins_B.theta * st;
    *obj_c = varargin_1[1] / TestingPins_B.theta * st;
    *obj_d = varargin_1[2] / TestingPins_B.theta * st;
  }
}

static void TestingPi_quaternionBase_mtimes(real_T x_a, real_T x_b, real_T x_c,
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
  real_T *b_qorient_d)
{
  TestingPins_B.c[0] = (gfast[0] - offset[0]) * obj->pSensorPeriod;
  TestingPins_B.c[1] = (gfast[1] - offset[1]) * obj->pSensorPeriod;
  TestingPins_B.c[2] = (gfast[2] - offset[2]) * obj->pSensorPeriod;
  Tes_quaternioncg_quaternioncg_l(TestingPins_B.c,
    &TestingPins_B.assign_temp_a_c, &TestingPins_B.assign_temp_b_b,
    &TestingPins_B.assign_temp_c_p, &TestingPins_B.assign_temp_d_c);
  TestingPi_quaternionBase_mtimes(qorient_a, qorient_b, qorient_c, qorient_d,
    TestingPins_B.assign_temp_a_c, TestingPins_B.assign_temp_b_b,
    TestingPins_B.assign_temp_c_p, TestingPins_B.assign_temp_d_c, b_qorient_a,
    b_qorient_b, b_qorient_c, b_qorient_d);
  if (*b_qorient_a < 0.0) {
    *b_qorient_a = -*b_qorient_a;
    *b_qorient_b = -*b_qorient_b;
    *b_qorient_c = -*b_qorient_c;
    *b_qorient_d = -*b_qorient_d;
  }
}

static void TestingPi_quaternionBase_rotmat(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T r[9])
{
  real_T n;
  n = sqrt(((q_a * q_a + q_b * q_b) + q_c * q_c) + q_d * q_d);
  q_a /= n;
  q_b /= n;
  q_c /= n;
  q_d /= n;
  n = q_a * q_b * 2.0;
  TestingPins_B.ac2 = q_a * q_c * 2.0;
  TestingPins_B.ad2 = q_a * q_d * 2.0;
  TestingPins_B.bc2 = q_b * q_c * 2.0;
  TestingPins_B.bd2 = q_b * q_d * 2.0;
  TestingPins_B.cd2 = q_c * q_d * 2.0;
  TestingPins_B.aasq = q_a * q_a * 2.0 - 1.0;
  r[0] = q_b * q_b * 2.0 + TestingPins_B.aasq;
  r[3] = TestingPins_B.bc2 + TestingPins_B.ad2;
  r[6] = TestingPins_B.bd2 - TestingPins_B.ac2;
  r[1] = TestingPins_B.bc2 - TestingPins_B.ad2;
  r[4] = q_c * q_c * 2.0 + TestingPins_B.aasq;
  r[7] = TestingPins_B.cd2 + n;
  r[2] = TestingPins_B.bd2 + TestingPins_B.ac2;
  r[5] = TestingPins_B.cd2 - n;
  r[8] = q_d * q_d * 2.0 + TestingPins_B.aasq;
}

static void Test_IMUFusionCommon_buildHPart(const real_T v[3], real_T h[9])
{
  int32_T i;
  int32_T h_tmp;
  memset(&h[0], 0, 9U * sizeof(real_T));
  h[3] = v[2];
  h[6] = -v[1];
  h[7] = v[0];
  for (i = 0; i < 3; i++) {
    TestingPins_B.h[3 * i] = h[3 * i];
    h_tmp = 3 * i + 1;
    TestingPins_B.h[h_tmp] = h[h_tmp] - h[i + 3];
    h_tmp = 3 * i + 2;
    TestingPins_B.h[h_tmp] = h[h_tmp] - h[i + 6];
  }

  memcpy(&h[0], &TestingPins_B.h[0], 9U * sizeof(real_T));
}

static real_T TestingPins_norm(const real_T x[3])
{
  real_T y;
  real_T t;
  TestingPins_B.scale = 3.3121686421112381E-170;
  TestingPins_B.absxk = fabs(x[0]);
  if (TestingPins_B.absxk > 3.3121686421112381E-170) {
    y = 1.0;
    TestingPins_B.scale = TestingPins_B.absxk;
  } else {
    t = TestingPins_B.absxk / 3.3121686421112381E-170;
    y = t * t;
  }

  TestingPins_B.absxk = fabs(x[1]);
  if (TestingPins_B.absxk > TestingPins_B.scale) {
    t = TestingPins_B.scale / TestingPins_B.absxk;
    y = y * t * t + 1.0;
    TestingPins_B.scale = TestingPins_B.absxk;
  } else {
    t = TestingPins_B.absxk / TestingPins_B.scale;
    y += t * t;
  }

  TestingPins_B.absxk = fabs(x[2]);
  if (TestingPins_B.absxk > TestingPins_B.scale) {
    t = TestingPins_B.scale / TestingPins_B.absxk;
    y = y * t * t + 1.0;
    TestingPins_B.scale = TestingPins_B.absxk;
  } else {
    t = TestingPins_B.absxk / TestingPins_B.scale;
    y += t * t;
  }

  return TestingPins_B.scale * sqrt(y);
}

static void TestingPins_quaternionBase_conj(real_T q_a, real_T q_b, real_T q_c,
  real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d)
{
  *b_q_a = q_a;
  *b_q_b = -q_b;
  *b_q_c = -q_c;
  *b_q_d = -q_d;
}

static void TestingPi_quaternionBase_uminus(real_T obj_a, real_T obj_b, real_T
  obj_c, real_T obj_d, real_T *b_obj_a, real_T *b_obj_b, real_T *b_obj_c, real_T
  *b_obj_d)
{
  *b_obj_a = -obj_a;
  *b_obj_b = -obj_b;
  *b_obj_c = -obj_c;
  *b_obj_d = -obj_d;
}

static void Testin_quaternionBase_normalize(real_T q_a, real_T q_b, real_T q_c,
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

static void Testin_quaternioncg_parenAssign(real_T rhs_a, real_T rhs_b, real_T
  rhs_c, real_T rhs_d, real_T *o_a, real_T *o_b, real_T *o_c, real_T *o_d)
{
  *o_a = rhs_a;
  *o_b = rhs_b;
  *o_c = rhs_c;
  *o_d = rhs_d;
}

static void TestingPins_ahrsfilter_stepImpl(fusion_simulink_ahrsfilter_Te_T *obj,
  const real_T accelIn[3], const real_T gyroIn[3], const real_T magIn[3], real_T
  orientOut[4], real_T av[3])
{
  boolean_T isJamming;
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
    TestingPins_NED_ecompass(accelIn, magIn, TestingPins_B.Rprior);
    Testi_quaternioncg_quaternioncg(TestingPins_B.Rprior, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  }

  for (c_0 = 0; c_0 < 3; c_0++) {
    TestingPins_B.gravityAccelGyroDiff[c_0] = obj->pGyroOffset[c_0];
  }

  IMUFusionCommon_predictOrientat(obj, gyroIn,
    TestingPins_B.gravityAccelGyroDiff, obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &TestingPins_B.temp,
    &TestingPins_B.smax, &TestingPins_B.s, &TestingPins_B.gyroOffsetErr_idx_0);
  obj->pOrientPrior.d = TestingPins_B.gyroOffsetErr_idx_0;
  obj->pOrientPrior.c = TestingPins_B.s;
  obj->pOrientPrior.b = TestingPins_B.smax;
  obj->pOrientPrior.a = TestingPins_B.temp;
  TestingPi_quaternionBase_rotmat(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, TestingPins_B.Rprior);
  obj->pLinAccelPrior[0] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[0];
  TestingPins_B.gravityAccelGyroDiff[0] = (accelIn[0] + obj->pLinAccelPrior[0])
    - TestingPins_B.Rprior[6];
  obj->pLinAccelPrior[1] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[1];
  TestingPins_B.gravityAccelGyroDiff[1] = (accelIn[1] + obj->pLinAccelPrior[1])
    - TestingPins_B.Rprior[7];
  obj->pLinAccelPrior[2] = obj->LinearAccelerationDecayFactor *
    obj->pLinAccelPost[2];
  TestingPins_B.gravityAccelGyroDiff[2] = (accelIn[2] + obj->pLinAccelPrior[2])
    - TestingPins_B.Rprior[8];
  Test_IMUFusionCommon_buildHPart(&TestingPins_B.Rprior[6], TestingPins_B.h1);
  for (c_0 = 0; c_0 < 3; c_0++) {
    TestingPins_B.offDiag[c_0] = TestingPins_B.Rprior[c_0 + 6] * obj->pMagVec[2]
      + (TestingPins_B.Rprior[c_0 + 3] * obj->pMagVec[1] +
         TestingPins_B.Rprior[c_0] * obj->pMagVec[0]);
  }

  Test_IMUFusionCommon_buildHPart(TestingPins_B.offDiag, TestingPins_B.Rprior);
  for (c_0 = 0; c_0 < 3; c_0++) {
    TestingPins_B.temp = TestingPins_B.Rprior[3 * c_0];
    TestingPins_B.smax = TestingPins_B.h1[3 * c_0];
    TestingPins_B.H[6 * c_0] = TestingPins_B.smax;
    TestingPins_B.jp = 6 * (c_0 + 3);
    TestingPins_B.H[TestingPins_B.jp] = -TestingPins_B.smax * obj->pKalmanPeriod;
    H_tmp = 6 * (c_0 + 6);
    TestingPins_B.H[H_tmp] = tmp[3 * c_0];
    H_tmp_0 = 6 * (c_0 + 9);
    TestingPins_B.H[H_tmp_0] = 0.0;
    TestingPins_B.H[6 * c_0 + 3] = TestingPins_B.temp;
    TestingPins_B.H[TestingPins_B.jp + 3] = -TestingPins_B.temp *
      obj->pKalmanPeriod;
    TestingPins_B.H[H_tmp + 3] = 0.0;
    TestingPins_B.H[H_tmp_0 + 3] = tmp_0[3 * c_0];
    TestingPins_B.jj = 3 * c_0 + 1;
    TestingPins_B.H[6 * c_0 + 1] = TestingPins_B.h1[TestingPins_B.jj];
    TestingPins_B.H[TestingPins_B.jp + 1] = -TestingPins_B.h1[TestingPins_B.jj] *
      obj->pKalmanPeriod;
    TestingPins_B.H[H_tmp + 1] = tmp[TestingPins_B.jj];
    TestingPins_B.H[H_tmp_0 + 1] = 0.0;
    TestingPins_B.H[6 * c_0 + 4] = TestingPins_B.Rprior[TestingPins_B.jj];
    TestingPins_B.H[TestingPins_B.jp + 4] =
      -TestingPins_B.Rprior[TestingPins_B.jj] * obj->pKalmanPeriod;
    TestingPins_B.H[H_tmp + 4] = 0.0;
    TestingPins_B.H[H_tmp_0 + 4] = tmp_0[TestingPins_B.jj];
    TestingPins_B.jj = 3 * c_0 + 2;
    TestingPins_B.H[6 * c_0 + 2] = TestingPins_B.h1[TestingPins_B.jj];
    TestingPins_B.H[TestingPins_B.jp + 2] = -TestingPins_B.h1[TestingPins_B.jj] *
      obj->pKalmanPeriod;
    TestingPins_B.H[H_tmp + 2] = tmp[TestingPins_B.jj];
    TestingPins_B.H[H_tmp_0 + 2] = 0.0;
    TestingPins_B.H[6 * c_0 + 5] = TestingPins_B.Rprior[TestingPins_B.jj];
    TestingPins_B.H[TestingPins_B.jp + 5] =
      -TestingPins_B.Rprior[TestingPins_B.jj] * obj->pKalmanPeriod;
    TestingPins_B.H[H_tmp + 5] = 0.0;
    TestingPins_B.H[H_tmp_0 + 5] = tmp_0[TestingPins_B.jj];
  }

  memcpy(&TestingPins_B.Qw[0], &obj->pQw[0], 144U * sizeof(real_T));
  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      TestingPins_B.jp = H_tmp + 6 * c_0;
      TestingPins_B.H_m[TestingPins_B.jp] = 0.0;
      for (TestingPins_B.jj = 0; TestingPins_B.jj < 12; TestingPins_B.jj++) {
        TestingPins_B.H_m[TestingPins_B.jp] += TestingPins_B.H[6 *
          TestingPins_B.jj + H_tmp] * obj->pQw[12 * c_0 + TestingPins_B.jj];
      }
    }
  }

  for (c_0 = 0; c_0 < 6; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      TestingPins_B.temp = 0.0;
      for (TestingPins_B.jj = 0; TestingPins_B.jj < 12; TestingPins_B.jj++) {
        TestingPins_B.temp += TestingPins_B.H_m[6 * TestingPins_B.jj + H_tmp] *
          TestingPins_B.H[6 * TestingPins_B.jj + c_0];
      }

      TestingPins_B.c_A[c_0 + 6 * H_tmp] = obj->pQv[6 * c_0 + H_tmp] +
        TestingPins_B.temp;
    }

    TestingPins_B.b_ipiv[c_0] = static_cast<int8_T>(c_0 + 1);
  }

  for (TestingPins_B.jp = 0; TestingPins_B.jp < 5; TestingPins_B.jp++) {
    H_tmp = TestingPins_B.jp * 7 + 2;
    TestingPins_B.jj = TestingPins_B.jp * 7;
    c = 6 - TestingPins_B.jp;
    iy = 1;
    ix = H_tmp - 2;
    TestingPins_B.smax = fabs(TestingPins_B.c_A[TestingPins_B.jj]);
    for (jA = 2; jA <= c; jA++) {
      ix++;
      TestingPins_B.s = fabs(TestingPins_B.c_A[ix]);
      if (TestingPins_B.s > TestingPins_B.smax) {
        iy = jA;
        TestingPins_B.smax = TestingPins_B.s;
      }
    }

    if (TestingPins_B.c_A[(H_tmp + iy) - 3] != 0.0) {
      if (iy - 1 != 0) {
        TestingPins_B.b_ipiv[TestingPins_B.jp] = static_cast<int8_T>
          (TestingPins_B.jp + iy);
        ix = TestingPins_B.jp;
        iy = (TestingPins_B.jp + iy) - 1;
        for (jA = 0; jA < 6; jA++) {
          TestingPins_B.temp = TestingPins_B.c_A[ix];
          TestingPins_B.c_A[ix] = TestingPins_B.c_A[iy];
          TestingPins_B.c_A[iy] = TestingPins_B.temp;
          ix += 6;
          iy += 6;
        }
      }

      iy = H_tmp - TestingPins_B.jp;
      for (ix = H_tmp; ix <= iy + 4; ix++) {
        TestingPins_B.c_A[ix - 1] /= TestingPins_B.c_A[TestingPins_B.jj];
      }
    }

    c = 4 - TestingPins_B.jp;
    jA = TestingPins_B.jj;
    jy = TestingPins_B.jj + 6;
    for (TestingPins_B.jj = 0; TestingPins_B.jj <= c; TestingPins_B.jj++) {
      TestingPins_B.temp = TestingPins_B.c_A[jy];
      if (TestingPins_B.c_A[jy] != 0.0) {
        ix = H_tmp - 1;
        c_0 = jA - TestingPins_B.jp;
        for (TestingPins_B.jp1j = jA + 8; TestingPins_B.jp1j <= c_0 + 12;
             TestingPins_B.jp1j++) {
          TestingPins_B.c_A[TestingPins_B.jp1j - 1] += TestingPins_B.c_A[ix] *
            -TestingPins_B.temp;
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
      TestingPins_B.b_X[H_tmp_0] = 0.0;
      for (TestingPins_B.jj = 0; TestingPins_B.jj < 12; TestingPins_B.jj++) {
        TestingPins_B.b_X[H_tmp_0] += obj->pQw[12 * TestingPins_B.jj + c_0] *
          TestingPins_B.H[6 * TestingPins_B.jj + H_tmp];
      }
    }
  }

  for (TestingPins_B.jp = 0; TestingPins_B.jp < 6; TestingPins_B.jp++) {
    TestingPins_B.jj = 12 * TestingPins_B.jp - 1;
    TestingPins_B.jp1j = 6 * TestingPins_B.jp - 1;
    iy = TestingPins_B.jp - 1;
    for (c = 0; c <= iy; c++) {
      jy = 12 * c - 1;
      c_0 = (c + TestingPins_B.jp1j) + 1;
      if (TestingPins_B.c_A[c_0] != 0.0) {
        for (H_tmp = 0; H_tmp < 12; H_tmp++) {
          ix = H_tmp + 1;
          H_tmp_0 = ix + TestingPins_B.jj;
          TestingPins_B.b_X[H_tmp_0] -= TestingPins_B.c_A[c_0] *
            TestingPins_B.b_X[ix + jy];
        }
      }
    }

    TestingPins_B.temp = 1.0 / TestingPins_B.c_A[(TestingPins_B.jp +
      TestingPins_B.jp1j) + 1];
    for (c = 0; c < 12; c++) {
      H_tmp_0 = (c + TestingPins_B.jj) + 1;
      TestingPins_B.b_X[H_tmp_0] *= TestingPins_B.temp;
    }
  }

  for (c = 5; c >= 0; c--) {
    TestingPins_B.jj = 12 * c - 1;
    TestingPins_B.jp1j = 6 * c - 1;
    for (jA = c + 2; jA < 7; jA++) {
      jy = (jA - 1) * 12 - 1;
      c_0 = jA + TestingPins_B.jp1j;
      if (TestingPins_B.c_A[c_0] != 0.0) {
        for (H_tmp = 0; H_tmp < 12; H_tmp++) {
          ix = H_tmp + 1;
          H_tmp_0 = ix + TestingPins_B.jj;
          TestingPins_B.b_X[H_tmp_0] -= TestingPins_B.c_A[c_0] *
            TestingPins_B.b_X[ix + jy];
        }
      }
    }
  }

  for (c = 4; c >= 0; c--) {
    if (c + 1 != TestingPins_B.b_ipiv[c]) {
      TestingPins_B.jp = TestingPins_B.b_ipiv[c] - 1;
      for (H_tmp = 0; H_tmp < 12; H_tmp++) {
        c_0 = 12 * c + H_tmp;
        TestingPins_B.temp = TestingPins_B.b_X[c_0];
        H_tmp_0 = 12 * TestingPins_B.jp + H_tmp;
        TestingPins_B.b_X[c_0] = TestingPins_B.b_X[H_tmp_0];
        TestingPins_B.b_X[H_tmp_0] = TestingPins_B.temp;
      }
    }
  }

  TestingPins_B.ze[0] = TestingPins_B.gravityAccelGyroDiff[0];
  TestingPins_B.ze[3] = magIn[0] - TestingPins_B.offDiag[0];
  TestingPins_B.ze[1] = TestingPins_B.gravityAccelGyroDiff[1];
  TestingPins_B.ze[4] = magIn[1] - TestingPins_B.offDiag[1];
  TestingPins_B.ze[2] = TestingPins_B.gravityAccelGyroDiff[2];
  TestingPins_B.ze[5] = magIn[2] - TestingPins_B.offDiag[2];
  for (c_0 = 0; c_0 < 3; c_0++) {
    TestingPins_B.offDiag[c_0] = 0.0;
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      TestingPins_B.offDiag[c_0] += TestingPins_B.b_X[(12 * H_tmp + c_0) + 9] *
        TestingPins_B.ze[H_tmp];
    }
  }

  TestingPins_B.temp = TestingPins_norm(TestingPins_B.offDiag);
  isJamming = (TestingPins_B.temp * TestingPins_B.temp >
               obj->ExpectedMagneticFieldStrength *
               obj->ExpectedMagneticFieldStrength * 4.0);
  if (isJamming) {
    for (c_0 = 0; c_0 < 9; c_0++) {
      TestingPins_B.h1[c_0] = TestingPins_B.b_X[c_0 + 24] *
        TestingPins_B.gravityAccelGyroDiff[2] + (TestingPins_B.b_X[c_0 + 12] *
        TestingPins_B.gravityAccelGyroDiff[1] + TestingPins_B.b_X[c_0] *
        TestingPins_B.gravityAccelGyroDiff[0]);
    }

    TestingPins_B.gravityAccelGyroDiff[0] = TestingPins_B.h1[0];
    TestingPins_B.gyroOffsetErr_idx_0 = TestingPins_B.h1[3];
    TestingPins_B.linAccelErr_idx_0 = TestingPins_B.h1[6];
    TestingPins_B.gravityAccelGyroDiff[1] = TestingPins_B.h1[1];
    TestingPins_B.gyroOffsetErr_idx_1 = TestingPins_B.h1[4];
    TestingPins_B.linAccelErr_idx_1 = TestingPins_B.h1[7];
    TestingPins_B.gravityAccelGyroDiff[2] = TestingPins_B.h1[2];
    TestingPins_B.gyroOffsetErr_idx_2 = TestingPins_B.h1[5];
    TestingPins_B.linAccelErr_idx_2 = TestingPins_B.h1[8];
  } else {
    for (c_0 = 0; c_0 < 12; c_0++) {
      TestingPins_B.xe_post[c_0] = 0.0;
      for (H_tmp = 0; H_tmp < 6; H_tmp++) {
        TestingPins_B.xe_post[c_0] += TestingPins_B.b_X[12 * H_tmp + c_0] *
          TestingPins_B.ze[H_tmp];
      }
    }

    TestingPins_B.gravityAccelGyroDiff[0] = TestingPins_B.xe_post[0];
    TestingPins_B.gyroOffsetErr_idx_0 = TestingPins_B.xe_post[3];
    TestingPins_B.linAccelErr_idx_0 = TestingPins_B.xe_post[6];
    TestingPins_B.gravityAccelGyroDiff[1] = TestingPins_B.xe_post[1];
    TestingPins_B.gyroOffsetErr_idx_1 = TestingPins_B.xe_post[4];
    TestingPins_B.linAccelErr_idx_1 = TestingPins_B.xe_post[7];
    TestingPins_B.gravityAccelGyroDiff[2] = TestingPins_B.xe_post[2];
    TestingPins_B.gyroOffsetErr_idx_2 = TestingPins_B.xe_post[5];
    TestingPins_B.linAccelErr_idx_2 = TestingPins_B.xe_post[8];
  }

  Tes_quaternioncg_quaternioncg_l(TestingPins_B.gravityAccelGyroDiff,
    &TestingPins_B.temp, &TestingPins_B.smax, &TestingPins_B.s,
    &TestingPins_B.assign_temp_d_k);
  TestingPins_quaternionBase_conj(TestingPins_B.temp, TestingPins_B.smax,
    TestingPins_B.s, TestingPins_B.assign_temp_d_k, &TestingPins_B.assign_temp_a,
    &TestingPins_B.assign_temp_b, &TestingPins_B.assign_temp_c,
    &TestingPins_B.assign_temp_d);
  TestingPi_quaternionBase_mtimes(obj->pOrientPrior.a, obj->pOrientPrior.b,
    obj->pOrientPrior.c, obj->pOrientPrior.d, TestingPins_B.assign_temp_a,
    TestingPins_B.assign_temp_b, TestingPins_B.assign_temp_c,
    TestingPins_B.assign_temp_d, &obj->pOrientPost.a, &obj->pOrientPost.b,
    &obj->pOrientPost.c, &obj->pOrientPost.d);
  if (obj->pOrientPost.a < 0.0) {
    TestingPi_quaternionBase_uminus(obj->pOrientPost.a, obj->pOrientPost.b,
      obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
      &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  }

  Testin_quaternionBase_normalize(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &obj->pOrientPost.a,
    &obj->pOrientPost.b, &obj->pOrientPost.c, &obj->pOrientPost.d);
  TestingPi_quaternionBase_rotmat(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, TestingPins_B.h1);
  obj->pGyroOffset[0] -= TestingPins_B.gyroOffsetErr_idx_0;
  obj->pLinAccelPost[0] = obj->pLinAccelPrior[0] -
    TestingPins_B.linAccelErr_idx_0;
  obj->pGyroOffset[1] -= TestingPins_B.gyroOffsetErr_idx_1;
  obj->pLinAccelPost[1] = obj->pLinAccelPrior[1] -
    TestingPins_B.linAccelErr_idx_1;
  obj->pGyroOffset[2] -= TestingPins_B.gyroOffsetErr_idx_2;
  obj->pLinAccelPost[2] = obj->pLinAccelPrior[2] -
    TestingPins_B.linAccelErr_idx_2;
  if (!isJamming) {
    for (H_tmp = 0; H_tmp < 3; H_tmp++) {
      TestingPins_B.jp = H_tmp * 3 - 1;
      TestingPins_B.gravityAccelGyroDiff[H_tmp] =
        (TestingPins_B.h1[TestingPins_B.jp + 1] * TestingPins_B.offDiag[0] +
         TestingPins_B.h1[TestingPins_B.jp + 2] * TestingPins_B.offDiag[1]) +
        TestingPins_B.h1[TestingPins_B.jp + 3] * TestingPins_B.offDiag[2];
    }

    TestingPins_B.gravityAccelGyroDiff[0] = obj->pMagVec[0] -
      TestingPins_B.gravityAccelGyroDiff[0];
    TestingPins_B.temp = rt_atan2d_snf(obj->pMagVec[2] -
      TestingPins_B.gravityAccelGyroDiff[2], TestingPins_B.gravityAccelGyroDiff
      [0]);
    if (TestingPins_B.temp < -1.5707963267948966) {
      TestingPins_B.temp = -1.5707963267948966;
    }

    if (TestingPins_B.temp > 1.5707963267948966) {
      TestingPins_B.temp = 1.5707963267948966;
    }

    obj->pMagVec[0] = 0.0;
    obj->pMagVec[1] = 0.0;
    obj->pMagVec[2] = 0.0;
    obj->pMagVec[0] = cos(TestingPins_B.temp);
    obj->pMagVec[2] = sin(TestingPins_B.temp);
    obj->pMagVec[0] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[1] *= obj->ExpectedMagneticFieldStrength;
    obj->pMagVec[2] *= obj->ExpectedMagneticFieldStrength;
  }

  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 6; H_tmp++) {
      TestingPins_B.jp = H_tmp + 6 * c_0;
      TestingPins_B.H_m[TestingPins_B.jp] = 0.0;
      for (TestingPins_B.jj = 0; TestingPins_B.jj < 12; TestingPins_B.jj++) {
        TestingPins_B.H_m[TestingPins_B.jp] += TestingPins_B.H[6 *
          TestingPins_B.jj + H_tmp] * TestingPins_B.Qw[12 * c_0 +
          TestingPins_B.jj];
      }
    }
  }

  for (c_0 = 0; c_0 < 12; c_0++) {
    for (H_tmp = 0; H_tmp < 12; H_tmp++) {
      TestingPins_B.temp = 0.0;
      for (TestingPins_B.jj = 0; TestingPins_B.jj < 6; TestingPins_B.jj++) {
        TestingPins_B.temp += TestingPins_B.b_X[12 * TestingPins_B.jj + c_0] *
          TestingPins_B.H_m[6 * H_tmp + TestingPins_B.jj];
      }

      TestingPins_B.jp = 12 * H_tmp + c_0;
      TestingPins_B.Ppost[TestingPins_B.jp] = TestingPins_B.Qw[TestingPins_B.jp]
        - TestingPins_B.temp;
    }
  }

  memset(&TestingPins_B.Qw[0], 0, 144U * sizeof(real_T));
  TestingPins_B.temp = obj->pKalmanPeriod * obj->pKalmanPeriod;
  TestingPins_B.smax = obj->GyroscopeDriftNoise + obj->GyroscopeNoise;
  TestingPins_B.Qw[0] = (TestingPins_B.Ppost[39] + TestingPins_B.smax) *
    TestingPins_B.temp + TestingPins_B.Ppost[0];
  TestingPins_B.Qw[39] = TestingPins_B.Ppost[39] + obj->GyroscopeDriftNoise;
  TestingPins_B.offDiag[0] = -obj->pKalmanPeriod * TestingPins_B.Qw[39];
  TestingPins_B.Qw[13] = (TestingPins_B.Ppost[52] + TestingPins_B.smax) *
    TestingPins_B.temp + TestingPins_B.Ppost[13];
  TestingPins_B.Qw[52] = TestingPins_B.Ppost[52] + obj->GyroscopeDriftNoise;
  TestingPins_B.offDiag[1] = -obj->pKalmanPeriod * TestingPins_B.Qw[52];
  TestingPins_B.Qw[26] = (TestingPins_B.Ppost[65] + TestingPins_B.smax) *
    TestingPins_B.temp + TestingPins_B.Ppost[26];
  TestingPins_B.Qw[65] = TestingPins_B.Ppost[65] + obj->GyroscopeDriftNoise;
  TestingPins_B.offDiag[2] = -obj->pKalmanPeriod * TestingPins_B.Qw[65];
  TestingPins_B.Qw[3] = TestingPins_B.offDiag[0];
  TestingPins_B.Qw[16] = TestingPins_B.offDiag[1];
  TestingPins_B.Qw[29] = TestingPins_B.offDiag[2];
  TestingPins_B.Qw[36] = TestingPins_B.offDiag[0];
  TestingPins_B.Qw[49] = TestingPins_B.offDiag[1];
  TestingPins_B.Qw[62] = TestingPins_B.offDiag[2];
  TestingPins_B.temp = obj->LinearAccelerationDecayFactor *
    obj->LinearAccelerationDecayFactor;
  TestingPins_B.Qw[78] = TestingPins_B.temp * TestingPins_B.Ppost[78] +
    obj->LinearAccelerationNoise;
  TestingPins_B.Qw[91] = TestingPins_B.temp * TestingPins_B.Ppost[91] +
    obj->LinearAccelerationNoise;
  TestingPins_B.Qw[104] = TestingPins_B.temp * TestingPins_B.Ppost[104] +
    obj->LinearAccelerationNoise;
  TestingPins_B.temp = obj->MagneticDisturbanceDecayFactor *
    obj->MagneticDisturbanceDecayFactor;
  TestingPins_B.Qw[117] = TestingPins_B.temp * TestingPins_B.Ppost[117] +
    obj->MagneticDisturbanceNoise;
  TestingPins_B.Qw[130] = TestingPins_B.temp * TestingPins_B.Ppost[130] +
    obj->MagneticDisturbanceNoise;
  TestingPins_B.Qw[143] = TestingPins_B.temp * TestingPins_B.Ppost[143] +
    obj->MagneticDisturbanceNoise;
  memcpy(&obj->pQw[0], &TestingPins_B.Qw[0], 144U * sizeof(real_T));
  Testin_quaternioncg_parenAssign(obj->pOrientPost.a, obj->pOrientPost.b,
    obj->pOrientPost.c, obj->pOrientPost.d, &orientOut[0], &orientOut[1],
    &orientOut[2], &orientOut[3]);
}

static void TestingPin_SystemCore_release_l(const
  raspi_internal_lsm9ds1Block_T_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj_A_G.MW_I2C_HANDLE);
    MW_I2C_Close(obj->i2cobj_MAG.MW_I2C_HANDLE);
  }
}

static void TestingPins_SystemCore_delete_l(const
  raspi_internal_lsm9ds1Block_T_T *obj)
{
  TestingPin_SystemCore_release_l(obj);
}

static void matlabCodegenHandle_matlabCod_l(raspi_internal_lsm9ds1Block_T_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestingPins_SystemCore_delete_l(obj);
  }
}

static void TestingP_SystemCore_release_l3s(j_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void TestingPi_SystemCore_delete_l3s(j_codertarget_raspi_internal__T *obj)
{
  TestingP_SystemCore_release_l3s(obj);
}

static void matlabCodegenHandle_matlabC_l3s(j_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestingPi_SystemCore_delete_l3s(obj);
  }
}

static void TestingPi_SystemCore_release_l3(i_codertarget_raspi_internal__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void TestingPin_SystemCore_delete_l3(i_codertarget_raspi_internal__T *obj)
{
  TestingPi_SystemCore_release_l3(obj);
}

static void matlabCodegenHandle_matlabCo_l3(i_codertarget_raspi_internal__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestingPin_SystemCore_delete_l3(obj);
  }
}

static void TestingPins_SystemCore_release(const raspi_internal_hts221Block_Te_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->MW_I2C_HANDLE);
  }
}

static void TestingPins_SystemCore_delete(const raspi_internal_hts221Block_Te_T *
  obj)
{
  TestingPins_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_hts221Block_Te_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    TestingPins_SystemCore_delete(obj);
  }
}

static raspi_internal_lsm9ds1Block_T_T *Testi_lsm9ds1Block_lsm9ds1Block
  (raspi_internal_lsm9ds1Block_T_T *obj)
{
  raspi_internal_lsm9ds1Block_T_T *b_obj;
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

static void TestingPins_SystemCore_setup_l(raspi_internal_lsm9ds1Block_T_T *obj)
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
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 16U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 17U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 18U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 30U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 19U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 31U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 103U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 4U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.MW_I2C_HANDLE, 106U, SwappedDataBytes, 2U,
                     false, false);
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->i2cobj_MAG.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj_MAG.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj_MAG.MW_I2C_HANDLE, obj->i2cobj_MAG.BusSpeed);
  CastedData = 24U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 32U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 33U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 34U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 35U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (uint32_T)((size_t)
          1 * sizeof(uint8_T)));
  b_SwappedDataBytes[0] = 36U;
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (uint32_T)
         ((size_t)2 * sizeof(uint8_T)));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.MW_I2C_HANDLE, 28U, SwappedDataBytes, 2U,
                     false, false);
  obj->isSetupComplete = true;
}

static void Testin_AHRSFilterBase_resetImpl(fusion_simulink_ahrsfilter_Te_T *obj)
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

static void TestingPins_SystemCore_setup(raspi_internal_hts221Block_Te_T *obj)
{
  MW_I2C_Mode_Type ModeType;
  uint32_T i2cname;
  int16_T y;
  uint8_T b_SwappedDataBytes[2];
  uint8_T status;
  uint8_T output_raw[16];
  int32_T i;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  ModeType = MW_I2C_MASTER;
  i2cname = 1;
  obj->MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->MW_I2C_HANDLE, obj->BusSpeed);
  b_SwappedDataBytes[0] = 32U;
  b_SwappedDataBytes[1] = 131U;
  MW_I2C_MasterWrite(obj->MW_I2C_HANDLE, 95U, b_SwappedDataBytes, 2U, false,
                     false);
  b_SwappedDataBytes[0] = 16U;
  b_SwappedDataBytes[1] = 27U;
  MW_I2C_MasterWrite(obj->MW_I2C_HANDLE, 95U, b_SwappedDataBytes, 2U, false,
                     false);
  status = 176U;
  status = MW_I2C_MasterWrite(obj->MW_I2C_HANDLE, 95U, &status, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->MW_I2C_HANDLE, 95U, output_raw, 16U, false, true);
    memcpy((void *)&TestingPins_B.b_RegisterValue[0], (void *)&output_raw[0],
           (uint32_T)((size_t)16 * sizeof(uint8_T)));
  } else {
    for (i = 0; i < 16; i++) {
      TestingPins_B.b_RegisterValue[i] = 0U;
    }
  }

  b_SwappedDataBytes[0] = TestingPins_B.b_RegisterValue[2];
  b_SwappedDataBytes[1] = static_cast<uint8_T>(TestingPins_B.b_RegisterValue[5]
    & 3);
  memcpy((void *)&y, (void *)&b_SwappedDataBytes[0], (uint32_T)((size_t)1 *
          sizeof(int16_T)));
  obj->T0_degC = static_cast<real_T>(y) / 8.0;
  b_SwappedDataBytes[0] = TestingPins_B.b_RegisterValue[3];
  b_SwappedDataBytes[1] = static_cast<uint8_T>(static_cast<uint32_T>
    (TestingPins_B.b_RegisterValue[5] & 12) >> 2);
  memcpy((void *)&y, (void *)&b_SwappedDataBytes[0], (uint32_T)((size_t)1 *
          sizeof(int16_T)));
  obj->T1_degC = static_cast<real_T>(y) / 8.0;
  memcpy((void *)&y, (void *)&TestingPins_B.b_RegisterValue[12], (uint32_T)
         ((size_t)1 * sizeof(int16_T)));
  obj->T0_out = y;
  memcpy((void *)&y, (void *)&TestingPins_B.b_RegisterValue[14], (uint32_T)
         ((size_t)1 * sizeof(int16_T)));
  obj->T1_out = y;
  obj->H0_rh = static_cast<real_T>(TestingPins_B.b_RegisterValue[0]) / 2.0;
  obj->H1_rh = static_cast<real_T>(TestingPins_B.b_RegisterValue[1]) / 2.0;
  memcpy((void *)&y, (void *)&TestingPins_B.b_RegisterValue[6], (uint32_T)
         ((size_t)1 * sizeof(int16_T)));
  obj->H0_T0_out = y;
  memcpy((void *)&y, (void *)&TestingPins_B.b_RegisterValue[10], (uint32_T)
         ((size_t)1 * sizeof(int16_T)));
  obj->H1_T0_out = y;
  obj->isSetupComplete = true;
}

// Model step function
void TestingPins_step(void)
{
  uint8_T SwappedDataBytes;
  uint8_T status;
  uint8_T b_RegisterValue[2];
  int16_T y;
  int16_T y_0;
  uint8_T output_raw[2];
  static const int8_T tmp[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  real_T *b;

  // MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  status = 24U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(TestingPins_DW.obj_d.i2cobj_A_G.MW_I2C_HANDLE,
    106U, &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(TestingPins_DW.obj_d.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      TestingPins_B.output_raw, 6U, false, true);
    memcpy((void *)&TestingPins_B.b_RegisterValue_f[0], (void *)
           &TestingPins_B.output_raw[0], (uint32_T)((size_t)3 * sizeof(int16_T)));
  } else {
    TestingPins_B.b_RegisterValue_f[0] = 0;
    TestingPins_B.b_RegisterValue_f[1] = 0;
    TestingPins_B.b_RegisterValue_f[2] = 0;
  }

  b = &TestingPins_DW.obj_d.CalGyroA[0];
  for (TestingPins_B.i = 0; TestingPins_B.i < 3; TestingPins_B.i++) {
    TestingPins_B.a[TestingPins_B.i] = ((b[3 * TestingPins_B.i + 1] *
      static_cast<real_T>(TestingPins_B.b_RegisterValue_f[1]) + b[3 *
      TestingPins_B.i] * static_cast<real_T>(TestingPins_B.b_RegisterValue_f[0]))
      + b[3 * TestingPins_B.i + 2] * static_cast<real_T>
      (TestingPins_B.b_RegisterValue_f[2])) +
      TestingPins_DW.obj_d.CalGyroB[TestingPins_B.i];
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(TestingPins_DW.obj_d.i2cobj_A_G.MW_I2C_HANDLE,
    106U, &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(TestingPins_DW.obj_d.i2cobj_A_G.MW_I2C_HANDLE, 106U,
                      TestingPins_B.output_raw, 6U, false, true);
    memcpy((void *)&TestingPins_B.b_RegisterValue_f[0], (void *)
           &TestingPins_B.output_raw[0], (uint32_T)((size_t)3 * sizeof(int16_T)));
  } else {
    TestingPins_B.b_RegisterValue_f[0] = 0;
    TestingPins_B.b_RegisterValue_f[1] = 0;
    TestingPins_B.b_RegisterValue_f[2] = 0;
  }

  b = &TestingPins_DW.obj_d.CalAccelA[0];
  for (TestingPins_B.i = 0; TestingPins_B.i < 3; TestingPins_B.i++) {
    TestingPins_B.a_c[TestingPins_B.i] = ((b[3 * TestingPins_B.i + 1] *
      static_cast<real_T>(TestingPins_B.b_RegisterValue_f[1]) + b[3 *
      TestingPins_B.i] * static_cast<real_T>(TestingPins_B.b_RegisterValue_f[0]))
      + b[3 * TestingPins_B.i + 2] * static_cast<real_T>
      (TestingPins_B.b_RegisterValue_f[2])) +
      TestingPins_DW.obj_d.CalAccelB[TestingPins_B.i];
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (uint32_T)((size_t)1 *
          sizeof(uint8_T)));
  status = MW_I2C_MasterWrite(TestingPins_DW.obj_d.i2cobj_MAG.MW_I2C_HANDLE, 28U,
    &SwappedDataBytes, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(TestingPins_DW.obj_d.i2cobj_MAG.MW_I2C_HANDLE, 28U,
                      TestingPins_B.output_raw, 6U, false, true);
    memcpy((void *)&TestingPins_B.b_RegisterValue_f[0], (void *)
           &TestingPins_B.output_raw[0], (uint32_T)((size_t)3 * sizeof(int16_T)));
  } else {
    TestingPins_B.b_RegisterValue_f[0] = 0;
    TestingPins_B.b_RegisterValue_f[1] = 0;
    TestingPins_B.b_RegisterValue_f[2] = 0;
  }

  b = &TestingPins_DW.obj_d.CalMagA[0];
  for (TestingPins_B.i = 0; TestingPins_B.i < 3; TestingPins_B.i++) {
    TestingPins_B.accelMeasNoiseVar = ((b[3 * TestingPins_B.i + 1] *
      static_cast<real_T>(TestingPins_B.b_RegisterValue_f[1]) + b[3 *
      TestingPins_B.i] * static_cast<real_T>(TestingPins_B.b_RegisterValue_f[0]))
      + b[3 * TestingPins_B.i + 2] * static_cast<real_T>
      (TestingPins_B.b_RegisterValue_f[2])) +
      TestingPins_DW.obj_d.CalMagB[TestingPins_B.i];
    TestingPins_B.LSM9DS1IMUSensor_o2[TestingPins_B.i] =
      TestingPins_B.a_c[TestingPins_B.i] * 2.0 / 32768.0;
    TestingPins_B.LSM9DS1IMUSensor_o3[TestingPins_B.i] =
      TestingPins_B.accelMeasNoiseVar * 4.0 / 32768.0;
  }

  // Sum: '<Root>/Subtract1' incorporates:
  //   Constant: '<Root>/GyroXOffset'
  //   Constant: '<Root>/GyroYOffset'
  //   Constant: '<Root>/GyroZOffset'
  //   MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'

  TestingPins_B.Subtract1[0] = TestingPins_B.a[0] * 245.0 / 32768.0 -
    TestingPins_P.GyroXOffset_Value;
  TestingPins_B.Subtract1[1] = TestingPins_B.a[1] * 245.0 / 32768.0 -
    TestingPins_P.GyroYOffset_Value;
  TestingPins_B.Subtract1[2] = TestingPins_B.a[2] * 245.0 / 32768.0 -
    TestingPins_P.GyroZOffset_Value;

  // MATLABSystem: '<Root>/AHRS2'
  if (TestingPins_DW.obj.AccelerometerNoise !=
      TestingPins_P.AHRS2_AccelerometerNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.AccelerometerNoise =
      TestingPins_P.AHRS2_AccelerometerNoise;
  }

  if (TestingPins_DW.obj.GyroscopeNoise != TestingPins_P.AHRS2_GyroscopeNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.GyroscopeNoise = TestingPins_P.AHRS2_GyroscopeNoise;
  }

  if (TestingPins_DW.obj.MagnetometerNoise !=
      TestingPins_P.AHRS2_MagnetometerNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.MagnetometerNoise = TestingPins_P.AHRS2_MagnetometerNoise;
  }

  if (TestingPins_DW.obj.GyroscopeDriftNoise !=
      TestingPins_P.AHRS2_GyroscopeDriftNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.GyroscopeDriftNoise =
      TestingPins_P.AHRS2_GyroscopeDriftNoise;
  }

  if (TestingPins_DW.obj.LinearAccelerationNoise !=
      TestingPins_P.AHRS2_LinearAccelerationNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.LinearAccelerationNoise =
      TestingPins_P.AHRS2_LinearAccelerationNoise;
  }

  if (TestingPins_DW.obj.MagneticDisturbanceNoise !=
      TestingPins_P.AHRS2_MagneticDisturbanceNoise) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.MagneticDisturbanceNoise =
      TestingPins_P.AHRS2_MagneticDisturbanceNoise;
  }

  if (TestingPins_DW.obj.LinearAccelerationDecayFactor !=
      TestingPins_P.AHRS2_LinearAccelerationDecayFa) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.LinearAccelerationDecayFactor =
      TestingPins_P.AHRS2_LinearAccelerationDecayFa;
  }

  if (TestingPins_DW.obj.MagneticDisturbanceDecayFactor !=
      TestingPins_P.AHRS2_MagneticDisturbanceDecayF) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.MagneticDisturbanceDecayFactor =
      TestingPins_P.AHRS2_MagneticDisturbanceDecayF;
  }

  if (TestingPins_DW.obj.ExpectedMagneticFieldStrength !=
      TestingPins_P.AHRS2_ExpectedMagneticFieldStre) {
    if (TestingPins_DW.obj.isInitialized == 1) {
      TestingPins_DW.obj.TunablePropsChanged = true;
    }

    TestingPins_DW.obj.ExpectedMagneticFieldStrength =
      TestingPins_P.AHRS2_ExpectedMagneticFieldStre;
  }

  if (TestingPins_DW.obj.TunablePropsChanged) {
    TestingPins_DW.obj.TunablePropsChanged = false;
    TestingPins_B.magMeasNoiseVar = TestingPins_DW.obj.pKalmanPeriod *
      TestingPins_DW.obj.pKalmanPeriod * (TestingPins_DW.obj.GyroscopeDriftNoise
      + TestingPins_DW.obj.GyroscopeNoise);
    TestingPins_B.accelMeasNoiseVar = TestingPins_B.magMeasNoiseVar +
      (TestingPins_DW.obj.AccelerometerNoise +
       TestingPins_DW.obj.LinearAccelerationNoise);
    TestingPins_B.magMeasNoiseVar += TestingPins_DW.obj.MagnetometerNoise +
      TestingPins_DW.obj.MagneticDisturbanceNoise;
    memset(&TestingPins_DW.obj.pQv[0], 0, 36U * sizeof(real_T));
    for (TestingPins_B.i = 0; TestingPins_B.i < 3; TestingPins_B.i++) {
      TestingPins_B.i1 = tmp[3 * TestingPins_B.i];
      TestingPins_DW.obj.pQv[6 * TestingPins_B.i] =
        TestingPins_B.accelMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
      TestingPins_B.i2 = 6 * (TestingPins_B.i + 3);
      TestingPins_DW.obj.pQv[TestingPins_B.i2 + 3] =
        TestingPins_B.magMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
      TestingPins_B.i1 = tmp[3 * TestingPins_B.i + 1];
      TestingPins_DW.obj.pQv[6 * TestingPins_B.i + 1] =
        TestingPins_B.accelMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
      TestingPins_DW.obj.pQv[TestingPins_B.i2 + 4] =
        TestingPins_B.magMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
      TestingPins_B.i1 = tmp[3 * TestingPins_B.i + 2];
      TestingPins_DW.obj.pQv[6 * TestingPins_B.i + 2] =
        TestingPins_B.accelMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
      TestingPins_DW.obj.pQv[TestingPins_B.i2 + 5] =
        TestingPins_B.magMeasNoiseVar * static_cast<real_T>(TestingPins_B.i1);
    }
  }

  // Gain: '<Root>/Gain'
  TestingPins_B.a_c[0] = TestingPins_P.Gain_Gain *
    TestingPins_B.LSM9DS1IMUSensor_o2[0];

  // Gain: '<Root>/Gain1'
  TestingPins_B.dv[0] = TestingPins_P.Gain1_Gain * TestingPins_B.Subtract1[0];

  // Gain: '<Root>/Gain'
  TestingPins_B.a_c[1] = TestingPins_P.Gain_Gain *
    TestingPins_B.LSM9DS1IMUSensor_o2[1];

  // Gain: '<Root>/Gain1'
  TestingPins_B.dv[1] = TestingPins_P.Gain1_Gain * TestingPins_B.Subtract1[1];

  // Gain: '<Root>/Gain'
  TestingPins_B.a_c[2] = TestingPins_P.Gain_Gain *
    TestingPins_B.LSM9DS1IMUSensor_o2[2];

  // Gain: '<Root>/Gain1'
  TestingPins_B.dv[2] = TestingPins_P.Gain1_Gain * TestingPins_B.Subtract1[2];

  // MATLABSystem: '<Root>/AHRS2'
  TestingPins_ahrsfilter_stepImpl(&TestingPins_DW.obj, TestingPins_B.a_c,
    TestingPins_B.dv, TestingPins_B.LSM9DS1IMUSensor_o3,
    TestingPins_B.b_varargout_1, TestingPins_B.a);
  TestingPins_B.AHRS2_o1[0] = TestingPins_B.b_varargout_1[0];
  TestingPins_B.AHRS2_o1[1] = TestingPins_B.b_varargout_1[1];
  TestingPins_B.AHRS2_o1[2] = TestingPins_B.b_varargout_1[2];
  TestingPins_B.AHRS2_o1[3] = TestingPins_B.b_varargout_1[3];

  // Gain: '<Root>/Gain2' incorporates:
  //   MATLABSystem: '<Root>/AHRS2'

  TestingPins_B.Gain2[0] = TestingPins_P.Gain2_Gain * TestingPins_B.a[0];
  TestingPins_B.Gain2[1] = TestingPins_P.Gain2_Gain * TestingPins_B.a[1];
  TestingPins_B.Gain2[2] = TestingPins_P.Gain2_Gain * TestingPins_B.a[2];

  // ToWorkspace: '<Root>/To Workspace2'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace2_PWORK.LoggedData),
                  &TestingPins_B.Subtract1[0], 0);

  // ToWorkspace: '<Root>/To Workspace3'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace3_PWORK.LoggedData),
                  &TestingPins_B.LSM9DS1IMUSensor_o2[0], 0);

  // ToWorkspace: '<Root>/To Workspace4'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace4_PWORK.LoggedData),
                  &TestingPins_B.LSM9DS1IMUSensor_o3[0], 0);

  // ToWorkspace: '<Root>/To Workspace6'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace6_PWORK.LoggedData),
                  &TestingPins_B.AHRS2_o1[0], 0);

  // ToWorkspace: '<Root>/To Workspace7'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace7_PWORK.LoggedData),
                  &TestingPins_B.Gain2[0], 0);

  // MATLABSystem: '<Root>/HTS221 Humidity Sensor'
  status = 170U;
  status = MW_I2C_MasterWrite(TestingPins_DW.obj_dr.MW_I2C_HANDLE, 95U, &status,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(TestingPins_DW.obj_dr.MW_I2C_HANDLE, 95U, output_raw, 2U,
                      false, true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)2 * sizeof(uint8_T)));
  } else {
    b_RegisterValue[0] = 0U;
    b_RegisterValue[1] = 0U;
  }

  memcpy((void *)&y, (void *)&b_RegisterValue[0], (uint32_T)((size_t)1 * sizeof
          (int16_T)));
  status = 168U;
  status = MW_I2C_MasterWrite(TestingPins_DW.obj_dr.MW_I2C_HANDLE, 95U, &status,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(TestingPins_DW.obj_dr.MW_I2C_HANDLE, 95U, output_raw, 2U,
                      false, true);
    memcpy((void *)&b_RegisterValue[0], (void *)&output_raw[0], (uint32_T)
           ((size_t)2 * sizeof(uint8_T)));
  } else {
    b_RegisterValue[0] = 0U;
    b_RegisterValue[1] = 0U;
  }

  memcpy((void *)&y_0, (void *)&b_RegisterValue[0], (uint32_T)((size_t)1 *
          sizeof(int16_T)));
  TestingPins_B.HTS221HumiditySensor_o1 = (static_cast<real_T>(y_0) -
    TestingPins_DW.obj_dr.H0_T0_out) / (TestingPins_DW.obj_dr.H1_T0_out -
    TestingPins_DW.obj_dr.H0_T0_out) * (TestingPins_DW.obj_dr.H1_rh -
    TestingPins_DW.obj_dr.H0_rh) + TestingPins_DW.obj_dr.H0_rh;

  // Sum: '<Root>/Subtract' incorporates:
  //   Constant: '<Root>/TemperatureOffset'
  //   MATLABSystem: '<Root>/HTS221 Humidity Sensor'

  TestingPins_B.Subtract = ((static_cast<real_T>(y) -
    TestingPins_DW.obj_dr.T0_out) / (TestingPins_DW.obj_dr.T1_out -
    TestingPins_DW.obj_dr.T0_out) * (TestingPins_DW.obj_dr.T1_degC -
    TestingPins_DW.obj_dr.T0_degC) + TestingPins_DW.obj_dr.T0_degC) -
    TestingPins_P.TemperatureOffset_Value;

  // ToWorkspace: '<Root>/To Workspace'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace_PWORK.LoggedData),
                  &TestingPins_B.HTS221HumiditySensor_o1, 0);

  // ToWorkspace: '<Root>/To Workspace1'
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (TestingPins_DW.ToWorkspace1_PWORK.LoggedData),
                  &TestingPins_B.Subtract, 0);

  // Matfile logging
  rt_UpdateTXYLogVars(TestingPins_M->rtwLogInfo,
                      (&TestingPins_M->Timing.taskTime0));

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.1s, 0.0s]
    rtExtModeUpload(0, (real_T)TestingPins_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.1s, 0.0s]
    if ((rtmGetTFinal(TestingPins_M)!=-1) &&
        !((rtmGetTFinal(TestingPins_M)-TestingPins_M->Timing.taskTime0) >
          TestingPins_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(TestingPins_M, "Simulation finished");
    }

    if (rtmGetStopRequested(TestingPins_M)) {
      rtmSetErrorStatus(TestingPins_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  TestingPins_M->Timing.taskTime0 =
    ((time_T)(++TestingPins_M->Timing.clockTick0)) *
    TestingPins_M->Timing.stepSize0;
}

// Model initialize function
void TestingPins_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(TestingPins_M, 7200.0);
  TestingPins_M->Timing.stepSize0 = 0.1;

  // Setup for data logging
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    TestingPins_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  // Setup for data logging
  {
    rtliSetLogXSignalInfo(TestingPins_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(TestingPins_M->rtwLogInfo, (NULL));
    rtliSetLogT(TestingPins_M->rtwLogInfo, "tout");
    rtliSetLogX(TestingPins_M->rtwLogInfo, "");
    rtliSetLogXFinal(TestingPins_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(TestingPins_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(TestingPins_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(TestingPins_M->rtwLogInfo, 0);
    rtliSetLogDecimation(TestingPins_M->rtwLogInfo, 1);
    rtliSetLogY(TestingPins_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(TestingPins_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(TestingPins_M->rtwLogInfo, (NULL));
  }

  // External mode info
  TestingPins_M->Sizes.checksums[0] = (307565029U);
  TestingPins_M->Sizes.checksums[1] = (2631959283U);
  TestingPins_M->Sizes.checksums[2] = (1094432606U);
  TestingPins_M->Sizes.checksums[3] = (133359207U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    TestingPins_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(TestingPins_M->extModeInfo,
      &TestingPins_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(TestingPins_M->extModeInfo,
                        TestingPins_M->Sizes.checksums);
    rteiSetTPtr(TestingPins_M->extModeInfo, rtmGetTPtr(TestingPins_M));
  }

  // block I/O
  (void) memset((static_cast<void *>(&TestingPins_B)), 0,
                sizeof(B_TestingPins_T));

  // states (dwork)
  (void) memset(static_cast<void *>(&TestingPins_DW), 0,
                sizeof(DW_TestingPins_T));

  // Matfile logging
  rt_StartDataLoggingWithStartTime(TestingPins_M->rtwLogInfo, 0.0, rtmGetTFinal
    (TestingPins_M), TestingPins_M->Timing.stepSize0, (&rtmGetErrorStatus
    (TestingPins_M)));

  {
    real_T rtb_Gain_idx_0;

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace2'
    {
      int_T dimensions[2] = { 1, 3 };

      TestingPins_DW.ToWorkspace2_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "AngVel",
        SS_DOUBLE,
        0,
        0,
        1,
        3,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace2_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace3'
    {
      int_T dimensions[2] = { 1, 3 };

      TestingPins_DW.ToWorkspace3_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "Accel",
        SS_DOUBLE,
        0,
        0,
        1,
        3,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace3_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace4'
    {
      int_T dimensions[2] = { 1, 3 };

      TestingPins_DW.ToWorkspace4_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "MagField",
        SS_DOUBLE,
        0,
        0,
        1,
        3,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace4_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace6'
    {
      int_T dimensions[2] = { 1, 4 };

      TestingPins_DW.ToWorkspace6_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "Orientation",
        SS_DOUBLE,
        0,
        0,
        1,
        4,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace6_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace7'
    {
      int_T dimensions[2] = { 1, 3 };

      TestingPins_DW.ToWorkspace7_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "AngularVelCor",
        SS_DOUBLE,
        0,
        0,
        1,
        3,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace7_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace'
    {
      int_T dimensions[2] = { 1, 1 };

      TestingPins_DW.ToWorkspace_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "Humidity",
        SS_DOUBLE,
        0,
        0,
        1,
        1,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace_PWORK.LoggedData == (NULL))
        return;
    }

    // SetupRuntimeResources for ToWorkspace: '<Root>/To Workspace1'
    {
      int_T dimensions[2] = { 1, 1 };

      TestingPins_DW.ToWorkspace1_PWORK.LoggedData = rt_CreateLogVar(
        TestingPins_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(TestingPins_M),
        TestingPins_M->Timing.stepSize0,
        (&rtmGetErrorStatus(TestingPins_M)),
        "Temperature",
        SS_DOUBLE,
        0,
        0,
        1,
        1,
        2,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (TestingPins_DW.ToWorkspace1_PWORK.LoggedData == (NULL))
        return;
    }

    // Start for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
    TestingPins_DW.obj_d.i2cobj_A_G.matlabCodegenIsDeleted = true;
    TestingPins_DW.obj_d.i2cobj_MAG.matlabCodegenIsDeleted = true;
    TestingPins_DW.obj_d.matlabCodegenIsDeleted = true;
    Testi_lsm9ds1Block_lsm9ds1Block(&TestingPins_DW.obj_d);
    TestingPins_SystemCore_setup_l(&TestingPins_DW.obj_d);

    // Start for MATLABSystem: '<Root>/AHRS2'
    TestingPins_DW.obj.isInitialized = 0;
    TestingPins_DW.obj.AccelerometerNoise =
      TestingPins_P.AHRS2_AccelerometerNoise;
    TestingPins_DW.obj.GyroscopeNoise = TestingPins_P.AHRS2_GyroscopeNoise;
    TestingPins_DW.obj.MagnetometerNoise = TestingPins_P.AHRS2_MagnetometerNoise;
    TestingPins_DW.obj.GyroscopeDriftNoise =
      TestingPins_P.AHRS2_GyroscopeDriftNoise;
    TestingPins_DW.obj.LinearAccelerationNoise =
      TestingPins_P.AHRS2_LinearAccelerationNoise;
    TestingPins_DW.obj.MagneticDisturbanceNoise =
      TestingPins_P.AHRS2_MagneticDisturbanceNoise;
    TestingPins_DW.obj.LinearAccelerationDecayFactor =
      TestingPins_P.AHRS2_LinearAccelerationDecayFa;
    TestingPins_DW.obj.MagneticDisturbanceDecayFactor =
      TestingPins_P.AHRS2_MagneticDisturbanceDecayF;
    TestingPins_DW.obj.ExpectedMagneticFieldStrength =
      TestingPins_P.AHRS2_ExpectedMagneticFieldStre;
    TestingPins_DW.obj.isInitialized = 1;
    TestingPins_DW.obj.pInputPrototype[0] = rtb_Gain_idx_0;
    TestingPins_DW.obj.pInputPrototype[1] = rtb_Gain_idx_0;
    TestingPins_DW.obj.pInputPrototype[2] = rtb_Gain_idx_0;
    TestingPins_DW.obj.pSensorPeriod = 0.1;
    TestingPins_DW.obj.pKalmanPeriod = TestingPins_DW.obj.pSensorPeriod;
    TestingPins_DW.obj.pRefSys = &TestingPins_DW.gobj_2;
    TestingPins_DW.obj.TunablePropsChanged = false;

    // InitializeConditions for MATLABSystem: '<Root>/AHRS2'
    Testin_AHRSFilterBase_resetImpl(&TestingPins_DW.obj);

    // Start for MATLABSystem: '<Root>/HTS221 Humidity Sensor'
    TestingPins_DW.obj_dr.isInitialized = 0;
    TestingPins_DW.obj_dr.matlabCodegenIsDeleted = false;
    TestingPins_SystemCore_setup(&TestingPins_DW.obj_dr);
  }
}

// Model terminate function
void TestingPins_terminate(void)
{
  // Terminate for MATLABSystem: '<Root>/LSM9DS1 IMU Sensor'
  matlabCodegenHandle_matlabCod_l(&TestingPins_DW.obj_d);
  matlabCodegenHandle_matlabC_l3s(&TestingPins_DW.obj_d.i2cobj_MAG);
  matlabCodegenHandle_matlabCo_l3(&TestingPins_DW.obj_d.i2cobj_A_G);

  // Terminate for MATLABSystem: '<Root>/HTS221 Humidity Sensor'
  matlabCodegenHandle_matlabCodeg(&TestingPins_DW.obj_dr);
}
