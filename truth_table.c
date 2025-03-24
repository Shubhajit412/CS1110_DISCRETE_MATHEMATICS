#include<stdio.h>

int main()
{
	int a, b, c;

	printf("A | B | C | (A \u2228 B)\u2227 C\n");
	printf("----------------------------\n");

	for(int a=0; a < 2; a++)
	{
		for(int b=0; b <  2; b++)
		{
			for(int c=0; c < 2; c++)
			{
				printf("%d | %d | %d | %d\n", a, b, c, (a || b) && c);

			}
		}
	}
return 0;
}
