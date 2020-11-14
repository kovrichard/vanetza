/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RequestSubRoleEU_H_
#define	_RequestSubRoleEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RequestSubRoleEU {
	RequestSubRoleEU_requestSubRoleUnKnown	= 0,
	RequestSubRoleEU_requestSubRole1	= 1,
	RequestSubRoleEU_requestSubRole2	= 2,
	RequestSubRoleEU_requestSubRole3	= 3,
	RequestSubRoleEU_requestSubRole4	= 4,
	RequestSubRoleEU_requestSubRole5	= 5,
	RequestSubRoleEU_requestSubRole6	= 6,
	RequestSubRoleEU_requestSubRole7	= 7,
	RequestSubRoleEU_requestSubRole8	= 8,
	RequestSubRoleEU_requestSubRole9	= 9,
	RequestSubRoleEU_requestSubRole10	= 10,
	RequestSubRoleEU_requestSubRole11	= 11,
	RequestSubRoleEU_requestSubRole12	= 12,
	RequestSubRoleEU_requestSubRole13	= 13,
	RequestSubRoleEU_requestSubRole14	= 14,
	RequestSubRoleEU_requestSubRoleReserved	= 15
} e_RequestSubRoleEU;

/* RequestSubRoleEU */
typedef long	 RequestSubRoleEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RequestSubRoleEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RequestSubRoleEU;
extern const asn_INTEGER_specifics_t asn_SPC_RequestSubRoleEU_specs_1;
asn_struct_free_f RequestSubRoleEU_free;
asn_struct_print_f RequestSubRoleEU_print;
asn_constr_check_f RequestSubRoleEU_constraint;
ber_type_decoder_f RequestSubRoleEU_decode_ber;
der_type_encoder_f RequestSubRoleEU_encode_der;
xer_type_decoder_f RequestSubRoleEU_decode_xer;
xer_type_encoder_f RequestSubRoleEU_encode_xer;
oer_type_decoder_f RequestSubRoleEU_decode_oer;
oer_type_encoder_f RequestSubRoleEU_encode_oer;
per_type_decoder_f RequestSubRoleEU_decode_uper;
per_type_encoder_f RequestSubRoleEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RequestSubRoleEU_H_ */
#include "asn_internal.h"
