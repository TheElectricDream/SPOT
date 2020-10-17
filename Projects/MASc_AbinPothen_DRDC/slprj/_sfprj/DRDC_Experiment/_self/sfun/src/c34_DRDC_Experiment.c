/* Include files */

#include "DRDC_Experiment_sfun.h"
#include "c34_DRDC_Experiment.h"
#include "mwmathutil.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "DRDC_Experiment_sfun_debug_macros.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c_with_debugger(S, sfGlobalDebugInstanceStruct);

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization);
static void chart_debug_initialize_data_addresses(SimStruct *S);
static const mxArray* sf_opaque_get_hover_data_for_msg(void *chartInstance,
  int32_T msgSSID);

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static const char * c34_debug_family_names[16] = { "M", "alpha", "gamma", "L0",
  "Ac", "b1", "b2", "b3", "bc", "Fc", "nargin", "nargout", "q", "qd", "Gamma",
  "ChaserGenForce" };

/* Function Declarations */
static void initialize_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void initialize_params_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance);
static void enable_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void disable_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void c34_update_debugger_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance);
static void set_sim_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance, const mxArray *c34_st);
static void finalize_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void sf_gateway_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void mdl_start_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void initSimStructsc34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c34_machineNumber, uint32_T
  c34_chartNumber, uint32_T c34_instanceNumber);
static const mxArray *c34_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static void c34_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_b_ChaserGenForce, const char_T
  *c34_identifier, real_T c34_y[3]);
static void c34_b_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId,
  real_T c34_y[3]);
static void c34_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static const mxArray *c34_b_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static const mxArray *c34_c_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static real_T c34_c_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void c34_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static void c34_d_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId,
  real_T c34_y[6]);
static void c34_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static const mxArray *c34_d_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static const mxArray *c34_e_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static const mxArray *c34_f_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData);
static int32_T c34_e_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void c34_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData);
static uint8_T c34_f_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_b_is_active_c34_DRDC_Experiment, const
  char_T *c34_identifier);
static uint8_T c34_g_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId);
static void init_dsm_address_info(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  if (sf_is_first_init_cond(chartInstance->S)) {
    initSimStructsc34_DRDC_Experiment(chartInstance);
    chart_debug_initialize_data_addresses(chartInstance->S);
  }

  chartInstance->c34_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c34_is_active_c34_DRDC_Experiment = 0U;
}

static void initialize_params_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c34_update_debugger_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance)
{
  const mxArray *c34_st;
  const mxArray *c34_y = NULL;
  const mxArray *c34_b_y = NULL;
  uint8_T c34_hoistedGlobal;
  const mxArray *c34_c_y = NULL;
  c34_st = NULL;
  c34_st = NULL;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_createcellmatrix(2, 1), false);
  c34_b_y = NULL;
  sf_mex_assign(&c34_b_y, sf_mex_create("y", *chartInstance->c34_ChaserGenForce,
    0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_setcell(c34_y, 0, c34_b_y);
  c34_hoistedGlobal = chartInstance->c34_is_active_c34_DRDC_Experiment;
  c34_c_y = NULL;
  sf_mex_assign(&c34_c_y, sf_mex_create("y", &c34_hoistedGlobal, 3, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c34_y, 1, c34_c_y);
  sf_mex_assign(&c34_st, c34_y, false);
  return c34_st;
}

static void set_sim_state_c34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance, const mxArray *c34_st)
{
  const mxArray *c34_u;
  real_T c34_dv0[3];
  int32_T c34_i0;
  chartInstance->c34_doneDoubleBufferReInit = true;
  c34_u = sf_mex_dup(c34_st);
  c34_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c34_u, 0)),
                       "ChaserGenForce", c34_dv0);
  for (c34_i0 = 0; c34_i0 < 3; c34_i0++) {
    (*chartInstance->c34_ChaserGenForce)[c34_i0] = c34_dv0[c34_i0];
  }

  chartInstance->c34_is_active_c34_DRDC_Experiment = c34_f_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c34_u, 1)),
     "is_active_c34_DRDC_Experiment");
  sf_mex_destroy(&c34_u);
  c34_update_debugger_state_c34_DRDC_Experiment(chartInstance);
  sf_mex_destroy(&c34_st);
}

