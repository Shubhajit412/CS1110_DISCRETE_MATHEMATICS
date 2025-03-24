#include <stdio.h>
#include <math.h>
/*...though mathematics is ever enchanting language of the Gods, and 
is everywhere, nevertheless most tools like pow(.) from math.h can be ignored for the
greater good in certain scenarios*/

int main()
{
    double x = M_PI / 2;  //...............x = π/2; M_PI is constant value stored in math.h
    double numerator = 1 / x;
    /*...............This initialisation above is circumstantial but sane because our computation here in this
    code starts from n=0; not to mention this can always be adjusted based on the indexing in the for loop...*/

    double sum = 0.0;     
    double term;          
    int sign = 1;
    float accuracy = 0.0001; //............accuracy of 0.01%         
    int fact = 1;       //.................initialise variable fact to 0! = 1
    
    for (int n = 1; ; n++)
    {  						//.......................observe the syntax-uasage of for-loop, it has no termination-condition

        numerator *= x * x; //.......................in each iteration a multiplication by x^2 happens
        term = sign * numerator / fact;	//...........computes the term: (x^(2n+1)) / (2n+1)!
        sum += term;		//.......................adding each computed term to get the Taylor sum
        sign *= -1;			//.......................alternates the sign for the next term in the upcoming iteration of the for-loop
        fact *= ((2 * n) * (2 * n + 1)); //..........computes the required factorial in each term
        if (fabs(sin(x) - sum) <= accuracy)	//...........now that we can't use fabs(.) , the order in the substraction matters
        {
            break;
        }
    }

    //.....PRINTING PRESS OF THE CODE.....
    printf("\n");
    printf("\t\t--- RESULTS OF APPROXIMATION ---\n");	//...makes the output aesthetic
    printf("\n");

    printf("1. Approximated sin(\u03c0/2) using Taylor Series: %.5f\n", sum);
    printf("2. Exact sin(\u03c0/2): %.5f\n", sin(x));
    printf("3. Absolute Error in approximation: %.4e\n", fabs(sum - sin(x)));
    
    printf("\n");

return 0;
}
