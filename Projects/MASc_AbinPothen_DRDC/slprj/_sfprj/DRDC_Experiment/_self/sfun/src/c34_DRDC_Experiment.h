#ifndef __c34_DRDC_Experiment_h__
#define __c34_DRDC_Experiment_h__

/* Type Definitions */
#ifndef typedef_SFc34_DRDC_ExperimentInstanceStruct
#define typedef_SFc34_DRDC_ExperimentInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c34_sfEvent;
  boolean_T c34_doneDoubleBufferReInit;
  uint8_T c34_is_active_c34_DRDC_Experiment;
  void *c34_fEmlrtCtx;
  real_T (*c34_q)[6];
  real_T (*c34_qd)[6];
  real_T (*c34_Gamma)[6];
  real_T (*c34_ChaserGenForce)[3];
} SFc34_DRDC_ExperimentInstanceStruct;

#endif                                 /*typedef_SFc34_DRDC_ExperimentInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c34_DRDC_Experiment_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c34_DRDC_Experiment_get_check_sum(mxArray *plhs[]);
extern void c34_DRDC_Experiment_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