static void finalize_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void sf_gateway_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  int32_T c34_i1;
  int32_T c34_i2;
  int32_T c34_i3;
  int32_T c34_i4;
  int32_T c34_i5;
  real_T c34_b_q[6];
  int32_T c34_i6;
  real_T c34_b_qd[6];
  uint32_T c34_debug_family_var_map[16];
  real_T c34_b_Gamma[6];
  real_T c34_M[36];
  real_T c34_alpha[3];
  real_T c34_gamma[3];
  real_T c34_L0;
  real_T c34_Ac[18];
  real_T c34_b1;
  real_T c34_b2;
  real_T c34_b3;
  real_T c34_bc[3];
  real_T c34_Fc[6];
  real_T c34_nargin = 3.0;
  real_T c34_nargout = 1.0;
  real_T c34_b_ChaserGenForce[3];
  int32_T c34_i7;
  static real_T c34_dv1[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5 };

  int32_T c34_i8;
  int32_T c34_i9;
  int32_T c34_i10;
  static real_T c34_dv2[18] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  real_T c34_x;
  real_T c34_a;
  real_T c34_b_x;
  real_T c34_c_x;
  real_T c34_d_x;
  real_T c34_b_a;
  real_T c34_e_x;
  real_T c34_f_x;
  int32_T c34_i11;
  int32_T c34_i12;
  real_T c34_b[6];
  int32_T c34_i13;
  real_T c34_d0;
  int32_T c34_i14;
  int32_T c34_i15;
  int32_T c34_i16;
  real_T c34_b_b[3];
  static real_T c34_c_a[18] = { 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 2.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T c34_i17;
  int32_T c34_i18;
  int32_T c34_i19;
  static real_T c34_d_a[18] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0 };

  int32_T c34_i20;
  int32_T c34_i21;
  _SFD_SYMBOL_SCOPE_PUSH(0U, 0U);
  _sfTime_ = sf_get_time(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 26U, chartInstance->c34_sfEvent);
  for (c34_i1 = 0; c34_i1 < 6; c34_i1++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c34_Gamma)[c34_i1], 2U);
  }

  for (c34_i2 = 0; c34_i2 < 6; c34_i2++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c34_qd)[c34_i2], 1U);
  }

  for (c34_i3 = 0; c34_i3 < 6; c34_i3++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c34_q)[c34_i3], 0U);
  }

  chartInstance->c34_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 26U, chartInstance->c34_sfEvent);
  for (c34_i4 = 0; c34_i4 < 6; c34_i4++) {
    c34_b_q[c34_i4] = (*chartInstance->c34_q)[c34_i4];
  }

  for (c34_i5 = 0; c34_i5 < 6; c34_i5++) {
    c34_b_qd[c34_i5] = (*chartInstance->c34_qd)[c34_i5];
  }

  for (c34_i6 = 0; c34_i6 < 6; c34_i6++) {
    c34_b_Gamma[c34_i6] = (*chartInstance->c34_Gamma)[c34_i6];
  }

  _SFD_SYMBOL_SCOPE_PUSH_EML(0U, 16U, 16U, c34_debug_family_names,
    c34_debug_family_var_map);
  _SFD_SYMBOL_SCOPE_ADD_EML(c34_M, 0U, c34_e_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c34_alpha, 1U, c34_sf_marshallOut,
    c34_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c34_gamma, 2U, c34_sf_marshallOut,
    c34_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_L0, 3U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c34_Ac, 4U, c34_d_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_b1, 5U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_b2, 6U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_b3, 7U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c34_bc, 8U, c34_sf_marshallOut,
    c34_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c34_Fc, 9U, c34_b_sf_marshallOut,
    c34_c_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_nargin, 10U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(&c34_nargout, 11U, c34_c_sf_marshallOut,
    c34_b_sf_marshallIn);
  _SFD_SYMBOL_SCOPE_ADD_EML(c34_b_q, 12U, c34_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c34_b_qd, 13U, c34_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML(c34_b_Gamma, 14U, c34_b_sf_marshallOut);
  _SFD_SYMBOL_SCOPE_ADD_EML_IMPORTABLE(c34_b_ChaserGenForce, 15U,
    c34_sf_marshallOut, c34_sf_marshallIn);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 3);
  for (c34_i7 = 0; c34_i7 < 36; c34_i7++) {
    c34_M[c34_i7] = c34_dv1[c34_i7];
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 5);
  for (c34_i8 = 0; c34_i8 < 3; c34_i8++) {
    c34_alpha[c34_i8] = 2.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 6);
  for (c34_i9 = 0; c34_i9 < 3; c34_i9++) {
    c34_gamma[c34_i9] = 1.0;
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 8);
  c34_L0 = 10.0;
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 10);
  for (c34_i10 = 0; c34_i10 < 18; c34_i10++) {
    c34_Ac[c34_i10] = c34_dv2[c34_i10];
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 12);
  c34_x = c34_b_q[5];
  c34_a = c34_b_qd[5];
  c34_b_x = c34_b_q[5];
  c34_c_x = c34_b_q[5];
  c34_b1 = (-c34_L0 * muDoubleScalarCos(c34_x) * (c34_a * c34_a) - c34_alpha[0] *
            ((c34_b_qd[0] - c34_b_qd[3]) + c34_L0 * muDoubleScalarSin(c34_b_x) *
             c34_b_qd[5])) - c34_gamma[0] * ((c34_b_q[0] - c34_b_q[3]) - c34_L0 *
    muDoubleScalarCos(c34_c_x));
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 13);
  c34_d_x = c34_b_q[5];
  c34_b_a = c34_b_qd[5];
  c34_e_x = c34_b_q[5];
  c34_f_x = c34_b_q[5];
  c34_b2 = (-c34_L0 * muDoubleScalarSin(c34_d_x) * (c34_b_a * c34_b_a) -
            c34_alpha[1] * ((c34_b_qd[1] - c34_b_qd[4]) - c34_L0 *
             muDoubleScalarCos(c34_e_x) * c34_b_qd[5])) - c34_gamma[1] *
    ((c34_b_q[1] - c34_b_q[4]) - c34_L0 * muDoubleScalarSin(c34_f_x));
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 14);
  c34_b3 = -c34_alpha[2] * (c34_b_qd[2] - c34_b_qd[5]) - c34_gamma[2] *
    ((c34_b_q[2] - c34_b_q[5]) - 3.1415926535897931);
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 16);
  c34_bc[0] = c34_b1;
  c34_bc[1] = c34_b2;
  c34_bc[2] = c34_b3;
  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 18);
  for (c34_i11 = 0; c34_i11 < 6; c34_i11++) {
    c34_b[c34_i11] = c34_b_Gamma[c34_i11];
  }

  for (c34_i12 = 0; c34_i12 < 3; c34_i12++) {
    c34_d0 = 0.0;
    c34_i14 = 0;
    for (c34_i15 = 0; c34_i15 < 6; c34_i15++) {
      c34_d0 += c34_c_a[c34_i14 + c34_i12] * c34_b[c34_i15];
      c34_i14 += 3;
    }

    c34_b_b[c34_i12] = c34_bc[c34_i12] - c34_d0;
  }

  for (c34_i13 = 0; c34_i13 < 6; c34_i13++) {
    c34_Fc[c34_i13] = 0.0;
  }

  for (c34_i16 = 0; c34_i16 < 6; c34_i16++) {
    c34_Fc[c34_i16] = 0.0;
    c34_i18 = 0;
    for (c34_i19 = 0; c34_i19 < 3; c34_i19++) {
      c34_Fc[c34_i16] += c34_d_a[c34_i18 + c34_i16] * c34_b_b[c34_i19];
      c34_i18 += 6;
    }
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, 20);
  for (c34_i17 = 0; c34_i17 < 3; c34_i17++) {
    c34_b_ChaserGenForce[c34_i17] = c34_Fc[c34_i17];
  }

  _SFD_EML_CALL(0U, chartInstance->c34_sfEvent, -20);
  _SFD_SYMBOL_SCOPE_POP();
  for (c34_i20 = 0; c34_i20 < 3; c34_i20++) {
    (*chartInstance->c34_ChaserGenForce)[c34_i20] = c34_b_ChaserGenForce[c34_i20];
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 26U, chartInstance->c34_sfEvent);
  _SFD_SYMBOL_SCOPE_POP();
  _SFD_CHECK_FOR_STATE_INCONSISTENCY(_DRDC_ExperimentMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
  for (c34_i21 = 0; c34_i21 < 3; c34_i21++) {
    _SFD_DATA_RANGE_CHECK((*chartInstance->c34_ChaserGenForce)[c34_i21], 3U);
  }
}

