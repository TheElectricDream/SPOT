//
//  Template_v3_03_2020a.h
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
#include "rtGetNaN.h"
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

// Block signals for system '<S25>/MATLAB Function2'
typedef struct {
  real_T ThrustPer_Final[8];           // '<S25>/MATLAB Function2'
  real_T ThrustPer_Sat[8];
} B_MATLABFunction2_Template_v3_T;

// Block signals for system '<S30>/Create Rotation Matrix'
typedef struct {
  real_T C_Ib[4];                      // '<S30>/Create Rotation Matrix'
} B_CreateRotationMatrix_Templa_T;

// Block signals for system '<S26>/Create Rotation Matrix'
typedef struct {
  real_T C_bI[4];                      // '<S26>/Create Rotation Matrix'
} B_CreateRotationMatrix_Temp_i_T;

// Block signals for system '<S34>/MATLAB Function'
typedef struct {
  real_T Mat2[64];
  real_T H[24];                        // '<S34>/MATLAB Function'
  real_T b[24];
  real_T v[8];
} B_MATLABFunction_Template_v3__T;

// Block signals for system '<S75>/Stream PhaseSpace Data'
typedef struct {
  real_T StreamPhaseSpaceData[13];     // '<S75>/Stream PhaseSpace Data'
  real_T y2;
  real_T y3;
} B_StreamPhaseSpaceData_Templa_T;

// Block states (default storage) for system '<S75>/Stream PhaseSpace Data'
typedef struct {
  STREAMDATA_RB_Template_v3_03__T obj; // '<S75>/Stream PhaseSpace Data'
  boolean_T objisempty;                // '<S75>/Stream PhaseSpace Data'
} DW_StreamPhaseSpaceData_Templ_T;

// Block signals for system '<S359>/MATLAB Function'
typedef struct {
  real_T y;                            // '<S359>/MATLAB Function'
} B_MATLABFunction_Template_v_e_T;

// Block signals for system '<S140>/MATLAB Function2'
typedef struct {
  real_T Oy[2];                        // '<S140>/MATLAB Function2'
  real_T Ox[2];                        // '<S140>/MATLAB Function2'
} B_MATLABFunction2_Template__n_T;

// Block signals for system '<S140>/MATLAB Function3'
typedef struct {
  real_T Ox[2];                        // '<S140>/MATLAB Function3'
} B_MATLABFunction3_Template_v3_T;

// Block signals for system '<S140>/MATLAB Function4'
typedef struct {
  real_T e_out;                        // '<S140>/MATLAB Function4'
} B_MATLABFunction4_Template_v3_T;

// Block signals for system '<S177>/Sub-Phase #1'
typedef struct {
  real_T rtb_Subtract2_e_m[2];
  real_T In1;                          // '<S229>/In1'
  real_T In1_p;                        // '<S227>/In1'
  real_T In1_j;                        // '<S225>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S223>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S223>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S223>/MATLAB Function2' 
} B_SubPhase1_Template_v3_03_20_T;

// Block states (default storage) for system '<S177>/Sub-Phase #1'
typedef struct {
  real_T Delay1_DSTATE;                // '<S226>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S228>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S224>/Delay1'
  uint8_T icLoad;                      // '<S226>/Delay1'
  uint8_T icLoad_p;                    // '<S228>/Delay1'
  uint8_T icLoad_d;                    // '<S224>/Delay1'
} DW_SubPhase1_Template_v3_03_2_T;

// Block signals for system '<S11>/Change BLUE Behavior'
typedef struct {
  real_T rtb_Subtract2_b1_m[2];
  real_T In1;                          // '<S292>/In1'
  real_T In1_k;                        // '<S290>/In1'
  real_T In1_a;                        // '<S288>/In1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S286>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S286>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2;// '<S286>/MATLAB Function2' 
} B_ChangeBLUEBehavior_Templa_k_T;

// Block states (default storage) for system '<S11>/Change BLUE Behavior'
typedef struct {
  real_T Delay1_DSTATE;                // '<S289>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S291>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S287>/Delay1'
  uint8_T icLoad;                      // '<S289>/Delay1'
  uint8_T icLoad_h;                    // '<S291>/Delay1'
  uint8_T icLoad_l;                    // '<S287>/Delay1'
} DW_ChangeBLUEBehavior_Templ_i_T;

