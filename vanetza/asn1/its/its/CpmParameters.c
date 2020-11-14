/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "CpmParameters.h"

static int
memb_sensorInformationContainer_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_perceivedObjectContainer_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_freeSpaceAddendum_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_oer_constraints_t asn_OER_type_sensorInformationContainer_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_type_sensorInformationContainer_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_perceivedObjectContainer_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_type_perceivedObjectContainer_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_freeSpaceAddendum_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_type_freeSpaceAddendum_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_sensorInformationContainer_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_sensorInformationContainer_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_perceivedObjectContainer_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_perceivedObjectContainer_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_freeSpaceAddendum_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..255)) */};
static asn_per_constraints_t asn_PER_memb_freeSpaceAddendum_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  255 }	/* (SIZE(1..255)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_sensorInformationContainer_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_SensorInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_sensorInformationContainer_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_sensorInformationContainer_specs_4 = {
	sizeof(struct CpmParameters__sensorInformationContainer),
	offsetof(struct CpmParameters__sensorInformationContainer, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_sensorInformationContainer_4 = {
	"sensorInformationContainer",
	"sensorInformationContainer",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_sensorInformationContainer_tags_4,
	sizeof(asn_DEF_sensorInformationContainer_tags_4)
		/sizeof(asn_DEF_sensorInformationContainer_tags_4[0]) - 1, /* 1 */
	asn_DEF_sensorInformationContainer_tags_4,	/* Same as above */
	sizeof(asn_DEF_sensorInformationContainer_tags_4)
		/sizeof(asn_DEF_sensorInformationContainer_tags_4[0]), /* 2 */
	{ &asn_OER_type_sensorInformationContainer_constr_4, &asn_PER_type_sensorInformationContainer_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_sensorInformationContainer_4,
	1,	/* Single element */
	&asn_SPC_sensorInformationContainer_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_perceivedObjectContainer_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PerceivedObject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_perceivedObjectContainer_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_perceivedObjectContainer_specs_6 = {
	sizeof(struct CpmParameters__perceivedObjectContainer),
	offsetof(struct CpmParameters__perceivedObjectContainer, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_perceivedObjectContainer_6 = {
	"perceivedObjectContainer",
	"perceivedObjectContainer",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_perceivedObjectContainer_tags_6,
	sizeof(asn_DEF_perceivedObjectContainer_tags_6)
		/sizeof(asn_DEF_perceivedObjectContainer_tags_6[0]) - 1, /* 1 */
	asn_DEF_perceivedObjectContainer_tags_6,	/* Same as above */
	sizeof(asn_DEF_perceivedObjectContainer_tags_6)
		/sizeof(asn_DEF_perceivedObjectContainer_tags_6[0]), /* 2 */
	{ &asn_OER_type_perceivedObjectContainer_constr_6, &asn_PER_type_perceivedObjectContainer_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_perceivedObjectContainer_6,
	1,	/* Single element */
	&asn_SPC_perceivedObjectContainer_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_freeSpaceAddendum_8[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_FreeSpaceAddendum,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_freeSpaceAddendum_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_freeSpaceAddendum_specs_8 = {
	sizeof(struct CpmParameters__freeSpaceAddendum),
	offsetof(struct CpmParameters__freeSpaceAddendum, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freeSpaceAddendum_8 = {
	"freeSpaceAddendum",
	"freeSpaceAddendum",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_freeSpaceAddendum_tags_8,
	sizeof(asn_DEF_freeSpaceAddendum_tags_8)
		/sizeof(asn_DEF_freeSpaceAddendum_tags_8[0]) - 1, /* 1 */
	asn_DEF_freeSpaceAddendum_tags_8,	/* Same as above */
	sizeof(asn_DEF_freeSpaceAddendum_tags_8)
		/sizeof(asn_DEF_freeSpaceAddendum_tags_8[0]), /* 2 */
	{ &asn_OER_type_freeSpaceAddendum_constr_8, &asn_PER_type_freeSpaceAddendum_constr_8, SEQUENCE_OF_constraint },
	asn_MBR_freeSpaceAddendum_8,
	1,	/* Single element */
	&asn_SPC_freeSpaceAddendum_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CpmParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CpmParameters, managementContainer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CpmManagementContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"managementContainer"
		},
	{ ATF_POINTER, 4, offsetof(struct CpmParameters, stationDataContainer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_StationDataContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stationDataContainer"
		},
	{ ATF_POINTER, 3, offsetof(struct CpmParameters, sensorInformationContainer),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_sensorInformationContainer_4,
		0,
		{ &asn_OER_memb_sensorInformationContainer_constr_4, &asn_PER_memb_sensorInformationContainer_constr_4,  memb_sensorInformationContainer_constraint_1 },
		0, 0, /* No default value */
		"sensorInformationContainer"
		},
	{ ATF_POINTER, 2, offsetof(struct CpmParameters, perceivedObjectContainer),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_perceivedObjectContainer_6,
		0,
		{ &asn_OER_memb_perceivedObjectContainer_constr_6, &asn_PER_memb_perceivedObjectContainer_constr_6,  memb_perceivedObjectContainer_constraint_1 },
		0, 0, /* No default value */
		"perceivedObjectContainer"
		},
	{ ATF_POINTER, 1, offsetof(struct CpmParameters, freeSpaceAddendum),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_freeSpaceAddendum_8,
		0,
		{ &asn_OER_memb_freeSpaceAddendum_constr_8, &asn_PER_memb_freeSpaceAddendum_constr_8,  memb_freeSpaceAddendum_constraint_1 },
		0, 0, /* No default value */
		"freeSpaceAddendum"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CpmParameters, numberOfPerceivedObjects),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfPerceivedObjects,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"numberOfPerceivedObjects"
		},
};
static const int asn_MAP_CpmParameters_oms_1[] = { 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_CpmParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CpmParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* managementContainer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* stationDataContainer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sensorInformationContainer */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* perceivedObjectContainer */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* freeSpaceAddendum */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* numberOfPerceivedObjects */
};
asn_SEQUENCE_specifics_t asn_SPC_CpmParameters_specs_1 = {
	sizeof(struct CpmParameters),
	offsetof(struct CpmParameters, _asn_ctx),
	asn_MAP_CpmParameters_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_CpmParameters_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CpmParameters = {
	"CpmParameters",
	"CpmParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_CpmParameters_tags_1,
	sizeof(asn_DEF_CpmParameters_tags_1)
		/sizeof(asn_DEF_CpmParameters_tags_1[0]), /* 1 */
	asn_DEF_CpmParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_CpmParameters_tags_1)
		/sizeof(asn_DEF_CpmParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CpmParameters_1,
	6,	/* Elements count */
	&asn_SPC_CpmParameters_specs_1	/* Additional specs */
};
