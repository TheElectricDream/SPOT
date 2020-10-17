/*
 * ValidateThrustersBLACK.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ValidateThrustersBLACK".
 *
 * Model version              : 1.11
 * Simulink Coder version : 9.1 (R2019a) 23-Nov-2018
 * C source code generated on : Fri Mar 13 15:10:28 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ValidateThrustersBLACK.h"
#include "ValidateThrustersBLACK_private.h"
#include "ValidateThrustersBLACK_dt.h"

/* Block signals (default storage) */
B_ValidateThrustersBLACK_T ValidateThrustersBLACK_B;

/* Block states (default storage) */
DW_ValidateThrustersBLACK_T ValidateThrustersBLACK_DW;

/* Real-time model */
RT_MODEL_ValidateThrustersBLA_T ValidateThrustersBLACK_M_;
RT_MODEL_ValidateThrustersBLA_T *const ValidateThrustersBLACK_M =
  &ValidateThrustersBLACK_M_;

/* Forward declaration for local functions */
static void ValidateThru_SystemCore_release(const
  raspi_internal_PWMBlock_Valid_T *obj);
static void ValidateThrus_SystemCore_delete(const
  raspi_internal_PWMBlock_Valid_T *obj);
static void matlabCodegenHandle_matlabCodeg(raspi_internal_PWMBlock_Valid_T *obj);

/*
 * Output and update for action system:
 *    '<S1>/If Action Subsystem'
 *    '<S1>/If Action Subsystem1'
 *    '<S1>/If Action Subsystem2'
 *    '<S1>/If Action Subsystem3'
 *    '<S1>/If Action  Subsystem4'
 *    '<S1>/If Action Subsystem5'
 *    '<S1>/If Action Subsystem6'
 *    '<S1>/If Action Subsystem7'
 *    '<S2>/If Action Subsystem'
 *    '<S2>/If Action Subsystem1'
 *    ...
 */
void ValidateThrus_IfActionSubsystem(real_T rty_PWM[8],
  P_IfActionSubsystem_ValidateT_T *localP)
{
  /* SignalConversion: '<S6>/OutportBufferForPWM' incorporates:
   *  Constant: '<S6>/Constant'
   */
  memcpy(&rty_PWM[0], &localP->Constant_Value[0], sizeof(real_T) << 3U);
}

static void ValidateThru_SystemCore_release(const
  raspi_internal_PWMBlock_Valid_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    EXT_PWMBlock_terminate(obj->PinNumber);
  }
}

static void ValidateThrus_SystemCore_delete(const
  raspi_internal_PWMBlock_Valid_T *obj)
{
  ValidateThru_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(raspi_internal_PWMBlock_Valid_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    ValidateThrus_SystemCore_delete(obj);
  }
}

