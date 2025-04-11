/* DESCRIPTION:

- Project :        Simulates 'Random-Walk' experiment along XY-plane.
- Sample Space :   {upward, forward}
- Technical :      P : _sample-space_ --> [0,1] is uniform
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int move( )
{
    int verdict = ((rand() / 10) % 2);     //.......generated random integers amongst {0, 1}

    return verdict;
}


int main()
{
    int simu, steps;
    int upward = 0, forward = 0;

    printf("Enter the number of throws to be done : ");
    scanf("%d", &simu);

    srand(time(NULL));              //.......observe the seed for rand()

    for(int k=0; k < simu; k++)
    {
        steps = move();

        if(steps == 0)             //......incorporates the probability in the steps
            upward++;              //......moves upward (along Y-axis)
        else
            forward++;             //......moves forward (along x-axis)
    }
    
    printf("\n");
    printf("X-coordinate : %d\n", forward);
    printf("Y-coordinate : %d\n", upward);
    printf("\n");

return 0;    
}
