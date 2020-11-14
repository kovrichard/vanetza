/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_VehicleIDEU_H_
#define	_VehicleIDEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "TemporaryIDEU.h"
#include "StationID.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleIDEU_PR {
	VehicleIDEU_PR_NOTHING,	/* No components present */
	VehicleIDEU_PR_entityID,
	VehicleIDEU_PR_stationID
} VehicleIDEU_PR;

/* VehicleIDEU */
typedef struct VehicleIDEU {
	VehicleIDEU_PR present;
	union VehicleIDEU_u {
		TemporaryIDEU_t	 entityID;
		StationID_t	 stationID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleIDEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleIDEU;
extern asn_CHOICE_specifics_t asn_SPC_VehicleIDEU_specs_1;
extern asn_TYPE_member_t asn_MBR_VehicleIDEU_1[2];
extern asn_per_constraints_t asn_PER_type_VehicleIDEU_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleIDEU_H_ */
#include "asn_internal.h"