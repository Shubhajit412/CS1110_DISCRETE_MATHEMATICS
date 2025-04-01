#include<stdio.h>
#include<stdlib.h> //.......contains the rand() and srand() function
#include <time.h>  //.......contains the time() function

int toss(int sd)
{
	srand(time(NULL) + sd);
	int h = (rand()/10) % 2; //.............do the math, random int between 0 and 1

	return h;
}

int main()
{
	int simu, coin, head = 0;
	float prob;

	printf("Enter the number of coin toss: ");
	scanf("%d", &simu);

	for(int i=0; i< simu; i++)
	{
		coin = toss(i);
		if (coin == 0)
		{
			head++; 
		}

		printf("coin = %d | head = %d\n", coin, head);
	}

	prob = (float) head/simu;

	printf("\n");
	printf("The probability of Heads turning up is : %0.4f\n", prob);
	printf("\n");

return 0;
}

