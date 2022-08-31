#include <stdio.h>
int main()
{
    int n,i=1;
    float no,av,add=0;
    printf("this is the basic programm for avrage of n number\n");
    printf("please enter for how many no you want to find avrage\n");
    scanf("%d",&n);
    printf("please enter the numbers\n");
    for(int i=1; i<=n ; i++)
    {
      printf("\n%d : ",i);
      scanf("%f",&no);
      add += no;
    }
    av= add/n;
    printf("sum of your %d no is %0.2f\n",n,add);
    printf("the avvrage of your %d no is %0.2f\n",n,av);
    return 0;
}