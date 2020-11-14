/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PositionConfidenceSetEU.h"

asn_TYPE_member_t asn_MBR_PositionConfidenceSetEU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PositionConfidenceSetEU, pos),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PositionConfidenceEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pos"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PositionConfidenceSetEU, elevation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ElevationConfidenceEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"elevation"
		},
};
static const ber_tlv_tag_t asn_DEF_PositionConfidenceSetEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PositionConfidenceSetEU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pos */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* elevation */
};
asn_SEQUENCE_specifics_t asn_SPC_PositionConfidenceSetEU_specs_1 = {
	sizeof(struct PositionConfidenceSetEU),
	offsetof(struct PositionConfidenceSetEU, _asn_ctx),
	asn_MAP_PositionConfidenceSetEU_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PositionConfidenceSetEU = {
	"PositionConfidenceSetEU",
	"PositionConfidenceSetEU",
	&asn_OP_SEQUENCE,
	asn_DEF_PositionConfidenceSetEU_tags_1,
	sizeof(asn_DEF_PositionConfidenceSetEU_tags_1)
		/sizeof(asn_DEF_PositionConfidenceSetEU_tags_1[0]), /* 1 */
	asn_DEF_PositionConfidenceSetEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_PositionConfidenceSetEU_tags_1)
		/sizeof(asn_DEF_PositionConfidenceSetEU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PositionConfidenceSetEU_1,
	2,	/* Elements count */
	&asn_SPC_PositionConfidenceSetEU_specs_1	/* Additional specs */
};
