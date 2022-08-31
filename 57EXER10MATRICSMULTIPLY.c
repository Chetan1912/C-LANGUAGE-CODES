#include <stdio.h>
int main()
{
    int a1, b1, a2, b2;
    printf("THIS IS THE PROGRAMM FOR MATRICS MULTIPLICATION\n");
    printf("ENTER THE RAWS OF FIRST MATRICS\n");
    scanf("%d", &a1);
    printf("ENTER THE COLOM OF FIRST MATRICS\n");
    scanf("%d", &b1);
    printf("ENTER THE RAWS OF SECOND MATRICS\n");
    scanf("%d", &a2);
    printf("ENTER THE COLOM OF SECOND MATRICS\n");
    scanf("%d", &b2);
    int m1[a1][b1], m2[a2][b2], m3[a1][b2];
    if (b1 == a2)
    {
        printf("THERE ARE ALL THE STATEMENT FOR MATRICS 1\n");
        for (int i = 0; i < a1; i++)
        {
            for (int j = 0; j < b1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }
        printf("THERE ARE ALL THE STATEMENT FOR MATRICS 2\n");
        for (int i = 0; i < a2; i++)
        {
            for (int j = 0; j < b2; j++)
            {
                scanf("%d", &m2[i][j]);
            }

        }
        printf("MATRICS1 = MATRICS1 * MATRICS 2\n");
        for (int i = 0; i < a1; i++)
        {
            for (int j = 0; j < b1; j++)
            {
                m3[i][j] = 0;
                for (int k = 0; k < a1; k++)
                {
                    m3[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("THE MULTIPLED MATRICS :\n");

        for (int i = 0; i < a1; i++)
        {
            for (int j = 0; j < b2; j++)
            {
                printf("%d\t", m3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("FOR METRICS MULTIPLICATION COLLOM OF FIRST = RAW OF SECOND MATRICS\n you had entered a invalid statement\n");
    }

    return 0;
}