// Block signals (default storage)
typedef struct {
  real_T Mat2[64];
  real_T Mat2_m[64];
  real_T M[36];
  real_T dv[36];
  real_T A[36];
  real_T TmpSignalConversionAtToWork[28];
  real_T transpose[24];                // '<S49>/transpose'
  real_T transpose_p[24];              // '<S40>/transpose'
  real_T transpose_d[24];              // '<S31>/transpose'
  real_T H_bu[24];                     // '<S25>/MATLAB Function'
  real_T b[24];
  real_T y_tmp[18];
  real_T y_tmp_c[18];
  real_T y[9];
  real_T x[9];
  real_T x_k[9];
  real_T x_c[9];
  real_T x_b[9];
  real_T rtb_RemoveNegatives_i_p[8];
  real_T q[6];
  real_T TmpSignalConversionAtSFunct[6];// '<S249>/Control Block'
  char_T cv[45];
  real_T x_ddot_d[3];                  // '<S356>/MATLAB Function'
  int8_T y_tmp_cv[18];
  real_T rtb_Subtract2_d_f[2];
  real_T rtb_Subtract2_f_g[2];
  real_T SetUniversalTimeIfthisisasimula;
                       // '<Root>/Set Universal Time (If this is a simulation)'
  real_T In1;                          // '<S348>/In1'
  real_T In1_j;                        // '<S346>/In1'
  real_T In1_d;                        // '<S344>/In1'
  real_T In1_c;                        // '<S322>/In1'
  real_T In1_i;                        // '<S320>/In1'
  real_T In1_g;                        // '<S318>/In1'
  real_T In1_f;                        // '<S305>/In1'
  real_T In1_b;                        // '<S303>/In1'
  real_T In1_h;                        // '<S301>/In1'
  real_T In1_d0;                       // '<S279>/In1'
  real_T In1_fx;                       // '<S277>/In1'
  real_T In1_fk;                       // '<S275>/In1'
  real_T In1_jw;                       // '<S260>/In1'
  real_T In1_jwe;                      // '<S258>/In1'
  real_T In1_n;                        // '<S256>/In1'
  real_T In1_l;                        // '<S211>/In1'
  real_T In1_bd;                       // '<S209>/In1'
  real_T In1_gd;                       // '<S207>/In1'
  real_T In1_ly;                       // '<S194>/In1'
  real_T In1_cw;                       // '<S192>/In1'
  real_T In1_a;                        // '<S190>/In1'
  real_T In1_if;                       // '<S172>/In1'
  real_T In1_cr;                       // '<S170>/In1'
  real_T In1_k;                        // '<S168>/In1'
  real_T In1_jwx;                      // '<S159>/In1'
  real_T In1_lc;                       // '<S157>/In1'
  real_T In1_o;                        // '<S155>/In1'
  real_T In1_gc;                       // '<S146>/In1'
  real_T In1_e;                        // '<S144>/In1'
  real_T In1_fa;                       // '<S142>/In1'
  real_T In1_jt;                       // '<S388>/In1'
  real_T In1_ac;                       // '<S387>/In1'
  real_T In1_ad;                       // '<S386>/In1'
  real_T In1_m;                        // '<S385>/In1'
  real_T In1_ey;                       // '<S384>/In1'
  real_T In1_k4;                       // '<S383>/In1'
  real_T In1_o1;                       // '<S382>/In1'
  real_T In1_af;                       // '<S381>/In1'
  real_T In1_nu;                       // '<S380>/In1'
  real_T In[3];                        // '<S379>/In'
  real_T In_p[3];                      // '<S377>/In'
  real_T In_n[3];                      // '<S375>/In'
  real_T TmpSignalConversionAtSendBLACKS[13];
  real_T In1_bs;                       // '<S107>/In1'
  real_T In1_p;                        // '<S106>/In1'
  real_T In1_g5;                       // '<S105>/In1'
  real_T In1_jh;                       // '<S104>/In1'
  real_T In1_bd2;                      // '<S103>/In1'
  real_T In1_of;                       // '<S102>/In1'
  real_T In1_f5;                       // '<S99>/In1'
  real_T UDPReceive_o1[13];            // '<S77>/UDP Receive'
  real_T In1_m4;                       // '<S90>/In1'
  real_T In1_ky;                       // '<S89>/In1'
  real_T In1_aw;                       // '<S88>/In1'
  real_T In1_fxz;                      // '<S87>/In1'
  real_T In1_ky2;                      // '<S86>/In1'
  real_T In1_et;                       // '<S85>/In1'
  real_T In1_j1;                       // '<S124>/In1'
  real_T In1_jc;                       // '<S123>/In1'
  real_T In1_bx;                       // '<S122>/In1'
  real_T In1_mo;                       // '<S121>/In1'
  real_T In1_n2;                       // '<S120>/In1'
  real_T In1_np;                       // '<S119>/In1'
  real_T In1_jww;                      // '<S116>/In1'
  real_T Sum6_c;                       // '<S321>/Sum6'
  real_T Sum6_l1;                      // '<S319>/Sum6'
  real_T Subtract_o;                   // '<S309>/Subtract'
  real_T rtb_Oy_tmp;
  real_T rtb_Oy_tmp_g;
  real_T smax;
  real_T b_y;
  real_T absx11;
  real_T absx21;
  real_T absx31;
  real_T sr;
  real_T si;
  int8_T p[6];
  int8_T ipiv[6];
  int32_T p2;
  int32_T p3;
  int32_T itmp;
  int32_T ntIdx0;
  int32_T i;
  int32_T pipk;
  int32_T b_j;
  int32_T ix;
  int32_T d_k;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T p1;
  int32_T p2_m;
  int32_T p3_n;
  int32_T itmp_p;
  int32_T u0;
  int32_T u1;
  uint32_T lo;
  uint32_T hi;
  ZCEventType zcEvent;
  int8_T rtAction;
  int8_T rtPrevAction;
  uint8_T u;
  boolean_T DataTypeConversion;        // '<S98>/Data Type Conversion'
  boolean_T DataTypeConversion_m;      // '<S115>/Data Type Conversion'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_df;// '<S342>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bc;// '<S342>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_mx;// '<S342>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_b;// '<S12>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_de;// '<S316>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_o;// '<S316>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_g;// '<S316>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_n;// '<S299>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c1;// '<S299>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ia;// '<S299>/MATLAB Function2' 
  B_ChangeBLUEBehavior_Templa_k_T ChangeBLUEBehavior_gj;// '<S11>/Change BLUE Behavior' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_l;// '<S273>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bv;// '<S273>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_p;// '<S273>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_k;// '<S254>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_bj;// '<S254>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_a;// '<S254>/MATLAB Function2' 
  B_SubPhase1_Template_v3_03_20_T SubPhase4_f;// '<S177>/Sub-Phase #4'
  B_SubPhase1_Template_v3_03_20_T SubPhase1_a;// '<S177>/Sub-Phase #1'
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_bk;// '<S202>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_b;// '<S202>/MATLAB Function3' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_d;// '<S188>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_l;// '<S188>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_i;// '<S188>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_b;// '<S166>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_k;// '<S166>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_ol;// '<S166>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4_c;// '<S153>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3_c;// '<S153>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_m;// '<S153>/MATLAB Function2' 
  B_MATLABFunction4_Template_v3_T sf_MATLABFunction4;// '<S140>/MATLAB Function4' 
  B_MATLABFunction3_Template_v3_T sf_MATLABFunction3;// '<S140>/MATLAB Function3' 
  B_MATLABFunction2_Template__n_T sf_MATLABFunction2_o;// '<S140>/MATLAB Function2' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_k;// '<S361>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_ap;// '<S360>/MATLAB Function' 
  B_MATLABFunction_Template_v_e_T sf_MATLABFunction_d;// '<S359>/MATLAB Function' 
  B_StreamPhaseSpaceData_Templa_T StreamPhaseSpaceData_p;// '<S75>/Stream PhaseSpace Data' 
  B_StreamPhaseSpaceData_Templa_T StreamPhaseSpaceData;// '<S75>/Stream PhaseSpace Data' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_n;// '<S44>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix_l;// '<S48>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2_l;// '<S43>/MATLAB Function2' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_f;// '<S35>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix_i;// '<S39>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2_n;// '<S34>/MATLAB Function2' 
  B_MATLABFunction_Template_v3__T sf_MATLABFunction1_b;// '<S34>/MATLAB Function1' 
  B_MATLABFunction_Template_v3__T sf_MATLABFunction_i;// '<S34>/MATLAB Function' 
  B_CreateRotationMatrix_Temp_i_T sf_CreateRotationMatrix_h;// '<S26>/Create Rotation Matrix' 
  B_CreateRotationMatrix_Templa_T sf_CreateRotationMatrix;// '<S30>/Create Rotation Matrix' 
  B_MATLABFunction2_Template_v3_T sf_MATLABFunction2;// '<S25>/MATLAB Function2' 
} B_Template_v3_03_2020a_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  codertarget_linux_blocks_Di_a_T obj; // '<S68>/Digital Read'
  raspi_internal_PWMBlock_Templ_T obj_d;// '<S66>/PWM1'
  raspi_internal_PWMBlock_Templ_T obj_m;// '<S24>/RED T1 - BLACK T8'
  raspi_internal_PWMBlock_Templ_T obj_ma;// '<S24>/RED T2 - BLACK T3'
  raspi_internal_PWMBlock_Templ_T obj_h;// '<S24>/RED T3'
  raspi_internal_PWMBlock_Templ_T obj_k;// '<S24>/RED T4 - BLACK T5'
  raspi_internal_PWMBlock_Templ_T obj_hw;// '<S24>/RED T5 - BLACK T4'
  raspi_internal_PWMBlock_Templ_T obj_hf;// '<S24>/RED T6 - BLACK T7'
  raspi_internal_PWMBlock_Templ_T obj_c;// '<S24>/RED T7 - BLACK T6'
  raspi_internal_PWMBlock_Templ_T obj_f;// '<S24>/RED T8 - BLACK T1'
  raspi_internal_PWMBlock_Templ_T obj_ci;// '<S24>/BLACK T2'
  codertarget_linux_blocks_Digi_T obj_cp;// '<S70>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_b;// '<S69>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_a;// '<S19>/Digital Write'
  codertarget_linux_blocks_Digi_T obj_i;// '<S18>/Digital Write'
  real_T Delay1_DSTATE;                // '<S345>/Delay1'
  real_T Delay1_DSTATE_m;              // '<S347>/Delay1'
  real_T Delay1_DSTATE_n;              // '<S343>/Delay1'
  real_T Delay1_DSTATE_o;              // '<S319>/Delay1'
  real_T Delay1_DSTATE_p;              // '<S321>/Delay1'
  real_T Delay1_DSTATE_b;              // '<S317>/Delay1'
  real_T Delay1_DSTATE_i;              // '<S300>/Delay1'
  real_T Delay1_DSTATE_h;              // '<S302>/Delay1'
  real_T Delay1_DSTATE_l;              // '<S304>/Delay1'
  real_T Delay1_DSTATE_lt;             // '<S276>/Delay1'
  real_T Delay1_DSTATE_im;             // '<S278>/Delay1'
  real_T Delay1_DSTATE_f;              // '<S274>/Delay1'
  real_T Delay1_DSTATE_a;              // '<S255>/Delay1'
  real_T Delay1_DSTATE_j;              // '<S257>/Delay1'
  real_T Delay1_DSTATE_bb;             // '<S259>/Delay1'
  real_T Delay1_DSTATE_bl;             // '<S208>/Delay1'
  real_T Delay1_DSTATE_g;              // '<S210>/Delay1'
  real_T Delay1_DSTATE_p0;             // '<S206>/Delay1'
  real_T Delay1_DSTATE_gi;             // '<S191>/Delay1'
  real_T Delay1_DSTATE_pe;             // '<S193>/Delay1'
  real_T Delay1_DSTATE_lu;             // '<S189>/Delay1'
  real_T Delay1_DSTATE_c;              // '<S167>/Delay1'
  real_T Delay1_DSTATE_bm;             // '<S169>/Delay1'
  real_T Delay1_DSTATE_pr;             // '<S171>/Delay1'
  real_T Delay1_DSTATE_fb;             // '<S156>/Delay1'
  real_T Delay1_DSTATE_n1;             // '<S158>/Delay1'
  real_T Delay1_DSTATE_cq;             // '<S154>/Delay1'
  real_T Delay1_DSTATE_k;              // '<S143>/Delay1'
  real_T Delay1_DSTATE_d;              // '<S145>/Delay1'
  real_T Delay1_DSTATE_jd;             // '<S141>/Delay1'
  real_T VelocitytoPosition_DSTATE[3]; // '<S356>/Velocity to Position'
  real_T Delay1_DSTATE_nq;             // '<S367>/Delay1'
  real_T Delay1_DSTATE_mb;             // '<S365>/Delay1'
  real_T Delay1_DSTATE_pz;             // '<S366>/Delay1'
  real_T VelocitytoPosition_DSTATE_a[3];// '<S357>/Velocity to Position'
  real_T Delay1_DSTATE_nm;             // '<S370>/Delay1'
  real_T Delay1_DSTATE_e;              // '<S368>/Delay1'
  real_T Delay1_DSTATE_ho;             // '<S369>/Delay1'
  real_T VelocitytoPosition_DSTATE_f[3];// '<S358>/Velocity to Position'
  real_T Delay1_DSTATE_ew;             // '<S364>/Delay1'
  real_T Delay1_DSTATE_ch;             // '<S362>/Delay1'
  real_T Delay1_DSTATE_it;             // '<S363>/Delay1'
  real_T AccelerationtoVelocity_DSTATE[3];// '<S356>/Acceleration  to Velocity'
  real_T AccelerationtoVelocity_DSTATE_b[3];// '<S357>/Acceleration  to Velocity' 
  real_T AccelerationtoVelocity_DSTATE_m[3];// '<S358>/Acceleration  to Velocity' 
  real_T Delay1_DSTATE_oy;             // '<S92>/Delay1'
  real_T Delay1_DSTATE_cj;             // '<S95>/Delay1'
  real_T Delay1_DSTATE_em;             // '<S93>/Delay1'
  real_T Delay1_DSTATE_cc;             // '<S96>/Delay1'
  real_T Delay1_DSTATE_f0;             // '<S94>/Delay1'
  real_T Delay1_DSTATE_iu;             // '<S97>/Delay1'
  real_T Delay1_DSTATE_bz;             // '<S79>/Delay1'
  real_T Delay1_DSTATE_mi;             // '<S82>/Delay1'
  real_T Delay1_DSTATE_ea;             // '<S80>/Delay1'
  real_T Delay1_DSTATE_of;             // '<S83>/Delay1'
  real_T Delay1_DSTATE_k2;             // '<S81>/Delay1'
  real_T Delay1_DSTATE_b2;             // '<S84>/Delay1'
  real_T Delay1_DSTATE_as;             // '<S109>/Delay1'
  real_T Delay1_DSTATE_au;             // '<S112>/Delay1'
  real_T Delay1_DSTATE_fk;             // '<S110>/Delay1'
  real_T Delay1_DSTATE_kq;             // '<S113>/Delay1'
  real_T Delay1_DSTATE_c1;             // '<S111>/Delay1'
  real_T Delay1_DSTATE_ems;            // '<S114>/Delay1'
  real_T Delay_DSTATE;                 // '<S56>/Delay'
  real_T UDPSend_NetworkLib[137];      // '<Root>/UDP Send'
  real_T RateTransition_Buffer;        // '<S3>/Rate Transition'
  real_T RateTransition1_Buffer;       // '<S3>/Rate Transition1'
  real_T RateTransition2_Buffer;       // '<S3>/Rate Transition2'
  real_T RateTransition3_Buffer;       // '<S3>/Rate Transition3'
  real_T RateTransition4_Buffer;       // '<S3>/Rate Transition4'
  real_T RateTransition5_Buffer;       // '<S3>/Rate Transition5'
  real_T RateTransition6_Buffer;       // '<S3>/Rate Transition6'
  real_T RateTransition7_Buffer;       // '<S3>/Rate Transition7'
  real_T RateTransition8_Buffer;       // '<S3>/Rate Transition8'
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
  real_T NextOutput;                   // '<S356>/Random Number'
  real_T NextOutput_g;                 // '<S357>/Random Number'
  real_T NextOutput_l;                 // '<S358>/Random Number'
  real_T SendBLACKStatestoBLACKPlatform_[137];
                                // '<S78>/Send BLACK States to  BLACK Platform'
  real_T UDPReceive_NetworkLib[137];   // '<S77>/UDP Receive'
  real_T Product1_DWORK4[9];           // '<S49>/Product1'
  real_T Product1_DWORK4_g[9];         // '<S40>/Product1'
  real_T Product1_DWORK4_gx[9];        // '<S31>/Product1'
  struct {
    void *LoggedData;
  } ToWorkspace_PWORK;                 // '<S1>/To Workspace'

  uint32_T RandSeed;                   // '<S356>/Random Number'
  uint32_T RandSeed_d;                 // '<S357>/Random Number'
  uint32_T RandSeed_m;                 // '<S358>/Random Number'
  boolean_T Delay_DSTATE_l;            // '<S98>/Delay'
  boolean_T Delay_DSTATE_h;            // '<S115>/Delay'
  boolean_T Delay1_DSTATE_kt;          // '<S61>/Delay1'
  boolean_T Delay2_DSTATE[2];          // '<S61>/Delay2'
  boolean_T Delay5_DSTATE[3];          // '<S61>/Delay5'
  boolean_T Delay3_DSTATE[4];          // '<S61>/Delay3'
  boolean_T Delay4_DSTATE[5];          // '<S61>/Delay4'
  int8_T Ifperforminganexperimentgrabthe;
  // '<S5>/If performing an experiment, grab the PhaseSpace data. Otherwise, use a clock to set time in SIM.' 
  int8_T Checkwhetherbothplatformsarebei;
  // '<S73>/Check whether both platforms are being used, and if so then use RED to send data to BLACK ' 
  int8_T ThisIFblockdetermineswhetherorn;
  // '<S74>/This IF block determines whether or not to run the BLACK sim//exp'
  int8_T ThisIFblockdetermineswhethero_o;
    // '<S74>/This IF block determines whether or not to run the RED sim//exp '
  uint8_T icLoad;                      // '<S345>/Delay1'
  uint8_T icLoad_j;                    // '<S347>/Delay1'
  uint8_T icLoad_a;                    // '<S343>/Delay1'
  uint8_T icLoad_e;                    // '<S319>/Delay1'
  uint8_T icLoad_m;                    // '<S321>/Delay1'
  uint8_T icLoad_d;                    // '<S317>/Delay1'
  uint8_T icLoad_dh;                   // '<S300>/Delay1'
  uint8_T icLoad_a2;                   // '<S302>/Delay1'
  uint8_T icLoad_f;                    // '<S304>/Delay1'
  uint8_T icLoad_dq;                   // '<S276>/Delay1'
  uint8_T icLoad_h;                    // '<S278>/Delay1'
  uint8_T icLoad_o;                    // '<S274>/Delay1'
  uint8_T icLoad_n;                    // '<S255>/Delay1'
  uint8_T icLoad_er;                   // '<S257>/Delay1'
  uint8_T icLoad_ej;                   // '<S259>/Delay1'
  uint8_T icLoad_b;                    // '<S208>/Delay1'
  uint8_T icLoad_n5;                   // '<S210>/Delay1'
  uint8_T icLoad_fj;                   // '<S206>/Delay1'
  uint8_T icLoad_ot;                   // '<S191>/Delay1'
  uint8_T icLoad_k;                    // '<S193>/Delay1'
  uint8_T icLoad_l;                    // '<S189>/Delay1'
  uint8_T icLoad_ji;                   // '<S167>/Delay1'
  uint8_T icLoad_a1;                   // '<S169>/Delay1'
  uint8_T icLoad_o0;                   // '<S171>/Delay1'
  uint8_T icLoad_dy;                   // '<S156>/Delay1'
  uint8_T icLoad_hf;                   // '<S158>/Delay1'
  uint8_T icLoad_kl;                   // '<S154>/Delay1'
  uint8_T icLoad_ns;                   // '<S143>/Delay1'
  uint8_T icLoad_k1;                   // '<S145>/Delay1'
  uint8_T icLoad_ep;                   // '<S141>/Delay1'
  uint8_T icLoad_kp;                   // '<S367>/Delay1'
  uint8_T icLoad_k3;                   // '<S365>/Delay1'
  uint8_T icLoad_jz;                   // '<S366>/Delay1'
  uint8_T icLoad_c;                    // '<S370>/Delay1'
  uint8_T icLoad_dc;                   // '<S368>/Delay1'
  uint8_T icLoad_nu;                   // '<S369>/Delay1'
  uint8_T icLoad_mt;                   // '<S364>/Delay1'
  uint8_T icLoad_bq;                   // '<S362>/Delay1'
  uint8_T icLoad_cn;                   // '<S363>/Delay1'
  uint8_T icLoad_ku;                   // '<S92>/Delay1'
  uint8_T icLoad_h0;                   // '<S95>/Delay1'
  uint8_T icLoad_hc;                   // '<S93>/Delay1'
  uint8_T icLoad_ez;                   // '<S96>/Delay1'
  uint8_T icLoad_os;                   // '<S94>/Delay1'
  uint8_T icLoad_g;                    // '<S97>/Delay1'
  uint8_T icLoad_nv;                   // '<S79>/Delay1'
  uint8_T icLoad_bj;                   // '<S82>/Delay1'
  uint8_T icLoad_d0;                   // '<S80>/Delay1'
  uint8_T icLoad_fjc;                  // '<S83>/Delay1'
  uint8_T icLoad_dyz;                  // '<S81>/Delay1'
  uint8_T icLoad_p;                    // '<S84>/Delay1'
  uint8_T icLoad_ezp;                  // '<S109>/Delay1'
  uint8_T icLoad_gv;                   // '<S112>/Delay1'
  uint8_T icLoad_en;                   // '<S110>/Delay1'
  uint8_T icLoad_f2;                   // '<S113>/Delay1'
  uint8_T icLoad_db;                   // '<S111>/Delay1'
  uint8_T icLoad_es;                   // '<S114>/Delay1'
  boolean_T EnabledSubsystem_MODE;     // '<S91>/Enabled Subsystem'
  boolean_T EnabledSubsystem_MODE_p;   // '<S108>/Enabled Subsystem'
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_b;// '<S12>/Change BLUE Behavior' 
  DW_ChangeBLUEBehavior_Templ_i_T ChangeBLUEBehavior_gj;// '<S11>/Change BLUE Behavior' 
  DW_SubPhase1_Template_v3_03_2_T SubPhase4_f;// '<S177>/Sub-Phase #4'
  DW_SubPhase1_Template_v3_03_2_T SubPhase1_a;// '<S177>/Sub-Phase #1'
  DW_StreamPhaseSpaceData_Templ_T StreamPhaseSpaceData_p;// '<S75>/Stream PhaseSpace Data' 
  DW_StreamPhaseSpaceData_Templ_T StreamPhaseSpaceData;// '<S75>/Stream PhaseSpace Data' 
} DW_Template_v3_03_2020a_T;

