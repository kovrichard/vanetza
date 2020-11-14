/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "../../cpm/F/kell/asd/with_riebl/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_HardShoulderStatus_H_
#define	_HardShoulderStatus_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HardShoulderStatus {
	HardShoulderStatus_availableForStopping	= 0,
	HardShoulderStatus_closed	= 1,
	HardShoulderStatus_availableForDriving	= 2
} e_HardShoulderStatus;

/* HardShoulderStatus */
typedef long	 HardShoulderStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_HardShoulderStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_HardShoulderStatus;
extern const asn_INTEGER_specifics_t asn_SPC_HardShoulderStatus_specs_1;
asn_struct_free_f HardShoulderStatus_free;
asn_struct_print_f HardShoulderStatus_print;
asn_constr_check_f HardShoulderStatus_constraint;
ber_type_decoder_f HardShoulderStatus_decode_ber;
der_type_encoder_f HardShoulderStatus_encode_der;
xer_type_decoder_f HardShoulderStatus_decode_xer;
xer_type_encoder_f HardShoulderStatus_encode_xer;
oer_type_decoder_f HardShoulderStatus_decode_oer;
oer_type_encoder_f HardShoulderStatus_encode_oer;
per_type_decoder_f HardShoulderStatus_decode_uper;
per_type_encoder_f HardShoulderStatus_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HardShoulderStatus_H_ */
#include "asn_internal.h"
