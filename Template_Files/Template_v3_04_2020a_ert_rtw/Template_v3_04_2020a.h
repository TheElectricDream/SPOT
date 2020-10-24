//
//  Template_v3_04_2020a.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "Template_v3_04_2020a".
//
//  Model version              : 1.119
//  Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
//  C++ source code generated on : Sat Oct 24 15:37:19 2020
//
//  Target selection: ert.tlc
//  Embedded hardware selection: ARM Compatible->ARM Cortex
//  Code generation objective: Execution efficiency
//  Validation result: Not run


#ifndef RTW_HEADER_Template_v3_04_2020a_h_
#define RTW_HEADER_Template_v3_04_2020a_h_
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
#include "owl.hpp"
#include "phasespace_headers.h"
#include "DAHostLib_Network.h"
#include "MW_I2C.h"
#include "Template_v3_04_2020a_types.h"

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

// Block signals for system '<S131>/AHRS2'
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
  real_T AHRS2_o2[3];                  // '<S131>/AHRS2'
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
} B_AHRS2_Template_v3_04_2020a_T;

// Block states (default storage) for system '<S131>/AHRS2'
typedef struct {
  fusion_simulink_ahrsfilter_Te_T obj; // '<S131>/AHRS2'
  c_fusion_internal_frames_NED__T gobj_1;// '<S131>/AHRS2'
  c_fusion_internal_frames_NED__T gobj_2;// '<S131>/AHRS2'
  boolean_T objisempty;                // '<S131>/AHRS2'
} DW_AHRS2_Template_v3_04_2020a_T;

// Block signals for system '<S131>/ChangeOrientation'
typedef struct {
  real_T y[3];                         // '<S131>/ChangeOrientation'
} B_ChangeOrientation_Template__T;

// Block signals for system '<S140>/MATLAB Function'
typedef struct {
  real_T a;                            // '<S140>/MATLAB Function'
  real_T b;                            // '<S140>/MATLAB Function'
  real_T c;                            // '<S140>/MATLAB Function'
} B_MATLABFunction_Template_v_a_T;

// Block signals for system '<S398>/MATLAB Function'
typedef struct {
  real_T y;                            // '<S398>/MATLAB Function'
} B_MATLABFunction_Template_v_e_T;

// Block signals for system '<S168>/MATLAB Function2'
typedef struct {
  real_T Oy[2];                        // '<S168>/MATLAB Function2'
  real_T Ox[2];                        // '<S168>/MATLAB Function2'
} B_MATLABFunction2_Template__n_T;

// Block signals for system '<S168>/MATLAB Function3'
typedef struct {
  real_T Ox[2];                        // '<S168>/MATLAB Function3'
} B_MATLABFunction3_Template_v3_T;

// Block signals for system '<S168>/MATLAB Function4'
typedef struct {
  real_T e_out;                        // '<S168>/MATLAB Function4'
} B_MATLABFunction4_Template_v3_T;

// Block signals for system '<S205>/Sub-Phase #1'
typedef struct {
  real_T rtb_Subtract2_e_m[2];
  real_T In1;                          // '<S253>/In1'
  real_T In1_p;                        // '<S251>/In1'
  real_T In1_j;                        // '<S249>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S247>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S247>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S247>/MATLAB Function2' 
} B_SubPhase1_Template_v3_04_20_T;

// Block states (default storage) for system '<S205>/Sub-Phase #1'
typedef struct {
  real_T Delay1_DSTATE;                // '<S250>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S252>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S248>/Delay1'
  uint8_T icLoad;                      // '<S250>/Delay1'
  uint8_T icLoad_p;                    // '<S252>/Delay1'
  uint8_T icLoad_d;                    // '<S248>/Delay1'
} DW_SubPhase1_Template_v3_04_2_T;

// Block signals for system '<S12>/Change BLUE Behavior'
typedef struct {
  real_T rtb_Subtract2_b1_m[2];
  real_T In1;                          // '<S331>/In1'
  real_T In1_k;                        // '<S329>/In1'
  real_T In1_a;                        // '<S327>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S325>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S325>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S325>/MATLAB Function2' 
} B_ChangeBLUEBehavior_Templa_k_T;

// Block states (default storage) for system '<S12>/Change BLUE Behavior'
typedef struct {
  real_T Delay1_DSTATE;                // '<S328>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S330>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S326>/Delay1'
  uint8_T icLoad;                      // '<S328>/Delay1'
  uint8_T icLoad_h;                    // '<S330>/Delay1'
  uint8_T icLoad_l;                    // '<S326>/Delay1'
} DW_ChangeBLUEBehavior_Templ_i_T;

