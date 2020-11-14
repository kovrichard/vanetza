/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../../cpm/F/kell/asd/with_riebl/DSRC_REG_D.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RTCMcorrectionsEU_H_
#define	_RTCMcorrectionsEU_H_


#include "asn_application.h"

/* Including external dependencies */
#include "MsgCountEU.h"
#include "RTCM-RevisionEU.h"
#include "MinuteOfTheYearEU.h"
#include "RTCMmessageListEU.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FullPositionVectorEU;
struct RTCMheaderEU;
struct RegionalExtensionEU;

/* RTCMcorrectionsEU */
typedef struct RTCMcorrectionsEU {
	MsgCountEU_t	 msgCnt;
	RTCM_RevisionEU_t	 rev;
	MinuteOfTheYearEU_t	*timeStamp	/* OPTIONAL */;
	struct FullPositionVectorEU	*anchorPoint	/* OPTIONAL */;
	struct RTCMheaderEU	*rtcmHeader	/* OPTIONAL */;
	RTCMmessageListEU_t	 msgs;
	struct RTCMcorrectionsEU__regional {
		A_SEQUENCE_OF(struct RegionalExtensionEU) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RTCMcorrectionsEU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RTCMcorrectionsEU;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FullPositionVectorEU.h"
#include "RTCMheaderEU.h"
#include "RegionalExtensionEU.h"

#endif	/* _RTCMcorrectionsEU_H_ */
#include "asn_internal.h"