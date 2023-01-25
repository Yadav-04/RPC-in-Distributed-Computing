/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sod.h"


void
sod_prog_1(char *host, int n)
{
	CLIENT *clnt;
	int  *result_1;
	number  sod_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, SOD_PROG, SOD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	sod_1_arg.a = n;
	result_1 = sod_1(&sod_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
		printf("result = %d\n", *result_1);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	sod_prog_1 (host, atoi(argv[2]));
exit (0);
}
