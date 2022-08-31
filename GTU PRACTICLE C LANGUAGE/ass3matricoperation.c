#include <stdio.h>
int main()
{
    int m[3][3], n[3][3], i, j, k, o[3][3], invers[3][3], trans1[3][3], trans2[3][3];
    float determinant = 0;

    //   1... for the enter elliment and addition;
    printf("plese enter the first  matrics : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    printf("please enter the second matrics : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &n[i][j]);
            o[i][j] = m[i][j] + n[i][j];
        }
    }
    //   2. for the inverce
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            invers[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                invers[i][j] += m[i][k] * n[k][j];
            }
        }
    }
    // 3 transport
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans1[i][j] = m[j][i];
            trans2[i][j] = n[j][i];
        }
    }
    // 4.inverce of matrics
    for (i = 0; i < 3; i++)
    {
        determinant = determinant + (m[0][i] * (m[1][(i + 1) % 3] * m[2][(i + 2) % 3] - m[1][(i + 2) % 3] * m[2][(i + 1) % 3]));
    }
    // printing the matrics
    printf("\n\n1. ADDITION OF TWO MATRIX : \n\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", o[i][j]);
        }
        printf("\n");
    }

    printf("\n\n2. multiplication OF TWO MATRIX : \n\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", invers[i][j]);
        }
        printf("\n");
    }
    printf("\n\n3. transport OF TWO MATRIX 1 : \n\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", trans1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n3. transport OF  MATRIX 2 : \n\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", trans2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n4.Inverse of matrix is: \n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%0.2f\t", ((m[(i + 1) % 3][(j + 1) % 3] * m[(i + 2) % 3][(j + 2) % 3]) - (m[(i + 1) % 3][(j + 2) % 3] * m[(i + 2) % 3][(j + 1) % 3])) / determinant);
        }
        printf("\n");
    }
}