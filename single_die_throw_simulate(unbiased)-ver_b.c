/* DESCRIPTION:

- Project :        Simulates 'single-dice throwing' experiment with an unbiased die.
- Sample Space :   {1, 2, 3, 4, 5, 6}
- Technical :      P : _sample-space_ --> [0,1] is uniform
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int throw(int iter)
{
    srand(time(NULL) + iter);       //.......observe the seed for rand()
    int face = (rand() % 6) + 1;    //.......generated random integers amongst {1,2,3,4,5,6}

    return face;
}

int main()
{
    int simu, face;
    int event_A = 0;
    float prob_event_A;

    printf("Enter the number of throws to be done : ");
    scanf("%d", &simu);

    for(int k=0; k < simu; k++)
    {
        face = throw(k);

        if(face % 2 == 0)    //........checks for occurences of Event A
        {
            event_A++;       //........counts for occurences of Event A
        }                    
    }

    prob_event_A = (float) event_A / simu;    //......computes the P(A)

    printf("\n");
    printf("P(A) : %0.3f\n", prob_event_A);
    printf("Simulation Sampling = %d\n", simu);
    printf("\n");

return 0;    
}