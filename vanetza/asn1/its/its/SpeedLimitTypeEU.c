/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "SpeedLimitTypeEU.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_SpeedLimitTypeEU_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_SpeedLimitTypeEU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  12 }	/* (0..12,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_SpeedLimitTypeEU_value2enum_1[] = {
	{ 0,	7,	"unknown" },
	{ 1,	20,	"maxSpeedInSchoolZone" },
	{ 2,	42,	"maxSpeedInSchoolZoneWhenChildrenArePresent" },
	{ 3,	26,	"maxSpeedInConstructionZone" },
	{ 4,	15,	"vehicleMinSpeed" },
	{ 5,	15,	"vehicleMaxSpeed" },
	{ 6,	20,	"vehicleNightMaxSpeed" },
	{ 7,	13,	"truckMinSpeed" },
	{ 8,	13,	"truckMaxSpeed" },
	{ 9,	18,	"truckNightMaxSpeed" },
	{ 10,	28,	"vehiclesWithTrailersMinSpeed" },
	{ 11,	28,	"vehiclesWithTrailersMaxSpeed" },
	{ 12,	33,	"vehiclesWithTrailersNightMaxSpeed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_SpeedLimitTypeEU_enum2value_1[] = {
	3,	/* maxSpeedInConstructionZone(3) */
	1,	/* maxSpeedInSchoolZone(1) */
	2,	/* maxSpeedInSchoolZoneWhenChildrenArePresent(2) */
	8,	/* truckMaxSpeed(8) */
	7,	/* truckMinSpeed(7) */
	9,	/* truckNightMaxSpeed(9) */
	0,	/* unknown(0) */
	5,	/* vehicleMaxSpeed(5) */
	4,	/* vehicleMinSpeed(4) */
	6,	/* vehicleNightMaxSpeed(6) */
	11,	/* vehiclesWithTrailersMaxSpeed(11) */
	10,	/* vehiclesWithTrailersMinSpeed(10) */
	12	/* vehiclesWithTrailersNightMaxSpeed(12) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_SpeedLimitTypeEU_specs_1 = {
	asn_MAP_SpeedLimitTypeEU_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_SpeedLimitTypeEU_enum2value_1,	/* N => "tag"; sorted by N */
	13,	/* Number of elements in the maps */
	14,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_SpeedLimitTypeEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SpeedLimitTypeEU = {
	"SpeedLimitTypeEU",
	"SpeedLimitTypeEU",
	&asn_OP_NativeEnumerated,
	asn_DEF_SpeedLimitTypeEU_tags_1,
	sizeof(asn_DEF_SpeedLimitTypeEU_tags_1)
		/sizeof(asn_DEF_SpeedLimitTypeEU_tags_1[0]), /* 1 */
	asn_DEF_SpeedLimitTypeEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpeedLimitTypeEU_tags_1)
		/sizeof(asn_DEF_SpeedLimitTypeEU_tags_1[0]), /* 1 */
	{ &asn_OER_type_SpeedLimitTypeEU_constr_1, &asn_PER_type_SpeedLimitTypeEU_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_SpeedLimitTypeEU_specs_1	/* Additional specs */
};