// Zero-crossing (trigger) state
typedef struct {
  ZCSigState SampleandHold_Trig_ZCE;   // '<S361>/Sample and Hold'
  ZCSigState SampleandHold1_Trig_ZCE;  // '<S360>/Sample and Hold1'
  ZCSigState SampleandHold1_Trig_ZCE_g;// '<S359>/Sample and Hold1'
} PrevZCX_Template_v3_03_2020a_T;

// Parameters for system: '<S7>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Template_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S126>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S126>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S126>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S126>/Puck State'

};

// Parameters for system: '<Root>/Phase #0:  Wait for Synchronization'
struct P_Phase0WaitforSynchronizatio_T_ {
  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S125>/Constant3'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S125>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S125>/Constant5'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S125>/Puck State'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S127>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S127>/Constant1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S127>/Constant2'

  real_T Constant3_Value_h;            // Expression: 0
                                          //  Referenced by: '<S127>/Constant3'

  real_T Constant4_Value_g;            // Expression: 0
                                          //  Referenced by: '<S127>/Constant4'

  real_T Constant5_Value_e;            // Expression: 0
                                          //  Referenced by: '<S127>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S127>/Constant6'

  real_T PuckState_Value_b;            // Expression: 0
                                          //  Referenced by: '<S127>/Puck State'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior;// '<S7>/Change BLUE Behavior' 
};

// Parameters for system: '<S176>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03_20_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S181>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S181>/Puck State'

};

// Parameters for system: '<S177>/Sub-Phase #1'
struct P_SubPhase1_Template_v3_03_20_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S225>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S227>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S229>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S215>/Puck State'

};

// Parameters for system: '<S177>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03__h_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S216>/Constant'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S216>/Puck State'

};

// Parameters for system: '<S178>/Sub-Phase #2 '
struct P_SubPhase2_Template_v3_03__g_T_ {
  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S247>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S247>/Constant1'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S247>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S247>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S247>/Constant6'

  real_T PuckState_Value;              // Expression: 0
                                          //  Referenced by: '<S247>/Puck State'

};

// Parameters for system: '<S11>/Change BLUE Behavior'
struct P_ChangeBLUEBehavior_Templa_c_T_ {
  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S288>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S290>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S292>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S267>/Puck State'

};

// Parameters (default storage)
struct P_Template_v3_03_2020a_T_ {
  real_T F_thrusters_BLACK[8];         // Variable: F_thrusters_BLACK
                                          //  Referenced by:
                                          //    '<S25>/MATLAB Function'
                                          //    '<S25>/MATLAB Function1'

