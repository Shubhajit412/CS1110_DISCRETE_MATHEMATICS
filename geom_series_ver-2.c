#include<stdio.h>
//#include<math.h> ................Good Bye math.h !

int main()
{
	double a, r, c;
	double series, sum;
	double term;

	int k = 0; //..................this index gives counts the power of commonn difference 'r'

	printf("Enter the values a, r, c (such that a>0, 0<r<1, 0<c<1):\n");

	printf("a : ");
	scanf("%le", &a);

	printf("r : ");
	scanf("%le", &r);

	printf("c : ");
	scanf("%le", &c);

	sum = a / (1 - r);
	/* The following two initiations imply that we start computing
	the series terms from the second term onwards, i.e., from k=1 onwards...*/

	series = a; //.................mind this initialisation, the computation architecture needs this!  
	term = a; //...................initialise 'term' with the first first term of the geo.series 

	while(sum - series > c)
	{
		term = term * r; //..............this is the term of the geometric progression
		series += term; //.........in each iteration the the term gets added to progress the partial sum
		k++;
		//printf("k=%d | r=%0.5f | term=%0.5f |series=%0.5f\n", k, r, term, series); //......uncomment this line to watch the computation progress!
	}

	//Printing Press of the program...
	printf("\n");						//........aesthetics
	printf("The smallest integer k is: %d\n", k);
	printf("The sum of the infintie series is: %0.6f\n", sum);
	printf("The calculate partial sum of the geom. series is: %0.6f\n", series);
	printf("\n");						//........aesthetics

	return 0;
}