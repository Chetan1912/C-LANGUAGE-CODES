#include <stdio.h>
int main()
{
    int n, in = 1;
    printf("please enter the value for n : ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        in++;
        for (int j = 0; j <= in; j++)  // or use j<=n-i;
        {
            printf(" ");
        }

        for (int j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}