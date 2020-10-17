//
//  Template_v3_03_2020a.h
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


#ifndef RTW_HEADER_Template_v3_03_2020a_h_
#define RTW_HEADER_Template_v3_03_2020a_h_
#include <stddef.h>
#include <math.h>
#include <string.h>
#include <float.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "MW_gpio.h"
#include "MW_pigs.h"
#include "UDP_Client_Headers.h"
#include "DAHostLib_Network.h"
#include "Template_v3_03_2020a_types.h"

// Shared type includes
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rt_zcfcn.h"
#include "rt_defines.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
# define rtmStepTask(rtm, idx)         ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmTaskCounter
# define rtmTaskCounter(rtm, idx)      ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

// Block signals for system '<S27>/MATLAB Function2'
typedef struct {
  real_T ThrustPer_Final[8];           // '<S27>/MATLAB Function2'
  real_T ThrustPer_Sat[8];
} B_MATLABFunction2_Template_v3_T;

// Block signals for system '<S32>/Create Rotation Matrix'
typedef struct {
  real_T C_Ib[4];                      // '<S32>/Create Rotation Matrix'
} B_CreateRotationMatrix_Templa_T;

// Block signals for system '<S28>/Create Rotation Matrix'
typedef struct {
  real_T C_bI[4];                      // '<S28>/Create Rotation Matrix'
} B_CreateRotationMatrix_Temp_i_T;

// Block signals for system '<S36>/MATLAB Function'
typedef struct {
  real_T Mat2[64];
  real_T H[24];                        // '<S36>/MATLAB Function'
  real_T b[24];
  real_T v[8];
} B_MATLABFunction_Template_v3__T;

// Block signals for system '<S77>/Stream PhaseSpace Data'
typedef struct {
  real_T StreamPhaseSpaceData[13];     // '<S77>/Stream PhaseSpace Data'
  real_T y2;
  real_T y3;
} B_StreamPhaseSpaceData_Templa_T;

// Block states (default storage) for system '<S77>/Stream PhaseSpace Data'
typedef struct {
  STREAMDATA_RB_Template_v3_03__T obj; // '<S77>/Stream PhaseSpace Data'
  boolean_T objisempty;                // '<S77>/Stream PhaseSpace Data'
} DW_StreamPhaseSpaceData_Templ_T;

// Block signals for system '<S6>/AHRS2'
typedef struct {
  real_T Qw[144];
  real_T Ppost[144];
  real_T H[72];
  real_T b_X[72];
  real_T H_m[72];
  real_T c_A[36];
  real_T xe_post[12];
  real_T Rprior[9];
  real_T h1[9];
  real_T x[9];
  real_T h[9];
  real_T ze[6];
  real_T b_varargout_1[4];
  real_T psquared[4];
  real_T AHRS2_o2[3];                  // '<S6>/AHRS2'
  real_T b_varargout_2[3];
  real_T gravityAccelGyroDiff[3];
  real_T offDiag[3];
  real_T Reast[3];
  real_T c[3];
  boolean_T b[9];
  real_T accelMeasNoiseVar;
  real_T magMeasNoiseVar;
  real_T smax;
  real_T s;
  real_T temp;
  real_T assign_temp_a;
  real_T assign_temp_b;
  real_T assign_temp_c;
  real_T assign_temp_d;
  real_T assign_temp_d_c;
  real_T gyroOffsetErr_idx_0;
  real_T linAccelErr_idx_0;
  real_T gyroOffsetErr_idx_1;
  real_T linAccelErr_idx_1;
  real_T gyroOffsetErr_idx_2;
  real_T linAccelErr_idx_2;
  real_T assign_temp_a_k;
  real_T assign_temp_b_c;
  real_T assign_temp_c_b;
  real_T assign_temp_d_p;
  real_T theta;
  real_T tr;
  real_T d;
  real_T ac2;
  real_T ad2;
  real_T bc2;
  real_T bd2;
  real_T cd2;
  real_T aasq;
  real_T scale;
  real_T absxk;
  int8_T b_ipiv[6];
  int32_T i;
  int32_T i1;
} B_AHRS2_Template_v3_03_2020a_T;

// Block states (default storage) for system '<S6>/AHRS2'
typedef struct {
  fusion_simulink_ahrsfilter_Te_T obj; // '<S6>/AHRS2'
  c_fusion_internal_frames_NED__T gobj_1;// '<S6>/AHRS2'
  c_fusion_internal_frames_NED__T gobj_2;// '<S6>/AHRS2'
  boolean_T objisempty;                // '<S6>/AHRS2'
} DW_AHRS2_Template_v3_03_2020a_T;

// Block signals for system '<S136>/MATLAB Function'
typedef struct {
  real_T a;                            // '<S136>/MATLAB Function'
  real_T b;                            // '<S136>/MATLAB Function'
  real_T c;                            // '<S136>/MATLAB Function'
} B_MATLABFunction_Template_v_l_T;

// Block signals for system '<S6>/MATLAB Function'
typedef struct {
  real_T y[9];                         // '<S6>/MATLAB Function'
} B_MATLABFunction_Template_v_p_T;

// Block signals for system '<S397>/MATLAB Function'
typedef struct {
  real_T y;                            // '<S397>/MATLAB Function'
} B_MATLABFunction_Template_v_e_T;

// Block signals for system '<S163>/MATLAB Function2'
typedef struct {
  real_T Oy[2];                        // '<S163>/MATLAB Function2'
  real_T Ox[2];                        // '<S163>/MATLAB Function2'
} B_MATLABFunction2_Template__n_T;

// Block signals for system '<S163>/MATLAB Function3'
typedef struct {
  real_T Ox[2];                        // '<S163>/MATLAB Function3'
} B_MATLABFunction3_Template_v3_T;

// Block signals for system '<S163>/MATLAB Function4'
typedef struct {
  real_T e_out;                        // '<S163>/MATLAB Function4'
} B_MATLABFunction4_Template_v3_T;

// Block signals for system '<S227>/MATLAB Function'
typedef struct {
  real_T wrappedAngle;                 // '<S227>/MATLAB Function'
} B_MATLABFunction_Template_v_h_T;

// Block signals for system '<S225>/MATLAB Function2'
typedef struct {
  real_T Oy[2];                        // '<S225>/MATLAB Function2'
  real_T Ox[2];                        // '<S225>/MATLAB Function2'
} B_MATLABFunction2_Template__l_T;

// Block signals for system '<S200>/Sub-Phase #1'
typedef struct {
  real_T rtb_Subtract2_e_m[2];
  real_T In1;                          // '<S252>/In1'
  real_T In1_p;                        // '<S250>/In1'
  real_T In1_j;                        // '<S248>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S246>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S246>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S246>/MATLAB Function2' 
} B_SubPhase1_Template_v3_03_20_T;

// Block states (default storage) for system '<S200>/Sub-Phase #1'
typedef struct {
  real_T Delay1_DSTATE;                // '<S249>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S251>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S247>/Delay1'
  uint8_T icLoad;                      // '<S249>/Delay1'
  uint8_T icLoad_p;                    // '<S251>/Delay1'
  uint8_T icLoad_d;                    // '<S247>/Delay1'
} DW_SubPhase1_Template_v3_03_2_T;

// Block signals for system '<S12>/Change BLUE Behavior'
typedef struct {
  real_T rtb_Subtract2_b1_m[2];
  real_T In1;                          // '<S330>/In1'
  real_T In1_k;                        // '<S328>/In1'
  real_T In1_a;                        // '<S326>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S324>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S324>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S324>/MATLAB Function2' 
} B_ChangeBLUEBehavior_Templa_k_T;

// Block states (default storage) for system '<S12>/Change BLUE Behavior'
typedef struct {
  real_T Delay1_DSTATE;                // '<S327>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S329>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S325>/Delay1'
  uint8_T icLoad;                      // '<S327>/Delay1'
  uint8_T icLoad_h;                    // '<S329>/Delay1'
  uint8_T icLoad_l;                    // '<S325>/Delay1'
} DW_ChangeBLUEBehavior_Templ_i_T;

