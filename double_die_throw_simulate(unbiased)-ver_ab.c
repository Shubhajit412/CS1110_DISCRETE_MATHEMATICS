/* DESCRIPTION:

- Project :        Simulates 'double-dice throwing' experiment with two unbiased dice.
- Sample Space :   {1, 2, 3, 4, 5, 6} x {1, 2, 3, 4, 5, 6}
- Technical :      P : _sample-space_ --> [0,1] is uniform
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int throw_one( )
{
    int face = (rand() % 6) + 1;    //.......generated random integers amongst {1,2,3,4,5,6}

    return face;
}

int throw_two( )
{
    int face = ((rand() / 10) % 6) + 1;  //.......different than throw_one() despite same seed

    return face;
}

int main()
{
    int simu, dice_one, dice_two;
    int event_A = 0, event_B = 0;
    float prob_event_A, prob_event_B;

    printf("Enter the number of throws to be done : ");
    scanf("%d", &simu);

    srand(time(NULL));       //.......observe the seed for rand()

    for(int k=0; k < simu; k++)
    {
        dice_one = throw_one();
        dice_two = throw_two();

        if((dice_one + dice_two) % 2 == 0)    //........checks for occurences of Event A
        {
            event_A++;                        //........counts for occurences of Event A
        }                    

        if((dice_one + dice_two) % 4 == 0)    //........checks for occurences of Event B
        {
            event_B++;                        //........counts for occurences of Event B
        } 
    }

    prob_event_A = (float) event_A / simu;    //......computes the P(A)
    prob_event_B = (float) event_B / simu;    //......computes the P(A)

    printf("\n");
    printf("P(A) : %0.3f\n", prob_event_A);
    printf("P(B) : %0.3f\n", prob_event_B);
    if (prob_event_B < prob_event_A)
        printf("Check: P(B) < P(A) | Status: verified.\n");
    printf("Simulation Sampling = %d\n", simu);
    printf("\n");

return 0;    
}
