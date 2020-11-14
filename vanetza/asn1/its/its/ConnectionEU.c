/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "ConnectionEU.h"

asn_TYPE_member_t asn_MBR_ConnectionEU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ConnectionEU, connectingLane),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConnectingLaneEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectingLane"
		},
	{ ATF_POINTER, 4, offsetof(struct ConnectionEU, remoteIntersection),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntersectionReferenceIDEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"remoteIntersection"
		},
	{ ATF_POINTER, 3, offsetof(struct ConnectionEU, signalGroup),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalGroupIDEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signalGroup"
		},
	{ ATF_POINTER, 2, offsetof(struct ConnectionEU, userClass),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RestrictionClassIDEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"userClass"
		},
	{ ATF_POINTER, 1, offsetof(struct ConnectionEU, connectionID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LaneConnectionIDEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"connectionID"
		},
};
static const int asn_MAP_ConnectionEU_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_ConnectionEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ConnectionEU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* connectingLane */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* remoteIntersection */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* signalGroup */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* userClass */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* connectionID */
};
asn_SEQUENCE_specifics_t asn_SPC_ConnectionEU_specs_1 = {
	sizeof(struct ConnectionEU),
	offsetof(struct ConnectionEU, _asn_ctx),
	asn_MAP_ConnectionEU_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_ConnectionEU_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ConnectionEU = {
	"ConnectionEU",
	"ConnectionEU",
	&asn_OP_SEQUENCE,
	asn_DEF_ConnectionEU_tags_1,
	sizeof(asn_DEF_ConnectionEU_tags_1)
		/sizeof(asn_DEF_ConnectionEU_tags_1[0]), /* 1 */
	asn_DEF_ConnectionEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_ConnectionEU_tags_1)
		/sizeof(asn_DEF_ConnectionEU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ConnectionEU_1,
	5,	/* Elements count */
	&asn_SPC_ConnectionEU_specs_1	/* Additional specs */
};

