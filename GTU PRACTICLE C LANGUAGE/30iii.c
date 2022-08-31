#include <stdio.h>
int main()
{
    int n;
    printf("please enter the value of row n : ");
    scanf("%d",&n);
    for(int i=1; i<=n ; i++)
    {  if (i!=2)
    {
        printf("     ");
    }
    
        for(int j=1; j<=n-i+1; j++)
        {
            printf("%d",n-i+1);
        }
        printf("\n");
    }

    return 0;
}