  real_T F_thrusters_BLUE[8];          // Variable: F_thrusters_BLUE
                                          //  Referenced by:
                                          //    '<S34>/MATLAB Function'
                                          //    '<S34>/MATLAB Function1'

  real_T F_thrusters_RED[8];           // Variable: F_thrusters_RED
                                          //  Referenced by:
                                          //    '<S43>/MATLAB Function'
                                          //    '<S43>/MATLAB Function1'

  real_T Kd_tb;                        // Variable: Kd_tb
                                          //  Referenced by:
                                          //    '<S137>/kd_tb'
                                          //    '<S270>/kd_tb'
                                          //    '<S313>/kd_tb'
                                          //    '<S185>/kd_tb'
                                          //    '<S199>/kd_tb'

  real_T Kd_tblue;                     // Variable: Kd_tblue
                                          //  Referenced by:
                                          //    '<S150>/kd_tb'
                                          //    '<S283>/kd_tb'
                                          //    '<S326>/kd_tb'
                                          //    '<S220>/kd_tb'
                                          //    '<S233>/kd_tb'

  real_T Kd_tr;                        // Variable: Kd_tr
                                          //  Referenced by:
                                          //    '<S163>/kd_tr'
                                          //    '<S296>/kd_tr'
                                          //    '<S339>/kd_tr'
                                          //    '<S251>/kd_tr'

  real_T Kd_xb;                        // Variable: Kd_xb
                                          //  Referenced by:
                                          //    '<S138>/kd_xb'
                                          //    '<S271>/kd_xb'
                                          //    '<S314>/kd_xb'
                                          //    '<S186>/kd_xb'
                                          //    '<S200>/kd_xb'

  real_T Kd_xblue;                     // Variable: Kd_xblue
                                          //  Referenced by:
                                          //    '<S151>/kd_xb'
                                          //    '<S284>/kd_xb'
                                          //    '<S327>/kd_xb'
                                          //    '<S221>/kd_xb'
                                          //    '<S234>/kd_xb'

  real_T Kd_xr;                        // Variable: Kd_xr
                                          //  Referenced by:
                                          //    '<S164>/kd_xr'
                                          //    '<S297>/kd_xr'
                                          //    '<S340>/kd_xr'
                                          //    '<S252>/kd_xr'

  real_T Kd_yb;                        // Variable: Kd_yb
                                          //  Referenced by:
                                          //    '<S139>/kd_yb'
                                          //    '<S272>/kd_yb'
                                          //    '<S315>/kd_yb'
                                          //    '<S187>/kd_yb'
                                          //    '<S201>/kd_yb'

  real_T Kd_yblue;                     // Variable: Kd_yblue
                                          //  Referenced by:
                                          //    '<S152>/kd_yb'
                                          //    '<S285>/kd_yb'
                                          //    '<S328>/kd_yb'
                                          //    '<S222>/kd_yb'
                                          //    '<S235>/kd_yb'

  real_T Kd_yr;                        // Variable: Kd_yr
                                          //  Referenced by:
                                          //    '<S165>/kd_yr'
                                          //    '<S298>/kd_yr'
                                          //    '<S341>/kd_yr'
                                          //    '<S253>/kd_yr'

  real_T Kp_tb;                        // Variable: Kp_tb
                                          //  Referenced by:
                                          //    '<S137>/kp_tb'
                                          //    '<S270>/kp_tb'
                                          //    '<S313>/kp_tb'
                                          //    '<S185>/kp_tb'
                                          //    '<S199>/kp_tb'

  real_T Kp_tblue;                     // Variable: Kp_tblue
                                          //  Referenced by:
                                          //    '<S150>/kp_tb'
                                          //    '<S283>/kp_tb'
                                          //    '<S326>/kp_tb'
                                          //    '<S220>/kp_tb'
                                          //    '<S233>/kp_tb'

  real_T Kp_tr;                        // Variable: Kp_tr
                                          //  Referenced by:
                                          //    '<S163>/kp_tr'
                                          //    '<S296>/kp_tr'
                                          //    '<S339>/kp_tr'
                                          //    '<S251>/kp_tr'

  real_T Kp_xb;                        // Variable: Kp_xb
                                          //  Referenced by:
                                          //    '<S138>/kp_xb'
                                          //    '<S271>/kp_xb'
                                          //    '<S314>/kp_xb'
                                          //    '<S186>/kp_xb'
                                          //    '<S200>/kp_xb'

  real_T Kp_xblue;                     // Variable: Kp_xblue
                                          //  Referenced by:
                                          //    '<S151>/kp_xb'
                                          //    '<S284>/kp_xb'
                                          //    '<S327>/kp_xb'
                                          //    '<S221>/kp_xb'
                                          //    '<S234>/kp_xb'

  real_T Kp_xr;                        // Variable: Kp_xr
                                          //  Referenced by:
                                          //    '<S164>/kp_xr'
                                          //    '<S297>/kp_xr'
                                          //    '<S340>/kp_xr'
                                          //    '<S252>/kp_xr'

  real_T Kp_yb;                        // Variable: Kp_yb
                                          //  Referenced by:
                                          //    '<S139>/kp_yb'
                                          //    '<S272>/kp_yb'
                                          //    '<S315>/kp_yb'
                                          //    '<S187>/kp_yb'
                                          //    '<S201>/kp_yb'

  real_T Kp_yblue;                     // Variable: Kp_yblue
                                          //  Referenced by:
                                          //    '<S152>/kp_yb'
                                          //    '<S285>/kp_yb'
                                          //    '<S328>/kp_yb'
                                          //    '<S222>/kp_yb'
                                          //    '<S235>/kp_yb'

  real_T Kp_yr;                        // Variable: Kp_yr
                                          //  Referenced by:
                                          //    '<S165>/kp_yr'
                                          //    '<S298>/kp_yr'
                                          //    '<S341>/kp_yr'
                                          //    '<S253>/kp_yr'

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
                                          //    '<S176>/Constant4'
                                          //    '<S177>/Constant4'
                                          //    '<S178>/Constant4'

  real_T Phase3_SubPhase2_End;         // Variable: Phase3_SubPhase2_End
                                          //  Referenced by:
                                          //    '<S176>/Constant1'
                                          //    '<S177>/Constant1'
                                          //    '<S178>/Constant1'

  real_T Phase3_SubPhase3_End;         // Variable: Phase3_SubPhase3_End
                                          //  Referenced by:
                                          //    '<S176>/Constant2'
                                          //    '<S177>/Constant2'
                                          //    '<S178>/Constant2'
                                          //    '<S203>/Constant1'

  real_T Phase3_SubPhase4_End;         // Variable: Phase3_SubPhase4_End
                                          //  Referenced by:
                                          //    '<S176>/Constant3'
                                          //    '<S177>/Constant3'
                                          //    '<S178>/Constant3'

  real_T Phase4_End;                   // Variable: Phase4_End
                                          //  Referenced by: '<Root>/Constant3'

  real_T Phase5_End;                   // Variable: Phase5_End
                                          //  Referenced by: '<Root>/Constant6'

  real_T WhoAmI;                       // Variable: WhoAmI
                                          //  Referenced by:
                                          //    '<S3>/Constant'
                                          //    '<S4>/Constant'
                                          //    '<S7>/Constant'
                                          //    '<S8>/Constant'
                                          //    '<S9>/Constant'
                                          //    '<S10>/Constant'
                                          //    '<S11>/Constant'
                                          //    '<S12>/Constant'
                                          //    '<S13>/Constant'
                                          //    '<S74>/Constant'

  real_T drop_states_BLACK[3];         // Variable: drop_states_BLACK
                                          //  Referenced by: '<S356>/Velocity to Position'

  real_T drop_states_BLUE[3];          // Variable: drop_states_BLUE
                                          //  Referenced by: '<S357>/Velocity to Position'

  real_T drop_states_RED[3];           // Variable: drop_states_RED
                                          //  Referenced by: '<S358>/Velocity to Position'

  real_T home_states_BLACK[3];         // Variable: home_states_BLACK
                                          //  Referenced by:
                                          //    '<S266>/Desired Attitude (BLACK)'
                                          //    '<S266>/Desired Px (BLACK)'
                                          //    '<S266>/Desired Py (BLACK)'
                                          //    '<S309>/Constant'
                                          //    '<S309>/Constant2'
                                          //    '<S309>/Constant3'

  real_T home_states_BLUE[3];          // Variable: home_states_BLUE
                                          //  Referenced by:
                                          //    '<S267>/Desired Attitude (BLUE)'
                                          //    '<S267>/Desired Px (BLUE)'
                                          //    '<S267>/Desired Py (BLUE)'
                                          //    '<S310>/Desired Attitude (BLUE)'
                                          //    '<S310>/Desired Px (BLUE)'
                                          //    '<S310>/Desired Py (BLUE)'

  real_T home_states_RED[3];           // Variable: home_states_RED
                                          //  Referenced by:
                                          //    '<S268>/Constant'
                                          //    '<S268>/Constant1'
                                          //    '<S268>/Constant3'
                                          //    '<S311>/Constant'
                                          //    '<S311>/Constant2'
                                          //    '<S311>/Constant3'

  real_T init_states_BLACK[3];         // Variable: init_states_BLACK
                                          //  Referenced by:
                                          //    '<S133>/Desired Attitude (BLACK)'
                                          //    '<S133>/Desired Px (BLACK)'
                                          //    '<S133>/Desired Py (BLACK)'
                                          //    '<S180>/Desired Attitude (BLACK)'
                                          //    '<S180>/Desired X-Position (BLACK)'
                                          //    '<S180>/Desired Y-Position (BLACK)'

  real_T init_states_BLUE[3];          // Variable: init_states_BLUE
                                          //  Referenced by:
                                          //    '<S134>/Desired Attitude (BLUE)'
                                          //    '<S134>/Desired Px (BLUE)'
                                          //    '<S134>/Desired Py (BLUE)'
                                          //    '<S215>/Desired Attitude (BLUE)'
                                          //    '<S215>/Desired Px (BLUE)'
                                          //    '<S215>/Desired Py (BLUE)'
                                          //    '<S218>/Desired Attitude (BLUE)'
                                          //    '<S218>/Desired Px (BLUE)'
                                          //    '<S218>/Desired Py (BLUE)'

