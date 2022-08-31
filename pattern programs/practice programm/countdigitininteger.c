#include <stdio.h>
int main()
{
    int n ,count=0;
    printf("PLEASE ENTER THE NUMBER : ");
    scanf("%d",&n);
    do
    {n=n/10;
    count++;
    } while (n!=0);
    printf("THE INTEGER IN %d is : %d",n,count);
    
    return 0;
}