static void mdl_start_c34_DRDC_Experiment(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void initSimStructsc34_DRDC_Experiment
  (SFc34_DRDC_ExperimentInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_script_number_translation(uint32_T c34_machineNumber, uint32_T
  c34_chartNumber, uint32_T c34_instanceNumber)
{
  (void)(c34_machineNumber);
  (void)(c34_chartNumber);
  (void)(c34_instanceNumber);
}

static const mxArray *c34_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  int32_T c34_i22;
  const mxArray *c34_y = NULL;
  real_T c34_u[3];
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  for (c34_i22 = 0; c34_i22 < 3; c34_i22++) {
    c34_u[c34_i22] = (*(real_T (*)[3])c34_inData)[c34_i22];
  }

  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", c34_u, 0, 0U, 1U, 0U, 1, 3), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static void c34_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_b_ChaserGenForce, const char_T
  *c34_identifier, real_T c34_y[3])
{
  emlrtMsgIdentifier c34_thisId;
  c34_thisId.fIdentifier = (const char *)c34_identifier;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_b_ChaserGenForce),
    &c34_thisId, c34_y);
  sf_mex_destroy(&c34_b_ChaserGenForce);
}

static void c34_b_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId,
  real_T c34_y[3])
{
  real_T c34_dv3[3];
  int32_T c34_i23;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), c34_dv3, 1, 0, 0U, 1, 0U, 1, 3);
  for (c34_i23 = 0; c34_i23 < 3; c34_i23++) {
    c34_y[c34_i23] = c34_dv3[c34_i23];
  }

  sf_mex_destroy(&c34_u);
}

