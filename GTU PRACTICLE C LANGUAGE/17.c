#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("this is the programm for factorial\nplease enter the no you want factorial\n");
    scanf("%d",&n);
    if (n==0 || n==1)
    {
        printf("factorial of %d is 1",n);
    }
    
     else
     {for (int i = 1; i <=n; i++)
     {
         fact*=i;
         
     }
     
printf("the factorial of %d is %d\n",n,fact);
     }
     return 0;
}