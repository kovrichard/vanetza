/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "RTCMcorrectionsEU.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_regional_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtensionEU_329P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_8 = {
	sizeof(struct RTCMcorrectionsEU__regional),
	offsetof(struct RTCMcorrectionsEU__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_8 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_8,
	sizeof(asn_DEF_regional_tags_8)
		/sizeof(asn_DEF_regional_tags_8[0]) - 1, /* 1 */
	asn_DEF_regional_tags_8,	/* Same as above */
	sizeof(asn_DEF_regional_tags_8)
		/sizeof(asn_DEF_regional_tags_8[0]), /* 2 */
	{ &asn_OER_type_regional_constr_8, &asn_PER_type_regional_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_regional_8,
	1,	/* Single element */
	&asn_SPC_regional_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RTCMcorrectionsEU_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RTCMcorrectionsEU, msgCnt),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCountEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgCnt"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTCMcorrectionsEU, rev),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCM_RevisionEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rev"
		},
	{ ATF_POINTER, 3, offsetof(struct RTCMcorrectionsEU, timeStamp),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MinuteOfTheYearEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeStamp"
		},
	{ ATF_POINTER, 2, offsetof(struct RTCMcorrectionsEU, anchorPoint),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FullPositionVectorEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"anchorPoint"
		},
	{ ATF_POINTER, 1, offsetof(struct RTCMcorrectionsEU, rtcmHeader),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCMheaderEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rtcmHeader"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RTCMcorrectionsEU, msgs),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RTCMmessageListEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msgs"
		},
	{ ATF_POINTER, 1, offsetof(struct RTCMcorrectionsEU, regional),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_regional_8,
		0,
		{ &asn_OER_memb_regional_constr_8, &asn_PER_memb_regional_constr_8,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_RTCMcorrectionsEU_oms_1[] = { 2, 3, 4, 6 };
static const ber_tlv_tag_t asn_DEF_RTCMcorrectionsEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RTCMcorrectionsEU_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* msgCnt */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rev */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeStamp */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* anchorPoint */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* rtcmHeader */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* msgs */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* regional */
};
static asn_SEQUENCE_specifics_t asn_SPC_RTCMcorrectionsEU_specs_1 = {
	sizeof(struct RTCMcorrectionsEU),
	offsetof(struct RTCMcorrectionsEU, _asn_ctx),
	asn_MAP_RTCMcorrectionsEU_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RTCMcorrectionsEU_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RTCMcorrectionsEU = {
	"RTCMcorrectionsEU",
	"RTCMcorrectionsEU",
	&asn_OP_SEQUENCE,
	asn_DEF_RTCMcorrectionsEU_tags_1,
	sizeof(asn_DEF_RTCMcorrectionsEU_tags_1)
		/sizeof(asn_DEF_RTCMcorrectionsEU_tags_1[0]), /* 1 */
	asn_DEF_RTCMcorrectionsEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_RTCMcorrectionsEU_tags_1)
		/sizeof(asn_DEF_RTCMcorrectionsEU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RTCMcorrectionsEU_1,
	7,	/* Elements count */
	&asn_SPC_RTCMcorrectionsEU_specs_1	/* Additional specs */
};
