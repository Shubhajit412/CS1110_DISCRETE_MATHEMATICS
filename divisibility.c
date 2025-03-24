#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 13 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by both 5 and 13.\n", num);
    }
    else if (num % 5 == 0)
    {
        printf("%d is divisible by 5 but not by 13.\n", num);
    }
    else if (num % 13 == 0)
    {
        printf("%d is divisible by 13 but not by 5.\n", num);
    }
    else
    {
        printf("%d is not divisible by neither 5 nor 13.\n", num);
    }

    return 0;
}