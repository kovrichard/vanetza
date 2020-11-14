/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../cpm/F/kell/asd/with_riebl/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ValidityDuration_H_
#define	_ValidityDuration_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ValidityDuration {
	ValidityDuration_timeOfDetection	= 0,
	ValidityDuration_oneSecondAfterDetection	= 1
} e_ValidityDuration;

/* ValidityDuration */
typedef long	 ValidityDuration_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ValidityDuration_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ValidityDuration;
asn_struct_free_f ValidityDuration_free;
asn_struct_print_f ValidityDuration_print;
asn_constr_check_f ValidityDuration_constraint;
ber_type_decoder_f ValidityDuration_decode_ber;
der_type_encoder_f ValidityDuration_encode_der;
xer_type_decoder_f ValidityDuration_decode_xer;
xer_type_encoder_f ValidityDuration_encode_xer;
oer_type_decoder_f ValidityDuration_decode_oer;
oer_type_encoder_f ValidityDuration_encode_oer;
per_type_decoder_f ValidityDuration_decode_uper;
per_type_encoder_f ValidityDuration_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ValidityDuration_H_ */
#include "asn_internal.h"
