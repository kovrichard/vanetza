/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "FreeSpaceAddendum.h"

static int
memb_sensorID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 255)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_sensorID_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_type_sensorID_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sensorID_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_sensorID_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sensorID_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_Identifier,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sensorID_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sensorID_specs_4 = {
	sizeof(struct FreeSpaceAddendum__sensorID),
	offsetof(struct FreeSpaceAddendum__sensorID, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sensorID_4 = {
	"sensorID",
	"sensorID",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sensorID_tags_4,
	sizeof(asn_DEF_sensorID_tags_4)
		/sizeof(asn_DEF_sensorID_tags_4[0]) - 1, /* 1 */
	asn_DEF_sensorID_tags_4,	/* Same as above */
	sizeof(asn_DEF_sensorID_tags_4)
		/sizeof(asn_DEF_sensorID_tags_4[0]), /* 2 */
	{ &asn_OER_type_sensorID_constr_4, &asn_PER_type_sensorID_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_sensorID_4,
	1,	/* Single element */
	&asn_SPC_sensorID_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_FreeSpaceAddendum_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceAddendum, freeSpaceConfidence),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FreeSpaceConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpaceConfidence"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FreeSpaceAddendum, freeSpaceArea),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FreeSpaceArea,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freeSpaceArea"
		},
	{ ATF_POINTER, 1, offsetof(struct FreeSpaceAddendum, sensorID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_sensorID_4,
		0,
		{ &asn_OER_memb_sensorID_constr_4, &asn_PER_memb_sensorID_constr_4,  memb_sensorID_constraint_1 },
		0, 0, /* No default value */
		"sensorID"
		},
};
static const int asn_MAP_FreeSpaceAddendum_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_FreeSpaceAddendum_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FreeSpaceAddendum_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freeSpaceConfidence */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* freeSpaceArea */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sensorID */
};
asn_SEQUENCE_specifics_t asn_SPC_FreeSpaceAddendum_specs_1 = {
	sizeof(struct FreeSpaceAddendum),
	offsetof(struct FreeSpaceAddendum, _asn_ctx),
	asn_MAP_FreeSpaceAddendum_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FreeSpaceAddendum_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_FreeSpaceAddendum = {
	"FreeSpaceAddendum",
	"FreeSpaceAddendum",
	&asn_OP_SEQUENCE,
	asn_DEF_FreeSpaceAddendum_tags_1,
	sizeof(asn_DEF_FreeSpaceAddendum_tags_1)
		/sizeof(asn_DEF_FreeSpaceAddendum_tags_1[0]), /* 1 */
	asn_DEF_FreeSpaceAddendum_tags_1,	/* Same as above */
	sizeof(asn_DEF_FreeSpaceAddendum_tags_1)
		/sizeof(asn_DEF_FreeSpaceAddendum_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_FreeSpaceAddendum_1,
	3,	/* Elements count */
	&asn_SPC_FreeSpaceAddendum_specs_1	/* Additional specs */
};