// Block signals (default storage)
typedef struct {
  real_T Mat2[64];
  real_T Mat2_m[64];
  real_T TmpSignalConversionAtToWork[40];
  real_T transpose[24];                // '<S51>/transpose'
  real_T transpose_p[24];              // '<S42>/transpose'
  real_T transpose_d[24];              // '<S33>/transpose'
  real_T H_bu[24];                     // '<S27>/MATLAB Function'
  real_T b[24];
  real_T UDPReceive1_o1[9];            // '<S6>/UDP Receive1'
  real_T UDPReceive_o1[9];             // '<S6>/UDP Receive'
  real_T rtb_H_bu_c[9];
  real_T dv[9];
  real_T x[9];
  real_T x_k[9];
  real_T x_c[9];
  real_T rtb_RemoveNegatives_i_b[8];
  real_T UDPReceive2_o1[6];            // '<S6>/UDP Receive2'
  char_T cv[45];
  real_T x_ddot_d[3];                  // '<S394>/MATLAB Function'
  real_T Product1_a[3];                // '<S136>/Product1'
  real_T Product1_o[3];                // '<S140>/Product1'
  real_T Product1_e[3];                // '<S138>/Product1'
  real_T Product1_p[3];                // '<S142>/Product1'
  real_T Product1_i[3];                // '<S144>/Product1'
  real_T Product1[3];                  // '<S146>/Product1'
  real_T Sum1[3];                      // '<S136>/Sum1'
  real_T Sum3[3];                      // '<S136>/Sum3'
  real_T Sum1_d[3];                    // '<S138>/Sum1'
  real_T Sum3_k[3];                    // '<S138>/Sum3'
  real_T Sum1_g[3];                    // '<S140>/Sum1'
  real_T Sum3_f[3];                    // '<S140>/Sum3'
  real_T Sum1_b[3];                    // '<S142>/Sum1'
  real_T Sum3_b[3];                    // '<S142>/Sum3'
  real_T Sum1_k[3];                    // '<S144>/Sum1'
  real_T Sum3_c[3];                    // '<S144>/Sum3'
  real_T Sum1_j[3];                    // '<S146>/Sum1'
  real_T Sum3_n[3];                    // '<S146>/Sum3'
  real_T rtb_Subtract2_f_p[2];
  real_T SetUniversalTimeIfthisisasimula;
                        // '<S15>/Set Universal Time (If this is a simulation)'
  real_T In1;                          // '<S386>/In1'
  real_T In1_j;                        // '<S384>/In1'
  real_T In1_d;                        // '<S382>/In1'
  real_T In1_c;                        // '<S360>/In1'
  real_T In1_i;                        // '<S358>/In1'
  real_T In1_g;                        // '<S356>/In1'
  real_T In1_f;                        // '<S343>/In1'
  real_T In1_b;                        // '<S341>/In1'
  real_T In1_h;                        // '<S339>/In1'
  real_T In1_d0;                       // '<S317>/In1'
  real_T In1_fx;                       // '<S315>/In1'
  real_T In1_fk;                       // '<S313>/In1'
  real_T In1_a;                        // '<S300>/In1'
  real_T In1_o;                        // '<S298>/In1'
  real_T In1_ow;                       // '<S296>/In1'
  real_T In1_jw;                       // '<S283>/In1'
  real_T In1_jwe;                      // '<S281>/In1'
  real_T In1_n;                        // '<S279>/In1'
  real_T In1_l;                        // '<S234>/In1'
  real_T In1_bd;                       // '<S232>/In1'
  real_T In1_gd;                       // '<S230>/In1'
  real_T In1_ly;                       // '<S217>/In1'
  real_T In1_cw;                       // '<S215>/In1'
  real_T In1_ab;                       // '<S213>/In1'
  real_T In1_if;                       // '<S195>/In1'
  real_T In1_cr;                       // '<S193>/In1'
  real_T In1_k;                        // '<S191>/In1'
  real_T In1_jwx;                      // '<S182>/In1'
  real_T In1_lc;                       // '<S180>/In1'
  real_T In1_ov;                       // '<S178>/In1'
  real_T In1_gc;                       // '<S169>/In1'
  real_T In1_e;                        // '<S167>/In1'
  real_T In1_fa;                       // '<S165>/In1'
  real_T In1_jt;                       // '<S426>/In1'
  real_T In1_ac;                       // '<S425>/In1'
  real_T In1_ad;                       // '<S424>/In1'
  real_T In1_m;                        // '<S423>/In1'
  real_T In1_ey;                       // '<S422>/In1'
  real_T In1_k4;                       // '<S421>/In1'
  real_T In1_o1;                       // '<S420>/In1'
  real_T In1_af;                       // '<S419>/In1'
  real_T In1_nu;                       // '<S418>/In1'
  real_T In[3];                        // '<S417>/In'
  real_T In_p[3];                      // '<S415>/In'
  real_T In_n[3];                      // '<S413>/In'
  real_T Unwrap;                       // '<S80>/Unwrap'
  real_T Unwrap1;                      // '<S80>/Unwrap1'
  real_T TmpSignalConversionAtSendBLACKS[13];
  real_T In1_bs;                       // '<S109>/In1'
  real_T In1_p;                        // '<S108>/In1'
  real_T In1_g5;                       // '<S107>/In1'
  real_T In1_jh;                       // '<S106>/In1'
  real_T In1_bd2;                      // '<S105>/In1'
  real_T In1_of;                       // '<S104>/In1'
  real_T In1_f5;                       // '<S101>/In1'
  real_T UDPReceive_o1_p[13];          // '<S79>/UDP Receive'
  real_T Unwrap_d;                     // '<S79>/Unwrap'
  real_T Unwrap1_f;                    // '<S79>/Unwrap1'
  real_T In1_m4;                       // '<S92>/In1'
  real_T In1_ky;                       // '<S91>/In1'
  real_T In1_aw;                       // '<S90>/In1'
  real_T In1_fxz;                      // '<S89>/In1'
  real_T In1_ky2;                      // '<S88>/In1'
  real_T In1_et;                       // '<S87>/In1'
  real_T Unwrap_g;                     // '<S77>/Unwrap'
  real_T Unwrap1_o;                    // '<S77>/Unwrap1'
  real_T In1_j1;                       // '<S126>/In1'
  real_T In1_jc;                       // '<S125>/In1'
  real_T In1_bx;                       // '<S124>/In1'
  real_T In1_mo;                       // '<S123>/In1'
  real_T In1_n2;                       // '<S122>/In1'
  real_T In1_np;                       // '<S121>/In1'
  real_T In1_jww;                      // '<S118>/In1'
  real_T BLACK_AccelZ;
  real_T BLACK_AccelY;
  real_T BLACK_AccelX;
  real_T BLACK_GyroZ;
  real_T BLACK_GyroY;
  real_T BLACK_GyroX;
  real_T RED_GyroZ;
  real_T RED_GyroY;
  real_T RED_GyroX;
  real_T rtb_Gain2_idx_0;
  real_T rtb_Gain2_idx_1;
  real_T rtb_Gain2_idx_2;
  real_T rtb_Sum_hq_idx_0;
  real_T rtb_Sum_hq_idx_1;
  real_T rtb_Sum_hq_idx_2;
  real_T rtb_Gain3_idx_0;
  real_T rtb_Gain3_idx_1;
  real_T rtb_Gain3_idx_2;
  real_T rtb_Sum_m_idx_0;
  real_T rtb_Sum_m_idx_1;
  real_T rtb_Sum_m_idx_2;
  real_T rtb_Product2_n_idx_0;
  real_T rtb_Product2_n_idx_1;
  real_T rtb_Product2_n_idx_2;
  real_T rtb_Gain1_n_idx_0;
  real_T rtb_Gain1_n_idx_1;
  real_T rtb_Gain1_n_idx_2;
  real_T rtb_Sum_e_idx_0;
  real_T rtb_Sum_e_idx_1;
  real_T rtb_Sum_e_idx_2;
  real_T rtb_Gain_idx_0;
  real_T rtb_Gain_idx_1;
  real_T rtb_Gain_idx_2;
  real_T rtb_Sum_a_idx_0;
  real_T rtb_Sum_a_idx_1;
  real_T rtb_Sum_a_idx_2;
  real_T rtb_Product2_f_idx_0;
  real_T rtb_Product2_f_idx_1;
  real_T rtb_Product2_f_idx_2;
  real_T rtb_Sum2_h_idx_0;
  real_T rtb_Sum2_h_idx_1;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  real_T sampleTime;
  real_T d;
  real_T sr;
  real_T si;
  int32_T ntIdx0;
  int32_T uElOffset0;
  int32_T ntIdx1;
  int32_T uElOffset1;
  int32_T yElIdx;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  int32_T itmp;
  uint32_T lo;
  uint32_T hi;
  ZCEventType zcEvent;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T u;
  boolean_T DataTypeConversion;        // '<S100>/Data Type Conversion'
  boolean_T DataTypeConversion_m;      // '<S117>/Data Type Conversion'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_df;// '<S380>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bc;// '<S380>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_mx;// '<S380>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_de;// '<S354>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_o;// '<S354>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_g;// '<S354>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_n;// '<S337>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c1;// '<S337>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ia;// '<S337>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_l;// '<S311>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bv;// '<S311>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_pt;// '<S311>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_i;// '<S291>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_f;// '<S291>/MATLAB Function3' 
  B_MATLABFunction2_Template__l_T sf_MATLABFunction2_p;// '<S291>/MATLAB Function2' 
  B_MATLABFunction_Template_v_h_T sf_MATLABFunction_ik;// '<S293>/MATLAB Function' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_k;// '<S277>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bj;// '<S277>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_a;// '<S277>/MATLAB Function2' 
  B_SubPhase1_Template_v3_03_20_T SubPhase4_f;// '<S200>/Sub-Phase #4'
  B_SubPhase1_Template_v3_03_20_T SubPhase1_a;// '<S200>/Sub-Phase #1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_bk;// '<S225>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_b;// '<S225>/MATLAB Function3' 
  B_MATLABFunction2_Template__l_T sf_MATLABFunction2_o0;// '<S225>/MATLAB Function2' 
  B_MATLABFunction_Template_v_h_T sf_MATLABFunction_n;// '<S227>/MATLAB Function' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_d;// '<S211>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_l;// '<S211>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_i;// '<S211>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_b;// '<S189>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_k;// '<S189>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ol;// '<S189>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_c;// '<S176>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c;// '<S176>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_m;// '<S176>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S163>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S163>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_o;// '<S163>/MATLAB Function2' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_kv;// '<S399>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_ap;// '<S398>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_d;// '<S397>/MATLAB Function' 
  B_MATLABFunction_Template_v_p_T sf_MATLABFunction1;// '<S6>/MATLAB Function1'
  B_MATLABFunction_Template_v_p_T sf_MATLABFunction_kz;// '<S6>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction_f;// '<S146>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction_b2;// '<S144>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction_b;// '<S142>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction_k;// '<S140>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction_p;// '<S138>/MATLAB Function' 
  B_MATLABFunction_Template_v_l_T sf_MATLABFunction;// '<S136>/MATLAB Function'
  B_AHRS2_Template_v3_03_2020a_T AHRS1;// '<S6>/AHRS2'
  B_AHRS2_Template_v3_03_2020a_T AHRS2;// '<S6>/AHRS2'
  B_StreamPhaseSpaceData_Templa_T StreamPhaseSpaceData_p;// '<S77>/Stream PhaseSpace Data' 
  B_StreamPhaseSpaceData_Templa_T StreamPhaseSpaceData;// '<S77>/Stream PhaseSpace Data' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_n;// '<S46>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix_l;// '<S50>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2_l;// '<S45>/MATLAB Function2' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_f;// '<S37>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix_i;// '<S41>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2_n;// '<S36>/MATLAB Function2' 
  B_MATLABFunction_Template_v3__T sf_MATLABFunction1_b;// '<S36>/MATLAB Function1' 
  B_MATLABFunction_Template_v3__T sf_MATLABFunction_i;// '<S36>/MATLAB Function' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_h;// '<S28>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix;// '<S32>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2_j;// '<S27>/MATLAB Function2' 
} B_Template_v3_03_2020a_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  codertarget_linux_blocks_Di_a_T obj; // '<S70>/Digital Read'
  raspi_internal_PWMBlock_Templ_T obj_d;// '<S68>/PWM1'
  raspi_internal_PWMBlock_Templ_T obj_m;// '<S26>/RED T1 - BLACK T8'
  raspi_internal_PWMBlock_Templ_T obj_ma;// '<S26>/RED T2 - BLACK T3'
  raspi_internal_PWMBlock_Templ_T obj_h;// '<S26>/RED T3'
  raspi_internal_PWMBlock_Templ_T obj_k;// '<S26>/RED T4 - BLACK T5'
  raspi_internal_PWMBlock_Templ_T obj_hw;// '<S26>/RED T5 - BLACK T4'
  raspi_internal_PWMBlock_Templ_T obj_hf;// '<S26>/RED T6 - BLACK T7'
  raspi_internal_PWMBlock_Templ_T obj_c;// '<S26>/RED T7 - BLACK T6'
  raspi_internal_PWMBlock_Templ_T obj_f;// '<S26>/RED T8 - BLACK T1'
  raspi_internal_PWMBlock_Templ_T obj_ci;// '<S26>/BLACK T2'
  codertarget_linux_blocks_Digi_T obj_cp;// '<S72>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_b;// '<S71>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_a;// '<S21>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_i;// '<S20>/Digital Write'
  real_T UnitDelay1_DSTATE[3];         // '<S146>/Unit Delay1'
  real_T UnitDelay1_DSTATE_m[3];       // '<S144>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o[3];       // '<S142>/Unit Delay1'
  real_T UnitDelay1_DSTATE_p[3];       // '<S138>/Unit Delay1'
  real_T UnitDelay1_DSTATE_d[3];       // '<S140>/Unit Delay1'
  real_T UnitDelay1_DSTATE_ot[3];      // '<S136>/Unit Delay1'
  real_T UnitDelay2_DSTATE[3];         // '<S136>/Unit Delay2'
  real_T UnitDelay2_DSTATE_n[3];       // '<S138>/Unit Delay2'
  real_T UnitDelay2_DSTATE_p[3];       // '<S140>/Unit Delay2'
  real_T UnitDelay2_DSTATE_c[3];       // '<S142>/Unit Delay2'
  real_T UnitDelay2_DSTATE_j[3];       // '<S144>/Unit Delay2'
  real_T UnitDelay2_DSTATE_d[3];       // '<S146>/Unit Delay2'
  real_T Delay1_DSTATE;                // '<S383>/Delay1'
  real_T Delay1_DSTATE_m;              // '<S385>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S381>/Delay1'
  real_T Delay1_DSTATE_o;              // '<S357>/Delay1'
  real_T Delay1_DSTATE_p;              // '<S359>/Delay1'
  real_T Delay1_DSTATE_b;              // '<S355>/Delay1'
  real_T Delay1_DSTATE_i;              // '<S338>/Delay1'
  real_T Delay1_DSTATE_h;              // '<S340>/Delay1'
  real_T Delay1_DSTATE_l;              // '<S342>/Delay1'
  real_T Delay1_DSTATE_lt;             // '<S314>/Delay1'
  real_T Delay1_DSTATE_im;             // '<S316>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S312>/Delay1'
  real_T Delay1_DSTATE_hr;             // '<S295>/Delay1'
  real_T Delay1_DSTATE_c;              // '<S297>/Delay1'
  real_T Delay1_DSTATE_d;              // '<S299>/Delay1'
  real_T Delay1_DSTATE_a;              // '<S278>/Delay1'
  real_T Delay1_DSTATE_j;              // '<S280>/Delay1'
  real_T Delay1_DSTATE_bb;             // '<S282>/Delay1'
  real_T Delay1_DSTATE_bl;             // '<S231>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S233>/Delay1'
  real_T Delay1_DSTATE_p0;             // '<S229>/Delay1'
  real_T Delay1_DSTATE_gi;             // '<S214>/Delay1'
  real_T Delay1_DSTATE_pe;             // '<S216>/Delay1'
  real_T Delay1_DSTATE_lu;             // '<S212>/Delay1'
  real_T Delay1_DSTATE_ct;             // '<S190>/Delay1'
  real_T Delay1_DSTATE_bm;             // '<S192>/Delay1'
  real_T Delay1_DSTATE_pr;             // '<S194>/Delay1'
  real_T Delay1_DSTATE_fb;             // '<S179>/Delay1'
  real_T Delay1_DSTATE_n1;             // '<S181>/Delay1'
  real_T Delay1_DSTATE_cq;             // '<S177>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S166>/Delay1'
  real_T Delay1_DSTATE_dv;             // '<S168>/Delay1'
  real_T Delay1_DSTATE_jd;             // '<S164>/Delay1'
  real_T VelocitytoPosition_DSTATE[3]; // '<S394>/Velocity to Position'
  real_T Delay1_DSTATE_nq;             // '<S405>/Delay1'
  real_T Delay1_DSTATE_mb;             // '<S403>/Delay1'
  real_T Delay1_DSTATE_pz;             // '<S404>/Delay1'
  real_T VelocitytoPosition_DSTATE_a[3];// '<S395>/Velocity to Position'
  real_T Delay1_DSTATE_nm;             // '<S408>/Delay1'
  real_T Delay1_DSTATE_e;              // '<S406>/Delay1'
  real_T Delay1_DSTATE_ho;             // '<S407>/Delay1'
  real_T VelocitytoPosition_DSTATE_f[3];// '<S396>/Velocity to Position'
  real_T Delay1_DSTATE_ew;             // '<S402>/Delay1'
  real_T Delay1_DSTATE_ch;             // '<S400>/Delay1'
  real_T Delay1_DSTATE_it;             // '<S401>/Delay1'
  real_T AccelerationtoVelocity_DSTATE[3];// '<S394>/Acceleration  to Velocity'
  real_T AccelerationtoVelocity_DSTATE_b[3];// '<S395>/Acceleration  to Velocity' 
  real_T AccelerationtoVelocity_DSTATE_m[3];// '<S396>/Acceleration  to Velocity' 
  real_T Delay1_DSTATE_oy;             // '<S94>/Delay1'
  real_T Delay1_DSTATE_cj;             // '<S97>/Delay1'
  real_T Delay1_DSTATE_em;             // '<S95>/Delay1'
  real_T Delay1_DSTATE_cc;             // '<S98>/Delay1'
  real_T Delay1_DSTATE_f0;             // '<S96>/Delay1'
  real_T Delay1_DSTATE_iu;             // '<S99>/Delay1'
  real_T Delay1_DSTATE_bz;             // '<S81>/Delay1'
  real_T Delay1_DSTATE_mi;             // '<S84>/Delay1'
  real_T Delay1_DSTATE_ea;             // '<S82>/Delay1'
  real_T Delay1_DSTATE_of;             // '<S85>/Delay1'
  real_T Delay1_DSTATE_k2;             // '<S83>/Delay1'
  real_T Delay1_DSTATE_b2;             // '<S86>/Delay1'
  real_T Delay1_DSTATE_as;             // '<S111>/Delay1'
  real_T Delay1_DSTATE_au;             // '<S114>/Delay1'
  real_T Delay1_DSTATE_fk;             // '<S112>/Delay1'
  real_T Delay1_DSTATE_kq;             // '<S115>/Delay1'
  real_T Delay1_DSTATE_c1;             // '<S113>/Delay1'
  real_T Delay1_DSTATE_ems;            // '<S116>/Delay1'
  real_T Delay_DSTATE;                 // '<S58>/Delay'
  real_T UDPReceive1_NetworkLib[137];  // '<S6>/UDP Receive1'
  real_T UDPReceive_NetworkLib[137];   // '<S6>/UDP Receive'
  real_T UDPReceive2_NetworkLib[137];  // '<S6>/UDP Receive2'
  real_T RateTransition_Buffer;        // '<S3>/Rate Transition'
  real_T RateTransition1_Buffer;       // '<S3>/Rate Transition1'
  real_T RateTransition2_Buffer;       // '<S3>/Rate Transition2'
  real_T RateTransition3_Buffer;       // '<S3>/Rate Transition3'
  real_T RateTransition4_Buffer;       // '<S3>/Rate Transition4'
  real_T RateTransition5_Buffer;       // '<S3>/Rate Transition5'
  real_T RateTransition6_Buffer;       // '<S3>/Rate Transition6'
  real_T RateTransition7_Buffer;       // '<S3>/Rate Transition7'
  real_T RateTransition8_Buffer;       // '<S3>/Rate Transition8'
  real_T UDPSend_NetworkLib[137];      // '<S15>/UDP Send'
  real_T BLACK_Fx;                     // '<Root>/BLACK_Fx'
  real_T BLUE_Fx;                      // '<Root>/BLACK_Fx1'
  real_T BLACK_Fx_Sat;                 // '<Root>/BLACK_Fx_Sat'
  real_T BLUE_Fx_Sat;                  // '<Root>/BLACK_Fx_Sat2'
  real_T BLACK_Fy;                     // '<Root>/BLACK_Fy'
  real_T BLUE_Fy;                      // '<Root>/BLACK_Fy1'
  real_T BLACK_Fy_Sat;                 // '<Root>/BLACK_Fy_Sat'
  real_T BLUE_Fy_Sat;                  // '<Root>/BLACK_Fy_Sat2'
  real_T BLACK_Px;                     // '<Root>/BLACK_Px'
  real_T BLUE_Px;                      // '<Root>/BLACK_Px1'
  real_T BLACK_Py;                     // '<Root>/BLACK_Py'
  real_T BLUE_Py;                      // '<Root>/BLACK_Py1'
  real_T BLACK_Rz;                     // '<Root>/BLACK_Rz'
  real_T BLUE_Rz;                      // '<Root>/BLACK_Rz1'
  real_T BLACK_Tz;                     // '<Root>/BLACK_Tz'
  real_T BLUE_Tz;                      // '<Root>/BLACK_Tz1'
  real_T BLACK_Tz_Sat;                 // '<Root>/BLACK_Tz_Sat'
  real_T BLUE_Tz_Sat;                  // '<Root>/BLACK_Tz_Sat2'
  real_T RED_Fx;                       // '<Root>/RED_Fx'
  real_T RED_Fx_Sat;                   // '<Root>/RED_Fx_Sat'
  real_T RED_Fy;                       // '<Root>/RED_Fy'
  real_T RED_Fy_Sat;                   // '<Root>/RED_Fy_Sat'
  real_T RED_Px;                       // '<Root>/RED_Px'
  real_T RED_Py;                       // '<Root>/RED_Py'
  real_T RED_Rz;                       // '<Root>/RED_Rz'
  real_T RED_Tz;                       // '<Root>/RED_Tz'
  real_T Float_State;                  // '<Root>/RED_Tz7'
  real_T Magnet_State;                 // '<Root>/RED_Tz8'
  real_T RED_Tz_RW;                    // '<Root>/RED_Tz_RW'
  real_T RED_Tz_RW_Sat;                // '<Root>/RED_Tz_RW Sat'
  real_T RED_Tz_Sat;                   // '<Root>/RED_Tz_Sat'
  real_T RED_dRz_RW_Sat;               // '<Root>/RED_dRz_RW Sat'
  real_T Univ_Time;                    // '<Root>/Universal_Time'
  real_T RED_Vx;                       // '<Root>/Universal_Time1'
  real_T RED_Vy;                       // '<Root>/Universal_Time2'
  real_T RED_RzD;                      // '<Root>/Universal_Time3'
  real_T BLACK_Vx;                     // '<Root>/Universal_Time4'
  real_T BLACK_Vy;                     // '<Root>/Universal_Time5'
  real_T BLACK_RzD;                    // '<Root>/Universal_Time6'
  real_T BLUE_Vx;                      // '<Root>/Universal_Time7'
  real_T BLUE_Vy;                      // '<Root>/Universal_Time8'
  real_T BLUE_RzD;                     // '<Root>/Universal_Time9'
  real_T NextOutput;                   // '<S394>/Random Number'
  real_T NextOutput_g;                 // '<S395>/Random Number'
  real_T NextOutput_l;                 // '<S396>/Random Number'
  real_T Unwrap_Prev;                  // '<S80>/Unwrap'
  real_T Unwrap_Cumsum;                // '<S80>/Unwrap'
  real_T Unwrap1_Prev;                 // '<S80>/Unwrap1'
  real_T Unwrap1_Cumsum;               // '<S80>/Unwrap1'
  real_T SendBLACKStatestoBLACKPlatform_[137];
                                // '<S80>/Send BLACK States to  BLACK Platform'
  real_T UDPReceive_NetworkLib_c[137]; // '<S79>/UDP Receive'
  real_T Unwrap_Prev_e;                // '<S79>/Unwrap'
  real_T Unwrap_Cumsum_f;              // '<S79>/Unwrap'
  real_T Unwrap1_Prev_a;               // '<S79>/Unwrap1'
  real_T Unwrap1_Cumsum_a;             // '<S79>/Unwrap1'
  real_T Unwrap_Prev_a;                // '<S77>/Unwrap'
  real_T Unwrap_Cumsum_e;              // '<S77>/Unwrap'
  real_T Unwrap1_Prev_o;               // '<S77>/Unwrap1'
  real_T Unwrap1_Cumsum_n;             // '<S77>/Unwrap1'
  real_T Product1_DWORK4[9];           // '<S51>/Product1'
  real_T Product1_DWORK4_g[9];         // '<S42>/Product1'
  real_T Product1_DWORK4_gx[9];        // '<S33>/Product1'
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<S1>/To Workspace'

  uint32_T RandSeed;                   // '<S394>/Random Number'
  uint32_T RandSeed_d;                 // '<S395>/Random Number'
  uint32_T RandSeed_m;                 // '<S396>/Random Number'
  boolean_T Delay_DSTATE_l;            // '<S100>/Delay'
  boolean_T Delay_DSTATE_h;            // '<S117>/Delay'
  boolean_T Delay1_DSTATE_kt;          // '<S63>/Delay1'
  boolean_T Delay2_DSTATE[2];          // '<S63>/Delay2'
  boolean_T Delay5_DSTATE[3];          // '<S63>/Delay5'
  boolean_T Delay3_DSTATE[4];          // '<S63>/Delay3'
  boolean_T Delay4_DSTATE[5];          // '<S63>/Delay4'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T Checkwhetherbothplatformsarebei;
  // '<S75>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S76>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_o;
    // '<S76>/This IF block determines whether or not to run the RED sim//exp '
  uint8_T icLoad;                      // '<S383>/Delay1'
  uint8_T icLoad_j;                    // '<S385>/Delay1'
  uint8_T icLoad_a;                    // '<S381>/Delay1'
  uint8_T icLoad_e;                    // '<S357>/Delay1'
  uint8_T icLoad_m;                    // '<S359>/Delay1'
  uint8_T icLoad_d;                    // '<S355>/Delay1'
  uint8_T icLoad_dh;                   // '<S338>/Delay1'
  uint8_T icLoad_a2;                   // '<S340>/Delay1'
  uint8_T icLoad_f;                    // '<S342>/Delay1'
  uint8_T icLoad_dq;                   // '<S314>/Delay1'
  uint8_T icLoad_h;                    // '<S316>/Delay1'
  uint8_T icLoad_o;                    // '<S312>/Delay1'
  uint8_T icLoad_c;                    // '<S295>/Delay1'
  uint8_T icLoad_a3;                   // '<S297>/Delay1'
  uint8_T icLoad_my;                   // '<S299>/Delay1'
  uint8_T icLoad_n;                    // '<S278>/Delay1'
  uint8_T icLoad_er;                   // '<S280>/Delay1'
  uint8_T icLoad_ej;                   // '<S282>/Delay1'
  uint8_T icLoad_b;                    // '<S231>/Delay1'
  uint8_T icLoad_n5;                   // '<S233>/Delay1'
  uint8_T icLoad_fj;                   // '<S229>/Delay1'
  uint8_T icLoad_ot;                   // '<S214>/Delay1'
  uint8_T icLoad_k;                    // '<S216>/Delay1'
  uint8_T icLoad_l;                    // '<S212>/Delay1'
  uint8_T icLoad_ji;                   // '<S190>/Delay1'
  uint8_T icLoad_a1;                   // '<S192>/Delay1'
  uint8_T icLoad_o0;                   // '<S194>/Delay1'
  uint8_T icLoad_dy;                   // '<S179>/Delay1'
  uint8_T icLoad_hf;                   // '<S181>/Delay1'
  uint8_T icLoad_kl;                   // '<S177>/Delay1'
  uint8_T icLoad_ns;                   // '<S166>/Delay1'
  uint8_T icLoad_k1;                   // '<S168>/Delay1'
  uint8_T icLoad_ep;                   // '<S164>/Delay1'
  uint8_T icLoad_kp;                   // '<S405>/Delay1'
  uint8_T icLoad_k3;                   // '<S403>/Delay1'
  uint8_T icLoad_jz;                   // '<S404>/Delay1'
  uint8_T icLoad_cs;                   // '<S408>/Delay1'
  uint8_T icLoad_dc;                   // '<S406>/Delay1'
  uint8_T icLoad_nu;                   // '<S407>/Delay1'
  uint8_T icLoad_mt;                   // '<S402>/Delay1'
  uint8_T icLoad_bq;                   // '<S400>/Delay1'
  uint8_T icLoad_cn;                   // '<S401>/Delay1'
  uint8_T icLoad_ku;                   // '<S94>/Delay1'
  uint8_T icLoad_h0;                   // '<S97>/Delay1'
  uint8_T icLoad_hc;                   // '<S95>/Delay1'
  uint8_T icLoad_ez;                   // '<S98>/Delay1'
  uint8_T icLoad_os;                   // '<S96>/Delay1'
  uint8_T icLoad_g;                    // '<S99>/Delay1'
  uint8_T icLoad_nv;                   // '<S81>/Delay1'
  uint8_T icLoad_bj;                   // '<S84>/Delay1'
  uint8_T icLoad_d0;                   // '<S82>/Delay1'
  uint8_T icLoad_fjc;                  // '<S85>/Delay1'
  uint8_T icLoad_dyz;                  // '<S83>/Delay1'
  uint8_T icLoad_p;                    // '<S86>/Delay1'
  uint8_T icLoad_ezp;                  // '<S111>/Delay1'
  uint8_T icLoad_gv;                   // '<S114>/Delay1'
  uint8_T icLoad_en;                   // '<S112>/Delay1'
  uint8_T icLoad_f2;                   // '<S115>/Delay1'
  uint8_T icLoad_db;                   // '<S113>/Delay1'
  uint8_T icLoad_es;                   // '<S116>/Delay1'
  boolean_T Unwrap_FirstStep;          // '<S80>/Unwrap'
  boolean_T Unwrap1_FirstStep;         // '<S80>/Unwrap1'
  boolean_T Unwrap_FirstStep_h;        // '<S79>/Unwrap'
  boolean_T Unwrap1_FirstStep_j;       // '<S79>/Unwrap1'
  boolean_T Unwrap_FirstStep_c;        // '<S77>/Unwrap'
  boolean_T Unwrap1_FirstStep_f;       // '<S77>/Unwrap1'
  boolean_T EnabledSubsystem_MODE;     // '<S93>/Enabled Subsystem'
  boolean_T EnabledSubsystem_MODE_p;   // '<S110>/Enabled Subsystem'
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  DW_SubPhase1_Template_v3_03_2_T SubPhase4_f;// '<S200>/Sub-Phase #4'
  DW_SubPhase1_Template_v3_03_2_T SubPhase1_a;// '<S200>/Sub-Phase #1'
  DW_AHRS2_Template_v3_03_2020a_T AHRS1;// '<S6>/AHRS2'
  DW_AHRS2_Template_v3_03_2020a_T AHRS2;// '<S6>/AHRS2'
  DW_StreamPhaseSpaceData_Templ_T StreamPhaseSpaceData_p;// '<S77>/Stream PhaseSpace Data' 
  DW_StreamPhaseSpaceData_Templ_T StreamPhaseSpaceData;// '<S77>/Stream PhaseSpace Data' 
} DW_Template_v3_03_2020a_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S399>/Sample and Hold'
  ZCSigState SampleandHold1_Trig_ZCE;  // '<S398>/Sample and Hold1'
  ZCSigState SampleandHold1_Trig_ZCE_g;// '<S397>/Sample and Hold1'
} PrevZCX_Template_v3_03_2020a_T;

