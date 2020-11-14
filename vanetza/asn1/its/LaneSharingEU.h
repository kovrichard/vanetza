/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_LaneSharingEU_H_
#define	_LaneSharingEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LaneSharingEU {
	LaneSharingEU_overlappingLaneDescriptionProvided	= 0,
	LaneSharingEU_multipleLanesTreatedAsOneLane	= 1,
	LaneSharingEU_otherNonMotorizedTrafficTypes	= 2,
	LaneSharingEU_individualMotorizedVehicleTraffic	= 3,
	LaneSharingEU_busVehicleTraffic	= 4,
	LaneSharingEU_taxiVehicleTraffic	= 5,
	LaneSharingEU_pedestriansTraffic	= 6,
	LaneSharingEU_cyclistVehicleTraffic	= 7,
	LaneSharingEU_trackedVehicleTraffic	= 8,
	LaneSharingEU_pedestrianTraffic	= 9
} e_LaneSharingEU;

/* LaneSharingEU */
typedef BIT_STRING_t	 LaneSharingEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LaneSharingEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LaneSharingEU;
asn_struct_free_f LaneSharingEU_free;
asn_struct_print_f LaneSharingEU_print;
asn_constr_check_f LaneSharingEU_constraint;
ber_type_decoder_f LaneSharingEU_decode_ber;
der_type_encoder_f LaneSharingEU_encode_der;
xer_type_decoder_f LaneSharingEU_decode_xer;
xer_type_encoder_f LaneSharingEU_encode_xer;
oer_type_decoder_f LaneSharingEU_decode_oer;
oer_type_encoder_f LaneSharingEU_encode_oer;
per_type_decoder_f LaneSharingEU_decode_uper;
per_type_encoder_f LaneSharingEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneSharingEU_H_ */
#include "asn_internal.h"