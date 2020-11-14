/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AntennaOffsetSetEU_H_
#define	_AntennaOffsetSetEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Offset-B12EU.h"
#include "Offset-B09EU.h"
#include "Offset-B10EU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AntennaOffsetSetEU */
typedef struct AntennaOffsetSetEU {
	Offset_B12EU_t	 antOffsetX;
	Offset_B09EU_t	 antOffsetY;
	Offset_B10EU_t	 antOffsetZ;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaOffsetSetEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AntennaOffsetSetEU;
extern asn_SEQUENCE_specifics_t asn_SPC_AntennaOffsetSetEU_specs_1;
extern asn_TYPE_member_t asn_MBR_AntennaOffsetSetEU_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaOffsetSetEU_H_ */
#include "asn_internal.h"
