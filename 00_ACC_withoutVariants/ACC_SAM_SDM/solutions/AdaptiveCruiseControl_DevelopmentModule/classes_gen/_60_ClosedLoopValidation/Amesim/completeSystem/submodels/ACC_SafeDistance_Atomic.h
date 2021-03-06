#ifndef ACC_SAFEDISTANCE_ATOMIC_H
#define ACC_SAFEDISTANCE_ATOMIC_H


#include <stdint.h>

#include <stddef.h>

typedef int bool;
#define true 1
#define false 0

#include "BlockInterfaces.h"

#include "Cla_Discrete.h"



#ifdef __cplusplus
extern "C" {
#endif

typedef enum ACC_SafeDistance_Atomic_variantSelector ACC_SafeDistance_Atomic_variantSelector_t;
enum ACC_SafeDistance_Atomic_variantSelector{
  ACC_SafeDistance_Atomic_variantSelector__Hatchback,
  ACC_SafeDistance_Atomic_variantSelector__Sedan
};

typedef struct ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t;
/* 
 * instance data for block ssd_safe_distance_computation
 */
struct ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data {
  double T_SAFE_hatchback;
  bool __preconditionFailed_samplePre;
  bool __anyPreconditionFailed;
};

typedef struct ACC_SafeDistance_Atomic____ssd_distance_error_data ACC_SafeDistance_Atomic____ssd_distance_error_data_t;
/* 
 * instance data for block ssd_distance_error
 */
struct ACC_SafeDistance_Atomic____ssd_distance_error_data {
  bool __preconditionFailed_valid_values;
  bool __anyPreconditionFailed;
};

typedef struct ACC_SafeDistance_Atomic____ssd_update_pid_data ACC_SafeDistance_Atomic____ssd_update_pid_data_t;
/* 
 * instance data for block ssd_update_pid
 */
struct ACC_SafeDistance_Atomic____ssd_update_pid_data {
  bool __preconditionFailed_v_acc_positive;
  bool __preconditionFailed_v_pid_positive;
  bool __anyPreconditionFailed;
};

void  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_init(ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t *___id);

void  ACC_SafeDistance_Atomic____ssd_distance_error_init(ACC_SafeDistance_Atomic____ssd_distance_error_data_t *___id);

void  ACC_SafeDistance_Atomic____ssd_update_pid_init(ACC_SafeDistance_Atomic____ssd_update_pid_data_t *___id);

void  ACC_SafeDistance_Atomic____ssd_safe_distance_computation_execute(ACC_SafeDistance_Atomic____ssd_safe_distance_computation_data_t *___id, double v_acc_demo, double v_lead, double *d_safe);

void  ACC_SafeDistance_Atomic____ssd_distance_error_execute(ACC_SafeDistance_Atomic____ssd_distance_error_data_t *___id, double d_lead_hatchabck, double d_safe_new, double *d_error);

void  ACC_SafeDistance_Atomic____ssd_mode_compute_execute(void *___nothing, double d_lead_hatchabck, double d_safe_new, double *ssd_mode);

void  ACC_SafeDistance_Atomic____ssd_cruise_mode_execute(void *___nothing, double v_ref, double *v_set);

void  ACC_SafeDistance_Atomic____ssd_setpoint_execute(void *___nothing, double c_vset, double d_vset, double ssd_mode, double *v_set);

void  ACC_SafeDistance_Atomic____ssd_update_pid_execute(ACC_SafeDistance_Atomic____ssd_update_pid_data_t *___id, double v_acc, double v_pid, double *v_set);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