// Block signals (default storage)
typedef struct {
  real_T Mat2[64];
  real_T Mat2_m[64];
  real_T TmpSignalConversionAtToWork[48];
  real_T transpose[24];                // '<S51>/transpose'
  real_T transpose_p[24];              // '<S42>/transpose'
  real_T transpose_d[24];              // '<S33>/transpose'
  real_T H_bu[24];                     // '<S27>/MATLAB Function'
  real_T b[24];
  real_T b_c[9];
  real_T rtb_H_bu_k[9];
  real_T x[9];
  real_T x_c[9];
  real_T x_b[9];
  real_T rtb_RemoveNegatives_i_p[8];
  real_T StreamPhaseSpacetoPlatform[7];
  char_T cv[45];
  real_T TmpSignalConversionAtSFunct[3];// '<S397>/MATLAB Function'
  real_T x_ddot_o[3];                  // '<S396>/MATLAB Function'
  real_T x_ddot_d[3];                  // '<S395>/MATLAB Function'
  real_T Product1_a[3];                // '<S149>/Product1'
  real_T Gain[3];                      // '<S133>/Gain'
  real_T Product1[3];                  // '<S151>/Product1'
  real_T Product1_d[3];                // '<S140>/Product1'
  real_T Gain_o[3];                    // '<S131>/Gain'
  real_T Product1_b[3];                // '<S142>/Product1'
  real_T y[3];                         // '<S133>/MATLAB Function2'
  real_T y_k2[3];                      // '<S131>/MATLAB Function2'
  real_T LSM9DS1IMUSensor_o3[3];       // '<S6>/LSM9DS1 IMU Sensor'
  real_T Gain1_h[3];                   // '<S132>/Gain1'
  real_T Gain_d[3];                    // '<S132>/Gain'
  real_T rtb_Subtract2_f_c[2];
  real_T rtb_Subtract2_p_f[2];
  MW_I2C_Mode_Type ModeType;
  real_T SetUniversalTimeIfthisisasimula;
                        // '<S15>/Set Universal Time (If this is a simulation)'
  real_T In1;                          // '<S387>/In1'
  real_T In1_j;                        // '<S385>/In1'
  real_T In1_d;                        // '<S383>/In1'
  real_T In1_c;                        // '<S361>/In1'
  real_T In1_i;                        // '<S359>/In1'
  real_T In1_g;                        // '<S357>/In1'
  real_T In1_f;                        // '<S344>/In1'
  real_T In1_b;                        // '<S342>/In1'
  real_T In1_h;                        // '<S340>/In1'
  real_T In1_d0;                       // '<S318>/In1'
  real_T In1_fx;                       // '<S316>/In1'
  real_T In1_fk;                       // '<S314>/In1'
  real_T In1_a;                        // '<S301>/In1'
  real_T In1_o;                        // '<S299>/In1'
  real_T In1_ow;                       // '<S297>/In1'
  real_T In1_jw;                       // '<S284>/In1'
  real_T In1_jwe;                      // '<S282>/In1'
  real_T In1_n;                        // '<S280>/In1'
  real_T In1_l;                        // '<S235>/In1'
  real_T In1_bd;                       // '<S233>/In1'
  real_T In1_gd;                       // '<S231>/In1'
  real_T In1_ly;                       // '<S222>/In1'
  real_T In1_cw;                       // '<S220>/In1'
  real_T In1_ab;                       // '<S218>/In1'
  real_T In1_if;                       // '<S200>/In1'
  real_T In1_cr;                       // '<S198>/In1'
  real_T In1_k;                        // '<S196>/In1'
  real_T In1_jwx;                      // '<S187>/In1'
  real_T In1_lc;                       // '<S185>/In1'
  real_T In1_ov;                       // '<S183>/In1'
  real_T In1_gc;                       // '<S174>/In1'
  real_T In1_e;                        // '<S172>/In1'
  real_T In1_fa;                       // '<S170>/In1'
  real_T In1_jt;                       // '<S427>/In1'
  real_T In1_ac;                       // '<S426>/In1'
  real_T In1_ad;                       // '<S425>/In1'
  real_T In1_m;                        // '<S424>/In1'
  real_T In1_ey;                       // '<S423>/In1'
  real_T In1_k4;                       // '<S422>/In1'
  real_T In1_o1;                       // '<S421>/In1'
  real_T In1_af;                       // '<S420>/In1'
  real_T In1_nu;                       // '<S419>/In1'
  real_T In[3];                        // '<S418>/In'
  real_T In_p[3];                      // '<S416>/In'
  real_T In_n[3];                      // '<S414>/In'
  real_T Unwrap;                       // '<S80>/Unwrap'
  real_T Unwrap1;                      // '<S80>/Unwrap1'
  real_T TmpSignalConversionAtSendBLACKS[7];
  real_T In1_bs;                       // '<S111>/In1'
  real_T In1_p;                        // '<S110>/In1'
  real_T In1_g5;                       // '<S109>/In1'
  real_T In1_jh;                       // '<S108>/In1'
  real_T In1_bd2;                      // '<S107>/In1'
  real_T In1_of;                       // '<S106>/In1'
  real_T In1_kv[7];                    // '<S95>/In1'
  real_T In1_f5;                       // '<S103>/In1'
  real_T UDPReceive_o1[7];             // '<S79>/UDP Receive'
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
  real_T DataStoreRead2;               // '<S77>/Data Store Read2'
  real_T DataStoreRead3;               // '<S77>/Data Store Read3'
  real_T In1_j1;                       // '<S130>/In1'
  real_T In1_jc;                       // '<S129>/In1'
  real_T In1_bx;                       // '<S128>/In1'
  real_T In1_mo;                       // '<S127>/In1'
  real_T In1_n2;                       // '<S126>/In1'
  real_T In1_np;                       // '<S125>/In1'
  real_T In1_mz[7];                    // '<S114>/In1'
  real_T In1_ig;                       // '<S122>/In1'
  real_T y5;
  real_T y7;
  real_T Sum6_c;                       // '<S360>/Sum6'
  real_T Sum6_l1;                      // '<S358>/Sum6'
  real_T Subtract_o;                   // '<S348>/Subtract'
  real_T rtb_UnitDelay2_h_idx_2;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  real_T sampleTime;
  real_T d;
  real_T sr;
  real_T si;
  boolean_T Compare_g[7];              // '<S93>/Compare'
  int16_T b_RegisterValue[3];
  uint8_T output_raw[6];
  int32_T ntIdx0;
  int32_T uElOffset0;
  int32_T ntIdx1;
  int32_T uElOffset1;
  int32_T yElIdx;
  int32_T p1;
  int32_T p2;
  int32_T p3;
  int32_T itmp;
  int32_T u0;
  int32_T u1;
  uint32_T lo;
  uint32_T hi;
  ZCEventType zcEvent;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T SwappedDataBytes;
  uint8_T status;
  boolean_T DataTypeConversion;        // '<S102>/Data Type Conversion'
  boolean_T Compare[7];                // '<S112>/Compare'
  boolean_T DataTypeConversion_m;      // '<S121>/Data Type Conversion'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_df;// '<S381>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bc;// '<S381>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_mx;// '<S381>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_de;// '<S355>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_o;// '<S355>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_g;// '<S355>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_n;// '<S338>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c1;// '<S338>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ia;// '<S338>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_l;// '<S312>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bv;// '<S312>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_pt;// '<S312>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_i;// '<S292>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_f;// '<S292>/MATLAB Function3' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_k;// '<S278>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bj;// '<S278>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_a;// '<S278>/MATLAB Function2' 
  B_SubPhase1_Template_v3_04_20_T SubPhase4_f;// '<S205>/Sub-Phase #4'
  B_SubPhase1_Template_v3_04_20_T SubPhase1_a;// '<S205>/Sub-Phase #1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_bk;// '<S229>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_b;// '<S229>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_o0;// '<S229>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_d;// '<S216>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_l;// '<S216>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_im;// '<S216>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_b;// '<S194>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_k;// '<S194>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ol;// '<S194>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_c;// '<S181>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c;// '<S181>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_m;// '<S181>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S168>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S168>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_o;// '<S168>/MATLAB Function2' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_k;// '<S400>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_ap;// '<S399>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_dj;// '<S398>/MATLAB Function' 
  B_MATLABFunction_Template_v_a_T sf_MATLABFunction_p;// '<S151>/MATLAB Function' 
  B_MATLABFunction_Template_v_a_T sf_MATLABFunction_e;// '<S149>/MATLAB Function' 
  B_ChangeOrientation_Template__T sf_ChangeOrientation_e;// '<S133>/ChangeOrientation' 
  B_AHRS2_Template_v3_04_2020a_T AHRS2_pn;// '<S131>/AHRS2'
  B_AHRS2_Template_v3_04_2020a_T AHRS2_p;// '<S131>/AHRS2'
  B_MATLABFunction_Template_v_a_T sf_MATLABFunction_d;// '<S142>/MATLAB Function' 
  B_MATLABFunction_Template_v_a_T sf_MATLABFunction_ht;// '<S140>/MATLAB Function' 
  B_ChangeOrientation_Template__T sf_ChangeOrientation;// '<S131>/ChangeOrientation' 
  B_AHRS2_Template_v3_04_2020a_T AHRS2;// '<S131>/AHRS2'
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
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2;// '<S27>/MATLAB Function2' 
} B_Template_v3_04_2020a_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  raspi_internal_lsm9ds1Block_T_T obj; // '<S6>/LSM9DS1 IMU Sensor'
  codertarget_linux_blocks_Di_j_T obj_f;// '<S70>/Digital Read'
  PhaseSpace_ALL_Template_v3_04_T obj_j;// '<S77>/Stream PhaseSpace to Platform' 
  raspi_internal_PWMBlock_Templ_T obj_d;// '<S68>/PWM1'
  raspi_internal_PWMBlock_Templ_T obj_m;// '<S26>/RED T1 - BLACK T8'
  raspi_internal_PWMBlock_Templ_T obj_ma;// '<S26>/RED T2 - BLACK T3'
  raspi_internal_PWMBlock_Templ_T obj_h;// '<S26>/RED T3'
  raspi_internal_PWMBlock_Templ_T obj_k;// '<S26>/RED T4 - BLACK T5'
  raspi_internal_PWMBlock_Templ_T obj_hw;// '<S26>/RED T5 - BLACK T4'
  raspi_internal_PWMBlock_Templ_T obj_hf;// '<S26>/RED T6 - BLACK T7'
  raspi_internal_PWMBlock_Templ_T obj_c;// '<S26>/RED T7 - BLACK T6'
  raspi_internal_PWMBlock_Templ_T obj_fo;// '<S26>/RED T8 - BLACK T1'
  raspi_internal_PWMBlock_Templ_T obj_ci;// '<S26>/BLACK T2'
  codertarget_linux_blocks_Digi_T obj_cp;// '<S72>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_b;// '<S71>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_a;// '<S21>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_i;// '<S20>/Digital Write'
  real_T Delay1_DSTATE;                // '<S384>/Delay1'
  real_T Delay1_DSTATE_m;              // '<S386>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S382>/Delay1'
  real_T Delay1_DSTATE_o;              // '<S358>/Delay1'
  real_T Delay1_DSTATE_p;              // '<S360>/Delay1'
  real_T Delay1_DSTATE_b;              // '<S356>/Delay1'
  real_T Delay1_DSTATE_i;              // '<S339>/Delay1'
  real_T Delay1_DSTATE_h;              // '<S341>/Delay1'
  real_T Delay1_DSTATE_l;              // '<S343>/Delay1'
  real_T Delay1_DSTATE_lt;             // '<S315>/Delay1'
  real_T Delay1_DSTATE_im;             // '<S317>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S313>/Delay1'
  real_T Delay1_DSTATE_hr;             // '<S296>/Delay1'
  real_T Delay1_DSTATE_c;              // '<S298>/Delay1'
  real_T Delay1_DSTATE_d;              // '<S300>/Delay1'
  real_T Delay1_DSTATE_a;              // '<S279>/Delay1'
  real_T Delay1_DSTATE_j;              // '<S281>/Delay1'
  real_T Delay1_DSTATE_bb;             // '<S283>/Delay1'
  real_T Delay1_DSTATE_bl;             // '<S232>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S234>/Delay1'
  real_T Delay1_DSTATE_p0;             // '<S230>/Delay1'
  real_T Delay1_DSTATE_gi;             // '<S219>/Delay1'
  real_T Delay1_DSTATE_pe;             // '<S221>/Delay1'
  real_T Delay1_DSTATE_lu;             // '<S217>/Delay1'
  real_T Delay1_DSTATE_ct;             // '<S195>/Delay1'
  real_T Delay1_DSTATE_bm;             // '<S197>/Delay1'
  real_T Delay1_DSTATE_pr;             // '<S199>/Delay1'
  real_T Delay1_DSTATE_fb;             // '<S184>/Delay1'
  real_T Delay1_DSTATE_n1;             // '<S186>/Delay1'
  real_T Delay1_DSTATE_cq;             // '<S182>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S171>/Delay1'
  real_T Delay1_DSTATE_dv;             // '<S173>/Delay1'
  real_T Delay1_DSTATE_jd;             // '<S169>/Delay1'
  real_T VelocitytoPosition_DSTATE[3]; // '<S395>/Velocity to Position'
  real_T Delay1_DSTATE_nq;             // '<S406>/Delay1'
  real_T Delay1_DSTATE_mb;             // '<S404>/Delay1'
  real_T Delay1_DSTATE_pz;             // '<S405>/Delay1'
  real_T VelocitytoPosition_DSTATE_a[3];// '<S396>/Velocity to Position'
  real_T Delay1_DSTATE_nm;             // '<S409>/Delay1'
  real_T Delay1_DSTATE_e;              // '<S407>/Delay1'
  real_T Delay1_DSTATE_ho;             // '<S408>/Delay1'
  real_T VelocitytoPosition_DSTATE_f[3];// '<S397>/Velocity to Position'
  real_T Delay1_DSTATE_ew;             // '<S403>/Delay1'
  real_T Delay1_DSTATE_ch;             // '<S401>/Delay1'
  real_T Delay1_DSTATE_it;             // '<S402>/Delay1'
  real_T AccelerationtoVelocity_DSTATE[3];// '<S395>/Acceleration  to Velocity'
  real_T AccelerationtoVelocity_DSTATE_b[3];// '<S396>/Acceleration  to Velocity' 
  real_T AccelerationtoVelocity_DSTATE_m[3];// '<S397>/Acceleration  to Velocity' 
  real_T UnitDelay1_DSTATE[3];         // '<S151>/Unit Delay1'
  real_T UnitDelay1_DSTATE_o[3];       // '<S149>/Unit Delay1'
  real_T UnitDelay2_DSTATE[3];         // '<S149>/Unit Delay2'
  real_T UnitDelay2_DSTATE_n[3];       // '<S151>/Unit Delay2'
  real_T UnitDelay1_DSTATE_b[3];       // '<S142>/Unit Delay1'
  real_T UnitDelay1_DSTATE_oq[3];      // '<S140>/Unit Delay1'
  real_T UnitDelay2_DSTATE_d[3];       // '<S140>/Unit Delay2'
  real_T UnitDelay2_DSTATE_k[3];       // '<S142>/Unit Delay2'
  real_T Delay1_DSTATE_oy;             // '<S96>/Delay1'
  real_T Delay1_DSTATE_cj;             // '<S99>/Delay1'
  real_T Delay1_DSTATE_em;             // '<S97>/Delay1'
  real_T Delay1_DSTATE_cc;             // '<S100>/Delay1'
  real_T Delay1_DSTATE_f0;             // '<S98>/Delay1'
  real_T Delay1_DSTATE_iu;             // '<S101>/Delay1'
  real_T Delay1_DSTATE_bz;             // '<S81>/Delay1'
  real_T Delay1_DSTATE_mi;             // '<S84>/Delay1'
  real_T Delay1_DSTATE_ea;             // '<S82>/Delay1'
  real_T Delay1_DSTATE_of;             // '<S85>/Delay1'
  real_T Delay1_DSTATE_k2;             // '<S83>/Delay1'
  real_T Delay1_DSTATE_b2;             // '<S86>/Delay1'
  real_T Delay1_DSTATE_as;             // '<S115>/Delay1'
  real_T Delay1_DSTATE_au;             // '<S118>/Delay1'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S77>/Discrete-Time Integrator'
  real_T DiscreteTimeIntegrator1_DSTATE;// '<S77>/Discrete-Time Integrator1'
  real_T Delay1_DSTATE_fk;             // '<S116>/Delay1'
  real_T Delay1_DSTATE_kq;             // '<S119>/Delay1'
  real_T Delay1_DSTATE_c1;             // '<S117>/Delay1'
  real_T Delay1_DSTATE_ems;            // '<S120>/Delay1'
  real_T Delay_DSTATE;                 // '<S58>/Delay'
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
  real_T RED_GyroX;                    // '<Root>/RED_Px1'
  real_T BLACK_AccelX;                 // '<Root>/RED_Px10'
  real_T BLACK_AccelY;                 // '<Root>/RED_Px11'
  real_T BLACK_AccelZ;                 // '<Root>/RED_Px12'
  real_T RED_GyroX_Raw;                // '<Root>/RED_Px19'
  real_T RED_GyroY;                    // '<Root>/RED_Px2'
  real_T RED_GyroY_Raw;                // '<Root>/RED_Px20'
  real_T RED_GyroZ_Raw;                // '<Root>/RED_Px21'
  real_T BLACK_GyroX_Raw;              // '<Root>/RED_Px22'
  real_T BLACK_GyroY_Raw;              // '<Root>/RED_Px23'
  real_T BLACK_GyroZ_Raw;              // '<Root>/RED_Px24'
  real_T RED_Gyro_Attitude;            // '<Root>/RED_Px25'
  real_T BLACK_Gyro_Attitude;          // '<Root>/RED_Px26'
  real_T RED_GyroZ;                    // '<Root>/RED_Px3'
  real_T BLACK_GyroX;                  // '<Root>/RED_Px4'
  real_T BLACK_GyroY;                  // '<Root>/RED_Px5'
  real_T BLACK_GyroZ;                  // '<Root>/RED_Px6'
  real_T RED_AccelX;                   // '<Root>/RED_Px7'
  real_T RED_AccelY;                   // '<Root>/RED_Px8'
  real_T RED_AccelZ;                   // '<Root>/RED_Px9'
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
  real_T NextOutput;                   // '<S395>/Random Number'
  real_T NextOutput_g;                 // '<S396>/Random Number'
  real_T NextOutput_l;                 // '<S397>/Random Number'
  real_T Unwrap_Prev;                  // '<S80>/Unwrap'
  real_T Unwrap_Cumsum;                // '<S80>/Unwrap'
  real_T Unwrap1_Prev;                 // '<S80>/Unwrap1'
  real_T Unwrap1_Cumsum;               // '<S80>/Unwrap1'
  real_T SendBLACKStatestoBLACKPlatform_[137];
                                // '<S80>/Send BLACK States to  BLACK Platform'
  real_T UDPReceive_NetworkLib[137];   // '<S79>/UDP Receive'
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

  uint32_T RandSeed;                   // '<S395>/Random Number'
  uint32_T RandSeed_d;                 // '<S396>/Random Number'
  uint32_T RandSeed_m;                 // '<S397>/Random Number'
  boolean_T Delay_DSTATE_l;            // '<S102>/Delay'
  boolean_T Delay_DSTATE_o;            // '<S121>/Delay'
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
  int8_T DiscreteTimeIntegrator_PrevRese;// '<S77>/Discrete-Time Integrator'
  int8_T DiscreteTimeIntegrator1_PrevRes;// '<S77>/Discrete-Time Integrator1'
  uint8_T icLoad;                      // '<S384>/Delay1'
  uint8_T icLoad_j;                    // '<S386>/Delay1'
  uint8_T icLoad_a;                    // '<S382>/Delay1'
  uint8_T icLoad_e;                    // '<S358>/Delay1'
  uint8_T icLoad_m;                    // '<S360>/Delay1'
  uint8_T icLoad_d;                    // '<S356>/Delay1'
  uint8_T icLoad_dh;                   // '<S339>/Delay1'
  uint8_T icLoad_a2;                   // '<S341>/Delay1'
  uint8_T icLoad_f;                    // '<S343>/Delay1'
  uint8_T icLoad_dq;                   // '<S315>/Delay1'
  uint8_T icLoad_h;                    // '<S317>/Delay1'
  uint8_T icLoad_o;                    // '<S313>/Delay1'
  uint8_T icLoad_c;                    // '<S296>/Delay1'
  uint8_T icLoad_a3;                   // '<S298>/Delay1'
  uint8_T icLoad_my;                   // '<S300>/Delay1'
  uint8_T icLoad_n;                    // '<S279>/Delay1'
  uint8_T icLoad_er;                   // '<S281>/Delay1'
  uint8_T icLoad_ej;                   // '<S283>/Delay1'
  uint8_T icLoad_b;                    // '<S232>/Delay1'
  uint8_T icLoad_n5;                   // '<S234>/Delay1'
  uint8_T icLoad_fj;                   // '<S230>/Delay1'
  uint8_T icLoad_ot;                   // '<S219>/Delay1'
  uint8_T icLoad_k;                    // '<S221>/Delay1'
  uint8_T icLoad_l;                    // '<S217>/Delay1'
  uint8_T icLoad_ji;                   // '<S195>/Delay1'
  uint8_T icLoad_a1;                   // '<S197>/Delay1'
  uint8_T icLoad_o0;                   // '<S199>/Delay1'
  uint8_T icLoad_dy;                   // '<S184>/Delay1'
  uint8_T icLoad_hf;                   // '<S186>/Delay1'
  uint8_T icLoad_kl;                   // '<S182>/Delay1'
  uint8_T icLoad_ns;                   // '<S171>/Delay1'
  uint8_T icLoad_k1;                   // '<S173>/Delay1'
  uint8_T icLoad_ep;                   // '<S169>/Delay1'
  uint8_T icLoad_kp;                   // '<S406>/Delay1'
  uint8_T icLoad_k3;                   // '<S404>/Delay1'
  uint8_T icLoad_jz;                   // '<S405>/Delay1'
  uint8_T icLoad_cs;                   // '<S409>/Delay1'
  uint8_T icLoad_dc;                   // '<S407>/Delay1'
  uint8_T icLoad_nu;                   // '<S408>/Delay1'
  uint8_T icLoad_mt;                   // '<S403>/Delay1'
  uint8_T icLoad_bq;                   // '<S401>/Delay1'
  uint8_T icLoad_cn;                   // '<S402>/Delay1'
  uint8_T icLoad_ku;                   // '<S96>/Delay1'
  uint8_T icLoad_h0;                   // '<S99>/Delay1'
  uint8_T icLoad_hc;                   // '<S97>/Delay1'
  uint8_T icLoad_ez;                   // '<S100>/Delay1'
  uint8_T icLoad_os;                   // '<S98>/Delay1'
  uint8_T icLoad_g;                    // '<S101>/Delay1'
  uint8_T icLoad_nv;                   // '<S81>/Delay1'
  uint8_T icLoad_bj;                   // '<S84>/Delay1'
  uint8_T icLoad_d0;                   // '<S82>/Delay1'
  uint8_T icLoad_fjc;                  // '<S85>/Delay1'
  uint8_T icLoad_dyz;                  // '<S83>/Delay1'
  uint8_T icLoad_p;                    // '<S86>/Delay1'
  uint8_T icLoad_ezp;                  // '<S115>/Delay1'
  uint8_T icLoad_gv;                   // '<S118>/Delay1'
  uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S77>/Discrete-Time Integrator'
  uint8_T DiscreteTimeIntegrator1_IC_LOAD;// '<S77>/Discrete-Time Integrator1'
  uint8_T icLoad_en;                   // '<S116>/Delay1'
  uint8_T icLoad_f2;                   // '<S119>/Delay1'
  uint8_T icLoad_db;                   // '<S117>/Delay1'
  uint8_T icLoad_es;                   // '<S120>/Delay1'
  boolean_T Unwrap_FirstStep;          // '<S80>/Unwrap'
  boolean_T Unwrap1_FirstStep;         // '<S80>/Unwrap1'
  boolean_T Unwrap_FirstStep_h;        // '<S79>/Unwrap'
  boolean_T Unwrap1_FirstStep_j;       // '<S79>/Unwrap1'
  boolean_T Unwrap_FirstStep_c;        // '<S77>/Unwrap'
  boolean_T Unwrap1_FirstStep_f;       // '<S77>/Unwrap1'
  boolean_T EnabledSubsystem_MODE;     // '<S94>/Enabled Subsystem'
  boolean_T EnabledSubsystem_MODE_k;   // '<S77>/Enabled Subsystem'
  boolean_T EnabledSubsystem_MODE_n;   // '<S113>/Enabled Subsystem'
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  DW_SubPhase1_Template_v3_04_2_T SubPhase4_f;// '<S205>/Sub-Phase #4'
  DW_SubPhase1_Template_v3_04_2_T SubPhase1_a;// '<S205>/Sub-Phase #1'
  DW_AHRS2_Template_v3_04_2020a_T AHRS2_pn;// '<S131>/AHRS2'
  DW_AHRS2_Template_v3_04_2020a_T AHRS2_p;// '<S131>/AHRS2'
  DW_AHRS2_Template_v3_04_2020a_T AHRS2;// '<S131>/AHRS2'
} DW_Template_v3_04_2020a_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S400>/Sample and Hold'
  ZCSigState SampleandHold1_Trig_ZCE;  // '<S399>/Sample and Hold1'
  ZCSigState SampleandHold1_Trig_ZCE_g;// '<S398>/Sample and Hold1'
} PrevZCX_Template_v3_04_2020a_T;

