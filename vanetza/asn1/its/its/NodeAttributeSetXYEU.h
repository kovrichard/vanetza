/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_NodeAttributeSetXYEU_H_
#define	_NodeAttributeSetXYEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Offset-B10EU.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeAttributeXYListEU;
struct SegmentAttributeXYListEU;
struct LaneDataAttributeListEU;
struct RegionalExtensionEU;

/* NodeAttributeSetXYEU */
typedef struct NodeAttributeSetXYEU {
	struct NodeAttributeXYListEU	*localNode	/* OPTIONAL */;
	struct SegmentAttributeXYListEU	*disabled	/* OPTIONAL */;
	struct SegmentAttributeXYListEU	*enabled	/* OPTIONAL */;
	struct LaneDataAttributeListEU	*data	/* OPTIONAL */;
	Offset_B10EU_t	*dWidth	/* OPTIONAL */;
	Offset_B10EU_t	*dElevation	/* OPTIONAL */;
	struct NodeAttributeSetXYEU__regional {
		A_SEQUENCE_OF(struct RegionalExtensionEU) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeAttributeSetXYEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeAttributeSetXYEU;
extern asn_SEQUENCE_specifics_t asn_SPC_NodeAttributeSetXYEU_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeAttributeSetXYEU_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NodeAttributeXYListEU.h"
#include "SegmentAttributeXYListEU.h"
#include "LaneDataAttributeListEU.h"
#include "RegionalExtensionEU.h"

#endif	/* _NodeAttributeSetXYEU_H_ */
#include "asn_internal.h"