/*
 * ValidateThrustersRED.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ValidateThrustersRED".
 *
 * Model version              : 1.16
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Sat Oct 17 12:20:35 2020
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ValidateThrustersRED.h"
#include "ValidateThrustersRED_private.h"
#include "ValidateThrustersRED_dt.h"

/* Block signals (default storage) */
B_ValidateThrustersRED_T ValidateThrustersRED_B;

/* Block states (default storage) */
DW_ValidateThrustersRED_T ValidateThrustersRED_DW;

/* Real-time model */
RT_MODEL_ValidateThrustersRED_T ValidateThrustersRED_M_;
RT_MODEL_ValidateThrustersRED_T *const ValidateThrustersRED_M =
  &ValidateThrustersRED_M_;

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
 *    '<S1>/If Action Subsystem4'
 *    '<S2>/If Action Subsystem'
 *    ...
 */
void ValidateThrus_IfActionSubsystem(real_T rty_PWM[8],
  P_IfActionSubsystem_ValidateT_T *localP)
{
  /* SignalConversion generated from: '<S6>/PWM' incorporates:
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
void ValidateThrustersRED_step(void)
{
  real_T rtb_Clock;

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (ValidateThrustersRED_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersRED_DW.ChangeBLACKBehavior_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersRED_DW.ChangeBLUEBehavior_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(ValidateThrustersRED_DW.ChangeREDBehavior_SubsysRanBC);

  /* If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersRED_DW.ThisIFblockdetermineswhetherorn = -1;
  if ((ValidateThrustersRED_P.Constant8_Value == 1.0) ||
      (ValidateThrustersRED_P.Constant_Value == 1.0)) {
    ValidateThrustersRED_DW.ThisIFblockdetermineswhetherorn = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change RED Behavior' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Clock: '<S3>/Clock' */
    rtb_Clock = ValidateThrustersRED_M->Timing.t[0];

    /* If: '<S3>/If' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Constant: '<S3>/Constant2'
     *  Constant: '<S3>/Constant3'
     *  Constant: '<S3>/Constant4'
     *  Constant: '<S3>/Constant5'
     *  Constant: '<S3>/Constant6'
     *  Constant: '<S3>/Constant7'
     *  Constant: '<S3>/Constant8'
     */
    ValidateThrustersRED_DW.If_ActiveSubsystem = -1;
    if (rtb_Clock < ValidateThrustersRED_P.Thruster1_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 0;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem' incorporates:
       *  ActionPort: '<S24>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem_m);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem_m.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster2_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 1;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S25>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem1_n);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem1_n.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem1' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster3_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 2;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S26>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem2_i);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem2_i.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem2' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster4_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 3;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S27>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem3_i);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem3_i.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem3' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster5_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 4;

      /* Outputs for IfAction SubSystem: '<S3>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S32>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem4_fu);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem4_fu.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action  Subsystem4' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster6_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 5;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S29>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem5_g);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem5_g.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem5' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster7_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 6;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S30>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem6_hk);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem6_hk.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem6' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster8_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem = 7;

      /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem7' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
        &ValidateThrustersRED_P.IfActionSubsystem7_j);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem7_j.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S3>/If Action Subsystem7' */
    } else {
      if (rtb_Clock < ValidateThrustersRED_P.ThrusterOff_Time) {
        ValidateThrustersRED_DW.If_ActiveSubsystem = 8;

        /* Outputs for IfAction SubSystem: '<S3>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S28>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge,
          &ValidateThrustersRED_P.IfActionSubsystem4_o);
        srUpdateBC
          (ValidateThrustersRED_DW.IfActionSubsystem4_o.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S3>/If Action Subsystem4' */
      }
    }

    /* End of If: '<S3>/If' */
    srUpdateBC(ValidateThrustersRED_DW.ChangeREDBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change RED Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' */

  /* If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_d = -1;
  if ((ValidateThrustersRED_P.Constant8_Value == 2.0) ||
      (ValidateThrustersRED_P.Constant_Value == 1.0)) {
    ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_d = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change BLACK Behavior' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Clock: '<S1>/Clock' */
    rtb_Clock = ValidateThrustersRED_M->Timing.t[0];

    /* If: '<S1>/If' incorporates:
     *  Constant: '<S1>/Constant'
     *  Constant: '<S1>/Constant1'
     *  Constant: '<S1>/Constant2'
     *  Constant: '<S1>/Constant3'
     *  Constant: '<S1>/Constant4'
     *  Constant: '<S1>/Constant5'
     *  Constant: '<S1>/Constant6'
     *  Constant: '<S1>/Constant7'
     *  Constant: '<S1>/Constant8'
     */
    ValidateThrustersRED_DW.If_ActiveSubsystem_m = -1;
    if (rtb_Clock < ValidateThrustersRED_P.Thruster1_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 0;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster2_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 1;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem1);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster3_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 2;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem2);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem2' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster4_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 3;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem3);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem3' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster5_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 4;

      /* Outputs for IfAction SubSystem: '<S1>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S14>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem4);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action  Subsystem4' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster6_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 5;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S11>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem5);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem5' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster7_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 6;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S12>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem6);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem6.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem6' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster8_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_m = 7;

      /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem7' incorporates:
       *  ActionPort: '<S13>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
        &ValidateThrustersRED_P.IfActionSubsystem7);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem7.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S1>/If Action Subsystem7' */
    } else {
      if (rtb_Clock < ValidateThrustersRED_P.ThrusterOff_Time) {
        ValidateThrustersRED_DW.If_ActiveSubsystem_m = 8;

        /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S10>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_c,
          &ValidateThrustersRED_P.IfActionSubsystem4_l);
        srUpdateBC
          (ValidateThrustersRED_DW.IfActionSubsystem4_l.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S1>/If Action Subsystem4' */
      }
    }

    /* End of If: '<S1>/If' */
    srUpdateBC(ValidateThrustersRED_DW.ChangeBLACKBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change BLACK Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' */

  /* If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' incorporates:
   *  Constant: '<Root>/Constant8'
   *  Constant: '<S4>/Constant'
   */
  ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_i = -1;
  if ((ValidateThrustersRED_P.Constant8_Value == 3.0) ||
      (ValidateThrustersRED_P.Constant_Value == 1.0)) {
    ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_i = 0;

    /* Outputs for IfAction SubSystem: '<Root>/Change BLUE Behavior' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Clock: '<S2>/Clock' */
    rtb_Clock = ValidateThrustersRED_M->Timing.t[0];

    /* If: '<S2>/If' incorporates:
     *  Constant: '<S2>/Constant'
     *  Constant: '<S2>/Constant1'
     *  Constant: '<S2>/Constant2'
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     *  Constant: '<S2>/Constant5'
     *  Constant: '<S2>/Constant6'
     *  Constant: '<S2>/Constant7'
     *  Constant: '<S2>/Constant8'
     */
    ValidateThrustersRED_DW.If_ActiveSubsystem_f = -1;
    if (rtb_Clock < ValidateThrustersRED_P.Thruster1_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 0;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem_d);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem_d.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster2_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 1;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem1_p);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem1_p.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem1' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster3_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 2;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S17>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem2_d);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem2_d.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem2' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster4_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 3;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem3' incorporates:
       *  ActionPort: '<S18>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem3_h);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem3_h.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem3' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster5_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 4;

      /* Outputs for IfAction SubSystem: '<S2>/If Action  Subsystem4' incorporates:
       *  ActionPort: '<S23>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem4_f);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem4_f.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action  Subsystem4' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster6_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 5;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem5' incorporates:
       *  ActionPort: '<S20>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem5_b);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem5_b.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem5' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster7_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 6;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem6' incorporates:
       *  ActionPort: '<S21>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem6_h);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem6_h.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem6' */
    } else if (rtb_Clock < ValidateThrustersRED_P.Thruster8_OnTime) {
      ValidateThrustersRED_DW.If_ActiveSubsystem_f = 7;

      /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem7' incorporates:
       *  ActionPort: '<S22>/Action Port'
       */
      ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
        &ValidateThrustersRED_P.IfActionSubsystem7_p);
      srUpdateBC
        (ValidateThrustersRED_DW.IfActionSubsystem7_p.IfActionSubsystem_SubsysRanBC);

      /* End of Outputs for SubSystem: '<S2>/If Action Subsystem7' */
    } else {
      if (rtb_Clock < ValidateThrustersRED_P.ThrusterOff_Time) {
        ValidateThrustersRED_DW.If_ActiveSubsystem_f = 8;

        /* Outputs for IfAction SubSystem: '<S2>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S19>/Action Port'
         */
        ValidateThrus_IfActionSubsystem(ValidateThrustersRED_B.Merge_a,
          &ValidateThrustersRED_P.IfActionSubsystem4_fw);
        srUpdateBC
          (ValidateThrustersRED_DW.IfActionSubsystem4_fw.IfActionSubsystem_SubsysRanBC);

        /* End of Outputs for SubSystem: '<S2>/If Action Subsystem4' */
      }
    }

    /* End of If: '<S2>/If' */
    srUpdateBC(ValidateThrustersRED_DW.ChangeBLUEBehavior_SubsysRanBC);

    /* End of Outputs for SubSystem: '<Root>/Change BLUE Behavior' */
  }

  /* End of If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' */

  /* Sum: '<Root>/Sum' */
  ValidateThrustersRED_B.Sum = (ValidateThrustersRED_B.Merge[0] +
    ValidateThrustersRED_B.Merge_c[7]) + ValidateThrustersRED_B.Merge_a[7];

  /* RateTransition: '<Root>/Rate Transition' */
  ValidateThrustersRED_B.RateTransition = ValidateThrustersRED_B.Sum;

  /* Sum: '<Root>/Sum1' */
  ValidateThrustersRED_B.Sum1 = (ValidateThrustersRED_B.Merge[1] +
    ValidateThrustersRED_B.Merge_c[2]) + ValidateThrustersRED_B.Merge_a[2];

  /* RateTransition: '<Root>/Rate Transition1' */
  ValidateThrustersRED_B.RateTransition1 = ValidateThrustersRED_B.Sum1;

  /* RateTransition: '<Root>/Rate Transition2' */
  ValidateThrustersRED_B.RateTransition2 = ValidateThrustersRED_B.Merge[2];

  /* Sum: '<Root>/Sum2' */
  ValidateThrustersRED_B.Sum2 = (ValidateThrustersRED_B.Merge[3] +
    ValidateThrustersRED_B.Merge_c[4]) + ValidateThrustersRED_B.Merge_a[4];

  /* RateTransition: '<Root>/Rate Transition3' */
  ValidateThrustersRED_B.RateTransition3 = ValidateThrustersRED_B.Sum2;

  /* Sum: '<Root>/Sum3' */
  ValidateThrustersRED_B.Sum3 = (ValidateThrustersRED_B.Merge[4] +
    ValidateThrustersRED_B.Merge_c[3]) + ValidateThrustersRED_B.Merge_a[3];

  /* RateTransition: '<Root>/Rate Transition4' */
  ValidateThrustersRED_B.RateTransition4 = ValidateThrustersRED_B.Sum3;

  /* Sum: '<Root>/Sum4' */
  ValidateThrustersRED_B.Sum4 = (ValidateThrustersRED_B.Merge[5] +
    ValidateThrustersRED_B.Merge_c[6]) + ValidateThrustersRED_B.Merge_a[6];

  /* RateTransition: '<Root>/Rate Transition5' */
  ValidateThrustersRED_B.RateTransition5 = ValidateThrustersRED_B.Sum4;

  /* Sum: '<Root>/Sum5' */
  ValidateThrustersRED_B.Sum5 = (ValidateThrustersRED_B.Merge[6] +
    ValidateThrustersRED_B.Merge_c[5]) + ValidateThrustersRED_B.Merge_a[5];

  /* RateTransition: '<Root>/Rate Transition6' */
  ValidateThrustersRED_B.RateTransition6 = ValidateThrustersRED_B.Sum5;

  /* Sum: '<Root>/Sum6' */
  ValidateThrustersRED_B.Sum6 = (ValidateThrustersRED_B.Merge[7] +
    ValidateThrustersRED_B.Merge_c[0]) + ValidateThrustersRED_B.Merge_a[0];

  /* RateTransition: '<Root>/Rate Transition7' */
  ValidateThrustersRED_B.RateTransition7 = ValidateThrustersRED_B.Sum6;

  /* Sum: '<Root>/Sum7' */
  ValidateThrustersRED_B.Sum7 = ValidateThrustersRED_B.Merge_c[1] +
    ValidateThrustersRED_B.Merge_a[1];

  /* RateTransition: '<Root>/Rate Transition8' */
  ValidateThrustersRED_B.RateTransition8 = ValidateThrustersRED_B.Sum7;

  /* Outputs for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
  /* MATLABSystem: '<S5>/BLACK T2' */
  if (ValidateThrustersRED_B.RateTransition8 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition8;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/BLACK T2' */

  /* MATLABSystem: '<S5>/RED T1 - BLACK T8' */
  if (ValidateThrustersRED_B.RateTransition < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_i.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T1 - BLACK T8' */

  /* MATLABSystem: '<S5>/RED T2 - BLACK T3' */
  if (ValidateThrustersRED_B.RateTransition1 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition1;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_m.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T2 - BLACK T3' */

  /* MATLABSystem: '<S5>/RED T3' */
  if (ValidateThrustersRED_B.RateTransition2 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition2;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_f.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T3' */

  /* MATLABSystem: '<S5>/RED T4 - BLACK T5' */
  if (ValidateThrustersRED_B.RateTransition3 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition3;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_fe.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T4 - BLACK T5' */

  /* MATLABSystem: '<S5>/RED T5 - BLACK T4' */
  if (ValidateThrustersRED_B.RateTransition4 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition4;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_p.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T5 - BLACK T4' */

  /* MATLABSystem: '<S5>/RED T6 - BLACK T7' */
  if (ValidateThrustersRED_B.RateTransition5 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition5;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_a.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T6 - BLACK T7' */

  /* MATLABSystem: '<S5>/RED T7 - BLACK T6' */
  if (ValidateThrustersRED_B.RateTransition6 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition6;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_k.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T7 - BLACK T6' */

  /* MATLABSystem: '<S5>/RED T8 - BLACK T1' */
  if (ValidateThrustersRED_B.RateTransition7 < 1.0) {
    rtb_Clock = ValidateThrustersRED_B.RateTransition7;
  } else {
    rtb_Clock = 1.0;
  }

  if (!(rtb_Clock > 0.0)) {
    rtb_Clock = 0.0;
  }

  EXT_PWMBlock_setDutyCycle(ValidateThrustersRED_DW.obj_e.PinNumber, rtb_Clock);

  /* End of MATLABSystem: '<S5>/RED T8 - BLACK T1' */

  /* SignalConversion generated from: '<S5>/To Workspace' */
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[0] =
    ValidateThrustersRED_B.RateTransition;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[1] =
    ValidateThrustersRED_B.RateTransition1;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[2] =
    ValidateThrustersRED_B.RateTransition2;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[3] =
    ValidateThrustersRED_B.RateTransition3;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[4] =
    ValidateThrustersRED_B.RateTransition4;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[5] =
    ValidateThrustersRED_B.RateTransition5;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[6] =
    ValidateThrustersRED_B.RateTransition6;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[7] =
    ValidateThrustersRED_B.RateTransition7;
  ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[8] =
    ValidateThrustersRED_B.RateTransition8;

  /* ToWorkspace: '<S5>/To Workspace' */
  rt_UpdateLogVar((LogVar *)(LogVar*)
                  (ValidateThrustersRED_DW.ToWorkspace_PWORK.LoggedData),
                  &ValidateThrustersRED_B.TmpSignalConversionAtToWorkspac[0], 0);

  /* End of Outputs for SubSystem: '<Root>/Send Commands to PWM Blocks' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(ValidateThrustersRED_M->rtwLogInfo,
                      (ValidateThrustersRED_M->Timing.t));

  /* External mode */
  rtExtModeUploadCheckTrigger(2);

  {                                    /* Sample time: [0.0s, 0.0s] */
    rtExtModeUpload(0, (real_T)ValidateThrustersRED_M->Timing.t[0]);
  }

  {                                    /* Sample time: [0.1s, 0.0s] */
    rtExtModeUpload(1, (real_T)(((ValidateThrustersRED_M->Timing.clockTick1+
      ValidateThrustersRED_M->Timing.clockTickH1* 4294967296.0)) * 0.1));
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(ValidateThrustersRED_M)!=-1) &&
        !((rtmGetTFinal(ValidateThrustersRED_M)-ValidateThrustersRED_M->
           Timing.t[0]) > ValidateThrustersRED_M->Timing.t[0] * (DBL_EPSILON)))
    {
      rtmSetErrorStatus(ValidateThrustersRED_M, "Simulation finished");
    }

    if (rtmGetStopRequested(ValidateThrustersRED_M)) {
      rtmSetErrorStatus(ValidateThrustersRED_M, "Simulation finished");
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
  if (!(++ValidateThrustersRED_M->Timing.clockTick0)) {
    ++ValidateThrustersRED_M->Timing.clockTickH0;
  }

  ValidateThrustersRED_M->Timing.t[0] =
    ValidateThrustersRED_M->Timing.clockTick0 *
    ValidateThrustersRED_M->Timing.stepSize0 +
    ValidateThrustersRED_M->Timing.clockTickH0 *
    ValidateThrustersRED_M->Timing.stepSize0 * 4294967296.0;

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
    ValidateThrustersRED_M->Timing.clockTick1++;
    if (!ValidateThrustersRED_M->Timing.clockTick1) {
      ValidateThrustersRED_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void ValidateThrustersRED_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)ValidateThrustersRED_M, 0,
                sizeof(RT_MODEL_ValidateThrustersRED_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&ValidateThrustersRED_M->solverInfo,
                          &ValidateThrustersRED_M->Timing.simTimeStep);
    rtsiSetTPtr(&ValidateThrustersRED_M->solverInfo, &rtmGetTPtr
                (ValidateThrustersRED_M));
    rtsiSetStepSizePtr(&ValidateThrustersRED_M->solverInfo,
                       &ValidateThrustersRED_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&ValidateThrustersRED_M->solverInfo,
                          (&rtmGetErrorStatus(ValidateThrustersRED_M)));
    rtsiSetRTModelPtr(&ValidateThrustersRED_M->solverInfo,
                      ValidateThrustersRED_M);
  }

  rtsiSetSimTimeStep(&ValidateThrustersRED_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&ValidateThrustersRED_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(ValidateThrustersRED_M, &ValidateThrustersRED_M->Timing.tArray[0]);
  rtmSetTFinal(ValidateThrustersRED_M, 36.0);
  ValidateThrustersRED_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    ValidateThrustersRED_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ValidateThrustersRED_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(ValidateThrustersRED_M->rtwLogInfo, (NULL));
    rtliSetLogT(ValidateThrustersRED_M->rtwLogInfo, "tout");
    rtliSetLogX(ValidateThrustersRED_M->rtwLogInfo, "");
    rtliSetLogXFinal(ValidateThrustersRED_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(ValidateThrustersRED_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(ValidateThrustersRED_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(ValidateThrustersRED_M->rtwLogInfo, 0);
    rtliSetLogDecimation(ValidateThrustersRED_M->rtwLogInfo, 1);
    rtliSetLogY(ValidateThrustersRED_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(ValidateThrustersRED_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(ValidateThrustersRED_M->rtwLogInfo, (NULL));
  }

  /* External mode info */
  ValidateThrustersRED_M->Sizes.checksums[0] = (3883364426U);
  ValidateThrustersRED_M->Sizes.checksums[1] = (3874285348U);
  ValidateThrustersRED_M->Sizes.checksums[2] = (1575921168U);
  ValidateThrustersRED_M->Sizes.checksums[3] = (3902628680U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[41];
    ValidateThrustersRED_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem.IfActionSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem1.IfActionSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem2.IfActionSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem3.IfActionSubsystem_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4_l.IfActionSubsystem_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem5.IfActionSubsystem_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem6.IfActionSubsystem_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem7.IfActionSubsystem_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4.IfActionSubsystem_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &ValidateThrustersRED_DW.ChangeBLACKBehavior_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem_d.IfActionSubsystem_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem1_p.IfActionSubsystem_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem2_d.IfActionSubsystem_SubsysRanBC;
    systemRan[14] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem3_h.IfActionSubsystem_SubsysRanBC;
    systemRan[15] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4_fw.IfActionSubsystem_SubsysRanBC;
    systemRan[16] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem5_b.IfActionSubsystem_SubsysRanBC;
    systemRan[17] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem6_h.IfActionSubsystem_SubsysRanBC;
    systemRan[18] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem7_p.IfActionSubsystem_SubsysRanBC;
    systemRan[19] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4_f.IfActionSubsystem_SubsysRanBC;
    systemRan[20] = (sysRanDType *)
      &ValidateThrustersRED_DW.ChangeBLUEBehavior_SubsysRanBC;
    systemRan[21] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem_m.IfActionSubsystem_SubsysRanBC;
    systemRan[22] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem1_n.IfActionSubsystem_SubsysRanBC;
    systemRan[23] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem2_i.IfActionSubsystem_SubsysRanBC;
    systemRan[24] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem3_i.IfActionSubsystem_SubsysRanBC;
    systemRan[25] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4_o.IfActionSubsystem_SubsysRanBC;
    systemRan[26] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem5_g.IfActionSubsystem_SubsysRanBC;
    systemRan[27] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem6_hk.IfActionSubsystem_SubsysRanBC;
    systemRan[28] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem7_j.IfActionSubsystem_SubsysRanBC;
    systemRan[29] = (sysRanDType *)
      &ValidateThrustersRED_DW.IfActionSubsystem4_fu.IfActionSubsystem_SubsysRanBC;
    systemRan[30] = (sysRanDType *)
      &ValidateThrustersRED_DW.ChangeREDBehavior_SubsysRanBC;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    systemRan[38] = &rtAlwaysEnabled;
    systemRan[39] = &rtAlwaysEnabled;
    systemRan[40] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(ValidateThrustersRED_M->extModeInfo,
      &ValidateThrustersRED_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(ValidateThrustersRED_M->extModeInfo,
                        ValidateThrustersRED_M->Sizes.checksums);
    rteiSetTPtr(ValidateThrustersRED_M->extModeInfo, rtmGetTPtr
                (ValidateThrustersRED_M));
  }

  /* block I/O */
  (void) memset(((void *) &ValidateThrustersRED_B), 0,
                sizeof(B_ValidateThrustersRED_T));

  /* states (dwork) */
  (void) memset((void *)&ValidateThrustersRED_DW, 0,
                sizeof(DW_ValidateThrustersRED_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ValidateThrustersRED_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(ValidateThrustersRED_M->rtwLogInfo, 0.0,
    rtmGetTFinal(ValidateThrustersRED_M),
    ValidateThrustersRED_M->Timing.stepSize0, (&rtmGetErrorStatus
    (ValidateThrustersRED_M)));

  {
    int32_T ret;
    static const char_T tmp[45] =
      "Unable to configure pin %u for PWM output.\\n";
    char_T tmp_0[45];

    /* SetupRuntimeResources for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
    /* SetupRuntimeResources for ToWorkspace: '<S5>/To Workspace' */
    {
      int_T dimensions[1] = { 9 };

      ValidateThrustersRED_DW.ToWorkspace_PWORK.LoggedData = rt_CreateLogVar(
        ValidateThrustersRED_M->rtwLogInfo,
        0.0,
        rtmGetTFinal(ValidateThrustersRED_M),
        ValidateThrustersRED_M->Timing.stepSize0,
        (&rtmGetErrorStatus(ValidateThrustersRED_M)),
        "simout",
        SS_DOUBLE,
        0,
        0,
        0,
        9,
        1,
        dimensions,
        NO_LOGVALDIMS,
        (NULL),
        (NULL),
        0,
        1,
        0.1,
        1);
      if (ValidateThrustersRED_DW.ToWorkspace_PWORK.LoggedData == (NULL))
        return;
    }

    /* End of SetupRuntimeResources for SubSystem: '<Root>/Send Commands to PWM Blocks' */

    /* Start for If: '<Root>/This IF block determines whether or not to run the RED sim//exp ' */
    ValidateThrustersRED_DW.ThisIFblockdetermineswhetherorn = -1;

    /* Start for IfAction SubSystem: '<Root>/Change RED Behavior' */
    /* Start for If: '<S3>/If' */
    ValidateThrustersRED_DW.If_ActiveSubsystem = -1;

    /* End of Start for SubSystem: '<Root>/Change RED Behavior' */

    /* Start for If: '<Root>/This IF block determines whether or not to run the BLACK sim//exp' */
    ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_d = -1;

    /* Start for IfAction SubSystem: '<Root>/Change BLACK Behavior' */
    /* Start for If: '<S1>/If' */
    ValidateThrustersRED_DW.If_ActiveSubsystem_m = -1;

    /* End of Start for SubSystem: '<Root>/Change BLACK Behavior' */

    /* Start for If: '<Root>/This IF block determines whether or not to run the BLUE sim//exp' */
    ValidateThrustersRED_DW.ThisIFblockdetermineswhethero_i = -1;

    /* Start for IfAction SubSystem: '<Root>/Change BLUE Behavior' */
    /* Start for If: '<S2>/If' */
    ValidateThrustersRED_DW.If_ActiveSubsystem_f = -1;

    /* End of Start for SubSystem: '<Root>/Change BLUE Behavior' */

    /* Start for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
    /* Start for MATLABSystem: '<S5>/BLACK T2' */
    ValidateThrustersRED_DW.obj.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty = true;
    ValidateThrustersRED_DW.obj.isInitialized = 1;
    ValidateThrustersRED_DW.obj.PinNumber = 9U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj.PinNumber);
    }

    ValidateThrustersRED_DW.obj.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/BLACK T2' */

    /* Start for MATLABSystem: '<S5>/RED T1 - BLACK T8' */
    ValidateThrustersRED_DW.obj_i.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_g = true;
    ValidateThrustersRED_DW.obj_i.isInitialized = 1;
    ValidateThrustersRED_DW.obj_i.PinNumber = 27U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_i.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_i.PinNumber);
    }

    ValidateThrustersRED_DW.obj_i.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T1 - BLACK T8' */

    /* Start for MATLABSystem: '<S5>/RED T2 - BLACK T3' */
    ValidateThrustersRED_DW.obj_m.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_p = true;
    ValidateThrustersRED_DW.obj_m.isInitialized = 1;
    ValidateThrustersRED_DW.obj_m.PinNumber = 19U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_m.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_m.PinNumber);
    }

    ValidateThrustersRED_DW.obj_m.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T2 - BLACK T3' */

    /* Start for MATLABSystem: '<S5>/RED T3' */
    ValidateThrustersRED_DW.obj_f.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_pn = true;
    ValidateThrustersRED_DW.obj_f.isInitialized = 1;
    ValidateThrustersRED_DW.obj_f.PinNumber = 4U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_f.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_f.PinNumber);
    }

    ValidateThrustersRED_DW.obj_f.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T3' */

    /* Start for MATLABSystem: '<S5>/RED T4 - BLACK T5' */
    ValidateThrustersRED_DW.obj_fe.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_j = true;
    ValidateThrustersRED_DW.obj_fe.isInitialized = 1;
    ValidateThrustersRED_DW.obj_fe.PinNumber = 22U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_fe.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_fe.PinNumber);
    }

    ValidateThrustersRED_DW.obj_fe.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T4 - BLACK T5' */

    /* Start for MATLABSystem: '<S5>/RED T5 - BLACK T4' */
    ValidateThrustersRED_DW.obj_p.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_m = true;
    ValidateThrustersRED_DW.obj_p.isInitialized = 1;
    ValidateThrustersRED_DW.obj_p.PinNumber = 5U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_p.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_p.PinNumber);
    }

    ValidateThrustersRED_DW.obj_p.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T5 - BLACK T4' */

    /* Start for MATLABSystem: '<S5>/RED T6 - BLACK T7' */
    ValidateThrustersRED_DW.obj_a.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_e = true;
    ValidateThrustersRED_DW.obj_a.isInitialized = 1;
    ValidateThrustersRED_DW.obj_a.PinNumber = 6U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_a.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_a.PinNumber);
    }

    ValidateThrustersRED_DW.obj_a.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T6 - BLACK T7' */

    /* Start for MATLABSystem: '<S5>/RED T7 - BLACK T6' */
    ValidateThrustersRED_DW.obj_k.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_n = true;
    ValidateThrustersRED_DW.obj_k.isInitialized = 1;
    ValidateThrustersRED_DW.obj_k.PinNumber = 13U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_k.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_k.PinNumber);
    }

    ValidateThrustersRED_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T7 - BLACK T6' */

    /* Start for MATLABSystem: '<S5>/RED T8 - BLACK T1' */
    ValidateThrustersRED_DW.obj_e.matlabCodegenIsDeleted = false;
    ValidateThrustersRED_DW.objisempty_b = true;
    ValidateThrustersRED_DW.obj_e.isInitialized = 1;
    ValidateThrustersRED_DW.obj_e.PinNumber = 17U;
    ret = EXT_PWMBlock_init(ValidateThrustersRED_DW.obj_e.PinNumber, 10U, 0.0);
    if (ret != 0) {
      for (ret = 0; ret < 45; ret++) {
        tmp_0[ret] = tmp[ret];
      }

      printf(tmp_0, ValidateThrustersRED_DW.obj_e.PinNumber);
    }

    ValidateThrustersRED_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S5>/RED T8 - BLACK T1' */
    /* End of Start for SubSystem: '<Root>/Send Commands to PWM Blocks' */
  }

  {
    int32_T i;

    /* SystemInitialize for IfAction SubSystem: '<Root>/Change BLUE Behavior' */
    /* SystemInitialize for IfAction SubSystem: '<Root>/Change BLACK Behavior' */
    /* SystemInitialize for IfAction SubSystem: '<Root>/Change RED Behavior' */
    for (i = 0; i < 8; i++) {
      /* SystemInitialize for Merge: '<S3>/Merge' */
      ValidateThrustersRED_B.Merge[i] =
        ValidateThrustersRED_P.Merge_InitialOutput_g;

      /* SystemInitialize for Merge: '<S1>/Merge' */
      ValidateThrustersRED_B.Merge_c[i] =
        ValidateThrustersRED_P.Merge_InitialOutput;

      /* SystemInitialize for Merge: '<S2>/Merge' */
      ValidateThrustersRED_B.Merge_a[i] =
        ValidateThrustersRED_P.Merge_InitialOutput_j;
    }

    /* End of SystemInitialize for SubSystem: '<Root>/Change RED Behavior' */
    /* End of SystemInitialize for SubSystem: '<Root>/Change BLACK Behavior' */
    /* End of SystemInitialize for SubSystem: '<Root>/Change BLUE Behavior' */
  }
}

/* Model terminate function */
void ValidateThrustersRED_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/Send Commands to PWM Blocks' */
  /* Terminate for MATLABSystem: '<S5>/BLACK T2' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj);

  /* Terminate for MATLABSystem: '<S5>/RED T1 - BLACK T8' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_i);

  /* Terminate for MATLABSystem: '<S5>/RED T2 - BLACK T3' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_m);

  /* Terminate for MATLABSystem: '<S5>/RED T3' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_f);

  /* Terminate for MATLABSystem: '<S5>/RED T4 - BLACK T5' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_fe);

  /* Terminate for MATLABSystem: '<S5>/RED T5 - BLACK T4' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_p);

  /* Terminate for MATLABSystem: '<S5>/RED T6 - BLACK T7' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_a);

  /* Terminate for MATLABSystem: '<S5>/RED T7 - BLACK T6' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_k);

  /* Terminate for MATLABSystem: '<S5>/RED T8 - BLACK T1' */
  matlabCodegenHandle_matlabCodeg(&ValidateThrustersRED_DW.obj_e);
}
