/* DESCRIPTION:

- Project :        Simulates 'single-coin tossing' experiment with a biased coin.
- Sample Space :   {Heads, Tails}
- Technical :      P(Heads) = 2 * P(Tails)
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int toss( )
{
    int face = (rand() % 3);        //.......generated random integers amongst {0,1,2}

    return face;
}

int main()
{
    int simu, coin;
    int tails = 0, heads = 0;
    float prob_tails, prob_heads;

    printf("Enter the number of tosses to be done : ");
    scanf("%d", &simu);

    srand(time(NULL));       //.......observe the seed for rand()

    for(int k=0; k < simu; k++)
    {
        coin = toss();

        if(coin == 0)
        {
            tails++;         //........Random Variable:= Tails --> 0; Heads --> 1,2
        }                    //........this introduces the desired 'unbiasedness' in the coin

        else
            heads++;
    }
    
    prob_tails = (float) tails / simu;    //......computes the P(Tails)
    prob_heads = (float) heads / simu;    //......computes the P(Heads)

    printf("\n");
    printf("P(Tails) : %0.3f\n", prob_tails);
    printf("P(Heads) : %0.3f\n", prob_heads);

    if(prob_heads != prob_tails)          //......a check for the distribution
    {
        printf("Simulation Sampling = %d\n", simu);
        printf("The probability distribution is not Uniform!\n");
    }
    printf("\n");

return 0;    
}
