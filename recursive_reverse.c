#include <stdio.h>

int power(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return a * power(a, b - 1);
}

int reverseRecursive(int n, int digits)
{
	if (n == 0)
		return 0;  //...............Base case of the recursion
	else
	    return (n % 10) * power(10, digits - 1) + reverseRecursive(n / 10, digits - 1);
}

int  main()
{
	int num, n;

	printf("Enter the positive integer to be reversed : ");
	scanf("%d", &num);

	printf("Enter the number of digits in the input : ");
	scanf("%d", &n);

	printf("\n");
	printf("The sum of digits, computed recursively is : %d\n", reverseRecursive(num, n));
	printf("\n");

	return 0;
}
