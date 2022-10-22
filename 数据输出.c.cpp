#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	double disc, x1, x2, p, q;
	scanf("%1f%1f%1f", &a, &b, &c);
	disc = b * b - 4 * a * c;
	p = -b / (2.0 * a);
	q = sqrt(disc) / (2.0 * a);
	x1 = p + q;
	x2 = p - q;
	printf("x1=%6.2f\n x2=%6.2f", x1, x2);
	return 0;
}