  real_T init_states_RED[3];           // Variable: init_states_RED
                                          //  Referenced by:
                                          //    '<S135>/Constant'
                                          //    '<S135>/Constant1'
                                          //    '<S135>/Constant3'
                                          //    '<S246>/Desired Attitude (RED)'
                                          //    '<S246>/Desired X-Position (RED)'
                                          //    '<S246>/Desired Y-Position (RED)'

  real_T model_param[6];               // Variable: model_param
                                          //  Referenced by:
                                          //    '<S356>/MATLAB Function'
                                          //    '<S357>/MATLAB Function'
                                          //    '<S358>/MATLAB Function'
                                          //    '<S249>/Control Block'

  real_T noise_variance_BLACK;         // Variable: noise_variance_BLACK
                                          //  Referenced by: '<S356>/Random Number'

  real_T noise_variance_BLUE;          // Variable: noise_variance_BLUE
                                          //  Referenced by: '<S357>/Random Number'

  real_T noise_variance_RED;           // Variable: noise_variance_RED
                                          //  Referenced by: '<S358>/Random Number'

  real_T platformSelection;            // Variable: platformSelection
                                          //  Referenced by: '<S73>/Which PLATFORM is being used?'

  real_T serverRate;                   // Variable: serverRate
                                          //  Referenced by:
                                          //    '<S359>/Constant1'
                                          //    '<S360>/Constant1'
                                          //    '<S361>/Constant'
                                          //    '<S362>/divide by delta T'
                                          //    '<S363>/divide by delta T'
                                          //    '<S364>/divide by delta T'
                                          //    '<S365>/divide by delta T'
                                          //    '<S366>/divide by delta T'
                                          //    '<S367>/divide by delta T'
                                          //    '<S368>/divide by delta T'
                                          //    '<S369>/divide by delta T'
                                          //    '<S370>/divide by delta T'
                                          //    '<S109>/divide by delta T'
                                          //    '<S110>/divide by delta T'
                                          //    '<S111>/divide by delta T'
                                          //    '<S112>/divide by delta T'
                                          //    '<S113>/divide by delta T'
                                          //    '<S114>/divide by delta T'
                                          //    '<S141>/divide by delta T'
                                          //    '<S143>/divide by delta T'
                                          //    '<S145>/divide by delta T'
                                          //    '<S154>/divide by delta T'
                                          //    '<S156>/divide by delta T'
                                          //    '<S158>/divide by delta T'
                                          //    '<S167>/divide by delta T'
                                          //    '<S169>/divide by delta T'
                                          //    '<S171>/divide by delta T'
                                          //    '<S274>/divide by delta T'
                                          //    '<S276>/divide by delta T'
                                          //    '<S278>/divide by delta T'
                                          //    '<S287>/divide by delta T'
                                          //    '<S289>/divide by delta T'
                                          //    '<S291>/divide by delta T'
                                          //    '<S300>/divide by delta T'
                                          //    '<S302>/divide by delta T'
                                          //    '<S304>/divide by delta T'
                                          //    '<S317>/divide by delta T'
                                          //    '<S319>/divide by delta T'
                                          //    '<S321>/divide by delta T'
                                          //    '<S330>/divide by delta T'
                                          //    '<S332>/divide by delta T'
                                          //    '<S334>/divide by delta T'
                                          //    '<S343>/divide by delta T'
                                          //    '<S345>/divide by delta T'
                                          //    '<S347>/divide by delta T'
                                          //    '<S79>/divide by delta T'
                                          //    '<S80>/divide by delta T'
                                          //    '<S81>/divide by delta T'
                                          //    '<S82>/divide by delta T'
                                          //    '<S83>/divide by delta T'
                                          //    '<S84>/divide by delta T'
                                          //    '<S92>/divide by delta T'
                                          //    '<S93>/divide by delta T'
                                          //    '<S94>/divide by delta T'
                                          //    '<S95>/divide by delta T'
                                          //    '<S96>/divide by delta T'
                                          //    '<S97>/divide by delta T'
                                          //    '<S189>/divide by delta T'
                                          //    '<S191>/divide by delta T'
                                          //    '<S193>/divide by delta T'
                                          //    '<S206>/divide by delta T'
                                          //    '<S208>/divide by delta T'
                                          //    '<S210>/divide by delta T'
                                          //    '<S224>/divide by delta T'
                                          //    '<S226>/divide by delta T'
                                          //    '<S228>/divide by delta T'
                                          //    '<S237>/divide by delta T'
                                          //    '<S239>/divide by delta T'
                                          //    '<S241>/divide by delta T'
                                          //    '<S255>/divide by delta T'
                                          //    '<S257>/divide by delta T'
                                          //    '<S259>/divide by delta T'

  real_T simMode;                      // Variable: simMode
                                          //  Referenced by:
                                          //    '<S6>/Constant'
                                          //    '<S17>/Constant'
                                          //    '<S23>/Constant'
                                          //    '<S55>/Constant'
                                          //    '<S72>/Constant'
                                          //    '<S128>/Constant'
                                          //    '<S132>/Constant'
                                          //    '<S136>/Constant'
                                          //    '<S179>/Constant'
                                          //    '<S269>/Constant'
                                          //    '<S312>/Constant'
                                          //    '<S355>/Constant'
                                          //    '<S76>/Constant'

  real_T thruster_dist2CG_BLACK[8];    // Variable: thruster_dist2CG_BLACK
                                          //  Referenced by:
                                          //    '<S25>/MATLAB Function'
                                          //    '<S25>/MATLAB Function1'

  real_T thruster_dist2CG_BLUE[8];     // Variable: thruster_dist2CG_BLUE
                                          //  Referenced by:
                                          //    '<S34>/MATLAB Function'
                                          //    '<S34>/MATLAB Function1'

  real_T thruster_dist2CG_RED[8];      // Variable: thruster_dist2CG_RED
                                          //  Referenced by:
                                          //    '<S43>/MATLAB Function'
                                          //    '<S43>/MATLAB Function1'

  real_T xLength;                      // Variable: xLength
                                          //  Referenced by: '<S183>/Desired X-Position (BLACK)'

  real_T yLength;                      // Variable: yLength
                                          //  Referenced by: '<S183>/Desired Y-Position (BLACK)'

  real_T BLACKPWM_Y0;                  // Computed Parameter: BLACKPWM_Y0
                                          //  Referenced by: '<S20>/BLACK PWM'

  real_T RemoveNegatives_UpperSat;     // Expression: 1000
                                          //  Referenced by: '<S25>/Remove Negatives'

  real_T RemoveNegatives_LowerSat;     // Expression: 0
                                          //  Referenced by: '<S25>/Remove Negatives'

  real_T BLUEPWM_Y0;                   // Computed Parameter: BLUEPWM_Y0
                                          //  Referenced by: '<S21>/BLUE PWM'

  real_T RemoveNegatives_UpperSat_p;   // Expression: 1000
                                          //  Referenced by: '<S34>/Remove Negatives'

  real_T RemoveNegatives_LowerSat_c;   // Expression: 0
                                          //  Referenced by: '<S34>/Remove Negatives'

  real_T REDPWM_Y0;                    // Computed Parameter: REDPWM_Y0
                                          //  Referenced by: '<S22>/RED PWM'

  real_T RemoveNegatives_UpperSat_d;   // Expression: 1000
                                          //  Referenced by: '<S43>/Remove Negatives'

  real_T RemoveNegatives_LowerSat_a;   // Expression: 0
                                          //  Referenced by: '<S43>/Remove Negatives'

  real_T DigitalRead_SampleTime;       // Expression: sampleTime
                                          //  Referenced by: '<S68>/Digital Read'

  real_T SaturateTorque_UpperSat;      // Expression: 0.1
                                          //  Referenced by: '<S56>/Saturate Torque'

  real_T SaturateTorque_LowerSat;      // Expression: -0.1
                                          //  Referenced by: '<S56>/Saturate Torque'

  real_T Delay_InitialCondition;       // Expression: 0.0
                                          //  Referenced by: '<S56>/Delay'

  real_T GearboxRatio_Value;           // Expression: 3375/64
                                          //  Referenced by: '<S60>/Gearbox  Ratio'

  real_T SaturateMotor_UpperSat;       // Expression: 7000
                                          //  Referenced by: '<S57>/Saturate Motor'

  real_T SaturateMotor_LowerSat;       // Expression: -7000
                                          //  Referenced by: '<S57>/Saturate Motor'

  real_T SaturateRPM_UpperSat;         // Expression: (7000*64/3375)
                                          //  Referenced by: '<S56>/Saturate RPM'

  real_T SaturateRPM_LowerSat;         // Expression: -(7000*64/3375)
                                          //  Referenced by: '<S56>/Saturate RPM'

  real_T Out1_Y0;                      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S116>/Out1'

  real_T Out1_Y0_k;                    // Computed Parameter: Out1_Y0_k
                                          //  Referenced by: '<S119>/Out1'

  real_T Out1_Y0_b;                    // Computed Parameter: Out1_Y0_b
                                          //  Referenced by: '<S120>/Out1'

  real_T Out1_Y0_d;                    // Computed Parameter: Out1_Y0_d
                                          //  Referenced by: '<S121>/Out1'

  real_T Out1_Y0_n;                    // Computed Parameter: Out1_Y0_n
                                          //  Referenced by: '<S122>/Out1'

  real_T Out1_Y0_no;                   // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S123>/Out1'

  real_T Out1_Y0_m;                    // Computed Parameter: Out1_Y0_m
                                          //  Referenced by: '<S124>/Out1'

  real_T Out1_Y0_a;                    // Computed Parameter: Out1_Y0_a
                                          //  Referenced by: '<S85>/Out1'

  real_T Out1_Y0_ni;                   // Computed Parameter: Out1_Y0_ni
                                          //  Referenced by: '<S86>/Out1'

  real_T Out1_Y0_e;                    // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S87>/Out1'

  real_T Out1_Y0_dr;                   // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S88>/Out1'

