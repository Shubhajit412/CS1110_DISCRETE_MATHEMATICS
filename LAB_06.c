#include<stdio.h>
#include<stdlib.h> //.......contains the rand() and srand() function
#include<time.h>  //.......contains the time() function


int main()
{
	//srand(6); //.....seed is an unisgned int
	srand(time(NULL)); //.....seed is the current time

	//int random_number = rand(); //...generates pseudo-random integers between 0 and RAND_MAX
	int random_number_s = rand(); 
	//int random_number_2 = rand() % 6 + 1; //...do the math, random int between 1 and 6

	printf("\n");
	printf("The constant RAND_MAX is : %d\n", RAND_MAX);
	//printf("The generated Random Number (without seed) is : %d\n", random_number);
	//printf("The generated Random Number (with a seed) is : %d\n", random_number_s);
	printf("The generated Random Number (with time as seed) is : %d\n", random_number_s);
	printf("\n");

return 0;
}

