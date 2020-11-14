/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AnimalSubclass_H_
#define	_AnimalSubclass_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "ClassConfidence.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AnimalSubclass__type {
	AnimalSubclass__type_unknown	= 0
} e_AnimalSubclass__type;

/* AnimalSubclass */
typedef struct AnimalSubclass {
	long	*type	/* OPTIONAL */;
	ClassConfidence_t	*confidence	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AnimalSubclass_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AnimalSubclass;
extern asn_SEQUENCE_specifics_t asn_SPC_AnimalSubclass_specs_1;
extern asn_TYPE_member_t asn_MBR_AnimalSubclass_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AnimalSubclass_H_ */
#include "asn_internal.h"
