#include <stdio.h>

int addNumbers(int a, int b)
{ /* Function definition: adds two numbers a, b and returns a + b */
    return a + b;
}

int exponentiateNumbers(int a, int b)
{ /* Function definition: exponentiate two numbers a, b and returns a^b */
    int result = 1;
    for(int i = 0; i < b; i++)
    {
        result *= a;
    }

    return result;
}

int main() {
    int num1, num2, num3;
    int sum, expo, pow_expo;

    printf("\n");
    printf("Enter two numbers (separated by a space): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = addNumbers(num1, num2); //.............the function call to add
    expo = exponentiateNumbers(num1, num2); //...the function call to exponentiate

    /* Observe a function call inside another function call */
    pow_expo = exponentiateNumbers(addNumbers(num1, num2), num3); // an example showing a function call inside a function call

    printf("\n");
    printf("Sum: %d\n", sum);
    printf("Power: %d\n", expo);
    printf("Power of the sum: %d\n", pow_expo);
    printf("\n");

    return 0;
}