static void c34_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_b_ChaserGenForce;
  emlrtMsgIdentifier c34_thisId;
  real_T c34_y[3];
  int32_T c34_i24;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_b_ChaserGenForce = sf_mex_dup(c34_mxArrayInData);
  c34_thisId.fIdentifier = (const char *)c34_varName;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_b_ChaserGenForce),
    &c34_thisId, c34_y);
  sf_mex_destroy(&c34_b_ChaserGenForce);
  for (c34_i24 = 0; c34_i24 < 3; c34_i24++) {
    (*(real_T (*)[3])c34_outData)[c34_i24] = c34_y[c34_i24];
  }

  sf_mex_destroy(&c34_mxArrayInData);
}

static const mxArray *c34_b_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  int32_T c34_i25;
  const mxArray *c34_y = NULL;
  real_T c34_u[6];
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  for (c34_i25 = 0; c34_i25 < 6; c34_i25++) {
    c34_u[c34_i25] = (*(real_T (*)[6])c34_inData)[c34_i25];
  }

  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", c34_u, 0, 0U, 1U, 0U, 1, 6), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static const mxArray *c34_c_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  real_T c34_u;
  const mxArray *c34_y = NULL;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  c34_u = *(real_T *)c34_inData;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 0, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static real_T c34_c_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  real_T c34_y;
  real_T c34_d1;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_d1, 1, 0, 0U, 0, 0U, 0);
  c34_y = c34_d1;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void c34_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_nargout;
  emlrtMsgIdentifier c34_thisId;
  real_T c34_y;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_nargout = sf_mex_dup(c34_mxArrayInData);
  c34_thisId.fIdentifier = (const char *)c34_varName;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_y = c34_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_nargout),
    &c34_thisId);
  sf_mex_destroy(&c34_nargout);
  *(real_T *)c34_outData = c34_y;
  sf_mex_destroy(&c34_mxArrayInData);
}

