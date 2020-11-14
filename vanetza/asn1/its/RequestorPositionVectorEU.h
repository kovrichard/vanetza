/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RequestorPositionVectorEU_H_
#define	_RequestorPositionVectorEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Position3DEU.h"
#include "AngleEU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TransmissionAndSpeedEU;

/* RequestorPositionVectorEU */
typedef struct RequestorPositionVectorEU {
	Position3DEU_t	 position;
	AngleEU_t	*heading	/* OPTIONAL */;
	struct TransmissionAndSpeedEU	*speed	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RequestorPositionVectorEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RequestorPositionVectorEU;
extern asn_SEQUENCE_specifics_t asn_SPC_RequestorPositionVectorEU_specs_1;
extern asn_TYPE_member_t asn_MBR_RequestorPositionVectorEU_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TransmissionAndSpeedEU.h"

#endif	/* _RequestorPositionVectorEU_H_ */
#include "asn_internal.h"