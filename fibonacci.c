#include <stdio.h>

long int recursiveFibonacci(int a)
{
	/* Function to recursively compute factorial. */

	if (a < 3) //...............NOTE : (!a) and (a == 0) are logically equivalent here
		return 1; //............basically 0! = 1
	else
		return recursiveFibonacci(a - 1) + recursiveFibonacci(a - 2); //...the recursive relation
}

long int iterativeFibonacci(int a)
{
	long int one, two, three;
	one = 1;
	two = 1;

	if (a < 3)
		return 1;
	else
	{
		for(int i = 2; i < a; i++) //....these can be changed appropriately
		{
			three = one + two;
			one = two;
			two = three;
		}
	}
	return three;
	
}

int main()
{
	int n;
	long int rec_fibo, iter_fibo;

	printf("\n");
	printf("Enter the term number of Fibonacci sequence: ");
	scanf("%d", &n);

	rec_fibo = recursiveFibonacci(n);
	iter_fibo = iterativeFibonacci(n);

	printf("\n");
	printf("Fibonacci_%d computed recursively : %ld\n", n, rec_fibo);
	printf("Fibonacci_%d computed iteratively : %ld\n", n, iter_fibo);
	printf("\n");

	return 0;
}
