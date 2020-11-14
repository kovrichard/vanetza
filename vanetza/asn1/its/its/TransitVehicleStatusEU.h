/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_TransitVehicleStatusEU_H_
#define	_TransitVehicleStatusEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TransitVehicleStatusEU {
	TransitVehicleStatusEU_loading	= 0,
	TransitVehicleStatusEU_anADAuse	= 1,
	TransitVehicleStatusEU_aBikeLoad	= 2,
	TransitVehicleStatusEU_doorOpen	= 3,
	TransitVehicleStatusEU_charging	= 4,
	TransitVehicleStatusEU_atStopLine	= 5
} e_TransitVehicleStatusEU;

/* TransitVehicleStatusEU */
typedef BIT_STRING_t	 TransitVehicleStatusEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TransitVehicleStatusEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TransitVehicleStatusEU;
asn_struct_free_f TransitVehicleStatusEU_free;
asn_struct_print_f TransitVehicleStatusEU_print;
asn_constr_check_f TransitVehicleStatusEU_constraint;
ber_type_decoder_f TransitVehicleStatusEU_decode_ber;
der_type_encoder_f TransitVehicleStatusEU_encode_der;
xer_type_decoder_f TransitVehicleStatusEU_decode_xer;
xer_type_encoder_f TransitVehicleStatusEU_encode_xer;
oer_type_decoder_f TransitVehicleStatusEU_decode_oer;
oer_type_encoder_f TransitVehicleStatusEU_encode_oer;
per_type_decoder_f TransitVehicleStatusEU_decode_uper;
per_type_encoder_f TransitVehicleStatusEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TransitVehicleStatusEU_H_ */
#include "asn_internal.h"
