#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ int n,g,ga=1;
printf(" lets play a game\n ");
   
    srand(time (0));
    n = rand()% 100 + 1;
    do
    {
       printf("enter the number between 1 to 100\n");
        scanf("%d", &g);
        if (g > n)
        {
            printf("guess the small number\n");
        }
      else  if (g < n)
        {
            printf("guess the big number\n");
        }
       else {printf( "YOU HAD GUESSD THE NUMBER IN %d ATTEMPT\n", ga);
       
       } ga++;
    } while (g != n);
    return 0;
}