/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "SpatDataEU.h"

/*
 * This type is implemented using SPATEU,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_SpatDataEU_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SpatDataEU = {
	"SpatDataEU",
	"SpatDataEU",
	&asn_OP_SEQUENCE,
	asn_DEF_SpatDataEU_tags_1,
	sizeof(asn_DEF_SpatDataEU_tags_1)
		/sizeof(asn_DEF_SpatDataEU_tags_1[0]), /* 1 */
	asn_DEF_SpatDataEU_tags_1,	/* Same as above */
	sizeof(asn_DEF_SpatDataEU_tags_1)
		/sizeof(asn_DEF_SpatDataEU_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SPATEU_1,
	4,	/* Elements count */
	&asn_SPC_SPATEU_specs_1	/* Additional specs */
};