// Parameters for system: '<S131>/AHRS2'
struct P_AHRS2_Template_v3_04_2020a_T_ {
  real_T AHRS2_AccelerometerNoise;     // Expression: 0.0001924722
                                          //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_GyroscopeNoise;         // Expression: 9.1385e-5
                                          //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_MagnetometerNoise;      // Expression: 0.1
                                          //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_GyroscopeDriftNoise;    // Expression: 3.0462e-13
                                          //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_LinearAccelerationNoise;// Expression: 0.0096236100000000012
                                          //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_MagneticDisturbanceNoise;// Expression: 0.5
                                           //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_LinearAccelerationDecayFa;// Expression: 0.5
                                            //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_MagneticDisturbanceDecayF;// Expression: 0.5
                                            //  Referenced by: '<S131>/AHRS2'

  real_T AHRS2_ExpectedMagneticFieldStre;// Expression: 33
                                            //  Referenced by: '<S131>/AHRS2'

};

// Parameters for system: '<S8>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Template_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S154>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S154>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S154>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S154>/Puck State'

};

// Parameters for system: '<Root>/Phase #0:  Wait for Synchronization'
struct P_Phase0WaitforSynchronizatio_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S153>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S153>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S153>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S153>/Puck State'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S155>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S155>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S155>/Constant2'

  real_T Constant3_Value_h;            // Expression: 0
                                          //  Referenced by: '<S155>/Constant3'

  real_T Constant4_Value_g;            // Expression: 0
                                          //  Referenced by: '<S155>/Constant4'

  real_T Constant5_Value_e;            // Expression: 0
                                          //  Referenced by: '<S155>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S155>/Constant6'

  real_T PuckState_Value_b;            // Expression: 0
                                          //  Referenced by: '<S155>/Puck State'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior;// '<S8>/Change BLUE Behavior' 
};

