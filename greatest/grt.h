/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GRT_H_RPCGEN
#define _GRT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int a;
	int b;
	int c;
};
typedef struct numbers numbers;

#define GRT_PROG 0x20000001
#define GRT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define grt 1
extern  int * grt_1(numbers *, CLIENT *);
extern  int * grt_1_svc(numbers *, struct svc_req *);
extern int grt_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define grt 1
extern  int * grt_1();
extern  int * grt_1_svc();
extern int grt_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GRT_H_RPCGEN */
