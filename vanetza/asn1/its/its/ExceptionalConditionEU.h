/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ExceptionalConditionEU_H_
#define	_ExceptionalConditionEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ExceptionalConditionEU {
	ExceptionalConditionEU_unknown	= 0,
	ExceptionalConditionEU_publicTransportPriority	= 1,
	ExceptionalConditionEU_emergencyVehiclePriority	= 2,
	ExceptionalConditionEU_trainPriority	= 3,
	ExceptionalConditionEU_bridgeOpen	= 4,
	ExceptionalConditionEU_vehicleHeight	= 5,
	ExceptionalConditionEU_weather	= 6,
	ExceptionalConditionEU_trafficJam	= 7,
	ExceptionalConditionEU_tunnelClosure	= 8,
	ExceptionalConditionEU_meteringActive	= 9,
	ExceptionalConditionEU_truckPriority	= 10,
	ExceptionalConditionEU_bicyclePlatoonPriority	= 11
	/*
	 * Enumeration is extensible
	 */
} e_ExceptionalConditionEU;

/* ExceptionalConditionEU */
typedef long	 ExceptionalConditionEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ExceptionalConditionEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ExceptionalConditionEU;
extern const asn_INTEGER_specifics_t asn_SPC_ExceptionalConditionEU_specs_1;
asn_struct_free_f ExceptionalConditionEU_free;
asn_struct_print_f ExceptionalConditionEU_print;
asn_constr_check_f ExceptionalConditionEU_constraint;
ber_type_decoder_f ExceptionalConditionEU_decode_ber;
der_type_encoder_f ExceptionalConditionEU_encode_der;
xer_type_decoder_f ExceptionalConditionEU_decode_xer;
xer_type_encoder_f ExceptionalConditionEU_encode_xer;
oer_type_decoder_f ExceptionalConditionEU_decode_oer;
oer_type_encoder_f ExceptionalConditionEU_encode_oer;
per_type_decoder_f ExceptionalConditionEU_decode_uper;
per_type_encoder_f ExceptionalConditionEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExceptionalConditionEU_H_ */
#include "asn_internal.h"