// Parameters for system: '<S204>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_04_20_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S209>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S209>/Puck State'

};

// Parameters for system: '<S205>/Sub-Phase #1'
struct P_SubPhase1_Template_v3_04_20_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S249>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S251>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S253>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S239>/Puck State'

};

// Parameters for system: '<S205>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_04__h_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S240>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S240>/Puck State'

};

// Parameters for system: '<S206>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_04__g_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S271>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S271>/Constant1'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S271>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S271>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S271>/Constant6'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S271>/Puck State'

};

// Parameters for system: '<S12>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Templa_c_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S327>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S329>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S331>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S306>/Puck State'

};

// Parameters (default storage)
struct P_Template_v3_04_2020a_T_ {
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
                                          //    '<S165>/kd_tb'
                                          //    '<S309>/kd_tb'
                                          //    '<S352>/kd_tb'
                                          //    '<S213>/kd_tb'
                                          //    '<S226>/kd_tb'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by:
                                          //    '<S178>/kd_tb'
                                          //    '<S322>/kd_tb'
                                          //    '<S365>/kd_tb'
                                          //    '<S244>/kd_tb'
                                          //    '<S257>/kd_tb'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by:
                                          //    '<S191>/kd_tr'
                                          //    '<S335>/kd_tr'
                                          //    '<S378>/kd_tr'
                                          //    '<S275>/kd_tr'
                                          //    '<S289>/kd_tr'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by:
                                          //    '<S166>/kd_xb'
                                          //    '<S310>/kd_xb'
                                          //    '<S353>/kd_xb'
                                          //    '<S214>/kd_xb'
                                          //    '<S227>/kd_xb'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by:
                                          //    '<S179>/kd_xb'
                                          //    '<S323>/kd_xb'
                                          //    '<S366>/kd_xb'
                                          //    '<S245>/kd_xb'
                                          //    '<S258>/kd_xb'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by:
                                          //    '<S192>/kd_xr'
                                          //    '<S336>/kd_xr'
                                          //    '<S379>/kd_xr'
                                          //    '<S276>/kd_xr'
                                          //    '<S290>/kd_xr'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by:
                                          //    '<S167>/kd_yb'
                                          //    '<S311>/kd_yb'
                                          //    '<S354>/kd_yb'
                                          //    '<S215>/kd_yb'
                                          //    '<S228>/kd_yb'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by:
                                          //    '<S180>/kd_yb'
                                          //    '<S324>/kd_yb'
                                          //    '<S367>/kd_yb'
                                          //    '<S246>/kd_yb'
                                          //    '<S259>/kd_yb'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by:
                                          //    '<S193>/kd_yr'
                                          //    '<S337>/kd_yr'
                                          //    '<S380>/kd_yr'
                                          //    '<S277>/kd_yr'
                                          //    '<S291>/kd_yr'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by:
                                          //    '<S165>/kp_tb'
                                          //    '<S309>/kp_tb'
                                          //    '<S352>/kp_tb'
                                          //    '<S213>/kp_tb'
                                          //    '<S226>/kp_tb'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by:
                                          //    '<S178>/kp_tb'
                                          //    '<S322>/kp_tb'
                                          //    '<S365>/kp_tb'
                                          //    '<S244>/kp_tb'
                                          //    '<S257>/kp_tb'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by:
                                          //    '<S191>/kp_tr'
                                          //    '<S335>/kp_tr'
                                          //    '<S378>/kp_tr'
                                          //    '<S275>/kp_tr'
                                          //    '<S289>/kp_tr'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by:
                                          //    '<S166>/kp_xb'
                                          //    '<S310>/kp_xb'
                                          //    '<S353>/kp_xb'
                                          //    '<S214>/kp_xb'
                                          //    '<S227>/kp_xb'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by:
                                          //    '<S179>/kp_xb'
                                          //    '<S323>/kp_xb'
                                          //    '<S366>/kp_xb'
                                          //    '<S245>/kp_xb'
                                          //    '<S258>/kp_xb'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by:
                                          //    '<S192>/kp_xr'
                                          //    '<S336>/kp_xr'
                                          //    '<S379>/kp_xr'
                                          //    '<S276>/kp_xr'
                                          //    '<S290>/kp_xr'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by:
                                          //    '<S167>/kp_yb'
                                          //    '<S311>/kp_yb'
                                          //    '<S354>/kp_yb'
                                          //    '<S215>/kp_yb'
                                          //    '<S228>/kp_yb'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by:
                                          //    '<S180>/kp_yb'
                                          //    '<S324>/kp_yb'
                                          //    '<S367>/kp_yb'
                                          //    '<S246>/kp_yb'
                                          //    '<S259>/kp_yb'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by:
                                          //    '<S193>/kp_yr'
                                          //    '<S337>/kp_yr'
                                          //    '<S380>/kp_yr'
                                          //    '<S277>/kp_yr'
                                          //    '<S291>/kp_yr'

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
                                          //    '<S204>/Constant4'
                                          //    '<S205>/Constant4'
                                          //    '<S206>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by:
                                          //    '<S204>/Constant1'
                                          //    '<S205>/Constant1'
                                          //    '<S206>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by:
                                          //    '<S204>/Constant2'
                                          //    '<S205>/Constant2'
                                          //    '<S206>/Constant2'
                                          //    '<S293>/Constant1'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by:
                                          //    '<S204>/Constant3'
                                          //    '<S205>/Constant3'
                                          //    '<S206>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<Root>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<Root>/Constant6'

  real_T WhoAmI;                       // Variable: WhoAmI
                                          //  Referenced by:
                                          //    '<S3>/Constant'
                                          //    '<S4>/Constant'
                                          //    '<S6>/Constant1'
                                          //    '<S8>/Constant'
                                          //    '<S9>/Constant'
                                          //    '<S10>/Constant'
                                          //    '<S11>/Constant'
                                          //    '<S12>/Constant'
                                          //    '<S13>/Constant'
                                          //    '<S14>/Constant'
                                          //    '<S76>/Constant'

  real_T drop_states_BLACK[3];         // Variable: drop_states_BLACK
                                          //  Referenced by: '<S395>/Velocity to Position'

  real_T drop_states_BLUE[3];          // Variable: drop_states_BLUE
                                          //  Referenced by: '<S396>/Velocity to Position'

  real_T drop_states_RED[3];           // Variable: drop_states_RED
                                          //  Referenced by: '<S397>/Velocity to Position'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S305>/Desired Attitude (BLACK)'
                                          //    '<S305>/Desired Px (BLACK)'
                                          //    '<S305>/Desired Py (BLACK)'
                                          //    '<S348>/Constant'
                                          //    '<S348>/Constant2'
                                          //    '<S348>/Constant3'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S306>/Desired Attitude (BLUE)'
                                          //    '<S306>/Desired Px (BLUE)'
                                          //    '<S306>/Desired Py (BLUE)'
                                          //    '<S349>/Desired Attitude (BLUE)'
                                          //    '<S349>/Desired Px (BLUE)'
                                          //    '<S349>/Desired Py (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S307>/Constant'
                                          //    '<S307>/Constant1'
                                          //    '<S307>/Constant3'
                                          //    '<S350>/Constant'
                                          //    '<S350>/Constant2'
                                          //    '<S350>/Constant3'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S161>/Desired Attitude (BLACK)'
                                          //    '<S161>/Desired Px (BLACK)'
                                          //    '<S161>/Desired Py (BLACK)'
                                          //    '<S208>/Desired Attitude (BLACK)'
                                          //    '<S208>/Desired X-Position (BLACK)'
                                          //    '<S208>/Desired Y-Position (BLACK)'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by:
                                          //    '<S162>/Desired Attitude (BLUE)'
                                          //    '<S162>/Desired Px (BLUE)'
                                          //    '<S162>/Desired Py (BLUE)'
                                          //    '<S239>/Desired Attitude (BLUE)'
                                          //    '<S239>/Desired Px (BLUE)'
                                          //    '<S239>/Desired Py (BLUE)'
                                          //    '<S242>/Desired Attitude (BLUE)'
                                          //    '<S242>/Desired Px (BLUE)'
                                          //    '<S242>/Desired Py (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S163>/Constant'
                                          //    '<S163>/Constant1'
                                          //    '<S163>/Constant3'
                                          //    '<S270>/Desired Attitude (RED)'
                                          //    '<S270>/Desired X-Position (RED)'
                                          //    '<S270>/Desired Y-Position (RED)'
                                          //    '<S273>/Desired X-Position (RED)'
                                          //    '<S273>/Desired Y-Position (RED)'

