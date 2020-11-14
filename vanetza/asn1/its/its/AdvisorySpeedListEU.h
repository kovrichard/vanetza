/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AdvisorySpeedListEU_H_
#define	_AdvisorySpeedListEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AdvisorySpeedEU;

/* AdvisorySpeedListEU */
typedef struct AdvisorySpeedListEU {
	A_SEQUENCE_OF(struct AdvisorySpeedEU) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AdvisorySpeedListEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AdvisorySpeedListEU;
extern asn_SET_OF_specifics_t asn_SPC_AdvisorySpeedListEU_specs_1;
extern asn_TYPE_member_t asn_MBR_AdvisorySpeedListEU_1[1];
extern asn_per_constraints_t asn_PER_type_AdvisorySpeedListEU_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AdvisorySpeedEU.h"

#endif	/* _AdvisorySpeedListEU_H_ */
#include "asn_internal.h"