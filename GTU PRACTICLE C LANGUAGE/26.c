#include <stdio.h>
int main()
{
    float  re=0;
    int n;
    printf("THIS IS THE PROGRAM TO CALCULATE SUM OF RESIBROKEL OF N NO\nplease enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        re += 1/(float)i;   // use typecasting when deal with intiger in term of float
        
    }
    printf("\nthe sum of resibrokel od %d no is %0.4f",n,re);

    return 0;
}