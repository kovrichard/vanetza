/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_IntersectionStatusObjectEU_H_
#define	_IntersectionStatusObjectEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntersectionStatusObjectEU {
	IntersectionStatusObjectEU_manualControlIsEnabled	= 0,
	IntersectionStatusObjectEU_stopTimeIsActivated	= 1,
	IntersectionStatusObjectEU_failureFlash	= 2,
	IntersectionStatusObjectEU_preemptIsActive	= 3,
	IntersectionStatusObjectEU_signalPriorityIsActive	= 4,
	IntersectionStatusObjectEU_fixedTimeOperation	= 5,
	IntersectionStatusObjectEU_trafficDependentOperation	= 6,
	IntersectionStatusObjectEU_standbyOperation	= 7,
	IntersectionStatusObjectEU_failureMode	= 8,
	IntersectionStatusObjectEU_off	= 9,
	IntersectionStatusObjectEU_recentMAPmessageUpdate	= 10,
	IntersectionStatusObjectEU_recentChangeInMAPassignedLanesIDsUsed	= 11,
	IntersectionStatusObjectEU_noValidMAPisAvailableAtThisTime	= 12,
	IntersectionStatusObjectEU_noValidSPATisAvailableAtThisTime	= 13
} e_IntersectionStatusObjectEU;

/* IntersectionStatusObjectEU */
typedef BIT_STRING_t	 IntersectionStatusObjectEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IntersectionStatusObjectEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IntersectionStatusObjectEU;
asn_struct_free_f IntersectionStatusObjectEU_free;
asn_struct_print_f IntersectionStatusObjectEU_print;
asn_constr_check_f IntersectionStatusObjectEU_constraint;
ber_type_decoder_f IntersectionStatusObjectEU_decode_ber;
der_type_encoder_f IntersectionStatusObjectEU_encode_der;
xer_type_decoder_f IntersectionStatusObjectEU_decode_xer;
xer_type_encoder_f IntersectionStatusObjectEU_encode_xer;
oer_type_decoder_f IntersectionStatusObjectEU_decode_oer;
oer_type_encoder_f IntersectionStatusObjectEU_encode_oer;
per_type_decoder_f IntersectionStatusObjectEU_decode_uper;
per_type_encoder_f IntersectionStatusObjectEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntersectionStatusObjectEU_H_ */
#include "asn_internal.h"