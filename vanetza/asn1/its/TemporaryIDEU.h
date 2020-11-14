/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TemporaryIDEU_H_
#define	_TemporaryIDEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OCTET_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* TemporaryIDEU */
typedef OCTET_STRING_t	 TemporaryIDEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TemporaryIDEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TemporaryIDEU;
asn_struct_free_f TemporaryIDEU_free;
asn_struct_print_f TemporaryIDEU_print;
asn_constr_check_f TemporaryIDEU_constraint;
ber_type_decoder_f TemporaryIDEU_decode_ber;
der_type_encoder_f TemporaryIDEU_encode_der;
xer_type_decoder_f TemporaryIDEU_decode_xer;
xer_type_encoder_f TemporaryIDEU_encode_xer;
oer_type_decoder_f TemporaryIDEU_decode_oer;
oer_type_encoder_f TemporaryIDEU_encode_oer;
per_type_decoder_f TemporaryIDEU_decode_uper;
per_type_encoder_f TemporaryIDEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TemporaryIDEU_H_ */
#include "asn_internal.h"