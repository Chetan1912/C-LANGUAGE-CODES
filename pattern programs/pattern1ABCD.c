#include <stdio.h>
int main()
{
    int n;
    printf("please enter the line you want to print that pattern\n");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {  
            printf("%c",64+j);
        }
        printf("\n");
    }
    return 0;
}