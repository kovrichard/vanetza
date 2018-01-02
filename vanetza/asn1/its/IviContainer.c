/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -D /home/rieblr/work/car2x/vanetza/vanetza/asn1/its`
 */

#include "IviContainer.h"

static asn_oer_constraints_t asn_OER_type_IviContainer_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_IviContainer_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_IviContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IviContainer, choice.glc),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeographicLocationContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"glc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IviContainer, choice.giv),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralIviContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"giv"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IviContainer, choice.rcc),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RoadConfigurationContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rcc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IviContainer, choice.tc),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TextContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tc"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IviContainer, choice.lac),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LayoutContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lac"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_IviContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* glc */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* giv */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rcc */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tc */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* lac */
};
asn_CHOICE_specifics_t asn_SPC_IviContainer_specs_1 = {
	sizeof(struct IviContainer),
	offsetof(struct IviContainer, _asn_ctx),
	offsetof(struct IviContainer, present),
	sizeof(((struct IviContainer *)0)->present),
	asn_MAP_IviContainer_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0,
	5	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_IviContainer = {
	"IviContainer",
	"IviContainer",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_IviContainer_constr_1, &asn_PER_type_IviContainer_constr_1, CHOICE_constraint },
	asn_MBR_IviContainer_1,
	5,	/* Elements count */
	&asn_SPC_IviContainer_specs_1	/* Additional specs */
};
