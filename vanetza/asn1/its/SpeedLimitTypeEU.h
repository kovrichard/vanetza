/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SpeedLimitTypeEU_H_
#define	_SpeedLimitTypeEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SpeedLimitTypeEU {
	SpeedLimitTypeEU_unknown	= 0,
	SpeedLimitTypeEU_maxSpeedInSchoolZone	= 1,
	SpeedLimitTypeEU_maxSpeedInSchoolZoneWhenChildrenArePresent	= 2,
	SpeedLimitTypeEU_maxSpeedInConstructionZone	= 3,
	SpeedLimitTypeEU_vehicleMinSpeed	= 4,
	SpeedLimitTypeEU_vehicleMaxSpeed	= 5,
	SpeedLimitTypeEU_vehicleNightMaxSpeed	= 6,
	SpeedLimitTypeEU_truckMinSpeed	= 7,
	SpeedLimitTypeEU_truckMaxSpeed	= 8,
	SpeedLimitTypeEU_truckNightMaxSpeed	= 9,
	SpeedLimitTypeEU_vehiclesWithTrailersMinSpeed	= 10,
	SpeedLimitTypeEU_vehiclesWithTrailersMaxSpeed	= 11,
	SpeedLimitTypeEU_vehiclesWithTrailersNightMaxSpeed	= 12
	/*
	 * Enumeration is extensible
	 */
} e_SpeedLimitTypeEU;

/* SpeedLimitTypeEU */
typedef long	 SpeedLimitTypeEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SpeedLimitTypeEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SpeedLimitTypeEU;
extern const asn_INTEGER_specifics_t asn_SPC_SpeedLimitTypeEU_specs_1;
asn_struct_free_f SpeedLimitTypeEU_free;
asn_struct_print_f SpeedLimitTypeEU_print;
asn_constr_check_f SpeedLimitTypeEU_constraint;
ber_type_decoder_f SpeedLimitTypeEU_decode_ber;
der_type_encoder_f SpeedLimitTypeEU_encode_der;
xer_type_decoder_f SpeedLimitTypeEU_decode_xer;
xer_type_encoder_f SpeedLimitTypeEU_encode_xer;
oer_type_decoder_f SpeedLimitTypeEU_decode_oer;
oer_type_encoder_f SpeedLimitTypeEU_encode_oer;
per_type_decoder_f SpeedLimitTypeEU_decode_uper;
per_type_encoder_f SpeedLimitTypeEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedLimitTypeEU_H_ */
#include "asn_internal.h"