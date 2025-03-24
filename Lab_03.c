#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, k;
	int facto, count, reverse, sum, ssum;
	
	printf("Enter the positive integer : ");
	scanf("%d", &n);
	
	k = n;
	m = n;
	count = 0;
	reverse = 0;
	sum = 0;
	ssum = 0;
	facto = 0;

	printf("The positive factors are : \n");

	for(int i = 1;i < n;i++)
	{
		if(n % i == 0)
			printf("%d\n", i);
			facto = facto + i;
	}

	while(n != 0)
	{
		reverse = (reverse * 10) + (n % 10);
		sum = sum + (n % 10);
		n = n / 10;
		count++;
	}

	while(m != 0)
	{
		ssum = ssum + pow(m % 10, count);
		m = m / 10;
	}

	printf("The reversed integer is : %d\n", reverse);
	printf("The number of digits is : %d\n", count);
	printf("The sum of the digits of %d is : %d\n", k, sum);
	if(ssum == k)
		printf("The given number is an Armstrong Number!\n");
	else
                printf("The given number is not an Armstrong Number!\n");
	if(facto == k)
		printf("The given number is a Perfect Number!\n");
	else
		printf("The given number is not a Perfect Number!\n");
return 0;
}
