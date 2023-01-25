/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "rev.h"

int *
rev_1_svc(number *argp, struct svc_req *rqstp)
{

	int reverse(int n){
		int rever = 0;
		while(n > 0){
			rever = rever * 10 + n % 10;
			n = n / 10;
		}
		return rever;
	}

	static int  result;

	printf("reverse(%d) is called", argp->a);
	result = reverse(argp->a);

	return &result;
}