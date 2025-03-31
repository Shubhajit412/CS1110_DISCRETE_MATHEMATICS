#include <stdio.h>
#include <math.h>

double Viete(int k)
{
	if (k == 0)
		return sqrt(2);
	else
		return sqrt(2 + Viete(k-1));
}

int main()
{
	int n = 0;
	float c;
	double actual = M_PI;
	double term = Viete(0); //...mind the initiation
	double series = 0.5 * (term * 0.5);
	double approx = 1 / series; 

	printf("Enter the tolerance of approximation : ");
	scanf("%f", &c);

	while(fabs(actual - approx) > c)
	{	/* carefully convince yourself why the computations here makes sense */
		n++;
		term = Viete(n);
		series *= (term * 0.5);
		approx = 1 / series; 
	}
	
	printf("\n");
	printf("The approximated \u03c0 is : %1.6f\n", (float) approx);
	printf("The required smallest integer is : %d\n", n);
	printf("\n");

	return 0;
}