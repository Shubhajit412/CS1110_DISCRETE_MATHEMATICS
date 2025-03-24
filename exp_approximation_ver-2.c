#include <stdio.h>
#include <math.h>

int main()
{
    double x;  
    double sum = 1.0;
    double numerator = 1; //.................this variable is introduced to smartly ditch the pow(.) function     
    double term;
    double accuracy;
    int fact = 1;    //......................initialise variable fact to 1! = 1  

    printf("Enter x (x>0): ");
    scanf("%le", &x);
    printf("Enter c (0<c<1): ");
    scanf("%le", &accuracy);          
          

    
    for (int n = 1; ; n++)
    {  						//.......................observe the syntax-uasage of for-loop, it has no termination-condition
        fact *= n; //................................computes the required factorial in each term 
        numerator *= x; //...........................this way 'x' gets exponentiated gradually with each term 
        term = numerator / fact;	//...............computes the term: (x^(n)) / (n)!
        sum += term;		//.......................adding each computed term to get the Taylor sum        
        if (fabs(exp(x) - sum) <= accuracy)	//.......here is the stopping criteria
        {
            break;
        }
    }

    //.....PRINTING PRESS OF THE CODE.....
    printf("\n");
    printf("\t\t--- RESULTS OF APPROXIMATION ---\n");	//...makes the output aesthetic
    printf("\n");

    printf("1. Approximated exp(%d) using Taylor Series : %.6f\n", (int)x, sum);
    printf("2. Exact exp(%d): %.6f\n", (int)x, exp(x));
    printf("3. Absolute Error in approximation: %.4e\n", fabs(exp(x) - sum));
    
    printf("\n");

return 0;
}
