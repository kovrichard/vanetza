/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CpmManagementContainer_H_
#define	_CpmManagementContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "StationType.h"
#include "ReferencePosition.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PerceivedObjectContainerSegmentInfo;

/* CpmManagementContainer */
typedef struct CpmManagementContainer {
	StationType_t	 stationType;
	struct PerceivedObjectContainerSegmentInfo	*perceivedObjectContainerSegmentInfo	/* OPTIONAL */;
	ReferencePosition_t	 referencePosition;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CpmManagementContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CpmManagementContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_CpmManagementContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_CpmManagementContainer_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PerceivedObjectContainerSegmentInfo.h"

#endif	/* _CpmManagementContainer_H_ */
#include "asn_internal.h"
