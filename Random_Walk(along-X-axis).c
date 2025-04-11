/* DESCRIPTION:

- Project :        Simulates 'Random-Walk' experiment along X-axis.
- Sample Space :   {forward, backward}
- Technical :      P : _sample-space_ --> [0,1] is 3:4 wrt sample space
- Methodology :    Discrete Random Sampling using rand()
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int move( )
{
    int verdict = (rand() % 4);     //.......generated random integers amongst {0, 1, 2, 3}

    return verdict;
}


int main()
{
    int simu, steps, distance;
    int position = 0;

    printf("Enter the number of throws to be done : ");
    scanf("%d", &simu);

    srand(time(NULL));       //.......observe the seed for rand()

    for(int k=0; k < simu; k++)
    {
        steps = move();

        if(steps == 0)             //......incorporates the probability in the steps
            position--;            //......moves backward
        else
            position++;            //......moves forward
    }

    distance = fabs((float)position); //...distance travelled
    
    printf("\n");
    printf("Distance travelled : %d\n", distance);
    if(position < 0)
        printf("Position : LEFT\n");
    else if(position > 0)
        printf("Position : RIGHT\n");
    else
        printf("Position : ORIGIN\n");
    printf("\n");

return 0;    
}