  real_T model_param[6];               // Variable: model_param
                                          //  Referenced by:
                                          //    '<S395>/MATLAB Function'
                                          //    '<S396>/MATLAB Function'
                                          //    '<S397>/MATLAB Function'

  real_T noise_variance_BLACK;         // Variable: noise_variance_BLACK
                                          //  Referenced by: '<S395>/Random Number'

  real_T noise_variance_BLUE;          // Variable: noise_variance_BLUE
                                          //  Referenced by: '<S396>/Random Number'

  real_T noise_variance_RED;           // Variable: noise_variance_RED
                                          //  Referenced by: '<S397>/Random Number'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by:
                                          //    '<S75>/Which PLATFORM is being used?'
                                          //    '<S77>/Stream PhaseSpace to Platform'

  real_T serverRate;                   // Variable: serverRate
                                          //  Referenced by:
                                          //    '<S398>/Constant1'
                                          //    '<S399>/Constant1'
                                          //    '<S400>/Constant'
                                          //    '<S401>/divide by delta T'
                                          //    '<S402>/divide by delta T'
                                          //    '<S403>/divide by delta T'
                                          //    '<S404>/divide by delta T'
                                          //    '<S405>/divide by delta T'
                                          //    '<S406>/divide by delta T'
                                          //    '<S407>/divide by delta T'
                                          //    '<S408>/divide by delta T'
                                          //    '<S409>/divide by delta T'
                                          //    '<S115>/divide by delta T'
                                          //    '<S116>/divide by delta T'
                                          //    '<S117>/divide by delta T'
                                          //    '<S118>/divide by delta T'
                                          //    '<S119>/divide by delta T'
                                          //    '<S120>/divide by delta T'
                                          //    '<S169>/divide by delta T'
                                          //    '<S171>/divide by delta T'
                                          //    '<S173>/divide by delta T'
                                          //    '<S182>/divide by delta T'
                                          //    '<S184>/divide by delta T'
                                          //    '<S186>/divide by delta T'
                                          //    '<S195>/divide by delta T'
                                          //    '<S197>/divide by delta T'
                                          //    '<S199>/divide by delta T'
                                          //    '<S313>/divide by delta T'
                                          //    '<S315>/divide by delta T'
                                          //    '<S317>/divide by delta T'
                                          //    '<S326>/divide by delta T'
                                          //    '<S328>/divide by delta T'
                                          //    '<S330>/divide by delta T'
                                          //    '<S339>/divide by delta T'
                                          //    '<S341>/divide by delta T'
                                          //    '<S343>/divide by delta T'
                                          //    '<S356>/divide by delta T'
                                          //    '<S358>/divide by delta T'
                                          //    '<S360>/divide by delta T'
                                          //    '<S369>/divide by delta T'
                                          //    '<S371>/divide by delta T'
                                          //    '<S373>/divide by delta T'
                                          //    '<S382>/divide by delta T'
                                          //    '<S384>/divide by delta T'
                                          //    '<S386>/divide by delta T'
                                          //    '<S81>/divide by delta T'
                                          //    '<S82>/divide by delta T'
                                          //    '<S83>/divide by delta T'
                                          //    '<S84>/divide by delta T'
                                          //    '<S85>/divide by delta T'
                                          //    '<S86>/divide by delta T'
                                          //    '<S96>/divide by delta T'
                                          //    '<S97>/divide by delta T'
                                          //    '<S98>/divide by delta T'
                                          //    '<S99>/divide by delta T'
                                          //    '<S100>/divide by delta T'
                                          //    '<S101>/divide by delta T'
                                          //    '<S217>/divide by delta T'
                                          //    '<S219>/divide by delta T'
                                          //    '<S221>/divide by delta T'
                                          //    '<S230>/divide by delta T'
                                          //    '<S232>/divide by delta T'
                                          //    '<S234>/divide by delta T'
                                          //    '<S248>/divide by delta T'
                                          //    '<S250>/divide by delta T'
                                          //    '<S252>/divide by delta T'
                                          //    '<S261>/divide by delta T'
                                          //    '<S263>/divide by delta T'
                                          //    '<S265>/divide by delta T'
                                          //    '<S279>/divide by delta T'
                                          //    '<S281>/divide by delta T'
                                          //    '<S283>/divide by delta T'
                                          //    '<S296>/divide by delta T'
                                          //    '<S298>/divide by delta T'
                                          //    '<S300>/divide by delta T'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by:
                                          //    '<S7>/Constant'
                                          //    '<S19>/Constant'
                                          //    '<S25>/Constant'
                                          //    '<S57>/Constant'
                                          //    '<S74>/Constant'
                                          //    '<S134>/Constant'
                                          //    '<S156>/Constant'
                                          //    '<S160>/Constant'
                                          //    '<S164>/Constant'
                                          //    '<S207>/Constant'
                                          //    '<S308>/Constant'
                                          //    '<S351>/Constant'
                                          //    '<S394>/Constant'
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

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by: '<S211>/Desired Y-Position (BLACK)'

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
                                          //  Referenced by: '<S122>/Out1'

  real_T Out1_Y0_b;                    // Computed Parameter: Out1_Y0_b
                                          //  Referenced by: '<S114>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S125>/Out1'

  real_T Out1_Y0_bc;                   // Computed Parameter: Out1_Y0_bc
                                          //  Referenced by: '<S126>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S127>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S128>/Out1'

  real_T Out1_Y0_no;                   // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S129>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S130>/Out1'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S112>/Constant'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S77>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S77>/Discrete-Time Integrator1'

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
                                          //  Referenced by: '<S103>/Out1'

  real_T Out1_Y0_ap;                   // Computed Parameter: Out1_Y0_ap
                                          //  Referenced by: '<S95>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S106>/Out1'

  real_T Out1_Y0_f;                    // Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S107>/Out1'

  real_T Out1_Y0_fy;                   // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S108>/Out1'

  real_T Out1_Y0_e2;                   // Computed Parameter: Out1_Y0_e2
                                          //  Referenced by: '<S109>/Out1'

  real_T Out1_Y0_kz;                   // Computed Parameter: Out1_Y0_kz
                                          //  Referenced by: '<S110>/Out1'

  real_T Out1_Y0_bg;                   // Computed Parameter: Out1_Y0_bg
                                          //  Referenced by: '<S111>/Out1'

  real_T Constant_Value_c;             // Expression: 0
                                          //  Referenced by: '<S93>/Constant'

  real_T Gain_Gain;                    // Expression: pi/180
                                          //  Referenced by: '<S131>/Gain'

  real_T Gain1_Gain;                   // Expression: 9.81
                                          //  Referenced by: '<S131>/Gain1'

  real_T UnitDelay1_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S142>/Unit Delay1'

  real_T Constant_Value_p;             // Expression: 4
                                          //  Referenced by: '<S131>/Constant'

  real_T Constant_Value_o;             // Expression: zeta
                                          //  Referenced by: '<S142>/Constant'

  real_T Constant1_Value;              // Expression: tau
                                          //  Referenced by: '<S142>/Constant1'

  real_T UnitDelay1_InitialCondition_g;// Expression: 0
                                          //  Referenced by: '<S140>/Unit Delay1'

  real_T Constant_Value_b;             // Expression: zeta
                                          //  Referenced by: '<S140>/Constant'

  real_T Constant1_Value_a;            // Expression: tau
                                          //  Referenced by: '<S140>/Constant1'

  real_T Gain1_Gain_j;                 // Expression: 2
                                          //  Referenced by: '<S140>/Gain1'

  real_T UnitDelay2_InitialCondition;  // Expression: 0
                                          //  Referenced by: '<S140>/Unit Delay2'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S142>/Gain1'

  real_T UnitDelay2_InitialCondition_o;// Expression: 0
                                          //  Referenced by: '<S142>/Unit Delay2'

  real_T Gain_Gain_b;                  // Expression: pi/180
                                          //  Referenced by: '<S132>/Gain'

  real_T Gain1_Gain_b;                 // Expression: 9.81
                                          //  Referenced by: '<S132>/Gain1'

  real_T Gain_Gain_h;                  // Expression: pi/180
                                          //  Referenced by: '<S133>/Gain'

  real_T Gain1_Gain_g;                 // Expression: 9.81
                                          //  Referenced by: '<S133>/Gain1'

  real_T UnitDelay1_InitialCondition_k;// Expression: 0
                                          //  Referenced by: '<S151>/Unit Delay1'

  real_T Constant_Value_ox;            // Expression: 4
                                          //  Referenced by: '<S133>/Constant'

  real_T Constant_Value_i;             // Expression: zeta
                                          //  Referenced by: '<S151>/Constant'

  real_T Constant1_Value_i;            // Expression: tau
                                          //  Referenced by: '<S151>/Constant1'

  real_T UnitDelay1_InitialCondition_a;// Expression: 0
                                          //  Referenced by: '<S149>/Unit Delay1'

  real_T Constant_Value_k;             // Expression: zeta
                                          //  Referenced by: '<S149>/Constant'

  real_T Constant1_Value_h;            // Expression: tau
                                          //  Referenced by: '<S149>/Constant1'

  real_T Gain1_Gain_k;                 // Expression: 2
                                          //  Referenced by: '<S149>/Gain1'

  real_T UnitDelay2_InitialCondition_l;// Expression: 0
                                          //  Referenced by: '<S149>/Unit Delay2'

  real_T Gain1_Gain_c;                 // Expression: 2
                                          //  Referenced by: '<S151>/Gain1'

  real_T UnitDelay2_InitialCondition_j;// Expression: 0
                                          //  Referenced by: '<S151>/Unit Delay2'

  real_T _Y0[3];                       // Expression: initCond
                                          //  Referenced by: '<S414>/ '

  real_T _Y0_g[3];                     // Expression: initCond
                                          //  Referenced by: '<S416>/ '

  real_T _Y0_l[3];                     // Expression: initCond
                                          //  Referenced by: '<S418>/ '