// Parameters for system: '<S6>/AHRS2'
struct P_AHRS2_Template_v3_03_2020a_T_ {
  real_T AHRS2_AccelerometerNoise;     // Expression: 0.0001924722
                                          //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_GyroscopeNoise;         // Expression: 9.1385e-5
                                          //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_MagnetometerNoise;      // Expression: 0.1
                                          //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_GyroscopeDriftNoise;    // Expression: 3.0462e-13
                                          //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_LinearAccelerationNoise;// Expression: 0.0096236100000000012
                                          //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_MagneticDisturbanceNoise;// Expression: 0.5
                                           //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_LinearAccelerationDecayFa;// Expression: 0.5
                                            //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_MagneticDisturbanceDecayF;// Expression: 0.5
                                            //  Referenced by: '<S6>/AHRS2'

  real_T AHRS2_ExpectedMagneticFieldStre;// Expression: 33
                                            //  Referenced by: '<S6>/AHRS2'

};

// Parameters for system: '<S8>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Template_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S149>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S149>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S149>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S149>/Puck State'

};

// Parameters for system: '<Root>/Phase #0:  Wait for Synchronization'
struct P_Phase0WaitforSynchronizatio_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S148>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S148>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S148>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S148>/Puck State'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S150>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S150>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S150>/Constant2'

  real_T Constant3_Value_h;            // Expression: 0
                                          //  Referenced by: '<S150>/Constant3'

  real_T Constant4_Value_g;            // Expression: 0
                                          //  Referenced by: '<S150>/Constant4'

  real_T Constant5_Value_e;            // Expression: 0
                                          //  Referenced by: '<S150>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S150>/Constant6'

  real_T PuckState_Value_b;            // Expression: 0
                                          //  Referenced by: '<S150>/Puck State'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior;// '<S8>/Change BLUE Behavior' 
};

