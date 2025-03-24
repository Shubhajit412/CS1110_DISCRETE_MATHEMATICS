#include <stdio.h>
#include <math.h>

int power(int a, int b)
{
	if (b == 1)
		return 1;
	else
		return a * power(a, b - 1);
}

int recusiveHanoi(int k)
{
	if (k == 0)
		return 1;
	else
		return 2 * recusiveHanoi(k - 1) + 1;
}

int closedHanoi(int k)
{
	return power(2, k) - 1;
}

int main()
{
	int n;
	int recur_comp, closd_comp;

	printf("Enter the integer n: ");
	scanf("%d", &n);

	recur_comp = recusiveHanoi(n);
	closd_comp = closedHanoi(n);

	printf("\n");
	printf("The required number of moves, computed recursively = %d\n", recur_comp);
	printf("The required number of moves, computed using closed form = %d\n", closd_comp);
	printf("\n");

	return 0;
}