  real_T Out1_Y0_dj;                   // Computed Parameter: Out1_Y0_dj
                                          //  Referenced by: '<S419>/Out1'

  real_T Out1_Y0_kb;                   // Computed Parameter: Out1_Y0_kb
                                          //  Referenced by: '<S420>/Out1'

  real_T Out1_Y0_pm;                   // Computed Parameter: Out1_Y0_pm
                                          //  Referenced by: '<S421>/Out1'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S422>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S423>/Out1'

  real_T Out1_Y0_l;                    // Computed Parameter: Out1_Y0_l
                                          //  Referenced by: '<S424>/Out1'

  real_T Out1_Y0_ia;                   // Computed Parameter: Out1_Y0_ia
                                          //  Referenced by: '<S425>/Out1'

  real_T Out1_Y0_bgo;                  // Computed Parameter: Out1_Y0_bgo
                                          //  Referenced by: '<S426>/Out1'

  real_T Out1_Y0_kc;                   // Computed Parameter: Out1_Y0_kc
                                          //  Referenced by: '<S427>/Out1'

  real_T VelocitytoPosition_gainval;
                               // Computed Parameter: VelocitytoPosition_gainval
                                  //  Referenced by: '<S395>/Velocity to Position'

  real_T RandomNumber_Mean;            // Expression: 0
                                          //  Referenced by: '<S395>/Random Number'

  real_T RandomNumber_Seed;            // Expression: 0
                                          //  Referenced by: '<S395>/Random Number'

  real_T VelocitytoPosition_gainval_f;
                             // Computed Parameter: VelocitytoPosition_gainval_f
                                //  Referenced by: '<S396>/Velocity to Position'

  real_T RandomNumber_Mean_b;          // Expression: 0
                                          //  Referenced by: '<S396>/Random Number'

  real_T RandomNumber_Seed_k;          // Expression: 0
                                          //  Referenced by: '<S396>/Random Number'

  real_T VelocitytoPosition_gainval_a;
                             // Computed Parameter: VelocitytoPosition_gainval_a
                                //  Referenced by: '<S397>/Velocity to Position'

  real_T RandomNumber_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S397>/Random Number'

  real_T RandomNumber_Seed_i;          // Expression: 0
                                          //  Referenced by: '<S397>/Random Number'

  real_T AccelerationtoVelocity_gainval;
                           // Computed Parameter: AccelerationtoVelocity_gainval
                              //  Referenced by: '<S395>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC;    // Expression: 0
                                          //  Referenced by: '<S395>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_b;
                          // Computed Parameter: AccelerationtoVelocity_gainva_b
                             //  Referenced by: '<S396>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_p;  // Expression: 0
                                          //  Referenced by: '<S396>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_k;
                          // Computed Parameter: AccelerationtoVelocity_gainva_k
                             //  Referenced by: '<S397>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_c;  // Expression: 0
                                          //  Referenced by: '<S397>/Acceleration  to Velocity'

  real_T Out1_Y0_mp;                   // Computed Parameter: Out1_Y0_mp
                                          //  Referenced by: '<S170>/Out1'

  real_T Out1_Y0_av;                   // Computed Parameter: Out1_Y0_av
                                          //  Referenced by: '<S172>/Out1'

  real_T Out1_Y0_g;                    // Computed Parameter: Out1_Y0_g
                                          //  Referenced by: '<S174>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S161>/Puck State'

  real_T Out1_Y0_o;                    // Computed Parameter: Out1_Y0_o
                                          //  Referenced by: '<S183>/Out1'

  real_T Out1_Y0_a4;                   // Computed Parameter: Out1_Y0_a4
                                          //  Referenced by: '<S185>/Out1'

  real_T Out1_Y0_nv;                   // Computed Parameter: Out1_Y0_nv
                                          //  Referenced by: '<S187>/Out1'

  real_T PuckState_Value_o;            // Expression: 1
                                          //  Referenced by: '<S162>/Puck State'

  real_T Out1_Y0_fr;                   // Computed Parameter: Out1_Y0_fr
                                          //  Referenced by: '<S196>/Out1'

  real_T Out1_Y0_bk;                   // Computed Parameter: Out1_Y0_bk
                                          //  Referenced by: '<S198>/Out1'

  real_T Out1_Y0_j2;                   // Computed Parameter: Out1_Y0_j2
                                          //  Referenced by: '<S200>/Out1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S163>/Constant2'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S163>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S163>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S163>/Constant6'

  real_T PuckState_Value_l;            // Expression: 1
                                          //  Referenced by: '<S163>/Puck State'

  real_T Out1_Y0_pn;                   // Computed Parameter: Out1_Y0_pn
                                          //  Referenced by: '<S218>/Out1'

  real_T Out1_Y0_bd;                   // Computed Parameter: Out1_Y0_bd
                                          //  Referenced by: '<S220>/Out1'

  real_T Out1_Y0_ai;                   // Computed Parameter: Out1_Y0_ai
                                          //  Referenced by: '<S222>/Out1'

  real_T PuckState_Value_n;            // Expression: 1
                                          //  Referenced by: '<S208>/Puck State'

  real_T Out1_Y0_ln;                   // Computed Parameter: Out1_Y0_ln
                                          //  Referenced by: '<S231>/Out1'

  real_T Out1_Y0_bw;                   // Computed Parameter: Out1_Y0_bw
                                          //  Referenced by: '<S233>/Out1'

  real_T Out1_Y0_ac;                   // Computed Parameter: Out1_Y0_ac
                                          //  Referenced by: '<S235>/Out1'

  real_T DesiredXPositionBLACK_Value;  // Expression: -0.15
                                          //  Referenced by: '<S211>/Desired X-Position (BLACK)'

  real_T DesiredXPositionBLACK1_Value; // Expression: 0
                                          //  Referenced by: '<S211>/Desired X-Position (BLACK)1'

  real_T PuckState_Value_e;            // Expression: 1
                                          //  Referenced by: '<S211>/Puck State'

  real_T Out1_Y0_at;                   // Computed Parameter: Out1_Y0_at
                                          //  Referenced by: '<S280>/Out1'

  real_T Out1_Y0_dw;                   // Computed Parameter: Out1_Y0_dw
                                          //  Referenced by: '<S282>/Out1'

  real_T Out1_Y0_jd;                   // Computed Parameter: Out1_Y0_jd
                                          //  Referenced by: '<S284>/Out1'

  real_T Constant1_Value_o;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant1'

  real_T Constant4_Value_l;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant4'

  real_T Constant5_Value_b;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant5'

  real_T Constant6_Value_a;            // Expression: 0
                                          //  Referenced by: '<S270>/Constant6'

  real_T PuckState_Value_c;            // Expression: 1
                                          //  Referenced by: '<S270>/Puck State'

  real_T Out1_Y0_gm;                   // Computed Parameter: Out1_Y0_gm
                                          //  Referenced by: '<S297>/Out1'

  real_T Out1_Y0_eb;                   // Computed Parameter: Out1_Y0_eb
                                          //  Referenced by: '<S299>/Out1'

  real_T Out1_Y0_hc;                   // Computed Parameter: Out1_Y0_hc
                                          //  Referenced by: '<S301>/Out1'

  real_T DesiredRateBLACK_Value;       // Expression: 0.104719755/2
                                          //  Referenced by: '<S288>/Desired Rate (BLACK)'

  real_T Constant1_Value_f;            // Expression: 0
                                          //  Referenced by: '<S273>/Constant1'

  real_T Constant4_Value_k;            // Expression: 0
                                          //  Referenced by: '<S273>/Constant4'

  real_T Constant5_Value_l;            // Expression: 0
                                          //  Referenced by: '<S273>/Constant5'

  real_T Constant6_Value_k;            // Expression: 0
                                          //  Referenced by: '<S273>/Constant6'

  real_T PuckState_Value_f;            // Expression: 1
                                          //  Referenced by: '<S273>/Puck State'

  real_T Out1_Y0_jr;                   // Computed Parameter: Out1_Y0_jr
                                          //  Referenced by: '<S314>/Out1'

  real_T Out1_Y0_mr;                   // Computed Parameter: Out1_Y0_mr
                                          //  Referenced by: '<S316>/Out1'

  real_T Out1_Y0_i0;                   // Computed Parameter: Out1_Y0_i0
                                          //  Referenced by: '<S318>/Out1'

  real_T PuckState_Value_fj;           // Expression: 1
                                          //  Referenced by: '<S305>/Puck State'

  real_T Out1_Y0_nf;                   // Computed Parameter: Out1_Y0_nf
                                          //  Referenced by: '<S340>/Out1'

  real_T Out1_Y0_gb;                   // Computed Parameter: Out1_Y0_gb
                                          //  Referenced by: '<S342>/Out1'

  real_T Out1_Y0_da;                   // Computed Parameter: Out1_Y0_da
                                          //  Referenced by: '<S344>/Out1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S307>/Constant2'

  real_T Constant4_Value_h;            // Expression: 0
                                          //  Referenced by: '<S307>/Constant4'

  real_T Constant5_Value_h;            // Expression: 0
                                          //  Referenced by: '<S307>/Constant5'

  real_T Constant6_Value_p;            // Expression: 0
                                          //  Referenced by: '<S307>/Constant6'

  real_T PuckState_Value_od;           // Expression: 1
                                          //  Referenced by: '<S307>/Puck State'

  real_T Out1_Y0_gx;                   // Computed Parameter: Out1_Y0_gx
                                          //  Referenced by: '<S357>/Out1'

  real_T Out1_Y0_fj;                   // Computed Parameter: Out1_Y0_fj
                                          //  Referenced by: '<S359>/Out1'

  real_T Out1_Y0_bm;                   // Computed Parameter: Out1_Y0_bm
                                          //  Referenced by: '<S361>/Out1'

  real_T PuckState_Value_g;            // Expression: 1
                                          //  Referenced by: '<S348>/Puck State'

  real_T Out1_Y0_i3;                   // Computed Parameter: Out1_Y0_i3
                                          //  Referenced by: '<S383>/Out1'

  real_T Out1_Y0_bs;                   // Computed Parameter: Out1_Y0_bs
                                          //  Referenced by: '<S385>/Out1'

