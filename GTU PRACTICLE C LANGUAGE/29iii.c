#include <stdio.h>
int main()
{
    int n;
    printf("please enter the no of raws\n");
    scanf("%d",&n);
     for (int i = 1; i <=n; i++)
    {   if (i!=3 && i!=4)
    {
        printf("      ");
    }
    
        for (int j = n-i+1; j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}