#include "stdafx.h"
 #define FUNC(x) x*sin(2*x)
#define Q(x, n) -2*(x)*(x)/((n)*(2*(n)+1))
int main() {
	double x = 3.0, S = 0.0, a = 2 * x*x;
	unsigned int n, N = 5;
	for (n = 1; n <= N; ++n) {
		S += a;
		a *= Q(x, n);
	}
	double y = FUNC(x), tol = fabs(S - y);
	printf("Sum:\t\t%.7f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
	getchar();
	return 0;
}