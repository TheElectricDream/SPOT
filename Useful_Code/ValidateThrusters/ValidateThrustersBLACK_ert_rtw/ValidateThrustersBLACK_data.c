/*
 * ValidateThrustersBLACK_data.c
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

/* Block parameters (default storage) */
P_ValidateThrustersBLACK_T ValidateThrustersBLACK_P = {
  /* Variable: Thruster1_OnTime
   * Referenced by:
   *   '<S1>/Constant'
   *   '<S2>/Constant'
   *   '<S3>/Constant'
   */
  5.0,

  /* Variable: Thruster2_OnTime
   * Referenced by:
   *   '<S1>/Constant1'
   *   '<S2>/Constant1'
   *   '<S3>/Constant1'
   */
  6.0,

  /* Variable: Thruster3_OnTime
   * Referenced by:
   *   '<S1>/Constant2'
   *   '<S2>/Constant2'
   *   '<S3>/Constant2'
   */
  7.0,

  /* Variable: Thruster4_OnTime
   * Referenced by:
   *   '<S1>/Constant3'
   *   '<S2>/Constant3'
   *   '<S3>/Constant3'
   */
  8.0,

  /* Variable: Thruster5_OnTime
   * Referenced by:
   *   '<S1>/Constant4'
   *   '<S2>/Constant4'
   *   '<S3>/Constant4'
   */
  9.0,

  /* Variable: Thruster6_OnTime
   * Referenced by:
   *   '<S1>/Constant5'
   *   '<S2>/Constant5'
   *   '<S3>/Constant5'
   */
  10.0,

  /* Variable: Thruster7_OnTime
   * Referenced by:
   *   '<S1>/Constant6'
   *   '<S2>/Constant6'
   *   '<S3>/Constant6'
   */
  11.0,

  /* Variable: Thruster8_OnTime
   * Referenced by:
   *   '<S1>/Constant7'
   *   '<S2>/Constant7'
   *   '<S3>/Constant7'
   */
  12.0,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S1>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_InitialOutput_j
   * Referenced by: '<S2>/Merge'
   */
  0.0,

  /* Computed Parameter: Merge_InitialOutput_g
   * Referenced by: '<S3>/Merge'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant8'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Constant'
   */
  1.0,

  /* Start of '<S3>/If Action Subsystem7' */
  {
    /* Expression: [0;0;0;0;0;0;0;1]
     * Referenced by: '<S28>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem7' */

  /* Start of '<S3>/If Action Subsystem6' */
  {
    /* Expression: [0;0;0;0;0;0;1;0]
     * Referenced by: '<S27>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem6' */

  /* Start of '<S3>/If Action Subsystem5' */
  {
    /* Expression: [0;0;0;0;0;1;0;0]
     * Referenced by: '<S26>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem5' */

  /* Start of '<S3>/If Action  Subsystem4' */
  {
    /* Expression: [0;0;0;0;1;0;0;0]
     * Referenced by: '<S29>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action  Subsystem4' */

  /* Start of '<S3>/If Action Subsystem3' */
  {
    /* Expression: [0;0;0;1;0;0;0;0]
     * Referenced by: '<S25>/Constant'
     */
    { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem3' */

  /* Start of '<S3>/If Action Subsystem2' */
  {
    /* Expression: [0;0;1;0;0;0;0;0]
     * Referenced by: '<S24>/Constant'
     */
    { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem2' */

  /* Start of '<S3>/If Action Subsystem1' */
  {
    /* Expression: [0;1;0;0;0;0;0;0]
     * Referenced by: '<S23>/Constant'
     */
    { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem1' */

  /* Start of '<S3>/If Action Subsystem' */
  {
    /* Expression: [1;0;0;0;0;0;0;0]
     * Referenced by: '<S22>/Constant'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S3>/If Action Subsystem' */

  /* Start of '<S2>/If Action Subsystem7' */
  {
    /* Expression: [0;0;0;0;0;0;0;1]
     * Referenced by: '<S20>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem7' */

  /* Start of '<S2>/If Action Subsystem6' */
  {
    /* Expression: [0;0;0;0;0;0;1;0]
     * Referenced by: '<S19>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem6' */

  /* Start of '<S2>/If Action Subsystem5' */
  {
    /* Expression: [0;0;0;0;0;1;0;0]
     * Referenced by: '<S18>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem5' */

  /* Start of '<S2>/If Action  Subsystem4' */
  {
    /* Expression: [0;0;0;0;1;0;0;0]
     * Referenced by: '<S21>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action  Subsystem4' */

  /* Start of '<S2>/If Action Subsystem3' */
  {
    /* Expression: [0;0;0;1;0;0;0;0]
     * Referenced by: '<S17>/Constant'
     */
    { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem3' */

  /* Start of '<S2>/If Action Subsystem2' */
  {
    /* Expression: [0;0;1;0;0;0;0;0]
     * Referenced by: '<S16>/Constant'
     */
    { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem2' */

  /* Start of '<S2>/If Action Subsystem1' */
  {
    /* Expression: [0;1;0;0;0;0;0;0]
     * Referenced by: '<S15>/Constant'
     */
    { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem1' */

  /* Start of '<S2>/If Action Subsystem' */
  {
    /* Expression: [1;0;0;0;0;0;0;0]
     * Referenced by: '<S14>/Constant'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S2>/If Action Subsystem' */

  /* Start of '<S1>/If Action Subsystem7' */
  {
    /* Expression: [0;0;0;0;0;0;0;1]
     * Referenced by: '<S12>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem7' */

  /* Start of '<S1>/If Action Subsystem6' */
  {
    /* Expression: [0;0;0;0;0;0;1;0]
     * Referenced by: '<S11>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem6' */

  /* Start of '<S1>/If Action Subsystem5' */
  {
    /* Expression: [0;0;0;0;0;1;0;0]
     * Referenced by: '<S10>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem5' */

  /* Start of '<S1>/If Action  Subsystem4' */
  {
    /* Expression: [0;0;0;0;1;0;0;0]
     * Referenced by: '<S13>/Constant'
     */
    { 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action  Subsystem4' */

  /* Start of '<S1>/If Action Subsystem3' */
  {
    /* Expression: [0;0;0;1;0;0;0;0]
     * Referenced by: '<S9>/Constant'
     */
    { 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem3' */

  /* Start of '<S1>/If Action Subsystem2' */
  {
    /* Expression: [0;0;1;0;0;0;0;0]
     * Referenced by: '<S8>/Constant'
     */
    { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem2' */

  /* Start of '<S1>/If Action Subsystem1' */
  {
    /* Expression: [0;1;0;0;0;0;0;0]
     * Referenced by: '<S7>/Constant'
     */
    { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  ,

  /* End of '<S1>/If Action Subsystem1' */

  /* Start of '<S1>/If Action Subsystem' */
  {
    /* Expression: [1;0;0;0;0;0;0;0]
     * Referenced by: '<S6>/Constant'
     */
    { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 }
  }
  /* End of '<S1>/If Action Subsystem' */
};
