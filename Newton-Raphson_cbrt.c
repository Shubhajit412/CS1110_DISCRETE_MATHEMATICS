#include <stdio.h>
#include <math.h>

long double recursiveCbrt(int i, double x)
{
    if (i == 0)
        return x / 2; //....Base Case of recursion
    else
        return (1.0 / 3.0) * (2 * recursiveCbrt(i - 1, x) + (x /(recursiveCbrt(i - 1, x) * recursiveCbrt(i - 1, x))));
}

int main()
{
    int k = 0;
    double r, c;
    long double actual, approx;
    printf("Enter the positive real number r : ");
    scanf("%le", &r);
    printf("Enter the tolerance c (0<c<1) : ");
    scanf("%le", &c);

    actual = cbrt(r);
    approx = recursiveCbrt(0, r); //.....initialising with the Base Case of recursive form

    while (fabs((double)(actual - approx)) > c)
    {
        approx = recursiveCbrt(k, r);
        k++;
    }

    printf("\n");
    printf("The actual cube root of %0.2f  is : %0.4f\n", (float) r, (float) actual);
    printf("The approximated cube root of %0.2f  is : %0.4f\n", (float) r, (float) approx); //...FOOD FOR THOUGHT: casting data-type
    printf("The required smallest integer k is : %d\n", k);
    printf("\n");

    return 0;
}
