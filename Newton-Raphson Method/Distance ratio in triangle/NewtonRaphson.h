#ifndef _NEWTONRAPHSON_INC_
#define _NEWTONRAPHSON_INC_

#ifdef __cplusplus
extern "C" {
#endif
int NewtonRaphson(double *x, 
	void (*fn)(double *x, int m, void *ud, double *s_out),
	double h, int n, double *ws, int *iter, void *udat, double tolerance);

double normVector(double *b, int n);
#ifdef __cplusplus
}
#endif

#endif /* !defined(_NEWTONRAPHSON_INC_) */