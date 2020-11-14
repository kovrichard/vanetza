/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SpeedandHeadingandThrottleConfidenceEU_H_
#define	_SpeedandHeadingandThrottleConfidenceEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "HeadingConfidence.h"
#include "SpeedConfidence.h"
#include "ThrottleConfidenceEU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SpeedandHeadingandThrottleConfidenceEU */
typedef struct SpeedandHeadingandThrottleConfidenceEU {
	HeadingConfidence_t	 heading;
	SpeedConfidence_t	 speed;
	ThrottleConfidenceEU_t	 throttle;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SpeedandHeadingandThrottleConfidenceEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SpeedandHeadingandThrottleConfidenceEU;
extern asn_SEQUENCE_specifics_t asn_SPC_SpeedandHeadingandThrottleConfidenceEU_specs_1;
extern asn_TYPE_member_t asn_MBR_SpeedandHeadingandThrottleConfidenceEU_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SpeedandHeadingandThrottleConfidenceEU_H_ */
#include "asn_internal.h"
