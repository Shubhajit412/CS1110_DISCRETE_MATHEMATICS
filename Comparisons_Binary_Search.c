#include <stdio.h>
#include <math.h>

int recusiveBinarysearch(int k)
{
	if (k == 1)
		return 1;
	else
		return recusiveBinarysearch(k / 2) + 1;
}

int closedBinarysearch(int k)
{
	return (int) log2((double) k) + 1;
}

int main()
{
	int n;
	int recur_comp, closd_comp;

	printf("Enter the integer n: ");
	scanf("%d", &n);

	recur_comp = recusiveBinarysearch(n);
	closd_comp = closedBinarysearch(n);

	printf("\n");
	printf("The required number of comparisons, computed recursively = %d\n", recur_comp);
	printf("The required number of comparisons, computed using closed form = %d\n", closd_comp);
	printf("\n");

	return 0;
}