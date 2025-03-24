#include <stdio.h>

long int recursiveFactorial(int a)
{
	/* Function to recursively compute factorial. */

	if (!a) //...............NOTE : (!a) and (a == 0) are logically equivalent here
		return 1; //.........basically 0! = 1
	else
		return a * recursiveFactorial(a - 1); //......basically n! = n * (n - 1)!
}

long int iterativeFactorial(int a)
{
	long int facto = 1;

	if (!a)
		return 1;
	else
	{
		for(int i = 1; i <= a; i++)
		{
			facto *= i; //...........iteratively multiplies all integers from 1 to a
		}
	}
	return facto;
	
}

int main()
{
	int n;
	long int rec_facto, iter_facto;

	printf("\n");
	printf("Enter the natural number for computing factorial: ");
	scanf("%d", &n);

	rec_facto = recursiveFactorial(n);
	iter_facto = iterativeFactorial(n);

	printf("\n");
	printf("Factorial(%d) computed recursively : %ld\n", n, rec_facto);
	printf("Factorial(%d) computed iteratively : %ld\n", n, iter_facto);
	printf("\n");

	return 0;
}