/* DESCRIPTION:

- Project :        Simulates 'double-dice throwing' experiment with two unbiased dice.
- Sample Space :   {1, 2, 3, 4} x {5, 6, 7, 8}
- Technical :      P : _sample-space_ --> [0,1] is uniform
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int throw_one(int iter)
{
    srand(time(NULL) + iter);       //.......observe the seed for rand()
    int face = (rand() % 4) + 1;    //.......generated random integers amongst {1, 2, 3, 4}

    return face;
}

int throw_two(int iter)
{
    srand(time(NULL) + iter);            //.......observe the seed for rand()
    int face = ((rand() / 10) % 4) + 4;  //.......different than throw_one() despite same seed

    return face;
}

int main()
{
    int simu, dice_one, dice_two;
    int event_A = 0, event_B = 0;
    float prob_event_A, prob_event_B;

    printf("Enter the number of throws to be done : ");
    scanf("%d", &simu);

    for(int k=0; k < simu; k++)
    {
        dice_one = throw_one(k);
        dice_two = throw_two(k);

        if(fabs((float)(dice_one - dice_two)) <= 3)    //........checks for occurences of Event A
        {
            event_A++;                        //........counts for occurences of Event A
        }                    

        if((dice_one + dice_two) % 2 == 1)    //........checks for occurences of Event B
        {
            event_B++;                        //........counts for occurences of Event B
        } 
    }

    prob_event_A = (float) event_A / simu;    //......computes the P(A)
    prob_event_B = (float) event_B / simu;    //......computes the P(A)

    printf("\n");
    printf("P(A) : %0.3f\n", prob_event_A);
    printf("P(B) : %0.3f\n", prob_event_B);
    printf("Simulation Sampling = %d\n", simu);
    printf("\n");

return 0;    
}