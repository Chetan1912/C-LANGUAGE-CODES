#include <stdio.h>
int main()
{   int n;
    printf("this is the programm for print starpattern1\n");
    printf("please enter the no of rows triangle you want to print\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j= 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    printf("reverse star pattern\n");
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}