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
    
        for(int j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}