  real_T Out1_Y0_c5;                   // Computed Parameter: Out1_Y0_c5
                                          //  Referenced by: '<S387>/Out1'

  real_T Constant1_Value_k;            // Expression: 0
                                          //  Referenced by: '<S350>/Constant1'

  real_T Constant4_Value_p;            // Expression: 0
                                          //  Referenced by: '<S350>/Constant4'

  real_T Constant5_Value_o;            // Expression: 0
                                          //  Referenced by: '<S350>/Constant5'

  real_T Constant6_Value_ao;           // Expression: 0
                                          //  Referenced by: '<S350>/Constant6'

  real_T PuckState_Value_es;           // Expression: 1
                                          //  Referenced by: '<S350>/Puck State'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S391>/Constant3'

  real_T Constant4_Value_e;            // Expression: 0
                                          //  Referenced by: '<S391>/Constant4'

  real_T Constant5_Value_n;            // Expression: 0
                                          //  Referenced by: '<S391>/Constant5'

  real_T PuckState_Value_gd;           // Expression: 0
                                          //  Referenced by: '<S391>/Puck State'

  real_T Constant_Value_j;             // Expression: 0
                                          //  Referenced by: '<S393>/Constant'

  real_T Constant1_Value_l;            // Expression: 0
                                          //  Referenced by: '<S393>/Constant1'

  real_T Constant2_Value_m;            // Expression: 0
                                          //  Referenced by: '<S393>/Constant2'

  real_T Constant4_Value_o;            // Expression: 0
                                          //  Referenced by: '<S393>/Constant4'

  real_T Constant5_Value_f;            // Expression: 0
                                          //  Referenced by: '<S393>/Constant5'

  real_T Constant6_Value_j;            // Expression: 0
                                          //  Referenced by: '<S393>/Constant6'

  real_T PuckState_Value_h;            // Expression: 0
                                          //  Referenced by: '<S393>/Puck State'

  real_T Gain_Gain_a;                  // Expression: -1
                                          //  Referenced by: '<S393>/Gain'

  real_T Saturation_UpperSat;          // Expression: 0.005
                                          //  Referenced by: '<S393>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -0.005
                                          //  Referenced by: '<S393>/Saturation'

  real_T BLACK_Fx_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat1'

  real_T BLACK_Fy_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy_Sat1'

  real_T BLACK_Tz_Sat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Tz_Sat1'

  real_T RED_Tz4_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz4'

  real_T RED_Tz5_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz5'

  real_T RED_Tz6_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz6'

  real_T RED_Tz_RWSat1_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW Sat1'

  real_T RED_Tz_RW1_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_RW1'

  real_T RED_Tz_Sat1_InitialValue;     // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_Sat1'

  real_T BLACK_Fx_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx'

  real_T BLACK_Fx1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx1'

  real_T BLACK_Fx_Sat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat'

  real_T BLACK_Fx_Sat2_InitialValue;   // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fx_Sat2'

  real_T BLACK_Fy_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy'

  real_T BLACK_Fy1_InitialValue;       // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy1'

  real_T BLACK_Fy_Sat_InitialValue;    // Expression: 0
                                          //  Referenced by: '<Root>/BLACK_Fy_Sat'

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

  real_T RED_Px19_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px19'

  real_T RED_Px2_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px2'

  real_T RED_Px20_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px20'

  real_T RED_Px21_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px21'

  real_T RED_Px22_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px22'

  real_T RED_Px23_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px23'

  real_T RED_Px24_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px24'

  real_T RED_Px25_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px25'

  real_T RED_Px26_InitialValue;        // Expression: 0
                                          //  Referenced by: '<Root>/RED_Px26'

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

  real_T RED_Tz_Sat_InitialValue;      // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz_Sat'

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

  boolean_T Delay_InitialCondition_c;
                                 // Computed Parameter: Delay_InitialCondition_c
                                    //  Referenced by: '<S121>/Delay'

  boolean_T Delay_InitialCondition_n;
                                 // Computed Parameter: Delay_InitialCondition_n
                                    //  Referenced by: '<S102>/Delay'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior_k;// '<S14>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_b;// '<S13>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_gj;// '<S12>/Change BLUE Behavior' 
  P_SubPhase2_Template_v3_04__g_T SubPhase3_b;// '<S206>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_04__g_T SubPhase2_g;// '<S206>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_04_20_T SubPhase4_f;// '<S205>/Sub-Phase #4'
  P_SubPhase2_Template_v3_04__h_T SubPhase3_p;// '<S205>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_04__h_T SubPhase2_m;// '<S205>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_04_20_T SubPhase1_a;// '<S205>/Sub-Phase #1'
  P_SubPhase2_Template_v3_04_20_T SubPhase3;// '<S204>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_04_20_T SubPhase2;// '<S204>/Sub-Phase #2 '
  P_Phase0WaitforSynchronizatio_T Phase1StartFloating;// '<Root>/Phase #1:  Start Floating ' 
  P_Phase0WaitforSynchronizatio_T Phase0WaitforSynchronization;
                                // '<Root>/Phase #0:  Wait for Synchronization'
  P_AHRS2_Template_v3_04_2020a_T AHRS2_pn;// '<S131>/AHRS2'
  P_AHRS2_Template_v3_04_2020a_T AHRS2_p;// '<S131>/AHRS2'
  P_AHRS2_Template_v3_04_2020a_T AHRS2;// '<S131>/AHRS2'
};

// Real-time Model Data Structure
struct tag_RTM_Template_v3_04_2020a_T {
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

