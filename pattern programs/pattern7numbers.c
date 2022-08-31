#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number of rows : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf(" ");
        }
        for (int j =n-i; j >0; j--)
        {
            printf("%d",i);
        }
        printf("\n");
        
    }
    return 0;
}