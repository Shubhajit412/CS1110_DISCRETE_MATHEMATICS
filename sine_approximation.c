#include <stdio.h>
#include <math.h>

int main()
{
    double x = M_PI / 2;  //...............x = π/2; M_PI is constant value stored in math.h
    double sum = 0.0;     
    double term;          
    int sign = 1;
    float accuracy = 0.0001; //............accuracy of 0.01%         

    
    for (int n = 0; ; n++)
    {  						//......................observe the syntax-uasage of for-loop, it has no termination-condition
        
        int fact = 1;		//......................initialise variable fact to 0! = 1
        for (int j = 1; j <= (2 * n + 1); j++)
        {					//......................this for-loop computes the factorial invloved in each term
            fact *= j;
        }

        term = sign * pow(x, 2 * n + 1) / fact;	//...computes the term: (x^(2n+1)) / (2n+1)!
        sum += term;		//.......................adding each computed term to get the Taylor sum
        sign *= -1;			//.......................alternates the sign for the next term in the upcoming iteration of the for-loop
        if (fabs(sin(x) - sum) <= accuracy)	//.......here is the stopping criteria
        {
            break;
        }
    }

    //.....PRINTING PRESS OF THE CODE.....
    printf("\n");
    printf("\t\t--- RESULTS OF APPROXIMATION ---\n");	//...makes the output aesthetic
    printf("\n");

    printf("1. Approximated sin(\u03c0/2) using Taylor Series: %.5f\n", sum);
    printf("2. Exact sin(\u03c0/2) from math.h: %.5f\n", sin(x));
    printf("3. Absolute Error in approximation: %.6e\n", fabs(sum - sin(x)));
    
    printf("\n");

return 0;
}
