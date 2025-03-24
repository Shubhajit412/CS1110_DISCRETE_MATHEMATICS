#include<stdio.h>

int main()
{// Program to compute and show the sum of first n natural numbers.
	int n, sum;

	printf("Input the natural number n, upto which the sum will be calculated: ");
	scanf("%d", &n);
	
	if (n <= 0)
		printf("The input %d needs to be positive!\n", n);
	else
	{
		sum = 0;
		for (int i = 1; i <= n; ++i)
			sum += i; //...............the same as sum = sum + i;
		printf("The required sum of the first %d natural numbers is: %d\n", n, sum);
	}

return 0;
}
