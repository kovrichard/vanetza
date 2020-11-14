/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_MovementPhaseStateEU_H_
#define	_MovementPhaseStateEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MovementPhaseStateEU {
	MovementPhaseStateEU_unavailable	= 0,
	MovementPhaseStateEU_dark	= 1,
	MovementPhaseStateEU_stop_Then_Proceed	= 2,
	MovementPhaseStateEU_stop_And_Remain	= 3,
	MovementPhaseStateEU_pre_Movement	= 4,
	MovementPhaseStateEU_permissive_Movement_Allowed	= 5,
	MovementPhaseStateEU_protected_Movement_Allowed	= 6,
	MovementPhaseStateEU_permissive_clearance	= 7,
	MovementPhaseStateEU_protected_clearance	= 8,
	MovementPhaseStateEU_caution_Conflicting_Traffic	= 9
} e_MovementPhaseStateEU;

/* MovementPhaseStateEU */
typedef long	 MovementPhaseStateEU_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MovementPhaseStateEU_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MovementPhaseStateEU;
extern const asn_INTEGER_specifics_t asn_SPC_MovementPhaseStateEU_specs_1;
asn_struct_free_f MovementPhaseStateEU_free;
asn_struct_print_f MovementPhaseStateEU_print;
asn_constr_check_f MovementPhaseStateEU_constraint;
ber_type_decoder_f MovementPhaseStateEU_decode_ber;
der_type_encoder_f MovementPhaseStateEU_encode_der;
xer_type_decoder_f MovementPhaseStateEU_decode_xer;
xer_type_encoder_f MovementPhaseStateEU_encode_xer;
oer_type_decoder_f MovementPhaseStateEU_decode_oer;
oer_type_encoder_f MovementPhaseStateEU_encode_oer;
per_type_decoder_f MovementPhaseStateEU_decode_uper;
per_type_encoder_f MovementPhaseStateEU_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _MovementPhaseStateEU_H_ */
#include "asn_internal.h"
