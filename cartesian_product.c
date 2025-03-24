#include <stdio.h>
#include <math.h>

int main()
{
    int a[4], b[4];

    printf("Enter the elements of Set A:\n");
    for (int i = 0; i < 4; i++)				//........inputs Set A
    {
    	scanf("%d", &a[i]);
    }

    printf("Enter the elements of Set B:\n");
    for (int i = 0; i < 4; i++)				//........inputs Set B
    {
    	scanf("%d", &b[i]);
    }

    printf("\t\t--- MEMBERS OF CROSS-PRODUCT ---\n");	//...makes the output aesthetic

    for (int i = 0; i < 4; i++)
    {
    	for (int j = 0; j < 4; j++)
    	{
    		printf("(%d, %d)\n", a[i], b[j]);
    	}
    }
    
    printf("\n");			//.............................makes the output aesthetic

    return 0;
}
