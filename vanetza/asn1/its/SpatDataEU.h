/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SpatDataEU_H_
#define	_SpatDataEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SPATEU.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpatDataEU */
typedef SPATEU_t	 SpatDataEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpatDataEU;
asn_struct_free_f SpatDataEU_free;
asn_struct_print_f SpatDataEU_print;
asn_constr_check_f SpatDataEU_constraint;
ber_type_decoder_f SpatDataEU_decode_ber;
der_type_encoder_f SpatDataEU_encode_der;
xer_type_decoder_f SpatDataEU_decode_xer;
xer_type_encoder_f SpatDataEU_encode_xer;
oer_type_decoder_f SpatDataEU_decode_oer;
oer_type_encoder_f SpatDataEU_encode_oer;
per_type_decoder_f SpatDataEU_decode_uper;
per_type_encoder_f SpatDataEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpatDataEU_H_ */
#include "asn_internal.h"