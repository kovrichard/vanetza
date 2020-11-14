/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_NodeOffsetPointXYEU_H_
#define	_NodeOffsetPointXYEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Node-XY-20bEU.h"
#include "Node-XY-22bEU.h"
#include "Node-XY-24bEU.h"
#include "Node-XY-26bEU.h"
#include "Node-XY-28bEU.h"
#include "Node-XY-32bEU.h"
#include "Node-LLmD-64bEU.h"
#include "RegionalExtensionEU.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NodeOffsetPointXYEU_PR {
	NodeOffsetPointXYEU_PR_NOTHING,	/* No components present */
	NodeOffsetPointXYEU_PR_node_XY1,
	NodeOffsetPointXYEU_PR_node_XY2,
	NodeOffsetPointXYEU_PR_node_XY3,
	NodeOffsetPointXYEU_PR_node_XY4,
	NodeOffsetPointXYEU_PR_node_XY5,
	NodeOffsetPointXYEU_PR_node_XY6,
	NodeOffsetPointXYEU_PR_node_LatLon,
	NodeOffsetPointXYEU_PR_regional
} NodeOffsetPointXYEU_PR;

/* NodeOffsetPointXYEU */
typedef struct NodeOffsetPointXYEU {
	NodeOffsetPointXYEU_PR present;
	union NodeOffsetPointXYEU_u {
		Node_XY_20bEU_t	 node_XY1;
		Node_XY_22bEU_t	 node_XY2;
		Node_XY_24bEU_t	 node_XY3;
		Node_XY_26bEU_t	 node_XY4;
		Node_XY_28bEU_t	 node_XY5;
		Node_XY_32bEU_t	 node_XY6;
		Node_LLmD_64bEU_t	 node_LatLon;
		RegionalExtensionEU_329P0_t	 regional;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeOffsetPointXYEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeOffsetPointXYEU;
extern asn_CHOICE_specifics_t asn_SPC_NodeOffsetPointXYEU_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeOffsetPointXYEU_1[8];
extern asn_per_constraints_t asn_PER_type_NodeOffsetPointXYEU_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NodeOffsetPointXYEU_H_ */
#include "asn_internal.h"