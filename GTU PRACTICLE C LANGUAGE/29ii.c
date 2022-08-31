#include <stdio.h>
int main()
{
    int n;
    printf("%d", (1 > 2) || (2 < 3) && 5 < 1);
    printf("please enter the number  of raws\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
        {
            goto end;
        }
        for (int j = n - i; j >= 0; j--)
        {
            printf(" ");
        }
    end:
        for (int k = 1; k <= i; k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}