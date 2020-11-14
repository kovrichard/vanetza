/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CITSapplMgmtIDs"
 * 	found in "../../cpm/F/kell/asd/with_riebl/IVI-ISO-deps.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "Ext2.h"

static int
memb_content_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 16512 && value <= 2113663)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_content_constr_2 CC_NOTUSED = {
	{ 4, 1 }	/* (16512..2113663) */,
	-1};
static asn_per_constraints_t asn_PER_memb_content_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 21, -1,  16512,  2113663 }	/* (16512..2113663) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_Ext2_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ext2_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ext2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ext2, choice.content),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_content_constr_2, &asn_PER_memb_content_constr_2,  memb_content_constraint_1 },
		0, 0, /* No default value */
		"content"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ext2, choice.extension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ext3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"extension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ext2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* content */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* extension */
};
asn_CHOICE_specifics_t asn_SPC_Ext2_specs_1 = {
	sizeof(struct Ext2),
	offsetof(struct Ext2, _asn_ctx),
	offsetof(struct Ext2, present),
	sizeof(((struct Ext2 *)0)->present),
	asn_MAP_Ext2_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ext2 = {
	"Ext2",
	"Ext2",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ext2_constr_1, &asn_PER_type_Ext2_constr_1, CHOICE_constraint },
	asn_MBR_Ext2_1,
	2,	/* Elements count */
	&asn_SPC_Ext2_specs_1	/* Additional specs */
};