/* Model step function */
void ValidateThrustersBLACK_step(void)
{
  real_T rtb_Clock_tmp;

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (ValidateThrustersBLACK_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersBLACK_DW.ChangeBLACKBehavior_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersBLACK_DW.ChangeBLUEBehavior_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersBLACK_DW.ChangeREDBehavior_SubsysRanBC);

  /* If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersBLACK_DW.ThisIFblockdetermineswhetherorn = -1;
  if ((ValidateThrustersBLACK_P.Constant8_Value == 1.0) ||
      (ValidateThrustersBLACK_P.Constant_Value == 1.0)) {
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhetherorn = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change RED Behavior' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Clock: '<S3>/Clock' */
    rtb_Clock_tmp = ValidateThrustersBLACK_M->Timing.t[0];

    /* If: '<S3>/If' incorporates:
     *  Clock: '<S3>/Clock'
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Constant: '<S3>/Constant2'
     *  Constant: '<S3>/Constant3'
     *  Constant: '<S3>/Constant4'
     *  Constant: '<S3>/Constant5'
     *  Constant: '<S3>/Constant6'
     *  Constant: '<S3>/Constant7'
     */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem = -1;
    if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster1_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 0;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem_m);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem_m.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster2_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 1;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem1_n);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem1_n.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster3_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 2;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem2_i);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem2_i.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster4_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 3;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem3_i);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem3_i.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster5_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 4;

      /* Outputs for IfAction SubSystem: '<S3>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem4_fu);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem4_fu.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action  Subsystem4' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster6_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 5;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem5_g);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem5_g.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem5' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster7_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem = 6;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S27>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
        &ValidateThrustersBLACK_P.IfActionSubsystem6_hk);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem6_hk.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
    } else {
      if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster8_OnTime) {
        ValidateThrustersBLACK_DW.If_ActiveSubsystem = 7;

        /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge,
          &ValidateThrustersBLACK_P.IfActionSubsystem7_j);
        srUpdateBC
          (ValidateThrustersBLACK_DW.IfActionSubsystem7_j.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
      }
    }

    /* End of If: '<S3>/If' */
    srUpdateBC(ValidateThrustersBLACK_DW.ChangeREDBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change RED Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' */

  /* If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_d = -1;
  if ((ValidateThrustersBLACK_P.Constant8_Value == 2.0) ||
      (ValidateThrustersBLACK_P.Constant_Value == 1.0)) {
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_d = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change BLACK Behavior' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Clock: '<S1>/Clock' */
    rtb_Clock_tmp = ValidateThrustersBLACK_M->Timing.t[0];

    /* If: '<S1>/If' incorporates:
     *  Clock: '<S1>/Clock'
     *  Constant: '<S1>/Constant'
     *  Constant: '<S1>/Constant1'
     *  Constant: '<S1>/Constant2'
     *  Constant: '<S1>/Constant3'
     *  Constant: '<S1>/Constant4'
     *  Constant: '<S1>/Constant5'
     *  Constant: '<S1>/Constant6'
     *  Constant: '<S1>/Constant7'
     */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = -1;
    if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster1_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 0;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster2_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 1;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem1);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster3_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 2;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem2);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster4_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 3;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem3);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster5_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 4;

      /* Outputs for IfAction SubSystem: '<S1>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem4);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action  Subsystem4' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster6_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 5;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S10>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem5);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster7_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 6;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
        &ValidateThrustersBLACK_P.IfActionSubsystem6);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem6.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem6' */
    } else {
      if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster8_OnTime) {
        ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = 7;

        /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S12>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_c,
          &ValidateThrustersBLACK_P.IfActionSubsystem7);
        srUpdateBC
          (ValidateThrustersBLACK_DW.IfActionSubsystem7.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S1>/If Action Subsystem7' */
      }
    }

    /* End of If: '<S1>/If' */
    srUpdateBC(ValidateThrustersBLACK_DW.ChangeBLACKBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change BLACK Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' */

  /* If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_i = -1;
  if ((ValidateThrustersBLACK_P.Constant8_Value == 3.0) ||
      (ValidateThrustersBLACK_P.Constant_Value == 1.0)) {
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_i = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change BLUE Behavior' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Clock: '<S2>/Clock' */
    rtb_Clock_tmp = ValidateThrustersBLACK_M->Timing.t[0];

    /* If: '<S2>/If' incorporates:
     *  Clock: '<S2>/Clock'
     *  Constant: '<S2>/Constant'
     *  Constant: '<S2>/Constant1'
     *  Constant: '<S2>/Constant2'
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     *  Constant: '<S2>/Constant5'
     *  Constant: '<S2>/Constant6'
     *  Constant: '<S2>/Constant7'
     */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = -1;
    if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster1_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 0;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem_d);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem_d.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster2_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 1;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem1_p);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem1_p.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster3_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 2;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem2_d);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem2_d.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster4_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 3;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem3_h);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem3_h.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster5_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 4;

      /* Outputs for IfAction SubSystem: '<S2>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem4_f);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem4_f.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action  Subsystem4' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster6_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 5;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem5_b);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem5_b.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem5' */
    } else if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster7_OnTime) {
      ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 6;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S19>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
        &ValidateThrustersBLACK_P.IfActionSubsystem6_h);
      srUpdateBC
        (ValidateThrustersBLACK_DW.IfActionSubsystem6_h.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem6' */
    } else {
      if (rtb_Clock_tmp < ValidateThrustersBLACK_P.Thruster8_OnTime) {
        ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = 7;

        /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem7' incorporates:
         *  ActionPort: '<S20>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersBLACK_B.Merge_a,
          &ValidateThrustersBLACK_P.IfActionSubsystem7_p);
        srUpdateBC
          (ValidateThrustersBLACK_DW.IfActionSubsystem7_p.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S2>/If Action Subsystem7' */
      }
    }

    /* End of If: '<S2>/If' */
    srUpdateBC(ValidateThrustersBLACK_DW.ChangeBLUEBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change BLUE Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' */

  /* Sum: '<Root>/Sum' */
  ValidateThrustersBLACK_B.Sum = (ValidateThrustersBLACK_B.Merge[0] +
    ValidateThrustersBLACK_B.Merge_c[7]) + ValidateThrustersBLACK_B.Merge_a[7];

  /* Sum: '<Root>/Sum1' */
  ValidateThrustersBLACK_B.Sum1 = (ValidateThrustersBLACK_B.Merge[1] +
    ValidateThrustersBLACK_B.Merge_c[2]) + ValidateThrustersBLACK_B.Merge_a[2];

  /* Sum: '<Root>/Sum2' */
  ValidateThrustersBLACK_B.Sum2 = (ValidateThrustersBLACK_B.Merge[3] +
    ValidateThrustersBLACK_B.Merge_c[4]) + ValidateThrustersBLACK_B.Merge_a[4];

  /* Sum: '<Root>/Sum3' */
  ValidateThrustersBLACK_B.Sum3 = (ValidateThrustersBLACK_B.Merge[4] +
    ValidateThrustersBLACK_B.Merge_c[3]) + ValidateThrustersBLACK_B.Merge_a[3];

  /* Sum: '<Root>/Sum4' */
  ValidateThrustersBLACK_B.Sum4 = (ValidateThrustersBLACK_B.Merge[5] +
    ValidateThrustersBLACK_B.Merge_c[6]) + ValidateThrustersBLACK_B.Merge_a[6];

  /* Sum: '<Root>/Sum5' */
  ValidateThrustersBLACK_B.Sum5 = (ValidateThrustersBLACK_B.Merge[6] +
    ValidateThrustersBLACK_B.Merge_c[5]) + ValidateThrustersBLACK_B.Merge_a[5];

  /* Sum: '<Root>/Sum6' */
  ValidateThrustersBLACK_B.Sum6 = (ValidateThrustersBLACK_B.Merge[7] +
    ValidateThrustersBLACK_B.Merge_c[0]) + ValidateThrustersBLACK_B.Merge_a[0];

  /* Sum: '<Root>/Sum7' */
  ValidateThrustersBLACK_B.Sum7 = ValidateThrustersBLACK_B.Merge_c[1] +
    ValidateThrustersBLACK_B.Merge_a[1];

  /* Outputs for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
  /* MATLABSystem: '<S5>/RED T1 - BLACK T8' */
  if ((ValidateThrustersBLACK_B.Sum >= 0.0) && (ValidateThrustersBLACK_B.Sum <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj.PinNumber,
      ValidateThrustersBLACK_B.Sum);
  }

  /* End of MATLABSystem: '<S5>/RED T1 - BLACK T8' */

  /* MATLABSystem: '<S5>/RED T2 - BLACK T3' */
  if ((ValidateThrustersBLACK_B.Sum1 >= 0.0) && (ValidateThrustersBLACK_B.Sum1 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_m.PinNumber,
      ValidateThrustersBLACK_B.Sum1);
  }

  /* End of MATLABSystem: '<S5>/RED T2 - BLACK T3' */

  /* MATLABSystem: '<S5>/RED T3' */
  if ((ValidateThrustersBLACK_B.Merge[2] >= 0.0) &&
      (ValidateThrustersBLACK_B.Merge[2] <= 1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_f.PinNumber,
      ValidateThrustersBLACK_B.Merge[2]);
  }

  /* End of MATLABSystem: '<S5>/RED T3' */

  /* MATLABSystem: '<S5>/RED T4 - BLACK T5' */
  if ((ValidateThrustersBLACK_B.Sum2 >= 0.0) && (ValidateThrustersBLACK_B.Sum2 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_fe.PinNumber,
      ValidateThrustersBLACK_B.Sum2);
  }

  /* End of MATLABSystem: '<S5>/RED T4 - BLACK T5' */

  /* MATLABSystem: '<S5>/RED T5 - BLACK T4' */
  if ((ValidateThrustersBLACK_B.Sum3 >= 0.0) && (ValidateThrustersBLACK_B.Sum3 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_p.PinNumber,
      ValidateThrustersBLACK_B.Sum3);
  }

  /* End of MATLABSystem: '<S5>/RED T5 - BLACK T4' */

  /* MATLABSystem: '<S5>/RED T6 - BLACK T7' */
  if ((ValidateThrustersBLACK_B.Sum4 >= 0.0) && (ValidateThrustersBLACK_B.Sum4 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_a.PinNumber,
      ValidateThrustersBLACK_B.Sum4);
  }

  /* End of MATLABSystem: '<S5>/RED T6 - BLACK T7' */

  /* MATLABSystem: '<S5>/RED T7 - BLACK T6' */
  if ((ValidateThrustersBLACK_B.Sum5 >= 0.0) && (ValidateThrustersBLACK_B.Sum5 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_k.PinNumber,
      ValidateThrustersBLACK_B.Sum5);
  }

  /* End of MATLABSystem: '<S5>/RED T7 - BLACK T6' */

  /* MATLABSystem: '<S5>/RED T8 - BLACK T1' */
  if ((ValidateThrustersBLACK_B.Sum6 >= 0.0) && (ValidateThrustersBLACK_B.Sum6 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_e.PinNumber,
      ValidateThrustersBLACK_B.Sum6);
  }

  /* End of MATLABSystem: '<S5>/RED T8 - BLACK T1' */

  /* MATLABSystem: '<S5>/BLACK T2' */
  if ((ValidateThrustersBLACK_B.Sum7 >= 0.0) && (ValidateThrustersBLACK_B.Sum7 <=
       1.0)) {
    EXT_PWMBlock_setDutyCycle(ValidateThrustersBLACK_DW.obj_i.PinNumber,
      ValidateThrustersBLACK_B.Sum7);
  }

  /* End of MATLABSystem: '<S5>/BLACK T2' */
  /* End of Outputs for SubSystem: '<Root>/Send Commands to PWM Blocks' */

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)ValidateThrustersBLACK_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(1, (real_T)(((ValidateThrustersBLACK_M->Timing.clockTick1+
      ValidateThrustersBLACK_M->Timing.clockTickH1* 4294967296.0)) * 0.1));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(ValidateThrustersBLACK_M)!=-1) &&
        !((rtmGetTFinal(ValidateThrustersBLACK_M)-
           ValidateThrustersBLACK_M->Timing.t[0]) >
          ValidateThrustersBLACK_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(ValidateThrustersBLACK_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ValidateThrustersBLACK_M)) {
      rtmSetErrorStatus(ValidateThrustersBLACK_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++ValidateThrustersBLACK_M->Timing.clockTick0)) {
    ++ValidateThrustersBLACK_M->Timing.clockTickH0;
  }

  ValidateThrustersBLACK_M->Timing.t[0] =
    ValidateThrustersBLACK_M->Timing.clockTick0 *
    ValidateThrustersBLACK_M->Timing.stepSize0 +
    ValidateThrustersBLACK_M->Timing.clockTickH0 *
    ValidateThrustersBLACK_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.1, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    ValidateThrustersBLACK_M->Timing.clockTick1++;
    if (!ValidateThrustersBLACK_M->Timing.clockTick1) {
      ValidateThrustersBLACK_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void ValidateThrustersBLACK_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ValidateThrustersBLACK_M, 0,
                sizeof(RT_MODEL_ValidateThrustersBLA_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ValidateThrustersBLACK_M->solverInfo,
                          &ValidateThrustersBLACK_M->Timing.simTimeStep);
    rtsiSetTPtr(&ValidateThrustersBLACK_M->solverInfo, &rtmGetTPtr
                (ValidateThrustersBLACK_M));
    rtsiSetStepSizePtr(&ValidateThrustersBLACK_M->solverInfo,
                       &ValidateThrustersBLACK_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&ValidateThrustersBLACK_M->solverInfo,
                          (&rtmGetErrorStatus(ValidateThrustersBLACK_M)));
    rtsiSetRTModelPtr(&ValidateThrustersBLACK_M->solverInfo,
                      ValidateThrustersBLACK_M);
  }

  rtsiSetSimTimeStep(&ValidateThrustersBLACK_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&ValidateThrustersBLACK_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(ValidateThrustersBLACK_M, &ValidateThrustersBLACK_M->Timing.tArray
             [0]);
  rtmSetTFinal(ValidateThrustersBLACK_M, 68.0);
  ValidateThrustersBLACK_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  ValidateThrustersBLACK_M->Sizes.checksums[0] = (1230790806U);
  ValidateThrustersBLACK_M->Sizes.checksums[1] = (2365239014U);
  ValidateThrustersBLACK_M->Sizes.checksums[2] = (2348724538U);
  ValidateThrustersBLACK_M->Sizes.checksums[3] = (375449260U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[38];
    ValidateThrustersBLACK_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem6.IfActionSubsystem_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem7.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem_d.IfActionSubsystem_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem1_p.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem2_d.IfActionSubsystem_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem3_h.IfActionSubsystem_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem5_b.IfActionSubsystem_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem6_h.IfActionSubsystem_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem7_p.IfActionSubsystem_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem4_f.IfActionSubsystem_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem_m.IfActionSubsystem_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem1_n.IfActionSubsystem_SubsysRanBC;
    systemRan[21] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem2_i.IfActionSubsystem_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem3_i.IfActionSubsystem_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem5_g.IfActionSubsystem_SubsysRanBC;
    systemRan[24] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem6_hk.IfActionSubsystem_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem7_j.IfActionSubsystem_SubsysRanBC;
    systemRan[26] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.IfActionSubsystem4_fu.IfActionSubsystem_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &ValidateThrustersBLACK_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[28] = &rtAlwaysEnabled;
    systemRan[29] = &rtAlwaysEnabled;
    systemRan[30] = &rtAlwaysEnabled;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ValidateThrustersBLACK_M->extModeInfo,
      &ValidateThrustersBLACK_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ValidateThrustersBLACK_M->extModeInfo,
                        ValidateThrustersBLACK_M->Sizes.checksums);
    rteiSetTPtr(ValidateThrustersBLACK_M->extModeInfo, rtmGetTPtr
                (ValidateThrustersBLACK_M));
  }

  /* block I/O */
  (void) memset(((void *) &ValidateThrustersBLACK_B), 0,
                sizeof(B_ValidateThrustersBLACK_T));

  /* states (dwork) */
  (void) memset((void *)&ValidateThrustersBLACK_DW, 0,
                sizeof(DW_ValidateThrustersBLACK_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ValidateThrustersBLACK_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    int32_T ret;
    static const char_T tmp[45] = { 'U', 'n', 'a', 'b', 'l', 'e', ' ', 't', 'o',
      ' ', 'c', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'e', ' ', 'p', 'i', 'n', ' ',
      '%', 'u', ' ', 'f', 'o', 'r', ' ', 'P', 'W', 'M', ' ', 'o', 'u', 't', 'p',
      'u', 't', '.', '\\', 'n', '\x00' };

    char_T tmp_0[45];

    /* Start for If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' */
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhetherorn = -1;

    /* Start for IfAction SubSystem: '<Root>/Change RED Behavior' */
    /* Start for If: '<S3>/If' */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem = -1;

    /* End of Start for SubSystem: '<Root>/Change RED Behavior' */

    /* Start for If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' */
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_d = -1;

    /* Start for IfAction SubSystem: '<Root>/Change BLACK Behavior' */
    /* Start for If: '<S1>/If' */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem_m = -1;

    /* End of Start for SubSystem: '<Root>/Change BLACK Behavior' */

    /* Start for If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' */
    ValidateThrustersBLACK_DW.ThisIFblockdetermineswhethero_i = -1;

    /* Start for IfAction SubSystem: '<Root>/Change BLUE Behavior' */
    /* Start for If: '<S2>/If' */
    ValidateThrustersBLACK_DW.If_ActiveSubsystem_f = -1;

    /* End of Start for SubSystem: '<Root>/Change BLUE Behavior' */

    /* Start for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
    /* Start for MATLABSystem: '<S5>/RED T1 - BLACK T8' */
    ValidateThrustersBLACK_DW.obj.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty = true;
    ValidateThrustersBLACK_DW.obj.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj.PinNumber = 27U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T1 - BLACK T8' */

    /* Start for MATLABSystem: '<S5>/RED T2 - BLACK T3' */
    ValidateThrustersBLACK_DW.obj_m.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_m.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_m.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_p = true;
    ValidateThrustersBLACK_DW.obj_m.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_m.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_m.PinNumber = 19U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_m.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_m.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T2 - BLACK T3' */

    /* Start for MATLABSystem: '<S5>/RED T3' */
    ValidateThrustersBLACK_DW.obj_f.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_f.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_f.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_pn = true;
    ValidateThrustersBLACK_DW.obj_f.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_f.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_f.PinNumber = 4U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_f.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_f.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_f.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T3' */

    /* Start for MATLABSystem: '<S5>/RED T4 - BLACK T5' */
    ValidateThrustersBLACK_DW.obj_fe.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_fe.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_fe.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_j = true;
    ValidateThrustersBLACK_DW.obj_fe.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_fe.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_fe.PinNumber = 22U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_fe.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_fe.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_fe.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T4 - BLACK T5' */

    /* Start for MATLABSystem: '<S5>/RED T5 - BLACK T4' */
    ValidateThrustersBLACK_DW.obj_p.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_p.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_p.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_m = true;
    ValidateThrustersBLACK_DW.obj_p.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_p.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_p.PinNumber = 5U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_p.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_p.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T5 - BLACK T4' */

    /* Start for MATLABSystem: '<S5>/RED T6 - BLACK T7' */
    ValidateThrustersBLACK_DW.obj_a.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_a.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_a.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_e = true;
    ValidateThrustersBLACK_DW.obj_a.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_a.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_a.PinNumber = 6U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_a.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_a.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_a.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T6 - BLACK T7' */

    /* Start for MATLABSystem: '<S5>/RED T7 - BLACK T6' */
    ValidateThrustersBLACK_DW.obj_k.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_k.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_k.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_n = true;
    ValidateThrustersBLACK_DW.obj_k.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_k.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_k.PinNumber = 13U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_k.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_k.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T7 - BLACK T6' */

    /* Start for MATLABSystem: '<S5>/RED T8 - BLACK T1' */
    ValidateThrustersBLACK_DW.obj_e.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_e.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_e.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_b = true;
    ValidateThrustersBLACK_DW.obj_e.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_e.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_e.PinNumber = 17U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_e.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_e.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T8 - BLACK T1' */

    /* Start for MATLABSystem: '<S5>/BLACK T2' */
    ValidateThrustersBLACK_DW.obj_i.matlabCodegenIsDeleted = true;
    ValidateThrustersBLACK_DW.obj_i.isInitialized = 0;
    ValidateThrustersBLACK_DW.obj_i.matlabCodegenIsDeleted = false;
    ValidateThrustersBLACK_DW.objisempty_ew = true;
    ValidateThrustersBLACK_DW.obj_i.isSetupComplete = false;
    ValidateThrustersBLACK_DW.obj_i.isInitialized = 1;
    ValidateThrustersBLACK_DW.obj_i.PinNumber = 9U;
    ret = EXT_PWMBlock_init(ValidateThrustersBLACK_DW.obj_i.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersBLACK_DW.obj_i.PinNumber);
    }

    ValidateThrustersBLACK_DW.obj_i.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/BLACK T2' */
    /* End of Start for SubSystem: '<Root>/Send Commands to PWM Blocks' */
  }

  {
    int32_T i;

    /* SystemInitialize for IfAction SubSystem: '<Root>/Change BLUE Behavior' */
    /* SystemInitialize for IfAction SubSystem: '<Root>/Change BLACK Behavior' */
    /* SystemInitialize for IfAction SubSystem: '<Root>/Change RED Behavior' */
    for (i = 0; i < 8; i++) {
      /* SystemInitialize for Merge: '<S3>/Merge' */
      ValidateThrustersBLACK_B.Merge[i] =
        ValidateThrustersBLACK_P.Merge_InitialOutput_g;

      /* SystemInitialize for Merge: '<S1>/Merge' */
      ValidateThrustersBLACK_B.Merge_c[i] =
        ValidateThrustersBLACK_P.Merge_InitialOutput;

      /* SystemInitialize for Merge: '<S2>/Merge' */
      ValidateThrustersBLACK_B.Merge_a[i] =
        ValidateThrustersBLACK_P.Merge_InitialOutput_j;
    }

    /* End of SystemInitialize for SubSystem: '<Root>/Change RED Behavior' */
    /* End of SystemInitialize for SubSystem: '<Root>/Change BLACK Behavior' */
    /* End of SystemInitialize for SubSystem: '<Root>/Change BLUE Behavior' */
  }
}

/* Model terminate function */
void ValidateThrustersBLACK_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
  /* Terminate for MATLABSystem: '<S5>/RED T1 - BLACK T8' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj);

  /* Terminate for MATLABSystem: '<S5>/RED T2 - BLACK T3' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_m);

  /* Terminate for MATLABSystem: '<S5>/RED T3' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_f);

  /* Terminate for MATLABSystem: '<S5>/RED T4 - BLACK T5' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_fe);

  /* Terminate for MATLABSystem: '<S5>/RED T5 - BLACK T4' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_p);

  /* Terminate for MATLABSystem: '<S5>/RED T6 - BLACK T7' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_a);

  /* Terminate for MATLABSystem: '<S5>/RED T7 - BLACK T6' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_k);

  /* Terminate for MATLABSystem: '<S5>/RED T8 - BLACK T1' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_e);

  /* Terminate for MATLABSystem: '<S5>/BLACK T2' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersBLACK_DW.obj_i);

  /* End of Terminate for SubSystem: '<Root>/Send Commands to PWM Blocks' */
}
