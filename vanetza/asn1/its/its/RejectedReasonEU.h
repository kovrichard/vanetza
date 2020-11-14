/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RejectedReasonEU_H_
#define	_RejectedReasonEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RejectedReasonEU {
	RejectedReasonEU_unknown	= 0,
	RejectedReasonEU_emergencyVehiclePriority	= 1,
	RejectedReasonEU_maxWaitingTimeExceeded	= 2,
	RejectedReasonEU_ptPriorityDisabled	= 3,
	RejectedReasonEU_higherPTPriorityGranted	= 4,
	RejectedReasonEU_vehicleTrackingUnknown	= 5
	/*
	 * Enumeration is extensible
	 */
} e_RejectedReasonEU;

/* RejectedReasonEU */
typedef long	 RejectedReasonEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RejectedReasonEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RejectedReasonEU;
extern const asn_INTEGER_specifics_t asn_SPC_RejectedReasonEU_specs_1;
asn_struct_free_f RejectedReasonEU_free;
asn_struct_print_f RejectedReasonEU_print;
asn_constr_check_f RejectedReasonEU_constraint;
ber_type_decoder_f RejectedReasonEU_decode_ber;
der_type_encoder_f RejectedReasonEU_encode_der;
xer_type_decoder_f RejectedReasonEU_decode_xer;
xer_type_encoder_f RejectedReasonEU_encode_xer;
oer_type_decoder_f RejectedReasonEU_decode_oer;
oer_type_encoder_f RejectedReasonEU_encode_oer;
per_type_decoder_f RejectedReasonEU_decode_uper;
per_type_encoder_f RejectedReasonEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RejectedReasonEU_H_ */
#include "asn_internal.h"