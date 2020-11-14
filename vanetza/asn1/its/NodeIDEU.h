/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_NodeIDEU_H_
#define	_NodeIDEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "LaneIDEU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* NodeIDEU */
typedef struct NodeIDEU {
	long	 id;
	LaneIDEU_t	*lane	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeIDEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeIDEU;
extern asn_SEQUENCE_specifics_t asn_SPC_NodeIDEU_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeIDEU_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NodeIDEU_H_ */
#include "asn_internal.h"