  real_T Out1_Y0_h;                    // Computed Parameter: Out1_Y0_h
                                          //  Referenced by: '<S89>/Out1'

  real_T Out1_Y0_i;                    // Computed Parameter: Out1_Y0_i
                                          //  Referenced by: '<S90>/Out1'

  real_T Out1_Y0_as;                   // Computed Parameter: Out1_Y0_as
                                          //  Referenced by: '<S99>/Out1'

  real_T Out1_Y0_p;                    // Computed Parameter: Out1_Y0_p
                                          //  Referenced by: '<S102>/Out1'

  real_T Out1_Y0_f;                    // Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S103>/Out1'

  real_T Out1_Y0_fy;                   // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S104>/Out1'

  real_T Out1_Y0_e2;                   // Computed Parameter: Out1_Y0_e2
                                          //  Referenced by: '<S105>/Out1'

  real_T Out1_Y0_kz;                   // Computed Parameter: Out1_Y0_kz
                                          //  Referenced by: '<S106>/Out1'

  real_T Out1_Y0_bg;                   // Computed Parameter: Out1_Y0_bg
                                          //  Referenced by: '<S107>/Out1'

  real_T _Y0[3];                       // Expression: initCond
                                          //  Referenced by: '<S375>/ '

  real_T _Y0_g[3];                     // Expression: initCond
                                          //  Referenced by: '<S377>/ '

  real_T _Y0_l[3];                     // Expression: initCond
                                          //  Referenced by: '<S379>/ '

  real_T Out1_Y0_dj;                   // Computed Parameter: Out1_Y0_dj
                                          //  Referenced by: '<S380>/Out1'

  real_T Out1_Y0_kb;                   // Computed Parameter: Out1_Y0_kb
                                          //  Referenced by: '<S381>/Out1'

  real_T Out1_Y0_pm;                   // Computed Parameter: Out1_Y0_pm
                                          //  Referenced by: '<S382>/Out1'

  real_T Out1_Y0_c;                    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S383>/Out1'

  real_T Out1_Y0_j;                    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S384>/Out1'

  real_T Out1_Y0_l;                    // Computed Parameter: Out1_Y0_l
                                          //  Referenced by: '<S385>/Out1'

  real_T Out1_Y0_ia;                   // Computed Parameter: Out1_Y0_ia
                                          //  Referenced by: '<S386>/Out1'

  real_T Out1_Y0_bgo;                  // Computed Parameter: Out1_Y0_bgo
                                          //  Referenced by: '<S387>/Out1'

  real_T Out1_Y0_kc;                   // Computed Parameter: Out1_Y0_kc
                                          //  Referenced by: '<S388>/Out1'

  real_T VelocitytoPosition_gainval;
                               // Computed Parameter: VelocitytoPosition_gainval
                                  //  Referenced by: '<S356>/Velocity to Position'

  real_T RandomNumber_Mean;            // Expression: 0
                                          //  Referenced by: '<S356>/Random Number'

  real_T RandomNumber_Seed;            // Expression: 0
                                          //  Referenced by: '<S356>/Random Number'

  real_T VelocitytoPosition_gainval_f;
                             // Computed Parameter: VelocitytoPosition_gainval_f
                                //  Referenced by: '<S357>/Velocity to Position'

  real_T RandomNumber_Mean_b;          // Expression: 0
                                          //  Referenced by: '<S357>/Random Number'

  real_T RandomNumber_Seed_k;          // Expression: 0
                                          //  Referenced by: '<S357>/Random Number'

  real_T VelocitytoPosition_gainval_a;
                             // Computed Parameter: VelocitytoPosition_gainval_a
                                //  Referenced by: '<S358>/Velocity to Position'

  real_T RandomNumber_Mean_e;          // Expression: 0
                                          //  Referenced by: '<S358>/Random Number'

  real_T RandomNumber_Seed_i;          // Expression: 0
                                          //  Referenced by: '<S358>/Random Number'

  real_T AccelerationtoVelocity_gainval;
                           // Computed Parameter: AccelerationtoVelocity_gainval
                              //  Referenced by: '<S356>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC;    // Expression: 0
                                          //  Referenced by: '<S356>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_b;
                          // Computed Parameter: AccelerationtoVelocity_gainva_b
                             //  Referenced by: '<S357>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_p;  // Expression: 0
                                          //  Referenced by: '<S357>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_gainva_k;
                          // Computed Parameter: AccelerationtoVelocity_gainva_k
                             //  Referenced by: '<S358>/Acceleration  to Velocity'

  real_T AccelerationtoVelocity_IC_c;  // Expression: 0
                                          //  Referenced by: '<S358>/Acceleration  to Velocity'

  real_T Out1_Y0_mp;                   // Computed Parameter: Out1_Y0_mp
                                          //  Referenced by: '<S142>/Out1'

  real_T Out1_Y0_av;                   // Computed Parameter: Out1_Y0_av
                                          //  Referenced by: '<S144>/Out1'

  real_T Out1_Y0_g;                    // Computed Parameter: Out1_Y0_g
                                          //  Referenced by: '<S146>/Out1'

  real_T PuckState_Value;              // Expression: 1
                                          //  Referenced by: '<S133>/Puck State'

  real_T Out1_Y0_o;                    // Computed Parameter: Out1_Y0_o
                                          //  Referenced by: '<S155>/Out1'

  real_T Out1_Y0_a4;                   // Computed Parameter: Out1_Y0_a4
                                          //  Referenced by: '<S157>/Out1'

  real_T Out1_Y0_nv;                   // Computed Parameter: Out1_Y0_nv
                                          //  Referenced by: '<S159>/Out1'

  real_T PuckState_Value_o;            // Expression: 1
                                          //  Referenced by: '<S134>/Puck State'

  real_T Out1_Y0_fr;                   // Computed Parameter: Out1_Y0_fr
                                          //  Referenced by: '<S168>/Out1'

  real_T Out1_Y0_bk;                   // Computed Parameter: Out1_Y0_bk
                                          //  Referenced by: '<S170>/Out1'

  real_T Out1_Y0_j2;                   // Computed Parameter: Out1_Y0_j2
                                          //  Referenced by: '<S172>/Out1'

  real_T Constant2_Value;              // Expression: 0
                                          //  Referenced by: '<S135>/Constant2'

  real_T Constant4_Value;              // Expression: 0
                                          //  Referenced by: '<S135>/Constant4'

  real_T Constant5_Value;              // Expression: 0
                                          //  Referenced by: '<S135>/Constant5'

  real_T Constant6_Value;              // Expression: 0
                                          //  Referenced by: '<S135>/Constant6'

  real_T PuckState_Value_l;            // Expression: 1
                                          //  Referenced by: '<S135>/Puck State'

  real_T Out1_Y0_pn;                   // Computed Parameter: Out1_Y0_pn
                                          //  Referenced by: '<S190>/Out1'

  real_T Out1_Y0_bd;                   // Computed Parameter: Out1_Y0_bd
                                          //  Referenced by: '<S192>/Out1'

  real_T Out1_Y0_ai;                   // Computed Parameter: Out1_Y0_ai
                                          //  Referenced by: '<S194>/Out1'

  real_T PuckState_Value_n;            // Expression: 1
                                          //  Referenced by: '<S180>/Puck State'

  real_T Out1_Y0_ln;                   // Computed Parameter: Out1_Y0_ln
                                          //  Referenced by: '<S207>/Out1'

  real_T Out1_Y0_bw;                   // Computed Parameter: Out1_Y0_bw
                                          //  Referenced by: '<S209>/Out1'

  real_T Out1_Y0_ac;                   // Computed Parameter: Out1_Y0_ac
                                          //  Referenced by: '<S211>/Out1'

  real_T DesiredRateBLACK_Value;       // Expression: 0.104719755/2
                                          //  Referenced by: '<S198>/Desired Rate (BLACK)'

  real_T PuckState_Value_e;            // Expression: 1
                                          //  Referenced by: '<S183>/Puck State'

  real_T Out1_Y0_at;                   // Computed Parameter: Out1_Y0_at
                                          //  Referenced by: '<S256>/Out1'

  real_T Out1_Y0_dw;                   // Computed Parameter: Out1_Y0_dw
                                          //  Referenced by: '<S258>/Out1'

  real_T Out1_Y0_jd;                   // Computed Parameter: Out1_Y0_jd
                                          //  Referenced by: '<S260>/Out1'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<S246>/Constant1'

  real_T Constant4_Value_l;            // Expression: 0
                                          //  Referenced by: '<S246>/Constant4'

  real_T Constant5_Value_b;            // Expression: 0
                                          //  Referenced by: '<S246>/Constant5'

  real_T Constant6_Value_a;            // Expression: 0
                                          //  Referenced by: '<S246>/Constant6'

  real_T PuckState_Value_c;            // Expression: 1
                                          //  Referenced by: '<S246>/Puck State'

  real_T Constant1_Value_f;            // Expression: 0
                                          //  Referenced by: '<S249>/Constant1'

  real_T Constant4_Value_k;            // Expression: 0
                                          //  Referenced by: '<S249>/Constant4'

  real_T Constant5_Value_l;            // Expression: 0
                                          //  Referenced by: '<S249>/Constant5'

  real_T Constant6_Value_k;            // Expression: 0
                                          //  Referenced by: '<S249>/Constant6'

  real_T ExternalForcesifany_Value[6]; // Expression: [0 0 0 0 0 0]';
                                          //  Referenced by: '<S249>/External Forces (if any)'

  real_T PuckState_Value_f;            // Expression: 1
                                          //  Referenced by: '<S249>/Puck State'

  real_T Out1_Y0_jr;                   // Computed Parameter: Out1_Y0_jr
                                          //  Referenced by: '<S275>/Out1'

  real_T Out1_Y0_mr;                   // Computed Parameter: Out1_Y0_mr
                                          //  Referenced by: '<S277>/Out1'

  real_T Out1_Y0_i0;                   // Computed Parameter: Out1_Y0_i0
                                          //  Referenced by: '<S279>/Out1'

  real_T PuckState_Value_fj;           // Expression: 1
                                          //  Referenced by: '<S266>/Puck State'

