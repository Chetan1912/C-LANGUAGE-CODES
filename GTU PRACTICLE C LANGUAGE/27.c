#include <stdio.h>
int main()
{
    int n;
    float fa=1,sum=0;
    printf("THIS IS THE PROGRAM FOR THE RESIBROKEL OF FACTORIAL OF N NATURAL NO\nplease enter the value of n : ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)
    {
    fa *= i; 
          sum += 1/fa ;      //because the use of fa(float) typecasting is not compulsory//
    }
      printf(" THE SUM OF  RESIBROKEL OF FACTORIAL OF %d NATURAL NO : % 0.5f",n,sum);
    return 0;
}