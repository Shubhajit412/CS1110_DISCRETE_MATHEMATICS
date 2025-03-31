#include <stdio.h>

int digitRecursive(int n)
{
	if (n == 0)
		return 0;  //...............Base case of the recursion
	else
	    return (n % 10) + digitRecursive(n / 10);
}

int digitIterative(int n)
{
	int sum = 0;
	while (n != 0)
	{
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}

int  main()
{
	int num;

	printf("Enter the positive integer to be reversed : ");
	scanf("%d", &num);

	printf("\n");
	printf("The sum of digits, computed recursively is : %d\n", digitRecursive(num));
	printf("The sum of digits, computed iteratively is : %d\n", digitIterative(num));
	printf("\n");

	return 0;
}