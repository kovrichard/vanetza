/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "NodeAttributeSetEU-addGrpCEU.h"

static asn_TYPE_member_t asn_MBR_NodeAttributeSetEU_addGrpCEU_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NodeAttributeSetEU_addGrpCEU, ptvRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PtvRequestTypeEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ptvRequest"
		},
	{ ATF_POINTER, 2, offsetof(struct NodeAttributeSetEU_addGrpCEU, nodeIDList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeIDListEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nodeIDList"
		},
	{ ATF_POINTER, 1, offsetof(struct NodeAttributeSetEU_addGrpCEU, nodeID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeIDEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nodeID"
		},
};
static const int asn_MAP_NodeAttributeSetEU_addGrpCEU_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NodeAttributeSetEU_addGrpCEU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ptvRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nodeIDList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* nodeID */
};
static asn_SEQUENCE_specifics_t asn_SPC_NodeAttributeSetEU_addGrpCEU_specs_1 = {
	sizeof(struct NodeAttributeSetEU_addGrpCEU),
	offsetof(struct NodeAttributeSetEU_addGrpCEU, _asn_ctx),
	asn_MAP_NodeAttributeSetEU_addGrpCEU_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NodeAttributeSetEU_addGrpCEU_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NodeAttributeSetEU_addGrpCEU = {
	"NodeAttributeSetEU-addGrpCEU",
	"NodeAttributeSetEU-addGrpCEU",
	&asn_OP_SEQUENCE,
	asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1,
	sizeof(asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1)
		/sizeof(asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1[0]), /* 1 */
	asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1)
		/sizeof(asn_DEF_NodeAttributeSetEU_addGrpCEU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NodeAttributeSetEU_addGrpCEU_1,
	3,	/* Elements count */
	&asn_SPC_NodeAttributeSetEU_addGrpCEU_specs_1	/* Additional specs */
};
