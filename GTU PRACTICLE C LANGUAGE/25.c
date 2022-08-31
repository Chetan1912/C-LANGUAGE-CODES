#include <stdio.h>
#include <conio.h>
int main()
{ int n,sq,sum=0;

printf("this is the program to calculate the sum of squere of n no\n");
printf("please enter the n : ");
scanf("%d",&n);
for (int i = 1; i <=n; i++)
{
   sq=i*i;
   sum += sq;   
}
printf("the sum of the squere of %d no is : %d",n,sum);
    
    return 0;
}