  real_T Out1_Y0_nf;                   // Computed Parameter: Out1_Y0_nf
                                          //  Referenced by: '<S301>/Out1'

  real_T Out1_Y0_gb;                   // Computed Parameter: Out1_Y0_gb
                                          //  Referenced by: '<S303>/Out1'

  real_T Out1_Y0_da;                   // Computed Parameter: Out1_Y0_da
                                          //  Referenced by: '<S305>/Out1'

  real_T Constant2_Value_g;            // Expression: 0
                                          //  Referenced by: '<S268>/Constant2'

  real_T Constant4_Value_h;            // Expression: 0
                                          //  Referenced by: '<S268>/Constant4'

  real_T Constant5_Value_h;            // Expression: 0
                                          //  Referenced by: '<S268>/Constant5'

  real_T Constant6_Value_p;            // Expression: 0
                                          //  Referenced by: '<S268>/Constant6'

  real_T PuckState_Value_od;           // Expression: 1
                                          //  Referenced by: '<S268>/Puck State'

  real_T Out1_Y0_gx;                   // Computed Parameter: Out1_Y0_gx
                                          //  Referenced by: '<S318>/Out1'

  real_T Out1_Y0_fj;                   // Computed Parameter: Out1_Y0_fj
                                          //  Referenced by: '<S320>/Out1'

  real_T Out1_Y0_bm;                   // Computed Parameter: Out1_Y0_bm
                                          //  Referenced by: '<S322>/Out1'

  real_T PuckState_Value_g;            // Expression: 1
                                          //  Referenced by: '<S309>/Puck State'

  real_T Out1_Y0_i3;                   // Computed Parameter: Out1_Y0_i3
                                          //  Referenced by: '<S344>/Out1'

  real_T Out1_Y0_bs;                   // Computed Parameter: Out1_Y0_bs
                                          //  Referenced by: '<S346>/Out1'

  real_T Out1_Y0_c5;                   // Computed Parameter: Out1_Y0_c5
                                          //  Referenced by: '<S348>/Out1'

  real_T Constant1_Value_k;            // Expression: 0
                                          //  Referenced by: '<S311>/Constant1'

  real_T Constant4_Value_p;            // Expression: 0
                                          //  Referenced by: '<S311>/Constant4'

  real_T Constant5_Value_o;            // Expression: 0
                                          //  Referenced by: '<S311>/Constant5'

  real_T Constant6_Value_ao;           // Expression: 0
                                          //  Referenced by: '<S311>/Constant6'

  real_T PuckState_Value_es;           // Expression: 1
                                          //  Referenced by: '<S311>/Puck State'

  real_T Constant3_Value;              // Expression: 0
                                          //  Referenced by: '<S352>/Constant3'

  real_T Constant4_Value_e;            // Expression: 0
                                          //  Referenced by: '<S352>/Constant4'

  real_T Constant5_Value_n;            // Expression: 0
                                          //  Referenced by: '<S352>/Constant5'

  real_T PuckState_Value_gd;           // Expression: 0
                                          //  Referenced by: '<S352>/Puck State'

  real_T Constant_Value;               // Expression: 0
                                          //  Referenced by: '<S354>/Constant'

  real_T Constant1_Value_l;            // Expression: 0
                                          //  Referenced by: '<S354>/Constant1'

  real_T Constant2_Value_m;            // Expression: 0
                                          //  Referenced by: '<S354>/Constant2'

  real_T Constant4_Value_o;            // Expression: 0
                                          //  Referenced by: '<S354>/Constant4'

  real_T Constant5_Value_f;            // Expression: 0
                                          //  Referenced by: '<S354>/Constant5'

  real_T Constant6_Value_j;            // Expression: 0
                                          //  Referenced by: '<S354>/Constant6'

  real_T PuckState_Value_h;            // Expression: 0
                                          //  Referenced by: '<S354>/Puck State'

  real_T Gain_Gain;                    // Expression: -1
                                          //  Referenced by: '<S354>/Gain'

  real_T Saturation_UpperSat;          // Expression: 0.005
                                          //  Referenced by: '<S354>/Saturation'

  real_T Saturation_LowerSat;          // Expression: -0.005
                                          //  Referenced by: '<S354>/Saturation'

  real_T RED_Tz4_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz4'

  real_T RED_Tz5_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz5'

  real_T RED_Tz6_InitialValue;         // Expression: 0
                                          //  Referenced by: '<Root>/RED_Tz6'

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
                                          //  Referenced by: '<S77>/UDP Receive'

  int32_T SendBLACKStatestoBLACKPlatform_;
                          // Computed Parameter: SendBLACKStatestoBLACKPlatform_
                             //  Referenced by: '<S78>/Send BLACK States to  BLACK Platform'

  int32_T UDPSend_Port;                // Computed Parameter: UDPSend_Port
                                          //  Referenced by: '<Root>/UDP Send'

  boolean_T Delay1_InitialCondition;
                                  // Computed Parameter: Delay1_InitialCondition
                                     //  Referenced by: '<S61>/Delay1'

  boolean_T Delay2_InitialCondition;
                                  // Computed Parameter: Delay2_InitialCondition
                                     //  Referenced by: '<S61>/Delay2'

  boolean_T Delay5_InitialCondition;
                                  // Computed Parameter: Delay5_InitialCondition
                                     //  Referenced by: '<S61>/Delay5'

  boolean_T Delay3_InitialCondition;
                                  // Computed Parameter: Delay3_InitialCondition
                                     //  Referenced by: '<S61>/Delay3'

  boolean_T Delay4_InitialCondition;
                                  // Computed Parameter: Delay4_InitialCondition
                                     //  Referenced by: '<S61>/Delay4'

  boolean_T Delay_InitialCondition_d;
                                 // Computed Parameter: Delay_InitialCondition_d
                                    //  Referenced by: '<S115>/Delay'

  boolean_T Delay_InitialCondition_n;
                                 // Computed Parameter: Delay_InitialCondition_n
                                    //  Referenced by: '<S98>/Delay'