static void c34_d_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId,
  real_T c34_y[6])
{
  real_T c34_dv4[6];
  int32_T c34_i26;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), c34_dv4, 1, 0, 0U, 1, 0U, 1, 6);
  for (c34_i26 = 0; c34_i26 < 6; c34_i26++) {
    c34_y[c34_i26] = c34_dv4[c34_i26];
  }

  sf_mex_destroy(&c34_u);
}

static void c34_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_Fc;
  emlrtMsgIdentifier c34_thisId;
  real_T c34_y[6];
  int32_T c34_i27;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_Fc = sf_mex_dup(c34_mxArrayInData);
  c34_thisId.fIdentifier = (const char *)c34_varName;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_Fc), &c34_thisId, c34_y);
  sf_mex_destroy(&c34_Fc);
  for (c34_i27 = 0; c34_i27 < 6; c34_i27++) {
    (*(real_T (*)[6])c34_outData)[c34_i27] = c34_y[c34_i27];
  }

  sf_mex_destroy(&c34_mxArrayInData);
}

static const mxArray *c34_d_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  int32_T c34_i28;
  int32_T c34_i29;
  const mxArray *c34_y = NULL;
  int32_T c34_i30;
  real_T c34_u[18];
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  c34_i28 = 0;
  for (c34_i29 = 0; c34_i29 < 6; c34_i29++) {
    for (c34_i30 = 0; c34_i30 < 3; c34_i30++) {
      c34_u[c34_i30 + c34_i28] = (*(real_T (*)[18])c34_inData)[c34_i30 + c34_i28];
    }

    c34_i28 += 3;
  }

  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", c34_u, 0, 0U, 1U, 0U, 2, 3, 6), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static const mxArray *c34_e_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  int32_T c34_i31;
  int32_T c34_i32;
  const mxArray *c34_y = NULL;
  int32_T c34_i33;
  real_T c34_u[36];
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  c34_i31 = 0;
  for (c34_i32 = 0; c34_i32 < 6; c34_i32++) {
    for (c34_i33 = 0; c34_i33 < 6; c34_i33++) {
      c34_u[c34_i33 + c34_i31] = (*(real_T (*)[36])c34_inData)[c34_i33 + c34_i31];
    }

    c34_i31 += 6;
  }

  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", c34_u, 0, 0U, 1U, 0U, 2, 6, 6), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

