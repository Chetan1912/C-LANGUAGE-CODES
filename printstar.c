#include <stdio.h>

int main()
{
    int a, n, m;
    printf("please enter 1 for normal triangular * patern\n");
    printf("please enter 2 for reverse triangular * patern\n");
    scanf("%d", &a);

    while (a == 1)
    {
        printf("please enter the no of line you wanted in normal triangle\n");
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
        {
            for (int k = 0; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    while (a == 2 )
    {
        printf("please enter the no of line you wanted in reverce triangle\n");
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < n - j; l++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