// Parameters for system: '<S199>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03_20_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S204>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S204>/Puck State'

};

// Parameters for system: '<S200>/Sub-Phase #1'
struct P_SubPhase1_Template_v3_03_20_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S248>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S250>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S252>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S238>/Puck State'

};

// Parameters for system: '<S200>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03__h_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S239>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S239>/Puck State'

};

// Parameters for system: '<S201>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03__g_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S270>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S270>/Constant1'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S270>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S270>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S270>/Constant6'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S270>/Puck State'

};

// Parameters for system: '<S12>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Templa_c_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S326>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S328>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S330>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S305>/Puck State'

};

// Parameters (default storage)
struct P_Template_v3_03_2020a_T_ {
  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by:
                                          //    '<S27>/MATLAB Function'
                                          //    '<S27>/MATLAB Function1'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by:
                                          //    '<S36>/MATLAB Function'
                                          //    '<S36>/MATLAB Function1'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by:
                                          //    '<S45>/MATLAB Function'
                                          //    '<S45>/MATLAB Function1'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by:
                                          //    '<S160>/kd_tb'
                                          //    '<S308>/kd_tb'
                                          //    '<S351>/kd_tb'
                                          //    '<S208>/kd_tb'
                                          //    '<S222>/kd_tb'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by:
                                          //    '<S173>/kd_tb'
                                          //    '<S321>/kd_tb'
                                          //    '<S364>/kd_tb'
                                          //    '<S243>/kd_tb'
                                          //    '<S256>/kd_tb'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by:
                                          //    '<S186>/kd_tr'
                                          //    '<S334>/kd_tr'
                                          //    '<S377>/kd_tr'
                                          //    '<S274>/kd_tr'
                                          //    '<S288>/kd_tr'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by:
                                          //    '<S161>/kd_xb'
                                          //    '<S309>/kd_xb'
                                          //    '<S352>/kd_xb'
                                          //    '<S209>/kd_xb'
                                          //    '<S223>/kd_xb'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by:
                                          //    '<S174>/kd_xb'
                                          //    '<S322>/kd_xb'
                                          //    '<S365>/kd_xb'
                                          //    '<S244>/kd_xb'
                                          //    '<S257>/kd_xb'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by:
                                          //    '<S187>/kd_xr'
                                          //    '<S335>/kd_xr'
                                          //    '<S378>/kd_xr'
                                          //    '<S275>/kd_xr'
                                          //    '<S289>/kd_xr'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by:
                                          //    '<S162>/kd_yb'
                                          //    '<S310>/kd_yb'
                                          //    '<S353>/kd_yb'
                                          //    '<S210>/kd_yb'
                                          //    '<S224>/kd_yb'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by:
                                          //    '<S175>/kd_yb'
                                          //    '<S323>/kd_yb'
                                          //    '<S366>/kd_yb'
                                          //    '<S245>/kd_yb'
                                          //    '<S258>/kd_yb'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by:
                                          //    '<S188>/kd_yr'
                                          //    '<S336>/kd_yr'
                                          //    '<S379>/kd_yr'
                                          //    '<S276>/kd_yr'
                                          //    '<S290>/kd_yr'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by:
                                          //    '<S160>/kp_tb'
                                          //    '<S308>/kp_tb'
                                          //    '<S351>/kp_tb'
                                          //    '<S208>/kp_tb'
                                          //    '<S222>/kp_tb'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by:
                                          //    '<S173>/kp_tb'
                                          //    '<S321>/kp_tb'
                                          //    '<S364>/kp_tb'
                                          //    '<S243>/kp_tb'
                                          //    '<S256>/kp_tb'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by:
                                          //    '<S186>/kp_tr'
                                          //    '<S334>/kp_tr'
                                          //    '<S377>/kp_tr'
                                          //    '<S274>/kp_tr'
                                          //    '<S288>/kp_tr'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by:
                                          //    '<S161>/kp_xb'
                                          //    '<S309>/kp_xb'
                                          //    '<S352>/kp_xb'
                                          //    '<S209>/kp_xb'
                                          //    '<S223>/kp_xb'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by:
                                          //    '<S174>/kp_xb'
                                          //    '<S322>/kp_xb'
                                          //    '<S365>/kp_xb'
                                          //    '<S244>/kp_xb'
                                          //    '<S257>/kp_xb'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by:
                                          //    '<S187>/kp_xr'
                                          //    '<S335>/kp_xr'
                                          //    '<S378>/kp_xr'
                                          //    '<S275>/kp_xr'
                                          //    '<S289>/kp_xr'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by:
                                          //    '<S162>/kp_yb'
                                          //    '<S310>/kp_yb'
                                          //    '<S353>/kp_yb'
                                          //    '<S210>/kp_yb'
                                          //    '<S224>/kp_yb'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by:
                                          //    '<S175>/kp_yb'
                                          //    '<S323>/kp_yb'
                                          //    '<S366>/kp_yb'
                                          //    '<S245>/kp_yb'
                                          //    '<S258>/kp_yb'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by:
                                          //    '<S188>/kp_yr'
                                          //    '<S336>/kp_yr'
                                          //    '<S379>/kp_yr'
                                          //    '<S276>/kp_yr'
                                          //    '<S290>/kp_yr'

  real_T Phase0_End;                   // Variable: Phase0_End
                                          //  Referenced by: '<Root>/Constant4'

  real_T Phase1_End;                   // Variable: Phase1_End
                                          //  Referenced by: '<Root>/Constant'

  real_T Phase2_End;                   // Variable: Phase2_End
                                          //  Referenced by: '<Root>/Constant1'

  real_T Phase3_End;                   // Variable: Phase3_End
                                          //  Referenced by: '<Root>/Constant2'

  real_T Phase3_SubPhase1_End;         // Variable: Phase3_SubPhase1_End
                                          //  Referenced by:
                                          //    '<S199>/Constant4'
                                          //    '<S200>/Constant4'
                                          //    '<S201>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by:
                                          //    '<S199>/Constant1'
                                          //    '<S200>/Constant1'
                                          //    '<S201>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by:
                                          //    '<S199>/Constant2'
                                          //    '<S200>/Constant2'
                                          //    '<S201>/Constant2'
                                          //    '<S226>/Constant1'
                                          //    '<S292>/Constant1'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by:
                                          //    '<S199>/Constant3'
                                          //    '<S200>/Constant3'
                                          //    '<S201>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<Root>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<Root>/Constant6'

