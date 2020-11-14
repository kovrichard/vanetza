/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TransmissionStateEU_H_
#define	_TransmissionStateEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransmissionStateEU {
	TransmissionStateEU_neutral	= 0,
	TransmissionStateEU_park	= 1,
	TransmissionStateEU_forwardGears	= 2,
	TransmissionStateEU_reverseGears	= 3,
	TransmissionStateEU_reserved1	= 4,
	TransmissionStateEU_reserved2	= 5,
	TransmissionStateEU_reserved3	= 6,
	TransmissionStateEU_unavailable	= 7
} e_TransmissionStateEU;

/* TransmissionStateEU */
typedef long	 TransmissionStateEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TransmissionStateEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TransmissionStateEU;
extern const asn_INTEGER_specifics_t asn_SPC_TransmissionStateEU_specs_1;
asn_struct_free_f TransmissionStateEU_free;
asn_struct_print_f TransmissionStateEU_print;
asn_constr_check_f TransmissionStateEU_constraint;
ber_type_decoder_f TransmissionStateEU_decode_ber;
der_type_encoder_f TransmissionStateEU_encode_der;
xer_type_decoder_f TransmissionStateEU_decode_xer;
xer_type_encoder_f TransmissionStateEU_encode_xer;
oer_type_decoder_f TransmissionStateEU_decode_oer;
oer_type_encoder_f TransmissionStateEU_encode_oer;
per_type_decoder_f TransmissionStateEU_decode_uper;
per_type_encoder_f TransmissionStateEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransmissionStateEU_H_ */
#include "asn_internal.h"