const mxArray *sf_c34_DRDC_Experiment_get_eml_resolved_functions_info(void)
{
  const mxArray *c34_nameCaptureInfo = NULL;
  c34_nameCaptureInfo = NULL;
  sf_mex_assign(&c34_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c34_nameCaptureInfo;
}

static const mxArray *c34_f_sf_marshallOut(void *chartInstanceVoid, void
  *c34_inData)
{
  const mxArray *c34_mxArrayOutData;
  int32_T c34_u;
  const mxArray *c34_y = NULL;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_mxArrayOutData = NULL;
  c34_mxArrayOutData = NULL;
  c34_u = *(int32_T *)c34_inData;
  c34_y = NULL;
  sf_mex_assign(&c34_y, sf_mex_create("y", &c34_u, 6, 0U, 0U, 0U, 0), false);
  sf_mex_assign(&c34_mxArrayOutData, c34_y, false);
  return c34_mxArrayOutData;
}

static int32_T c34_e_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  int32_T c34_y;
  int32_T c34_i34;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_i34, 1, 6, 0U, 0, 0U, 0);
  c34_y = c34_i34;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void c34_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c34_mxArrayInData, const char_T *c34_varName, void *c34_outData)
{
  const mxArray *c34_b_sfEvent;
  emlrtMsgIdentifier c34_thisId;
  int32_T c34_y;
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)chartInstanceVoid;
  c34_b_sfEvent = sf_mex_dup(c34_mxArrayInData);
  c34_thisId.fIdentifier = (const char *)c34_varName;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_y = c34_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c34_b_sfEvent),
    &c34_thisId);
  sf_mex_destroy(&c34_b_sfEvent);
  *(int32_T *)c34_outData = c34_y;
  sf_mex_destroy(&c34_mxArrayInData);
}

static uint8_T c34_f_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_b_is_active_c34_DRDC_Experiment, const
  char_T *c34_identifier)
{
  uint8_T c34_y;
  emlrtMsgIdentifier c34_thisId;
  c34_thisId.fIdentifier = (const char *)c34_identifier;
  c34_thisId.fParent = NULL;
  c34_thisId.bParentIsCell = false;
  c34_y = c34_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c34_b_is_active_c34_DRDC_Experiment), &c34_thisId);
  sf_mex_destroy(&c34_b_is_active_c34_DRDC_Experiment);
  return c34_y;
}

static uint8_T c34_g_emlrt_marshallIn(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance, const mxArray *c34_u, const emlrtMsgIdentifier *c34_parentId)
{
  uint8_T c34_y;
  uint8_T c34_u0;
  (void)chartInstance;
  sf_mex_import(c34_parentId, sf_mex_dup(c34_u), &c34_u0, 1, 3, 0U, 0, 0U, 0);
  c34_y = c34_u0;
  sf_mex_destroy(&c34_u);
  return c34_y;
}

static void init_dsm_address_info(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc34_DRDC_ExperimentInstanceStruct
  *chartInstance)
{
  chartInstance->c34_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c34_q = (real_T (*)[6])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c34_qd = (real_T (*)[6])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c34_Gamma = (real_T (*)[6])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c34_ChaserGenForce = (real_T (*)[3])
    ssGetOutputPortSignal_wrapper(chartInstance->S, 1);
}

/* SFunction Glue Code */
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

void sf_c34_DRDC_Experiment_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4162663383U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1399725072U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1791400044U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(584427310U);
}

mxArray* sf_c34_DRDC_Experiment_get_post_codegen_info(void);
mxArray *sf_c34_DRDC_Experiment_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals", "postCodegenInfo" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1, 1, sizeof
    (autoinheritanceFields)/sizeof(autoinheritanceFields[0]),
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("N6m2y73qF8JNe9iM8UxPfC");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(6);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,1,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(3);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt", "isFixedPointType" };

      mxArray *mxType = mxCreateStructMatrix(1,1,sizeof(typeFields)/sizeof
        (typeFields[0]),typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxType,0,"isFixedPointType",mxCreateDoubleScalar(0));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxArray* mxPostCodegenInfo = sf_c34_DRDC_Experiment_get_post_codegen_info();
    mxSetField(mxAutoinheritanceInfo,0,"postCodegenInfo",mxPostCodegenInfo);
  }

  return(mxAutoinheritanceInfo);
}

mxArray *sf_c34_DRDC_Experiment_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c34_DRDC_Experiment_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("pre");
  mxArray *fallbackReason = mxCreateString("hasBreakpoints");
  mxArray *hiddenFallbackType = mxCreateString("none");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c34_DRDC_Experiment_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