  real_T WhoAmI;                       // Variable: WhoAmI
                                          //  Referenced by:
                                          //    '<S3>/Constant'
                                          //    '<S4>/Constant'
                                          //    '<S8>/Constant'
                                          //    '<S9>/Constant'
                                          //    '<S10>/Constant'
                                          //    '<S11>/Constant'
                                          //    '<S12>/Constant'
                                          //    '<S13>/Constant'
                                          //    '<S14>/Constant'
                                          //    '<S76>/Constant'

  real_T drop_states_BLACK[3];         // Variable: drop_states_BLACK
                                          //  Referenced by: '<S394>/Velocity to Position'

  real_T drop_states_BLUE[3];          // Variable: drop_states_BLUE
                                          //  Referenced by: '<S395>/Velocity to Position'

  real_T drop_states_RED[3];           // Variable: drop_states_RED
                                          //  Referenced by: '<S396>/Velocity to Position'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S304>/Desired Attitude (BLACK)'
                                          //    '<S304>/Desired Px (BLACK)'
                                          //    '<S304>/Desired Py (BLACK)'
                                          //    '<S347>/Constant'
                                          //    '<S347>/Constant2'
                                          //    '<S347>/Constant3'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S305>/Desired Attitude (BLUE)'
                                          //    '<S305>/Desired Px (BLUE)'
                                          //    '<S305>/Desired Py (BLUE)'
                                          //    '<S348>/Desired Attitude (BLUE)'
                                          //    '<S348>/Desired Px (BLUE)'
                                          //    '<S348>/Desired Py (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S306>/Constant'
                                          //    '<S306>/Constant1'
                                          //    '<S306>/Constant3'
                                          //    '<S349>/Constant'
                                          //    '<S349>/Constant2'
                                          //    '<S349>/Constant3'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S156>/Desired Attitude (BLACK)'
                                          //    '<S156>/Desired Px (BLACK)'
                                          //    '<S156>/Desired Py (BLACK)'
                                          //    '<S203>/Desired Attitude (BLACK)'
                                          //    '<S203>/Desired X-Position (BLACK)'
                                          //    '<S203>/Desired Y-Position (BLACK)'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by:
                                          //    '<S157>/Desired Attitude (BLUE)'
                                          //    '<S157>/Desired Px (BLUE)'
                                          //    '<S157>/Desired Py (BLUE)'
                                          //    '<S238>/Desired Attitude (BLUE)'
                                          //    '<S238>/Desired Px (BLUE)'
                                          //    '<S238>/Desired Py (BLUE)'
                                          //    '<S241>/Desired Attitude (BLUE)'
                                          //    '<S241>/Desired Px (BLUE)'
                                          //    '<S241>/Desired Py (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S158>/Constant'
                                          //    '<S158>/Constant1'
                                          //    '<S158>/Constant3'
                                          //    '<S269>/Desired Attitude (RED)'
                                          //    '<S269>/Desired X-Position (RED)'
                                          //    '<S269>/Desired Y-Position (RED)'
                                          //    '<S272>/Desired X-Position (RED)'
                                          //    '<S272>/Desired Y-Position (RED)'

  real_T model_param[6];               // Variable: model_param
                                          //  Referenced by:
                                          //    '<S394>/MATLAB Function'
                                          //    '<S395>/MATLAB Function'
                                          //    '<S396>/MATLAB Function'

  real_T noise_variance_BLACK;         // Variable: noise_variance_BLACK
                                          //  Referenced by: '<S394>/Random Number'

  real_T noise_variance_BLUE;          // Variable: noise_variance_BLUE
                                          //  Referenced by: '<S395>/Random Number'

  real_T noise_variance_RED;           // Variable: noise_variance_RED
                                          //  Referenced by: '<S396>/Random Number'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S75>/Which PLATFORM is being used?'

  real_T serverRate;                   // Variable: serverRate
                                          //  Referenced by:
                                          //    '<S397>/Constant1'
                                          //    '<S398>/Constant1'
                                          //    '<S399>/Constant'
                                          //    '<S400>/divide by delta T'
                                          //    '<S401>/divide by delta T'
                                          //    '<S402>/divide by delta T'
                                          //    '<S403>/divide by delta T'
                                          //    '<S404>/divide by delta T'
                                          //    '<S405>/divide by delta T'
                                          //    '<S406>/divide by delta T'
                                          //    '<S407>/divide by delta T'
                                          //    '<S408>/divide by delta T'
                                          //    '<S111>/divide by delta T'
                                          //    '<S112>/divide by delta T'
                                          //    '<S113>/divide by delta T'
                                          //    '<S114>/divide by delta T'
                                          //    '<S115>/divide by delta T'
                                          //    '<S116>/divide by delta T'
                                          //    '<S164>/divide by delta T'
                                          //    '<S166>/divide by delta T'
                                          //    '<S168>/divide by delta T'
                                          //    '<S177>/divide by delta T'
                                          //    '<S179>/divide by delta T'
                                          //    '<S181>/divide by delta T'
                                          //    '<S190>/divide by delta T'
                                          //    '<S192>/divide by delta T'
                                          //    '<S194>/divide by delta T'
                                          //    '<S312>/divide by delta T'
                                          //    '<S314>/divide by delta T'
                                          //    '<S316>/divide by delta T'
                                          //    '<S325>/divide by delta T'
                                          //    '<S327>/divide by delta T'
                                          //    '<S329>/divide by delta T'
                                          //    '<S338>/divide by delta T'
                                          //    '<S340>/divide by delta T'
                                          //    '<S342>/divide by delta T'
                                          //    '<S355>/divide by delta T'
                                          //    '<S357>/divide by delta T'
                                          //    '<S359>/divide by delta T'
                                          //    '<S368>/divide by delta T'
                                          //    '<S370>/divide by delta T'
                                          //    '<S372>/divide by delta T'
                                          //    '<S381>/divide by delta T'
                                          //    '<S383>/divide by delta T'
                                          //    '<S385>/divide by delta T'
                                          //    '<S81>/divide by delta T'
                                          //    '<S82>/divide by delta T'
                                          //    '<S83>/divide by delta T'
                                          //    '<S84>/divide by delta T'
                                          //    '<S85>/divide by delta T'
                                          //    '<S86>/divide by delta T'
                                          //    '<S94>/divide by delta T'
                                          //    '<S95>/divide by delta T'
                                          //    '<S96>/divide by delta T'
                                          //    '<S97>/divide by delta T'
                                          //    '<S98>/divide by delta T'
                                          //    '<S99>/divide by delta T'
                                          //    '<S212>/divide by delta T'
                                          //    '<S214>/divide by delta T'
                                          //    '<S216>/divide by delta T'
                                          //    '<S229>/divide by delta T'
                                          //    '<S231>/divide by delta T'
                                          //    '<S233>/divide by delta T'
                                          //    '<S247>/divide by delta T'
                                          //    '<S249>/divide by delta T'
                                          //    '<S251>/divide by delta T'
                                          //    '<S260>/divide by delta T'
                                          //    '<S262>/divide by delta T'
                                          //    '<S264>/divide by delta T'
                                          //    '<S278>/divide by delta T'
                                          //    '<S280>/divide by delta T'
                                          //    '<S282>/divide by delta T'
                                          //    '<S295>/divide by delta T'
                                          //    '<S297>/divide by delta T'
                                          //    '<S299>/divide by delta T'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by:
                                          //    '<S7>/Constant'
                                          //    '<S19>/Constant'
                                          //    '<S25>/Constant'
                                          //    '<S57>/Constant'
                                          //    '<S74>/Constant'
                                          //    '<S151>/Constant'
                                          //    '<S155>/Constant'
                                          //    '<S159>/Constant'
                                          //    '<S202>/Constant'
                                          //    '<S307>/Constant'
                                          //    '<S350>/Constant'
                                          //    '<S393>/Constant'
                                          //    '<S78>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by:
                                          //    '<S27>/MATLAB Function'
                                          //    '<S27>/MATLAB Function1'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by:
                                          //    '<S36>/MATLAB Function'
                                          //    '<S36>/MATLAB Function1'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S45>/MATLAB Function'
                                          //    '<S45>/MATLAB Function1'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by: '<S206>/Desired X-Position (BLACK)'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by: '<S206>/Desired Y-Position (BLACK)'

  real_T BLACKPWM_Y0;                  // Computed Parameter: BLACKPWM_Y0
                                          //  Referenced by: '<S22>/BLACK PWM'

  real_T RemoveNegatives_UpperSat;     // Expression: 1000
                                          //  Referenced by: '<S27>/Remove Negatives'

  real_T RemoveNegatives_LowerSat;     // Expression: 0
                                          //  Referenced by: '<S27>/Remove Negatives'

  real_T BLUEPWM_Y0;                   // Computed Parameter: BLUEPWM_Y0
                                          //  Referenced by: '<S23>/BLUE PWM'

  real_T RemoveNegatives_UpperSat_p;   // Expression: 1000
                                          //  Referenced by: '<S36>/Remove Negatives'

  real_T RemoveNegatives_LowerSat_c;   // Expression: 0
                                          //  Referenced by: '<S36>/Remove Negatives'

  real_T REDPWM_Y0;                    // Computed Parameter: REDPWM_Y0
                                          //  Referenced by: '<S24>/RED PWM'

  real_T RemoveNegatives_UpperSat_d;   // Expression: 1000
                                          //  Referenced by: '<S45>/Remove Negatives'

  real_T RemoveNegatives_LowerSat_a;   // Expression: 0
                                          //  Referenced by: '<S45>/Remove Negatives'

  real_T DigitalRead_SampleTime;       // Expression: sampleTime
                                          //  Referenced by: '<S70>/Digital Read'

  real_T SaturateTorque_UpperSat;      // Expression: 0.1
                                          //  Referenced by: '<S58>/Saturate Torque'

  real_T SaturateTorque_LowerSat;      // Expression: -0.1
                                          //  Referenced by: '<S58>/Saturate Torque'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S58>/Delay'

  real_T GearboxRatio_Value;           // Expression: 3375/64
                                          //  Referenced by: '<S62>/Gearbox  Ratio'

  real_T SaturateMotor_UpperSat;       // Expression: 7000
                                          //  Referenced by: '<S59>/Saturate Motor'

  real_T SaturateMotor_LowerSat;       // Expression: -7000
                                          //  Referenced by: '<S59>/Saturate Motor'

  real_T SaturateRPM_UpperSat;         // Expression: (7000*64/3375)
                                          //  Referenced by: '<S58>/Saturate RPM'

  real_T SaturateRPM_LowerSat;         // Expression: -(7000*64/3375)
                                          //  Referenced by: '<S58>/Saturate RPM'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S118>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S121>/Out1'

  real_T Out1_Y0_b;                    // Computed Parameter: Out1_Y0_b
                                          //  Referenced by: '<S122>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S123>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S124>/Out1'

  real_T Out1_Y0_no;                   // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S125>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S126>/Out1'

  real_T Out1_Y0_a;                    // Computed Parameter: Out1_Y0_a
                                          //  Referenced by: '<S87>/Out1'

  real_T Out1_Y0_ni;                   // Computed Parameter: Out1_Y0_ni
                                          //  Referenced by: '<S88>/Out1'

  real_T Out1_Y0_e;                    // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S89>/Out1'

  real_T Out1_Y0_dr;                   // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S90>/Out1'

  real_T Out1_Y0_h;                    // Computed Parameter: Out1_Y0_h
                                          //  Referenced by: '<S91>/Out1'

  real_T Out1_Y0_i;                    // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S92>/Out1'

  real_T Out1_Y0_as;                   // Computed Parameter: Out1_Y0_as
                                          //  Referenced by: '<S101>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S104>/Out1'

  real_T Out1_Y0_f;                    // Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S105>/Out1'

  real_T Out1_Y0_fy;                   // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S106>/Out1'

  real_T Out1_Y0_e2;                   // Computed Parameter: Out1_Y0_e2
                                          //  Referenced by: '<S107>/Out1'

