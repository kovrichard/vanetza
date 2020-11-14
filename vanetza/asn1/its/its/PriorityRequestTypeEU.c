/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "PriorityRequestTypeEU.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PriorityRequestTypeEU_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PriorityRequestTypeEU_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PriorityRequestTypeEU_value2enum_1[] = {
	{ 0,	27,	"priorityRequestTypeReserved" },
	{ 1,	15,	"priorityRequest" },
	{ 2,	21,	"priorityRequestUpdate" },
	{ 3,	20,	"priorityCancellation" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_PriorityRequestTypeEU_enum2value_1[] = {
	3,	/* priorityCancellation(3) */
	1,	/* priorityRequest(1) */
	0,	/* priorityRequestTypeReserved(0) */
	2	/* priorityRequestUpdate(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_PriorityRequestTypeEU_specs_1 = {
	asn_MAP_PriorityRequestTypeEU_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PriorityRequestTypeEU_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PriorityRequestTypeEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PriorityRequestTypeEU = {
	"PriorityRequestTypeEU",
	"PriorityRequestTypeEU",
	&asn_OP_NativeEnumerated,
	asn_DEF_PriorityRequestTypeEU_tags_1,
	sizeof(asn_DEF_PriorityRequestTypeEU_tags_1)
		/sizeof(asn_DEF_PriorityRequestTypeEU_tags_1[0]), /* 1 */
	asn_DEF_PriorityRequestTypeEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_PriorityRequestTypeEU_tags_1)
		/sizeof(asn_DEF_PriorityRequestTypeEU_tags_1[0]), /* 1 */
	{ &asn_OER_type_PriorityRequestTypeEU_constr_1, &asn_PER_type_PriorityRequestTypeEU_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PriorityRequestTypeEU_specs_1	/* Additional specs */
};
