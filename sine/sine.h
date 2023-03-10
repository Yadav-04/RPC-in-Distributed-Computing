/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SINE_H_RPCGEN
#define _SINE_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct number {
	int a;
};
typedef struct number number;

#define SINE_PROG 0x4563887
#define ADD_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define sine 1
extern  int * sine_1(number *, CLIENT *);
extern  int * sine_1_svc(number *, struct svc_req *);
extern int sine_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sine 1
extern  int * sine_1();
extern  int * sine_1_svc();
extern int sine_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_number (XDR *, number*);

#else /* K&R C */
extern bool_t xdr_number ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SINE_H_RPCGEN */