  P_ChangeBLUEBehavior_Template_T ChangeBLUEBehavior_k;// '<S13>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_b;// '<S12>/Change BLUE Behavior' 
  P_ChangeBLUEBehavior_Templa_c_T ChangeBLUEBehavior_gj;// '<S11>/Change BLUE Behavior' 
  P_SubPhase2_Template_v3_03__g_T SubPhase3_b;// '<S178>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03__g_T SubPhase2_g;// '<S178>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_03_20_T SubPhase4_f;// '<S177>/Sub-Phase #4'
  P_SubPhase2_Template_v3_03__h_T SubPhase3_p;// '<S177>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03__h_T SubPhase2_m;// '<S177>/Sub-Phase #2 '
  P_SubPhase1_Template_v3_03_20_T SubPhase1_a;// '<S177>/Sub-Phase #1'
  P_SubPhase2_Template_v3_03_20_T SubPhase3;// '<S176>/Sub-Phase #3 '
  P_SubPhase2_Template_v3_03_20_T SubPhase2;// '<S176>/Sub-Phase #2 '
  P_Phase0WaitforSynchronizatio_T Phase1StartFloating;// '<Root>/Phase #1:  Start Floating ' 
  P_Phase0WaitforSynchronizatio_T Phase0WaitforSynchronization;
                                // '<Root>/Phase #0:  Wait for Synchronization'
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
//  Block '<S100>/Check Signal Attributes' : Unused code path elimination
//  Block '<S101>/Check Signal Attributes' : Unused code path elimination
//  Block '<S117>/Check Signal Attributes' : Unused code path elimination
//  Block '<S118>/Check Signal Attributes' : Unused code path elimination
//  Block '<S77>/Reshape' : Reshape block reduction


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
//  '<S6>'   : 'Template_v3_03_2020a/Is this a  simulation?'
//  '<S7>'   : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization'
//  '<S8>'   : 'Template_v3_03_2020a/Phase #1:  Start Floating '
//  '<S9>'   : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position'
//  '<S10>'  : 'Template_v3_03_2020a/Phase #3: Experiment'
//  '<S11>'  : 'Template_v3_03_2020a/Phase #4:  Return Home'
//  '<S12>'  : 'Template_v3_03_2020a/Phase #5:  Hold Home'
//  '<S13>'  : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW'
//  '<S14>'  : 'Template_v3_03_2020a/Simulate Plant Dynamics'
//  '<S15>'  : 'Template_v3_03_2020a/Subsystem'
//  '<S16>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior'
//  '<S17>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Is this a  simulation?'
//  '<S18>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior/GPIO for Magnet'
//  '<S19>'  : 'Template_v3_03_2020a/Float & Magnet Controls/Change RED Behavior/GPIO for Pucks'
//  '<S20>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior'
//  '<S21>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior'
//  '<S22>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior'
//  '<S23>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Is this a  simulation?'
//  '<S24>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Send Commands to PWM Blocks'
//  '<S25>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF'
//  '<S26>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body'
//  '<S27>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S28>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S29>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S30>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S31>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S32>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S33>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLACK Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S34>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF'
//  '<S35>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body'
//  '<S36>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S37>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S38>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S39>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S40>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S41>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S42>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change BLUE Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S43>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF'
//  '<S44>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body'
//  '<S45>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function'
//  '<S46>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function1'
//  '<S47>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/MATLAB Function2'
//  '<S48>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial'
//  '<S49>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/pseudo-inverse'
//  '<S50>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Calculate Thruster  ON//OFF/Rotate Forces to Inertial/Create Rotation Matrix'
//  '<S51>'  : 'Template_v3_03_2020a/From Force//Torque to PWM Signal/Change RED Behavior/Rotate Forces to Body/Create Rotation Matrix'
//  '<S52>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change BLACK Behavior'
//  '<S53>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change BLUE Behavior'
//  '<S54>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior'
//  '<S55>'  : 'Template_v3_03_2020a/From Torque, Command RW/Is this a  simulation?'
//  '<S56>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal'
//  '<S57>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM'
//  '<S58>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Calculate Saturated RPM Signal/Calculate RW RPM Increment'
//  '<S59>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Check if RW is Ready'
//  '<S60>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Convert Wheel Rate to  Motor Rate'
//  '<S61>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Delay Bank'
//  '<S62>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Get RW Direction'
//  '<S63>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status'
//  '<S64>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/RPM to PWM Value'
//  '<S65>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller'
//  '<S66>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send PWM to Motor Controller'
//  '<S67>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor'
//  '<S68>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Obtain RW Status/GPIO Read1'
//  '<S69>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Send Direction to Motor Controller/GPIO Write'
//  '<S70>'  : 'Template_v3_03_2020a/From Torque, Command RW/Change RED Behavior/Wheel RPM to PWM/Turn on Motor/GPIO Write1'
//  '<S71>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Initialize Universal Time (Simulation)'
//  '<S72>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Is this a  simulation?1'
//  '<S73>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States'
//  '<S74>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM'
//  '<S75>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM'
//  '<S76>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Is this a  simulation?'
//  '<S77>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States'
//  '<S78>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States'
//  '<S79>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1'
//  '<S80>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2'
//  '<S81>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3'
//  '<S82>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4'
//  '<S83>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5'
//  '<S84>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6'
//  '<S85>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x1/Hold this value'
//  '<S86>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x2/Hold this value'
//  '<S87>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x3/Hold this value'
//  '<S88>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x4/Hold this value'
//  '<S89>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x5/Hold this value'
//  '<S90>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain BLACK States/x_dot -> x6/Hold this value'
//  '<S91>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time'
//  '<S92>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1'
//  '<S93>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2'
//  '<S94>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3'
//  '<S95>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4'
//  '<S96>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5'
//  '<S97>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6'
//  '<S98>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector'
//  '<S99>'  : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Enabled Subsystem'
//  '<S100>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S101>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S102>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x1/Hold this value'
//  '<S103>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x2/Hold this value'
//  '<S104>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x3/Hold this value'
//  '<S105>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x4/Hold this value'
//  '<S106>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x5/Hold this value'
//  '<S107>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED+BLACK, or RED+BLACK+ARM/Obtain RED States/x_dot -> x6/Hold this value'
//  '<S108>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time'
//  '<S109>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1'
//  '<S110>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2'
//  '<S111>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3'
//  '<S112>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4'
//  '<S113>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5'
//  '<S114>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6'
//  '<S115>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector'
//  '<S116>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Enabled Subsystem'
//  '<S117>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes'
//  '<S118>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/Correct Time/Edge Detector/Check Signal Attributes1'
//  '<S119>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x1/Hold this value'
//  '<S120>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x2/Hold this value'
//  '<S121>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x3/Hold this value'
//  '<S122>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x4/Hold this value'
//  '<S123>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x5/Hold this value'
//  '<S124>' : 'Template_v3_03_2020a/Grab PhaseSpace Data via UDP/Use Hardware to Obtain States/Using RED, BLACK, BLUE, or RED + ARM/x_dot -> x6/Hold this value'
//  '<S125>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change BLACK Behavior'
//  '<S126>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change BLUE Behavior'
//  '<S127>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Change RED Behavior'
//  '<S128>' : 'Template_v3_03_2020a/Phase #0:  Wait for Synchronization/Is this a  simulation?'
//  '<S129>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change BLACK Behavior'
//  '<S130>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change BLUE Behavior'
//  '<S131>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Change RED Behavior'
//  '<S132>' : 'Template_v3_03_2020a/Phase #1:  Start Floating /Is this a  simulation?'
//  '<S133>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior'
//  '<S134>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior'
//  '<S135>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior'
//  '<S136>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Is this a  simulation?'
//  '<S137>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S138>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S139>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S140>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control'
//  '<S141>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S142>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S143>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S144>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S145>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S146>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S147>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S148>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S149>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S150>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S151>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S152>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S153>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control'
//  '<S154>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S155>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S156>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S157>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S158>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S159>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S160>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S161>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S162>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S163>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S164>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S165>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S166>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control'
//  '<S167>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S168>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S169>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S170>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S171>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S172>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S173>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S174>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S175>' : 'Template_v3_03_2020a/Phase #2:  Move to  Initial Position/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S176>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior'
//  '<S177>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior'
//  '<S178>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior'
//  '<S179>' : 'Template_v3_03_2020a/Phase #3: Experiment/Is this a  simulation?'
//  '<S180>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1'
//  '<S181>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #2 '
//  '<S182>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #3 '
//  '<S183>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4'
//  '<S184>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Subsystem'
//  '<S185>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S186>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S187>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S188>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control'
//  '<S189>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S190>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S191>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S192>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S193>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S194>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S195>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S196>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S197>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S198>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD'
//  '<S199>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S200>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S201>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S202>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control'
//  '<S203>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Subsystem'
//  '<S204>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1'
//  '<S205>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/BLACK_RzD/Wrap1/MATLAB Function'
//  '<S206>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S207>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S208>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S209>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S210>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S211>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S212>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S213>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S214>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLACK Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S215>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1'
//  '<S216>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #2 '
//  '<S217>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #3 '
//  '<S218>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4'
//  '<S219>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Subsystem'
//  '<S220>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S221>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S222>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S223>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control'
//  '<S224>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S225>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S226>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S227>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S228>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S229>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S230>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S231>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S232>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S233>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)'
//  '<S234>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)'
//  '<S235>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)'
//  '<S236>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control'
//  '<S237>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S238>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S239>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S240>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S241>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S242>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S243>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function2'
//  '<S244>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function3'
//  '<S245>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change BLUE Behavior/Sub-Phase #4/Hough Control/MATLAB Function4'
//  '<S246>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1'
//  '<S247>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #2 '
//  '<S248>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #3 '
//  '<S249>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4'
//  '<S250>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Subsystem'
//  '<S251>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)'
//  '<S252>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)'
//  '<S253>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)'
//  '<S254>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control'
//  '<S255>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S256>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S257>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S258>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S259>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S260>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S261>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function2'
//  '<S262>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function3'
//  '<S263>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #1/Hough Control/MATLAB Function4'
//  '<S264>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/Control Block'
//  '<S265>' : 'Template_v3_03_2020a/Phase #3: Experiment/Change RED Behavior/Sub-Phase #4/RED + BLACK States'
//  '<S266>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior'
//  '<S267>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior'
//  '<S268>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior'
//  '<S269>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Is this a  simulation?'
//  '<S270>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S271>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S272>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S273>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control'
//  '<S274>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S275>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S276>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S277>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S278>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S279>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S280>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S281>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S282>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S283>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S284>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S285>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S286>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control'
//  '<S287>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S288>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S289>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S290>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S291>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S292>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S293>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S294>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S295>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S296>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S297>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S298>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S299>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control'
//  '<S300>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S301>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S302>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S303>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S304>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S305>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S306>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S307>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S308>' : 'Template_v3_03_2020a/Phase #4:  Return Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S309>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior'
//  '<S310>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior'
//  '<S311>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior'
//  '<S312>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Is this a  simulation?'
//  '<S313>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)'
//  '<S314>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)'
//  '<S315>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)'
//  '<S316>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control'
//  '<S317>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S318>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S319>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S320>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S321>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S322>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S323>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function2'
//  '<S324>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function3'
//  '<S325>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLACK Behavior/Hough Control/MATLAB Function4'
//  '<S326>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)'
//  '<S327>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)'
//  '<S328>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)'
//  '<S329>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control'
//  '<S330>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S331>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S332>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S333>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S334>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S335>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S336>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function2'
//  '<S337>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function3'
//  '<S338>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change BLUE Behavior/Hough Control/MATLAB Function4'
//  '<S339>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)'
//  '<S340>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)'
//  '<S341>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)'
//  '<S342>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control'
//  '<S343>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1'
//  '<S344>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Attitude)/x_dot -> x1/Hold this value'
//  '<S345>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1'
//  '<S346>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (X-Position)/x_dot -> x1/Hold this value'
//  '<S347>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1'
//  '<S348>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Custom Discrete PD (Y-Position)/x_dot -> x1/Hold this value'
//  '<S349>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function2'
//  '<S350>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function3'
//  '<S351>' : 'Template_v3_03_2020a/Phase #5:  Hold Home/Change RED Behavior/Hough Control/MATLAB Function4'
//  '<S352>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLACK Behavior'
//  '<S353>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change BLUE Behavior'
//  '<S354>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Change RED Behavior'
//  '<S355>' : 'Template_v3_03_2020a/Phase #6:  Stop Floating and Spin Down RW/Is this a  simulation?'
//  '<S356>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLACK Dynamics Model'
//  '<S357>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model'
//  '<S358>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/RED Dynamics Model'
//  '<S359>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)'
//  '<S360>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)'
//  '<S361>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)'
//  '<S362>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x1'
//  '<S363>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x2'
//  '<S364>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x3'
//  '<S365>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x4'
//  '<S366>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x5'
//  '<S367>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x6'
//  '<S368>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x7'
//  '<S369>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x8'
//  '<S370>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x9'
//  '<S371>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLACK Dynamics Model/MATLAB Function'
//  '<S372>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/BLUE  Dynamics Model/MATLAB Function'
//  '<S373>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/RED Dynamics Model/MATLAB Function'
//  '<S374>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/MATLAB Function'
//  '<S375>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLACK)/Sample and Hold1'
//  '<S376>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/MATLAB Function'
//  '<S377>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (BLUE)/Sample and Hold1'
//  '<S378>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/MATLAB Function'
//  '<S379>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/Sample and Hold  Data to Match  PhaseSpace (RED)/Sample and Hold'
//  '<S380>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x1/Hold this value'
//  '<S381>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x2/Hold this value'
//  '<S382>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x3/Hold this value'
//  '<S383>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x4/Hold this value'
//  '<S384>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x5/Hold this value'
//  '<S385>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x6/Hold this value'
//  '<S386>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x7/Hold this value'
//  '<S387>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x8/Hold this value'
//  '<S388>' : 'Template_v3_03_2020a/Simulate Plant Dynamics/x_dot -> x9/Hold this value'

#endif                                 // RTW_HEADER_Template_v3_03_2020a_h_
