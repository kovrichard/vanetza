/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../cpm/F/kell/asd/with_riebl/IVI-ISO-deps.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ExhaustEmissionValues_H_
#define	_ExhaustEmissionValues_H_


#include "asn_application.h"

/* Including external dependencies */
#include "UnitType.h"
#include "NativeInteger.h"
#include "Int2.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ExhaustEmissionValues */
typedef struct ExhaustEmissionValues {
	UnitType_t	 unitType;
	long	 emissionCO;
	Int2_t	 emissionHC;
	Int2_t	 emissionNOX;
	Int2_t	 emissionHCNOX;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ExhaustEmissionValues_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExhaustEmissionValues;

#ifdef __cplusplus
}
#endif

#endif	/* _ExhaustEmissionValues_H_ */
#include "asn_internal.h"