mxArray* sf_c34_DRDC_Experiment_get_post_codegen_info(void)
{
  const char* fieldNames[] = { "exportedFunctionsUsedByThisChart",
    "exportedFunctionsChecksum" };

  mwSize dims[2] = { 1, 1 };

  mxArray* mxPostCodegenInfo = mxCreateStructArray(2, dims, sizeof(fieldNames)/
    sizeof(fieldNames[0]), fieldNames);

  {
    mxArray* mxExportedFunctionsChecksum = mxCreateString("");
    mwSize exp_dims[2] = { 0, 1 };

    mxArray* mxExportedFunctionsUsedByThisChart = mxCreateCellArray(2, exp_dims);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsUsedByThisChart",
               mxExportedFunctionsUsedByThisChart);
    mxSetField(mxPostCodegenInfo, 0, "exportedFunctionsChecksum",
               mxExportedFunctionsChecksum);
  }

  return mxPostCodegenInfo;
}

static const mxArray *sf_get_sim_state_info_c34_DRDC_Experiment(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x2'type','srcId','name','auxInfo'{{M[1],M[28],T\"ChaserGenForce\",},{M[8],M[0],T\"is_active_c34_DRDC_Experiment\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 2, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c34_DRDC_Experiment_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc34_DRDC_ExperimentInstanceStruct *chartInstance =
      (SFc34_DRDC_ExperimentInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (sfGlobalDebugInstanceStruct,
           _DRDC_ExperimentMachineNumber_,
           34,
           1,
           1,
           0,
           4,
           0,
           0,
           0,
           0,
           0,
           &chartInstance->chartNumber,
           &chartInstance->instanceNumber,
           (void *)S);

        /* Each instance must initialize its own list of scripts */
        init_script_number_translation(_DRDC_ExperimentMachineNumber_,
          chartInstance->chartNumber,chartInstance->instanceNumber);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting
            (sfGlobalDebugInstanceStruct,_DRDC_ExperimentMachineNumber_,
             chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds(sfGlobalDebugInstanceStruct,
            _DRDC_ExperimentMachineNumber_,
            chartInstance->chartNumber,
            0,
            0,
            0);
          _SFD_SET_DATA_PROPS(0,1,1,0,"q");
          _SFD_SET_DATA_PROPS(1,1,1,0,"qd");
          _SFD_SET_DATA_PROPS(2,1,1,0,"Gamma");
          _SFD_SET_DATA_PROPS(3,2,0,1,"ChaserGenForce");
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }

        _SFD_CV_INIT_CHART(0,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of MATLAB Function Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,539);

        {
          unsigned int dimVector[1];
          dimVector[0]= 6U;
          _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c34_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6U;
          _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c34_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 6U;
          _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c34_b_sf_marshallOut,(MexInFcnForType)NULL);
        }

        {
          unsigned int dimVector[1];
          dimVector[0]= 3U;
          _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,1,&(dimVector[0]),0,0,0,0.0,
            1.0,0,0,(MexFcnForType)c34_sf_marshallOut,(MexInFcnForType)
            c34_sf_marshallIn);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration(sfGlobalDebugInstanceStruct,
        _DRDC_ExperimentMachineNumber_,chartInstance->chartNumber,
        chartInstance->instanceNumber);
    }
  }
}

static void chart_debug_initialize_data_addresses(SimStruct *S)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc34_DRDC_ExperimentInstanceStruct *chartInstance =
      (SFc34_DRDC_ExperimentInstanceStruct *)sf_get_chart_instance_ptr(S);
    if (ssIsFirstInitCond(S)) {
      /* do this only if simulation is starting and after we know the addresses of all data */
      {
        _SFD_SET_DATA_VALUE_PTR(0U, (void *)chartInstance->c34_q);
        _SFD_SET_DATA_VALUE_PTR(1U, (void *)chartInstance->c34_qd);
        _SFD_SET_DATA_VALUE_PTR(2U, (void *)chartInstance->c34_Gamma);
        _SFD_SET_DATA_VALUE_PTR(3U, (void *)chartInstance->c34_ChaserGenForce);
      }
    }
  }
}

static const char* sf_get_instance_specialization(void)
{
  return "sE4qlP5CnQe37rcOTn2ABkH";
}

