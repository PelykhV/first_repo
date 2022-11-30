#include <stdio.h>
#include <math.h>

void main()
{
	double x, y, res;

	printf("Imput X: \n");
	scanf_s("%lf", &x);

	printf("Imput Y: \n");
	scanf_s("%lf", &y);

	res = pow(y, 3) * sqrt(x * y) + y * sin(x * y) - exp(-x * y) * cos(x * y) + 7.1 / x * y;
	printf("Result: %lf\n", res);
}