  extern P_Template_v3_04_2020a_T Template_v3_04_2020a_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_Template_v3_04_2020a_T Template_v3_04_2020a_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_Template_v3_04_2020a_T Template_v3_04_2020a_DW;

// Zero-crossing (trigger) state
extern PrevZCX_Template_v3_04_2020a_T Template_v3_04_2020a_PrevZCX;

// External function called from main
#ifdef __cplusplus

extern "C" {

#endif

  extern void Template_v3_04_2020a_SetEventsForThisBaseStep(boolean_T
    *eventFlags);

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void Template_v3_04_2020a_SetEventsForThisBaseStep(boolean_T
    *eventFlags);
  extern void Template_v3_04_2020a_initialize(void);
  extern void Template_v3_04_2020a_step(int_T tid);
  extern void Template_v3_04_2020a_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_Template_v3_04_2020a_T *const Template_v3_04_2020a_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S104>/Check Signal Attributes' : Unused code path elimination
//  Block '<S105>/Check Signal Attributes' : Unused code path elimination
//  Block '<S123>/Check Signal Attributes' : Unused code path elimination
//  Block '<S124>/Check Signal Attributes' : Unused code path elimination
//  Block '<S79>/Reshape' : Reshape block reduction
//  Block '<S131>/Reshape' : Reshape block reduction
//  Block '<S131>/Reshape1' : Reshape block reduction
//  Block '<S131>/Reshape2' : Reshape block reduction
//  Block '<S132>/Reshape' : Reshape block reduction
//  Block '<S132>/Reshape1' : Reshape block reduction
//  Block '<S132>/Reshape2' : Reshape block reduction
//  Block '<S133>/Reshape' : Reshape block reduction
//  Block '<S133>/Reshape1' : Reshape block reduction
//  Block '<S133>/Reshape2' : Reshape block reduction


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
//  '<Root>' : 'Template_v3_04_2020a'
//  '<S1>'   : 'Template_v3_04_2020a/Data Logger Subsystem'
//  '<S2>'   : 'Template_v3_04_2020a/Float & Magnet Controls'
//  '<S3>'   : 'Template_v3_04_2020a/From Force//Torque to PWM Signal'
//  '<S4>'   : 'Template_v3_04_2020a/From Torque, Command RW'
//  '<S5>'   : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP'
//  '<S6>'   : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms'
//  '<S7>'   : 'Template_v3_04_2020a/Is this a  simulation?'
//  '<S8>'   : 'Template_v3_04_2020a/Phase #0:  Wait for Synchronization'
//  '<S9>'   : 'Template_v3_04_2020a/Phase #1:  Start Floating '
//  '<S10>'  : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position'
//  '<S11>'  : 'Template_v3_04_2020a/Phase #3: Experiment'
//  '<S12>'  : 'Template_v3_04_2020a/Phase #4:  Return Home'
//  '<S13>'  : 'Template_v3_04_2020a/Phase #5:  Hold Home'
//  '<S14>'  : 'Template_v3_04_2020a/Phase #6:  Stop Floating and Spin Down RW'
//  '<S15>'  : 'Template_v3_04_2020a/Real-Time Visualization'
//  '<S16>'  : 'Template_v3_04_2020a/Simulate Plant Dynamics'
//  '<S17>'  : 'Template_v3_04_2020a/Subsystem'
//  '<S18>'  : 'Template_v3_04_2020a/Float & Magnet Controls/Change Behavior'
//  '<S19>'  : 'Template_v3_04_2020a/Float & Magnet Controls/Is this a  simulation?'
//  '<S20>'  : 'Template_v3_04_2020a/Float & Magnet Controls/Change Behavior/GPIO for Magnet'
//  '<S21>'  : 'Template_v3_04_2020a/Float & Magnet Controls/Change Behavior/GPIO for Pucks'
//  '<S22>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior'
//  '<S23>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior'
//  '<S24>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior'
//  '<S25>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Is this a  simulation?'
//  '<S26>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Send Commands to PWM Blocks'
//  '<S27>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF'
//  '<S28>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body'
//  '<S29>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S30>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S31>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S32>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S33>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S34>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S35>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S36>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF'
//  '<S37>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body'
//  '<S38>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S39>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S40>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S41>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S42>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S43>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S44>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S45>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF'
//  '<S46>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body'
//  '<S47>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S48>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S49>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S50>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S51>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S52>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S53>'  : 'Template_v3_04_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S54>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change BLACK Behavior'
//  '<S55>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change BLUE Behavior'
//  '<S56>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior'
//  '<S57>'  : 'Template_v3_04_2020a/From Torque, Command RW/Is this a  simulation?'
//  '<S58>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal'
//  '<S59>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM'
//  '<S60>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal/Calculate RW RPM Increment'
//  '<S61>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Check if RW is Ready'
//  '<S62>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Convert Wheel Rate to  Motor Rate'
//  '<S63>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Delay Bank'
//  '<S64>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Get RW Direction'
//  '<S65>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status'
//  '<S66>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/RPM to PWM Value'
//  '<S67>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller'
//  '<S68>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send PWM to Motor Controller'
//  '<S69>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor'
//  '<S70>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status/GPIO Read1'
//  '<S71>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller/GPIO Write'
//  '<S72>'  : 'Template_v3_04_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor/GPIO Write1'
//  '<S73>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Initialize Universal Time (Simulation)'
//  '<S74>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Is this a  simulation?1'
//  '<S75>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States'
//  '<S76>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM'
//  '<S77>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM'
//  '<S78>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Is this a  simulation?'
//  '<S79>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States'
//  '<S80>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States'
//  '<S81>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1'
//  '<S82>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2'
//  '<S83>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3'
//  '<S84>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4'
//  '<S85>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5'
//  '<S86>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6'
//  '<S87>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1/Hold this value'
//  '<S88>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2/Hold this value'
//  '<S89>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3/Hold this value'
//  '<S90>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4/Hold this value'
//  '<S91>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5/Hold this value'
//  '<S92>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6/Hold this value'
//  '<S93>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Compare To Zero'
//  '<S94>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time'
//  '<S95>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Enabled Subsystem'
//  '<S96>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1'
//  '<S97>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2'
//  '<S98>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3'
//  '<S99>'  : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4'
//  '<S100>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5'
//  '<S101>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6'
//  '<S102>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector'
//  '<S103>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Enabled Subsystem'
//  '<S104>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S105>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S106>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1/Hold this value'
//  '<S107>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2/Hold this value'
//  '<S108>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3/Hold this value'
//  '<S109>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4/Hold this value'
//  '<S110>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5/Hold this value'
//  '<S111>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6/Hold this value'
//  '<S112>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Compare To Zero'
//  '<S113>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time'
//  '<S114>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Enabled Subsystem'
//  '<S115>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1'
//  '<S116>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2'
//  '<S117>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3'
//  '<S118>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4'
//  '<S119>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5'
//  '<S120>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6'
//  '<S121>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector'
//  '<S122>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Enabled Subsystem'
//  '<S123>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S124>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S125>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1/Hold this value'
//  '<S126>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2/Hold this value'
//  '<S127>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3/Hold this value'
//  '<S128>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4/Hold this value'
//  '<S129>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5/Hold this value'
//  '<S130>' : 'Template_v3_04_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6/Hold this value'
//  '<S131>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior'
//  '<S132>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLUE Behavior'
//  '<S133>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior'
//  '<S134>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Is this a  simulation?'
//  '<S135>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/ChangeOrientation'
//  '<S136>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass'
//  '<S137>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass1'
//  '<S138>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/MATLAB Function1'
//  '<S139>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/MATLAB Function2'
//  '<S140>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass/SOS1'
//  '<S141>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass/SOS1/MATLAB Function'
//  '<S142>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass1/SOS1'
//  '<S143>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change BLACK Behavior/Discrete Varying Lowpass1/SOS1/MATLAB Function'
//  '<S144>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/ChangeOrientation'
//  '<S145>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass'
//  '<S146>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass1'
//  '<S147>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/MATLAB Function1'
//  '<S148>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/MATLAB Function2'
//  '<S149>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass/SOS1'
//  '<S150>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass/SOS1/MATLAB Function'
//  '<S151>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass1/SOS1'
//  '<S152>' : 'Template_v3_04_2020a/Gyroscope & Acceleration Algorithms/Change RED Behavior/Discrete Varying Lowpass1/SOS1/MATLAB Function'
//  '<S153>' : 'Template_v3_04_2020a/Phase #0:  Wait for Synchronization/Change BLACK Behavior'
//  '<S154>' : 'Template_v3_04_2020a/Phase #0:  Wait for Synchronization/Change BLUE Behavior'
//  '<S155>' : 'Template_v3_04_2020a/Phase #0:  Wait for Synchronization/Change RED Behavior'
//  '<S156>' : 'Template_v3_04_2020a/Phase #0:  Wait for Synchronization/Is this a  simulation?'
//  '<S157>' : 'Template_v3_04_2020a/Phase #1:  Start Floating /Change BLACK Behavior'
//  '<S158>' : 'Template_v3_04_2020a/Phase #1:  Start Floating /Change BLUE Behavior'
//  '<S159>' : 'Template_v3_04_2020a/Phase #1:  Start Floating /Change RED Behavior'
//  '<S160>' : 'Template_v3_04_2020a/Phase #1:  Start Floating /Is this a  simulation?'
//  '<S161>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior'
//  '<S162>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior'
//  '<S163>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior'
//  '<S164>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Is this a  simulation?'
//  '<S165>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S166>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S167>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S168>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control'
//  '<S169>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S170>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S171>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S172>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S173>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S174>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S175>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S176>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S177>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S178>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S179>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S180>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S181>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control'
//  '<S182>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S183>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S184>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S185>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S186>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S187>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S188>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S189>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S190>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S191>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S192>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S193>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S194>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control'
//  '<S195>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S196>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S197>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S198>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S199>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S200>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S201>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S202>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S203>' : 'Template_v3_04_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S204>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior'
//  '<S205>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior'
//  '<S206>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior'
//  '<S207>' : 'Template_v3_04_2020a/Phase #3: Experiment/Is this a  simulation?'
//  '<S208>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1'
//  '<S209>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #2 '
//  '<S210>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #3 '
//  '<S211>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4'
//  '<S212>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Subsystem'
//  '<S213>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S214>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S215>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S216>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control'
//  '<S217>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S218>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S219>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S220>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S221>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S222>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S223>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S224>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S225>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S226>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S227>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S228>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S229>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control'
//  '<S230>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S231>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S232>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S233>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S234>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S235>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S236>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S237>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S238>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S239>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1'
//  '<S240>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #2 '
//  '<S241>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #3 '
//  '<S242>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4'
//  '<S243>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Subsystem'
//  '<S244>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S245>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S246>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S247>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control'
//  '<S248>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S249>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S250>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S251>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S252>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S253>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S254>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S255>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S256>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S257>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S258>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S259>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S260>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control'
//  '<S261>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S262>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S263>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S264>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S265>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S266>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S267>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S268>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S269>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S270>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1'
//  '<S271>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #2 '
//  '<S272>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #3 '
//  '<S273>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4'
//  '<S274>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Subsystem'
//  '<S275>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S276>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S277>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S278>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control'
//  '<S279>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S280>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S281>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S282>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S283>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S284>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S285>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S286>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S287>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S288>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD'
//  '<S289>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S290>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S291>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S292>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control'
//  '<S293>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Subsystem'
//  '<S294>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Wrap1'
//  '<S295>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function'
//  '<S296>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S297>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S298>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S299>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S300>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S301>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S302>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S303>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S304>' : 'Template_v3_04_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S305>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior'
//  '<S306>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior'
//  '<S307>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior'
//  '<S308>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Is this a  simulation?'
//  '<S309>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S310>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S311>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S312>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control'
//  '<S313>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S314>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S315>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S316>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S317>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S318>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S319>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S320>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S321>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S322>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S323>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S324>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S325>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control'
//  '<S326>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S327>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S328>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S329>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S330>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S331>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S332>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S333>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S334>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S335>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S336>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S337>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S338>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control'
//  '<S339>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S340>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S341>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S342>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S343>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S344>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S345>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S346>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S347>' : 'Template_v3_04_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S348>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior'
//  '<S349>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior'
//  '<S350>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior'
//  '<S351>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Is this a  simulation?'
//  '<S352>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S353>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S354>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S355>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control'
//  '<S356>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S357>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S358>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S359>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S360>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S361>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S362>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S363>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S364>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S365>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S366>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S367>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S368>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control'
//  '<S369>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S370>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S371>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S372>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S373>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S374>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S375>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S376>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S377>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S378>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S379>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S380>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S381>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control'
//  '<S382>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S383>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S384>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S385>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S386>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S387>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S388>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S389>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S390>' : 'Template_v3_04_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S391>' : 'Template_v3_04_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLACK Behavior'
//  '<S392>' : 'Template_v3_04_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLUE Behavior'
//  '<S393>' : 'Template_v3_04_2020a/Phase #6:  Stop Floating and Spin Down RW/Change RED Behavior'
//  '<S394>' : 'Template_v3_04_2020a/Phase #6:  Stop Floating and Spin Down RW/Is this a  simulation?'
//  '<S395>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/BLACK Dynamics Model'
//  '<S396>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model'
//  '<S397>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/RED Dynamics Model'
//  '<S398>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)'
//  '<S399>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)'
//  '<S400>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)'
//  '<S401>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x1'
//  '<S402>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x2'
//  '<S403>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x3'
//  '<S404>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x4'
//  '<S405>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x5'
//  '<S406>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x6'
//  '<S407>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x7'
//  '<S408>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x8'
//  '<S409>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x9'
//  '<S410>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/BLACK Dynamics Model/MATLAB Function'
//  '<S411>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model/MATLAB Function'
//  '<S412>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/RED Dynamics Model/MATLAB Function'
//  '<S413>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/MATLAB Function'
//  '<S414>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/Sample and Hold1'
//  '<S415>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/MATLAB Function'
//  '<S416>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/Sample and Hold1'
//  '<S417>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/MATLAB Function'
//  '<S418>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/Sample and Hold'
//  '<S419>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x1/Hold this value'
//  '<S420>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x2/Hold this value'
//  '<S421>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x3/Hold this value'
//  '<S422>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x4/Hold this value'
//  '<S423>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x5/Hold this value'
//  '<S424>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x6/Hold this value'
//  '<S425>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x7/Hold this value'
//  '<S426>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x8/Hold this value'
//  '<S427>' : 'Template_v3_04_2020a/Simulate Plant Dynamics/x_dot -> x9/Hold this value'

#endif                                 // RTW_HEADER_Template_v3_04_2020a_h_
