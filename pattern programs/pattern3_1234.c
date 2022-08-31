#include <stdio.h>
int main()
{
    int n,in=1;
    printf("please enter the value of n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%d\t",in++);
        }
        printf("\n");
    }
    return 0;
}