/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CpmParameters_H_
#define	_CpmParameters_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CpmManagementContainer.h"
#include "NumberOfPerceivedObjects.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct StationDataContainer;
struct SensorInformation;
struct PerceivedObject;
struct FreeSpaceAddendum;

/* CpmParameters */
typedef struct CpmParameters {
	CpmManagementContainer_t	 managementContainer;
	struct StationDataContainer	*stationDataContainer	/* OPTIONAL */;
	struct CpmParameters__sensorInformationContainer {
		A_SEQUENCE_OF(struct SensorInformation) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sensorInformationContainer;
	struct CpmParameters__perceivedObjectContainer {
		A_SEQUENCE_OF(struct PerceivedObject) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *perceivedObjectContainer;
	struct CpmParameters__freeSpaceAddendum {
		A_SEQUENCE_OF(struct FreeSpaceAddendum) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freeSpaceAddendum;
	NumberOfPerceivedObjects_t	 numberOfPerceivedObjects;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CpmParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CpmParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_CpmParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_CpmParameters_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "StationDataContainer.h"
#include "SensorInformation.h"
#include "PerceivedObject.h"
#include "FreeSpaceAddendum.h"

#endif	/* _CpmParameters_H_ */
#include "asn_internal.h"