static void sf_opaque_initialize_c34_DRDC_Experiment(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
  initialize_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c34_DRDC_Experiment(void *chartInstanceVar)
{
  enable_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c34_DRDC_Experiment(void *chartInstanceVar)
{
  disable_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c34_DRDC_Experiment(void *chartInstanceVar)
{
  sf_gateway_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c34_DRDC_Experiment(SimStruct* S)
{
  return get_sim_state_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c34_DRDC_Experiment(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c34_DRDC_Experiment(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc34_DRDC_ExperimentInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_DRDC_Experiment_optimization_info();
    }

    finalize_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c34_DRDC_Experiment(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c34_DRDC_Experiment((SFc34_DRDC_ExperimentInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

static void mdlSetWorkWidths_c34_DRDC_Experiment(SimStruct *S)
{
  /* Set overwritable ports for inplace optimization */
  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortDirectFeedThrough(S, 1, 1);
  ssSetInputPortDirectFeedThrough(S, 2, 1);
  ssSetStatesModifiedOnlyInUpdate(S, 1);
  ssSetBlockIsPurelyCombinatorial_wrapper(S, 1);
  ssMdlUpdateIsEmpty(S, 1);
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_DRDC_Experiment_optimization_info
      (sim_mode_is_rtw_gen(S), sim_mode_is_modelref_sim(S), sim_mode_is_external
       (S));
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(sf_get_instance_specialization(),infoStruct,
      34);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,1);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop
      (sf_get_instance_specialization(),infoStruct,34,
       "gatewayCannotBeInlinedMultipleTimes"));
    sf_set_chart_accesses_machine_info(S, sf_get_instance_specialization(),
      infoStruct, 34);
    sf_update_buildInfo(S, sf_get_instance_specialization(),infoStruct,34);
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,34,3);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,34,1);
    }

    {
      unsigned int outPortIdx;
      for (outPortIdx=1; outPortIdx<=1; ++outPortIdx) {
        ssSetOutputPortOptimizeInIR(S, outPortIdx, 1U);
      }
    }

    {
      unsigned int inPortIdx;
      for (inPortIdx=0; inPortIdx < 3; ++inPortIdx) {
        ssSetInputPortOptimizeInIR(S, inPortIdx, 1U);
      }
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,34);
    sf_register_codegen_names_for_scoped_functions_defined_by_chart(S);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(1177319967U));
  ssSetChecksum1(S,(141131540U));
  ssSetChecksum2(S,(1522047649U));
  ssSetChecksum3(S,(1032447562U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
  ssSetStateSemanticsClassicAndSynchronous(S, true);
  ssSupportsMultipleExecInstances(S,1);
}

static void mdlRTW_c34_DRDC_Experiment(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c34_DRDC_Experiment(SimStruct *S)
{
  SFc34_DRDC_ExperimentInstanceStruct *chartInstance;
  chartInstance = (SFc34_DRDC_ExperimentInstanceStruct *)utMalloc(sizeof
    (SFc34_DRDC_ExperimentInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc34_DRDC_ExperimentInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c34_DRDC_Experiment;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c34_DRDC_Experiment;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c34_DRDC_Experiment;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c34_DRDC_Experiment;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c34_DRDC_Experiment;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c34_DRDC_Experiment;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c34_DRDC_Experiment;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c34_DRDC_Experiment;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c34_DRDC_Experiment;
  chartInstance->chartInfo.mdlStart = mdlStart_c34_DRDC_Experiment;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c34_DRDC_Experiment;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.debugInstance = sfGlobalDebugInstanceStruct;
  chartInstance->S = S;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  chart_debug_initialization(S,1);
  mdl_start_c34_DRDC_Experiment(chartInstance);
}

void c34_DRDC_Experiment_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c34_DRDC_Experiment(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c34_DRDC_Experiment(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c34_DRDC_Experiment(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c34_DRDC_Experiment_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
