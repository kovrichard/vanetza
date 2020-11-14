/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../cpm/F/kell/asd/with_riebl/IVI-ISO-deps.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_EnvironmentalCharacteristics_H_
#define	_EnvironmentalCharacteristics_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EuroValue.h"
#include "CopValue.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EnvironmentalCharacteristics */
typedef struct EnvironmentalCharacteristics {
	EuroValue_t	 euroValue;
	CopValue_t	 copValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EnvironmentalCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EnvironmentalCharacteristics;

#ifdef __cplusplus
}
#endif

#endif	/* _EnvironmentalCharacteristics_H_ */
#include "asn_internal.h"