  real_T Out1_Y0_kz;                   // Computed Parameter: Out1_Y0_kz
                                          //  Referenced by: '<S108>/Out1'

  real_T Out1_Y0_bg;                   // Computed Parameter: Out1_Y0_bg
                                          //  Referenced by: '<S109>/Out1'

  real_T _Y0[3];                       // Expression: initCond
                                          //  Referenced by: '<S413>/ '

  real_T _Y0_g[3];                     // Expression: initCond
                                          //  Referenced by: '<S415>/ '

  real_T _Y0_l[3];                     // Expression: initCond
                                          //  Referenced by: '<S417>/ '

  real_T Out1_Y0_dj;                   // Computed Parameter: Out1_Y0_dj
                                          //  Referenced by: '<S418>/Out1'

  real_T Out1_Y0_kb;                   // Computed Parameter: Out1_Y0_kb
                                          //  Referenced by: '<S419>/Out1'

  real_T Out1_Y0_pm;                   // Computed Parameter: Out1_Y0_pm
                                          //  Referenced by: '<S420>/Out1'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S421>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S422>/Out1'

  real_T Out1_Y0_l;                    // Computed Parameter: Out1_Y0_l
                                          //  Referenced by: '<S423>/Out1'

  real_T Out1_Y0_ia;                   // Computed Parameter: Out1_Y0_ia
                                          //  Referenced by: '<S424>/Out1'

  real_T Out1_Y0_bgo;                  // Computed Parameter: Out1_Y0_bgo
                                          //  Referenced by: '<S425>/Out1'

  real_T Out1_Y0_kc;                   // Computed Parameter: Out1_Y0_kc
                                          //  Referenced by: '<S426>/Out1'

  real_T VelocitytoPosition_gainval;
                               // Computed Parameter: VelocitytoPosition_gainval
                                  //  Referenced by: '<S394>/Velocity to Position'

  real_T RandomNumber_Mean;            // Expression: 0
                                          //  Referenced by: '<S394>/Random Number'

  real_T RandomNumber_Seed;            // Expression: 0
                                          //  Referenced by: '<S394>/Random Number'

  real_T VelocitytoPosition_gainval_f;
                             // Computed Parameter: VelocitytoPosition_gainval_f
                                //  Referenced by: '<S395>/Velocity to Position'

  real_T RandomNumber_Mean_b;          // Expression: 0
                                          //  Referenced by: '<S395>/Random Number'

  real_T RandomNumber_Seed_k;          // Expression: 0
                                          //  Referenced by: '<S395>/Random Number'

  real_T VelocitytoPosition_gainval_a;
                             // Computed Parameter: VelocitytoPosition_gainval_a
                                //  Referenced by: '<S396>/Velocity to Position'

  real_T RandomNumber_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S396>/Random Number'

  real_T RandomNumber_Seed_i;          // Expression: 0
                                          //  Referenced by: '<S396>/Random Number'

  real_T AccelerationtoVelocity_gainval;
                           // Computed Parameter: AccelerationtoVelocity_gainval
                              //  Referenced by: '<S394>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC;    // Expression: 0
                                          //  Referenced by: '<S394>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_b;
                          // Computed Parameter: AccelerationtoVelocity_gainva_b
                             //  Referenced by: '<S395>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_p;  // Expression: 0
                                          //  Referenced by: '<S395>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_k;
                          // Computed Parameter: AccelerationtoVelocity_gainva_k
                             //  Referenced by: '<S396>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_c;  // Expression: 0
                                          //  Referenced by: '<S396>/Acceleration  to Velocity'

  real_T Out1_Y0_mp;                   // Computed Parameter: Out1_Y0_mp
                                          //  Referenced by: '<S165>/Out1'

  real_T Out1_Y0_av;                   // Computed Parameter: Out1_Y0_av
                                          //  Referenced by: '<S167>/Out1'

  real_T Out1_Y0_g;                    // Computed Parameter: Out1_Y0_g
                                          //  Referenced by: '<S169>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S156>/Puck State'

  real_T Out1_Y0_o;                    // Computed Parameter: Out1_Y0_o
                                          //  Referenced by: '<S178>/Out1'

  real_T Out1_Y0_a4;                   // Computed Parameter: Out1_Y0_a4
                                          //  Referenced by: '<S180>/Out1'

  real_T Out1_Y0_nv;                   // Computed Parameter: Out1_Y0_nv
                                          //  Referenced by: '<S182>/Out1'

  real_T PuckState_Value_o;            // Expression: 1
                                          //  Referenced by: '<S157>/Puck State'

  real_T Out1_Y0_fr;                   // Computed Parameter: Out1_Y0_fr
                                          //  Referenced by: '<S191>/Out1'

  real_T Out1_Y0_bk;                   // Computed Parameter: Out1_Y0_bk
                                          //  Referenced by: '<S193>/Out1'

  real_T Out1_Y0_j2;                   // Computed Parameter: Out1_Y0_j2
                                          //  Referenced by: '<S195>/Out1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S158>/Constant2'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S158>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S158>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S158>/Constant6'

  real_T PuckState_Value_l;            // Expression: 1
                                          //  Referenced by: '<S158>/Puck State'

  real_T Out1_Y0_pn;                   // Computed Parameter: Out1_Y0_pn
                                          //  Referenced by: '<S213>/Out1'

  real_T Out1_Y0_bd;                   // Computed Parameter: Out1_Y0_bd
                                          //  Referenced by: '<S215>/Out1'

  real_T Out1_Y0_ai;                   // Computed Parameter: Out1_Y0_ai
                                          //  Referenced by: '<S217>/Out1'

  real_T PuckState_Value_n;            // Expression: 1
                                          //  Referenced by: '<S203>/Puck State'

  real_T Out1_Y0_ln;                   // Computed Parameter: Out1_Y0_ln
                                          //  Referenced by: '<S230>/Out1'

  real_T Out1_Y0_bw;                   // Computed Parameter: Out1_Y0_bw
                                          //  Referenced by: '<S232>/Out1'

  real_T Out1_Y0_ac;                   // Computed Parameter: Out1_Y0_ac
                                          //  Referenced by: '<S234>/Out1'

  real_T DesiredRateBLACK_Value;       // Expression: 0.104719755/2
                                          //  Referenced by: '<S221>/Desired Rate (BLACK)'

  real_T PuckState_Value_e;            // Expression: 1
                                          //  Referenced by: '<S206>/Puck State'

  real_T Out1_Y0_at;                   // Computed Parameter: Out1_Y0_at
                                          //  Referenced by: '<S279>/Out1'

  real_T Out1_Y0_dw;                   // Computed Parameter: Out1_Y0_dw
                                          //  Referenced by: '<S281>/Out1'

  real_T Out1_Y0_jd;                   // Computed Parameter: Out1_Y0_jd
                                          //  Referenced by: '<S283>/Out1'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S269>/Constant1'

  real_T Constant4_Value_l;            // Expression: 0
                                          //  Referenced by: '<S269>/Constant4'

  real_T Constant5_Value_b;            // Expression: 0
                                          //  Referenced by: '<S269>/Constant5'

  real_T Constant6_Value_a;            // Expression: 0
                                          //  Referenced by: '<S269>/Constant6'

  real_T PuckState_Value_c;            // Expression: 1
                                          //  Referenced by: '<S269>/Puck State'

  real_T Out1_Y0_gm;                   // Computed Parameter: Out1_Y0_gm
                                          //  Referenced by: '<S296>/Out1'

  real_T Out1_Y0_eb;                   // Computed Parameter: Out1_Y0_eb
                                          //  Referenced by: '<S298>/Out1'

  real_T Out1_Y0_hc;                   // Computed Parameter: Out1_Y0_hc
                                          //  Referenced by: '<S300>/Out1'

  real_T DesiredRateBLACK_Value_g;     // Expression: 0.104719755/2
                                          //  Referenced by: '<S287>/Desired Rate (BLACK)'

  real_T Constant1_Value_f;            // Expression: 0
                                          //  Referenced by: '<S272>/Constant1'

  real_T Constant4_Value_k;            // Expression: 0
                                          //  Referenced by: '<S272>/Constant4'

  real_T Constant5_Value_l;            // Expression: 0
                                          //  Referenced by: '<S272>/Constant5'

  real_T Constant6_Value_k;            // Expression: 0
                                          //  Referenced by: '<S272>/Constant6'

  real_T PuckState_Value_f;            // Expression: 1
                                          //  Referenced by: '<S272>/Puck State'

  real_T Out1_Y0_jr;                   // Computed Parameter: Out1_Y0_jr
                                          //  Referenced by: '<S313>/Out1'

  real_T Out1_Y0_mr;                   // Computed Parameter: Out1_Y0_mr
                                          //  Referenced by: '<S315>/Out1'

  real_T Out1_Y0_i0;                   // Computed Parameter: Out1_Y0_i0
                                          //  Referenced by: '<S317>/Out1'

  real_T PuckState_Value_fj;           // Expression: 1
                                          //  Referenced by: '<S304>/Puck State'

  real_T Out1_Y0_nf;                   // Computed Parameter: Out1_Y0_nf
                                          //  Referenced by: '<S339>/Out1'

  real_T Out1_Y0_gb;                   // Computed Parameter: Out1_Y0_gb
                                          //  Referenced by: '<S341>/Out1'

  real_T Out1_Y0_da;                   // Computed Parameter: Out1_Y0_da
                                          //  Referenced by: '<S343>/Out1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S306>/Constant2'

  real_T Constant4_Value_h;            // Expression: 0
                                          //  Referenced by: '<S306>/Constant4'

  real_T Constant5_Value_h;            // Expression: 0
                                          //  Referenced by: '<S306>/Constant5'

  real_T Constant6_Value_p;            // Expression: 0
                                          //  Referenced by: '<S306>/Constant6'

  real_T PuckState_Value_od;           // Expression: 1
                                          //  Referenced by: '<S306>/Puck State'

  real_T Out1_Y0_gx;                   // Computed Parameter: Out1_Y0_gx
                                          //  Referenced by: '<S356>/Out1'

  real_T Out1_Y0_fj;                   // Computed Parameter: Out1_Y0_fj
                                          //  Referenced by: '<S358>/Out1'

  real_T Out1_Y0_bm;                   // Computed Parameter: Out1_Y0_bm
                                          //  Referenced by: '<S360>/Out1'

  real_T PuckState_Value_g;            // Expression: 1
                                          //  Referenced by: '<S347>/Puck State'

  real_T Out1_Y0_i3;                   // Computed Parameter: Out1_Y0_i3
                                          //  Referenced by: '<S382>/Out1'

  real_T Out1_Y0_bs;                   // Computed Parameter: Out1_Y0_bs
                                          //  Referenced by: '<S384>/Out1'

  real_T Out1_Y0_c5;                   // Computed Parameter: Out1_Y0_c5
                                          //  Referenced by: '<S386>/Out1'

  real_T Constant1_Value_k;            // Expression: 0
                                          //  Referenced by: '<S349>/Constant1'

  real_T Constant4_Value_p;            // Expression: 0
                                          //  Referenced by: '<S349>/Constant4'

  real_T Constant5_Value_o;            // Expression: 0
                                          //  Referenced by: '<S349>/Constant5'

  real_T Constant6_Value_ao;           // Expression: 0
                                          //  Referenced by: '<S349>/Constant6'

  real_T PuckState_Value_es;           // Expression: 1
                                          //  Referenced by: '<S349>/Puck State'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S390>/Constant3'

  real_T Constant4_Value_e;            // Expression: 0
                                          //  Referenced by: '<S390>/Constant4'

  real_T Constant5_Value_n;            // Expression: 0
                                          //  Referenced by: '<S390>/Constant5'

  real_T PuckState_Value_gd;           // Expression: 0
                                          //  Referenced by: '<S390>/Puck State'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S392>/Constant'

  real_T Constant1_Value_l;            // Expression: 0
                                          //  Referenced by: '<S392>/Constant1'

  real_T Constant2_Value_m;            // Expression: 0
                                          //  Referenced by: '<S392>/Constant2'

