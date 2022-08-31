#include <stdio.h>
int main()
{
    int i = 1, sum=0, n;

    printf("please enter the value of n which sum you wanted to print\n");
    scanf("%d", &n);
    
    while (i<=n)
    {
       
      sum +=i;
        i=i+1;
    } printf(" the sum of the number n is = %d\n", sum);
    
}