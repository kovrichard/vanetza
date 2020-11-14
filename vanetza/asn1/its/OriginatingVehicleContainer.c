/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions-NEW"
 * 	found in "../../cpm/F/kell/asd/with_riebl/CPM_NEW.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "OriginatingVehicleContainer.h"

static int
memb_trailerData_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_trailerData_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_type_trailerData_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_trailerData_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..2)) */};
static asn_per_constraints_t asn_PER_memb_trailerData_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static int asn_DFL_5_cmp_0(const void *sptr) {
	const DriveDirection_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_5_set_0(void **sptr) {
	DriveDirection_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static asn_TYPE_member_t asn_MBR_trailerData_13[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_TrailerData,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_trailerData_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_trailerData_specs_13 = {
	sizeof(struct OriginatingVehicleContainer__trailerData),
	offsetof(struct OriginatingVehicleContainer__trailerData, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_trailerData_13 = {
	"trailerData",
	"trailerData",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_trailerData_tags_13,
	sizeof(asn_DEF_trailerData_tags_13)
		/sizeof(asn_DEF_trailerData_tags_13[0]) - 1, /* 1 */
	asn_DEF_trailerData_tags_13,	/* Same as above */
	sizeof(asn_DEF_trailerData_tags_13)
		/sizeof(asn_DEF_trailerData_tags_13[0]), /* 2 */
	{ &asn_OER_type_trailerData_constr_13, &asn_PER_type_trailerData_constr_13, SEQUENCE_OF_constraint },
	asn_MBR_trailerData_13,
	1,	/* Single element */
	&asn_SPC_trailerData_specs_13	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OriginatingVehicleContainer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OriginatingVehicleContainer, heading),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Heading,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"heading"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OriginatingVehicleContainer, speed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Speed,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"speed"
		},
	{ ATF_POINTER, 10, offsetof(struct OriginatingVehicleContainer, vehicleOrientationAngle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WGS84Angle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleOrientationAngle"
		},
	{ ATF_NOFLAGS, 9, offsetof(struct OriginatingVehicleContainer, driveDirection),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DriveDirection,
		0,
		{ 0, 0, 0 },
		&asn_DFL_5_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_5_set_0,	/* Set DEFAULT 0 */
		"driveDirection"
		},
	{ ATF_POINTER, 8, offsetof(struct OriginatingVehicleContainer, longitudinalAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LongitudinalAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longitudinalAcceleration"
		},
	{ ATF_POINTER, 7, offsetof(struct OriginatingVehicleContainer, lateralAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LateralAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateralAcceleration"
		},
	{ ATF_POINTER, 6, offsetof(struct OriginatingVehicleContainer, verticalAcceleration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VerticalAcceleration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"verticalAcceleration"
		},
	{ ATF_POINTER, 5, offsetof(struct OriginatingVehicleContainer, yawRate),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_YawRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"yawRate"
		},
	{ ATF_POINTER, 4, offsetof(struct OriginatingVehicleContainer, pitchAngle),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pitchAngle"
		},
	{ ATF_POINTER, 3, offsetof(struct OriginatingVehicleContainer, rollAngle),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CartesianAngle,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rollAngle"
		},
	{ ATF_POINTER, 2, offsetof(struct OriginatingVehicleContainer, vehicleHeight),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleHeightEU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleHeight"
		},
	{ ATF_POINTER, 1, offsetof(struct OriginatingVehicleContainer, trailerData),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_trailerData_13,
		0,
		{ &asn_OER_memb_trailerData_constr_13, &asn_PER_memb_trailerData_constr_13,  memb_trailerData_constraint_1 },
		0, 0, /* No default value */
		"trailerData"
		},
};
static const int asn_MAP_OriginatingVehicleContainer_oms_1[] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_OriginatingVehicleContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OriginatingVehicleContainer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* heading */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* speed */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* vehicleOrientationAngle */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* driveDirection */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* longitudinalAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* lateralAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* verticalAcceleration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* yawRate */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* pitchAngle */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* rollAngle */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* vehicleHeight */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* trailerData */
};
asn_SEQUENCE_specifics_t asn_SPC_OriginatingVehicleContainer_specs_1 = {
	sizeof(struct OriginatingVehicleContainer),
	offsetof(struct OriginatingVehicleContainer, _asn_ctx),
	asn_MAP_OriginatingVehicleContainer_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_OriginatingVehicleContainer_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	12,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OriginatingVehicleContainer = {
	"OriginatingVehicleContainer",
	"OriginatingVehicleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_OriginatingVehicleContainer_tags_1,
	sizeof(asn_DEF_OriginatingVehicleContainer_tags_1)
		/sizeof(asn_DEF_OriginatingVehicleContainer_tags_1[0]), /* 1 */
	asn_DEF_OriginatingVehicleContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_OriginatingVehicleContainer_tags_1)
		/sizeof(asn_DEF_OriginatingVehicleContainer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OriginatingVehicleContainer_1,
	12,	/* Elements count */
	&asn_SPC_OriginatingVehicleContainer_specs_1	/* Additional specs */
};