  real_T Constant4_Value_o;            // Expression: 0
                                          //  Referenced by: '<S392>/Constant4'

  real_T Constant5_Value_f;            // Expression: 0
                                          //  Referenced by: '<S392>/Constant5'

  real_T Constant6_Value_j;            // Expression: 0
                                          //  Referenced by: '<S392>/Constant6'

  real_T PuckState_Value_h;            // Expression: 0
                                          //  Referenced by: '<S392>/Puck State'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S392>/Gain'

  real_T Saturation_UpperSat;          // Expression: 0.005
                                          //  Referenced by: '<S392>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -0.005
                                          //  Referenced by: '<S392>/Saturation'

  real_T RED_Tz4_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz4'

  real_T RED_Tz5_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz5'

  real_T RED_Tz6_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz6'

  real_T Gain2_Gain;                   // Expression: 9.81
                                          //  Referenced by: '<S6>/Gain2'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S146>/Unit Delay1'

  real_T Constant_Value_o;             // Expression: 4
                                          //  Referenced by: '<S6>/Constant'

  real_T Constant_Value_g;             // Expression: zeta
                                          //  Referenced by: '<S146>/Constant'

  real_T Constant1_Value_kx;           // Expression: tau
                                          //  Referenced by: '<S146>/Constant1'

  real_T Gain3_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S6>/Gain3'

  real_T UnitDelay1_InitialCondition_g;// Expression: 0
                                          //  Referenced by: '<S144>/Unit Delay1'

  real_T Constant_Value_l;             // Expression: zeta
                                          //  Referenced by: '<S144>/Constant'

  real_T Constant1_Value_ko;           // Expression: tau
                                          //  Referenced by: '<S144>/Constant1'

  real_T UnitDelay1_InitialCondition_k;// Expression: 0
                                          //  Referenced by: '<S142>/Unit Delay1'

  real_T Constant_Value_p;             // Expression: zeta
                                          //  Referenced by: '<S142>/Constant'

  real_T Constant1_Value_fy;           // Expression: tau
                                          //  Referenced by: '<S142>/Constant1'

  real_T Gain1_Gain;                   // Expression: 9.81
                                          //  Referenced by: '<S6>/Gain1'

  real_T UnitDelay1_InitialCondition_k4;// Expression: 0
                                           //  Referenced by: '<S138>/Unit Delay1'

  real_T Constant_Value_i;             // Expression: zeta
                                          //  Referenced by: '<S138>/Constant'

  real_T Constant1_Value_i;            // Expression: tau
                                          //  Referenced by: '<S138>/Constant1'

  real_T Gain_Gain_h;                  // Expression: pi/180
                                          //  Referenced by: '<S6>/Gain'

  real_T UnitDelay1_InitialCondition_l;// Expression: 0
                                          //  Referenced by: '<S140>/Unit Delay1'

  real_T Constant_Value_k;             // Expression: zeta
                                          //  Referenced by: '<S140>/Constant'

  real_T Constant1_Value_n;            // Expression: tau
                                          //  Referenced by: '<S140>/Constant1'

  real_T UnitDelay1_InitialCondition_a;// Expression: 0
                                          //  Referenced by: '<S136>/Unit Delay1'

  real_T Constant_Value_ko;            // Expression: zeta
                                          //  Referenced by: '<S136>/Constant'

  real_T Constant1_Value_h;            // Expression: tau
                                          //  Referenced by: '<S136>/Constant1'

  real_T Gain6_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S6>/Gain6'

  real_T Gain7_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S6>/Gain7'

  real_T Gain8_Gain;                   // Expression: pi/180
                                          //  Referenced by: '<S6>/Gain8'

  real_T Gain1_Gain_k;                 // Expression: 2
                                          //  Referenced by: '<S136>/Gain1'

  real_T UnitDelay2_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S136>/Unit Delay2'

  real_T Gain1_Gain_c;                 // Expression: 2
                                          //  Referenced by: '<S138>/Gain1'

  real_T UnitDelay2_InitialCondition_j;// Expression: 0
                                          //  Referenced by: '<S138>/Unit Delay2'

  real_T Gain1_Gain_d;                 // Expression: 2
                                          //  Referenced by: '<S140>/Gain1'

  real_T UnitDelay2_InitialCondition_g;// Expression: 0
                                          //  Referenced by: '<S140>/Unit Delay2'

  real_T Gain1_Gain_dn;                // Expression: 2
                                          //  Referenced by: '<S142>/Gain1'

  real_T UnitDelay2_InitialCondition_ji;// Expression: 0
                                           //  Referenced by: '<S142>/Unit Delay2'

  real_T Gain1_Gain_g;                 // Expression: 2
                                          //  Referenced by: '<S144>/Gain1'

  real_T UnitDelay2_InitialCondition_b;// Expression: 0
                                          //  Referenced by: '<S144>/Unit Delay2'

  real_T Gain1_Gain_o;                 // Expression: 2
                                          //  Referenced by: '<S146>/Gain1'

  real_T UnitDelay2_InitialCondition_e;// Expression: 0
                                          //  Referenced by: '<S146>/Unit Delay2'

  real_T BLACK_Fx_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx'

  real_T BLACK_Fx1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx1'

  real_T BLACK_Fx_Sat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat'

  real_T BLACK_Fx_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat1'

  real_T BLACK_Fx_Sat2_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat2'

  real_T BLACK_Fy_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy'

  real_T BLACK_Fy1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy1'

  real_T BLACK_Fy_Sat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy_Sat'

  real_T BLACK_Fy_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy_Sat1'

  real_T BLACK_Fy_Sat2_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy_Sat2'

  real_T BLACK_Px_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Px'

  real_T BLACK_Px1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Px1'

  real_T BLACK_Py_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Py'

  real_T BLACK_Py1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Py1'

  real_T BLACK_Rz_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Rz'

  real_T BLACK_Rz1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Rz1'

  real_T BLACK_Tz_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz'

  real_T BLACK_Tz1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz1'

  real_T BLACK_Tz_Sat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz_Sat'

  real_T BLACK_Tz_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz_Sat1'

  real_T BLACK_Tz_Sat2_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz_Sat2'

  real_T RED_Fx_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Fx'

  real_T RED_Fx_Sat_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Fx_Sat'

  real_T RED_Fy_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Fy'

  real_T RED_Fy_Sat_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Fy_Sat'

  real_T RED_Px_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px'

  real_T RED_Px1_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px1'

  real_T RED_Px10_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px10'

  real_T RED_Px11_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px11'

  real_T RED_Px12_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px12'

  real_T RED_Px13_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px13'

  real_T RED_Px14_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px14'

  real_T RED_Px15_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px15'

  real_T RED_Px16_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px16'

  real_T RED_Px17_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px17'

  real_T RED_Px18_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px18'

  real_T RED_Px2_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px2'

  real_T RED_Px3_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px3'

  real_T RED_Px4_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px4'

  real_T RED_Px5_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px5'

  real_T RED_Px6_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px6'

  real_T RED_Px7_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px7'

  real_T RED_Px8_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px8'

  real_T RED_Px9_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px9'

  real_T RED_Py_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Py'

  real_T RED_Rz_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Rz'

  real_T RED_Tz_InitialValue;          // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz'

  real_T RED_Tz1_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz1'

  real_T RED_Tz2_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz2'

  real_T RED_Tz3_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz3'

  real_T RED_Tz7_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz7'

  real_T RED_Tz8_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz8'

  real_T RED_Tz_RW_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW'

  real_T RED_Tz_RWSat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW Sat'

  real_T RED_Tz_RWSat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW Sat1'

  real_T RED_Tz_RW1_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW1'

  real_T RED_Tz_Sat_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_Sat'

  real_T RED_Tz_Sat1_InitialValue;     // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_Sat1'

  real_T RED_dRz_RWSat_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/RED_dRz_RW Sat'

  real_T Universal_Time_InitialValue;  // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time'

  real_T Universal_Time1_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time1'

  real_T Universal_Time2_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time2'

  real_T Universal_Time3_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time3'

  real_T Universal_Time4_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time4'

  real_T Universal_Time5_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time5'

  real_T Universal_Time6_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time6'

  real_T Universal_Time7_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time7'

  real_T Universal_Time8_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time8'

  real_T Universal_Time9_InitialValue; // Expression: 0
                                          //  Referenced by: '<Root>/Universal_Time9'

  int32_T UDPReceive_Port;             // Computed Parameter: UDPReceive_Port
                                          //  Referenced by: '<S79>/UDP Receive'

  int32_T SendBLACKStatestoBLACKPlatform_;
                          // Computed Parameter: SendBLACKStatestoBLACKPlatform_
                             //  Referenced by: '<S80>/Send BLACK States to  BLACK Platform'

  int32_T UDPReceive1_Port;            // Computed Parameter: UDPReceive1_Port
                                          //  Referenced by: '<S6>/UDP Receive1'

  int32_T UDPReceive_Port_e;           // Computed Parameter: UDPReceive_Port_e
                                          //  Referenced by: '<S6>/UDP Receive'

  int32_T UDPReceive2_Port;            // Computed Parameter: UDPReceive2_Port
                                          //  Referenced by: '<S6>/UDP Receive2'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<S15>/UDP Send'

  boolean_T Delay1_InitialCondition;
                                  // Computed Parameter: Delay1_InitialCondition
                                     //  Referenced by: '<S63>/Delay1'

  boolean_T Delay2_InitialCondition;
                                  // Computed Parameter: Delay2_InitialCondition
                                     //  Referenced by: '<S63>/Delay2'

  boolean_T Delay5_InitialCondition;
                                  // Computed Parameter: Delay5_InitialCondition
                                     //  Referenced by: '<S63>/Delay5'

  boolean_T Delay3_InitialCondition;
                                  // Computed Parameter: Delay3_InitialCondition
                                     //  Referenced by: '<S63>/Delay3'

  boolean_T Delay4_InitialCondition;
                                  // Computed Parameter: Delay4_InitialCondition
                                     //  Referenced by: '<S63>/Delay4'

  boolean_T Delay_InitialCondition_d;
                                 // Computed Parameter: Delay_InitialCondition_d
                                    //  Referenced by: '<S117>/Delay'

  boolean_T Delay_InitialCondition_n;
                                 // Computed Parameter: Delay_InitialCondition_n
                                    //  Referenced by: '<S100>/Delay'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior_k;// '<S14>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  P_SubPhase2_Template_v3_03__g_T SubPhase3_b;// '<S201>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03__g_T SubPhase2_g;// '<S201>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_03_20_T SubPhase4_f;// '<S200>/Sub-Phase #4'
  P_SubPhase2_Template_v3_03__h_T SubPhase3_p;// '<S200>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03__h_T SubPhase2_m;// '<S200>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_03_20_T SubPhase1_a;// '<S200>/Sub-Phase #1'
  P_SubPhase2_Template_v3_03_20_T SubPhase3;// '<S199>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03_20_T SubPhase2;// '<S199>/Sub-Phase #2 '
  P_Phase0WaitforSynchronizatio_T Phase1StartFloating;// '<Root>/Phase #1:  Start Floating ' 
  P_Phase0WaitforSynchronizatio_T Phase0WaitforSynchronization;
                                // '<Root>/Phase #0:  Wait for Synchronization'
  P_AHRS2_Template_v3_03_2020a_T AHRS1;// '<S6>/AHRS2'
  P_AHRS2_Template_v3_03_2020a_T AHRS2;// '<S6>/AHRS2'
};

// Real-time Model Data Structure
struct tag_RTM_Template_v3_03_2020a_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID1_2;
    } RateInteraction;

    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_Template_v3_03_2020a_T Template_v3_03_2020a_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_Template_v3_03_2020a_T Template_v3_03_2020a_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_Template_v3_03_2020a_T Template_v3_03_2020a_DW;

// Zero-crossing (trigger) state
extern PrevZCX_Template_v3_03_2020a_T Template_v3_03_2020a_PrevZCX;

// External function called from main
#ifdef __cplusplus

