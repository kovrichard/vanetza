/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_BatteryStatusEU_H_
#define	_BatteryStatusEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BatteryStatusEU {
	BatteryStatusEU_unknown	= 0,
	BatteryStatusEU_critical	= 1,
	BatteryStatusEU_low	= 2,
	BatteryStatusEU_good	= 3
	/*
	 * Enumeration is extensible
	 */
} e_BatteryStatusEU;

/* BatteryStatusEU */
typedef long	 BatteryStatusEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_BatteryStatusEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_BatteryStatusEU;
extern const asn_INTEGER_specifics_t asn_SPC_BatteryStatusEU_specs_1;
asn_struct_free_f BatteryStatusEU_free;
asn_struct_print_f BatteryStatusEU_print;
asn_constr_check_f BatteryStatusEU_constraint;
ber_type_decoder_f BatteryStatusEU_decode_ber;
der_type_encoder_f BatteryStatusEU_encode_der;
xer_type_decoder_f BatteryStatusEU_decode_xer;
xer_type_encoder_f BatteryStatusEU_encode_xer;
oer_type_decoder_f BatteryStatusEU_decode_oer;
oer_type_encoder_f BatteryStatusEU_encode_oer;
per_type_decoder_f BatteryStatusEU_decode_uper;
per_type_encoder_f BatteryStatusEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _BatteryStatusEU_H_ */
#include "asn_internal.h"
