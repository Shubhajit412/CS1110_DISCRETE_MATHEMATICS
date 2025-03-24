#include <stdio.h>
#include <math.h>

double recursiveSqrt(int i, double x)
{
	if (i == 0)
		return x / 2; //....Base Case of recursion
	else
		return 0.5 * (recursiveSqrt(i - 1, x) + (x / recursiveSqrt(i - 1, x)));
}

int main()
{
	int k = 0;
	double r, c;
	double actual, approx;
	printf("Enter the positive real number r : ");
	scanf("%le", &r);
	printf("Enter the tolerance c (0<c<1) : ");
	scanf("%le", &c);

	actual = sqrt(r);
	approx = recursiveSqrt(0, r); //.....initialising with the Base Case of recurisive form

	while (fabs(actual - approx) > c)
	{
		approx = recursiveSqrt(k, r);
		k++;
	}

	printf("\n");
	printf("The actual square root of %0.2f  is : %0.4f\n", (float) r, (float) actual);
	printf("The approximated square root of %0.2f  is : %0.4f\n", (float) r, (float) approx); //...FOOD FOR THOUGHT: casting data-type
	printf("The required smallest integer k is : %d\n", k);
	printf("\n");

	return 0;
}