extern "C" {

#endif

  extern void Template_v3_03_2020a_SetEventsForThisBaseStep(boolean_T
    *eventFlags);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Template_v3_03_2020a_SetEventsForThisBaseStep(boolean_T
    *eventFlags);
  extern void Template_v3_03_2020a_initialize(void);
  extern void Template_v3_03_2020a_step(int_T tid);
  extern void Template_v3_03_2020a_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Template_v3_03_2020a_T *const Template_v3_03_2020a_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S102>/Check Signal Attributes' : Unused code path elimination
//  Block '<S103>/Check Signal Attributes' : Unused code path elimination
//  Block '<S119>/Check Signal Attributes' : Unused code path elimination
//  Block '<S120>/Check Signal Attributes' : Unused code path elimination
//  Block '<S79>/Reshape' : Reshape block reduction
//  Block '<S6>/Reshape' : Reshape block reduction
//  Block '<S6>/Reshape1' : Reshape block reduction
//  Block '<S6>/Reshape2' : Reshape block reduction
//  Block '<S6>/Reshape3' : Reshape block reduction
//  Block '<S6>/Reshape4' : Reshape block reduction
//  Block '<S6>/Reshape5' : Reshape block reduction


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
//  '<Root>' : 'Template_v3_03_2020a'
//  '<S1>'   : 'Template_v3_03_2020a/Data Logger Subsystem'
//  '<S2>'   : 'Template_v3_03_2020a/Float & Magnet Controls'
//  '<S3>'   : 'Template_v3_03_2020a/From Force//Torque to PWM Signal'
//  '<S4>'   : 'Template_v3_03_2020a/From Torque, Command RW'
//  '<S5>'   : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP'
//  '<S6>'   : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms'
//  '<S7>'   : 'Template_v3_03_2020a/Is this a  simulation?'
//  '<S8>'   : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization'
//  '<S9>'   : 'Template_v3_03_2020a/Phase #1:  Start Floating '
//  '<S10>'  : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position'
//  '<S11>'  : 'Template_v3_03_2020a/Phase #3: Experiment'
//  '<S12>'  : 'Template_v3_03_2020a/Phase #4:  Return Home'
//  '<S13>'  : 'Template_v3_03_2020a/Phase #5:  Hold Home'
//  '<S14>'  : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW'
//  '<S15>'  : 'Template_v3_03_2020a/Real-Time Visualization'
//  '<S16>'  : 'Template_v3_03_2020a/Simulate Plant Dynamics'
//  '<S17>'  : 'Template_v3_03_2020a/Subsystem'
//  '<S18>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior'
//  '<S19>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Is this a  simulation?'
//  '<S20>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior/GPIO for Magnet'
//  '<S21>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior/GPIO for Pucks'
//  '<S22>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior'
//  '<S23>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior'
//  '<S24>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior'
//  '<S25>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Is this a  simulation?'
//  '<S26>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Send Commands to PWM Blocks'
//  '<S27>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF'
//  '<S28>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body'
//  '<S29>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S30>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S31>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S32>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S33>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S34>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S35>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S36>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF'
//  '<S37>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body'
//  '<S38>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S39>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S40>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S41>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S42>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S43>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S44>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S45>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF'
//  '<S46>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body'
//  '<S47>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S48>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S49>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S50>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S51>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S52>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S53>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S54>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change BLACK Behavior'
//  '<S55>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change BLUE Behavior'
//  '<S56>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior'
//  '<S57>'  : 'Template_v3_03_2020a/From Torque, Command RW/Is this a  simulation?'
//  '<S58>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal'
//  '<S59>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM'
//  '<S60>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal/Calculate RW RPM Increment'
//  '<S61>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Check if RW is Ready'
//  '<S62>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Convert Wheel Rate to  Motor Rate'
//  '<S63>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Delay Bank'
//  '<S64>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Get RW Direction'
//  '<S65>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status'
//  '<S66>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/RPM to PWM Value'
//  '<S67>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller'
//  '<S68>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send PWM to Motor Controller'
//  '<S69>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor'
//  '<S70>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status/GPIO Read1'
//  '<S71>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller/GPIO Write'
//  '<S72>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor/GPIO Write1'
//  '<S73>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Initialize Universal Time (Simulation)'
//  '<S74>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Is this a  simulation?1'
//  '<S75>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States'
//  '<S76>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM'
//  '<S77>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM'
//  '<S78>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Is this a  simulation?'
//  '<S79>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States'
//  '<S80>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States'
//  '<S81>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1'
//  '<S82>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2'
//  '<S83>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3'
//  '<S84>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4'
//  '<S85>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5'
//  '<S86>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6'
//  '<S87>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1/Hold this value'
//  '<S88>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2/Hold this value'
//  '<S89>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3/Hold this value'
//  '<S90>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4/Hold this value'
//  '<S91>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5/Hold this value'
//  '<S92>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6/Hold this value'
//  '<S93>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time'
//  '<S94>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1'
//  '<S95>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2'
//  '<S96>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3'
//  '<S97>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4'
//  '<S98>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5'
//  '<S99>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6'
//  '<S100>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector'
//  '<S101>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Enabled Subsystem'
//  '<S102>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S103>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S104>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1/Hold this value'
//  '<S105>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2/Hold this value'
//  '<S106>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3/Hold this value'
//  '<S107>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4/Hold this value'
//  '<S108>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5/Hold this value'
//  '<S109>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6/Hold this value'
//  '<S110>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time'
//  '<S111>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1'
//  '<S112>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2'
//  '<S113>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3'
//  '<S114>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4'
//  '<S115>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5'
//  '<S116>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6'
//  '<S117>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector'
//  '<S118>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Enabled Subsystem'
//  '<S119>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S120>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S121>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1/Hold this value'
//  '<S122>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2/Hold this value'
//  '<S123>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3/Hold this value'
//  '<S124>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4/Hold this value'
//  '<S125>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5/Hold this value'
//  '<S126>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6/Hold this value'
//  '<S127>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass'
//  '<S128>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass1'
//  '<S129>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass2'
//  '<S130>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass3'
//  '<S131>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass4'
//  '<S132>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass5'
//  '<S133>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/MATLAB Function'
//  '<S134>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/MATLAB Function1'
//  '<S135>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/MATLAB Function2'
//  '<S136>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass/SOS1'
//  '<S137>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass/SOS1/MATLAB Function'
//  '<S138>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass1/SOS1'
//  '<S139>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass1/SOS1/MATLAB Function'
//  '<S140>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass2/SOS1'
//  '<S141>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass2/SOS1/MATLAB Function'
//  '<S142>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass3/SOS1'
//  '<S143>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass3/SOS1/MATLAB Function'
//  '<S144>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass4/SOS1'
//  '<S145>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass4/SOS1/MATLAB Function'
//  '<S146>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass5/SOS1'
//  '<S147>' : 'Template_v3_03_2020a/Gyroscope & Acceleration Algorithms/Discrete Varying Lowpass5/SOS1/MATLAB Function'
//  '<S148>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change BLACK Behavior'
//  '<S149>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change BLUE Behavior'
//  '<S150>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change RED Behavior'
//  '<S151>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Is this a  simulation?'
//  '<S152>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change BLACK Behavior'
//  '<S153>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change BLUE Behavior'
//  '<S154>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change RED Behavior'
//  '<S155>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Is this a  simulation?'
//  '<S156>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior'
//  '<S157>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior'
//  '<S158>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior'
//  '<S159>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Is this a  simulation?'
//  '<S160>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S161>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S162>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S163>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control'
//  '<S164>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S165>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S166>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S167>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S168>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S169>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S170>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S171>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S172>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S173>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S174>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S175>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S176>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control'
//  '<S177>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S178>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S179>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S180>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S181>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S182>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S183>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S184>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S185>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S186>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S187>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S188>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S189>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control'
//  '<S190>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S191>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S192>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S193>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S194>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S195>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S196>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S197>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S198>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S199>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior'
//  '<S200>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior'
//  '<S201>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior'
//  '<S202>' : 'Template_v3_03_2020a/Phase #3: Experiment/Is this a  simulation?'
//  '<S203>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1'
//  '<S204>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #2 '
//  '<S205>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #3 '
//  '<S206>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4'
//  '<S207>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Subsystem'
//  '<S208>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S209>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S210>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S211>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control'
//  '<S212>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S213>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S214>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S215>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S216>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S217>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S218>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S219>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S220>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S221>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD'
//  '<S222>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S223>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S224>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S225>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control'
//  '<S226>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Subsystem'
//  '<S227>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1'
//  '<S228>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function'
//  '<S229>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S230>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S231>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S232>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S233>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S234>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S235>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S236>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S237>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S238>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1'
//  '<S239>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #2 '
//  '<S240>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #3 '
//  '<S241>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4'
//  '<S242>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Subsystem'
//  '<S243>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S244>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S245>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S246>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control'
//  '<S247>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S248>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S249>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S250>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S251>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S252>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S253>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S254>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S255>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S256>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S257>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S258>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S259>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control'
//  '<S260>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S261>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S262>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S263>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S264>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S265>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S266>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S267>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S268>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S269>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1'
//  '<S270>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #2 '
//  '<S271>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #3 '
//  '<S272>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4'
//  '<S273>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Subsystem'
//  '<S274>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S275>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S276>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S277>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control'
//  '<S278>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S279>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S280>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S281>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S282>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S283>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S284>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S285>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S286>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S287>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD'
//  '<S288>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S289>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S290>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S291>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control'
//  '<S292>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Subsystem'
//  '<S293>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Wrap1'
//  '<S294>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function'
//  '<S295>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S296>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S297>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S298>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S299>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S300>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S301>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S302>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S303>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S304>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior'
//  '<S305>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior'
//  '<S306>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior'
//  '<S307>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Is this a  simulation?'
//  '<S308>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S309>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S310>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S311>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control'
//  '<S312>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S313>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S314>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S315>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S316>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S317>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S318>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S319>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S320>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S321>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S322>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S323>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S324>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control'
//  '<S325>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S326>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S327>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S328>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S329>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S330>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S331>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S332>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S333>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S334>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S335>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S336>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S337>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control'
//  '<S338>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S339>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S340>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S341>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S342>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S343>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S344>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S345>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S346>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S347>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior'
//  '<S348>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior'
//  '<S349>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior'
//  '<S350>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Is this a  simulation?'
//  '<S351>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S352>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S353>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S354>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control'
//  '<S355>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S356>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S357>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S358>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S359>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S360>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S361>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S362>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S363>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S364>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S365>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S366>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S367>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control'
//  '<S368>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S369>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S370>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S371>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S372>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S373>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S374>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S375>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S376>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S377>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S378>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S379>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S380>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control'
//  '<S381>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S382>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S383>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S384>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S385>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S386>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S387>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S388>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S389>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S390>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLACK Behavior'
//  '<S391>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLUE Behavior'
//  '<S392>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change RED Behavior'
//  '<S393>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Is this a  simulation?'
//  '<S394>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLACK Dynamics Model'
//  '<S395>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model'
//  '<S396>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/RED Dynamics Model'
//  '<S397>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)'
//  '<S398>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)'
//  '<S399>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)'
//  '<S400>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x1'
//  '<S401>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x2'
//  '<S402>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x3'
//  '<S403>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x4'
//  '<S404>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x5'
//  '<S405>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x6'
//  '<S406>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x7'
//  '<S407>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x8'
//  '<S408>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x9'
//  '<S409>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLACK Dynamics Model/MATLAB Function'
//  '<S410>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model/MATLAB Function'
//  '<S411>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/RED Dynamics Model/MATLAB Function'
//  '<S412>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/MATLAB Function'
//  '<S413>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/Sample and Hold1'
//  '<S414>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/MATLAB Function'
//  '<S415>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/Sample and Hold1'
//  '<S416>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/MATLAB Function'
//  '<S417>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/Sample and Hold'
//  '<S418>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x1/Hold this value'
//  '<S419>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x2/Hold this value'
//  '<S420>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x3/Hold this value'
//  '<S421>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x4/Hold this value'
//  '<S422>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x5/Hold this value'
//  '<S423>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x6/Hold this value'
//  '<S424>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x7/Hold this value'
//  '<S425>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x8/Hold this value'
//  '<S426>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x9/Hold this value'

#endif                                 // RTW_HEADER_Template_v3_03_2020a_h_
