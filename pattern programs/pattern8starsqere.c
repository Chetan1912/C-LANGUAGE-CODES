#include <stdio.h>
int main()
{
    int n; 
    printf("please enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1 ; i<=n; i++)
    {
        if(i==1|| i==n)
        {
            for(int j=0; j<n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else{
            printf("*");
            for(int i=1; i<=n-2; i++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}