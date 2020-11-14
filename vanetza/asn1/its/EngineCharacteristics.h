/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../cpm/F/kell/asd/with_riebl/IVI-ISO-deps.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_EngineCharacteristics_H_
#define	_EngineCharacteristics_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EngineCharacteristics {
	EngineCharacteristics_noEntry	= 0,
	EngineCharacteristics_noEngine	= 1,
	EngineCharacteristics_petrolUnleaded	= 2,
	EngineCharacteristics_petrolLeaded	= 3,
	EngineCharacteristics_diesel	= 4,
	EngineCharacteristics_lPG	= 5,
	EngineCharacteristics_battery	= 6,
	EngineCharacteristics_solar	= 7,
	EngineCharacteristics_hybrid	= 8,
	EngineCharacteristics_hydrogen	= 9
} e_EngineCharacteristics;

/* EngineCharacteristics */
typedef long	 EngineCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EngineCharacteristics;
asn_struct_free_f EngineCharacteristics_free;
asn_struct_print_f EngineCharacteristics_print;
asn_constr_check_f EngineCharacteristics_constraint;
ber_type_decoder_f EngineCharacteristics_decode_ber;
der_type_encoder_f EngineCharacteristics_encode_der;
xer_type_decoder_f EngineCharacteristics_decode_xer;
xer_type_encoder_f EngineCharacteristics_encode_xer;
oer_type_decoder_f EngineCharacteristics_decode_oer;
oer_type_encoder_f EngineCharacteristics_encode_oer;
per_type_decoder_f EngineCharacteristics_decode_uper;
per_type_encoder_f EngineCharacteristics_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EngineCharacteristics_H_ */
#include "asn_internal.h"
