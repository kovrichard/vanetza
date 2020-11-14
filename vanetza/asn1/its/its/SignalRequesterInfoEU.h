/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_SignalRequesterInfoEU_H_
#define	_SignalRequesterInfoEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "VehicleIDEU.h"
#include "RequestIDEU.h"
#include "MsgCountEU.h"
#include "BasicVehicleRoleEU.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RequestorTypeEU;

/* SignalRequesterInfoEU */
typedef struct SignalRequesterInfoEU {
	VehicleIDEU_t	 id;
	RequestIDEU_t	 request;
	MsgCountEU_t	 sequenceNumber;
	BasicVehicleRoleEU_t	*role	/* OPTIONAL */;
	struct RequestorTypeEU	*typeData	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalRequesterInfoEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalRequesterInfoEU;
extern asn_SEQUENCE_specifics_t asn_SPC_SignalRequesterInfoEU_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalRequesterInfoEU_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RequestorTypeEU.h"

#endif	/* _SignalRequesterInfoEU_H_ */
#include "asn_internal.h"
