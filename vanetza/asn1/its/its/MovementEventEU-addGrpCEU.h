/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_MovementEventEU_addGrpCEU_H_
#define	_MovementEventEU_addGrpCEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ExceptionalConditionEU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MovementEventEU-addGrpCEU */
typedef struct MovementEventEU_addGrpCEU {
	ExceptionalConditionEU_t	*stateChangeReason	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MovementEventEU_addGrpCEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MovementEventEU_addGrpCEU;

#ifdef __cplusplus
}
#endif

#endif	/* _MovementEventEU_addGrpCEU_H_ */
#include "asn_internal.h"
