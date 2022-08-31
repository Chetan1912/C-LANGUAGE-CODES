#include <stdio.h>
int main()
{
    int  arrey[3][3]={{00,01,02},{11,12,13},{21,22,23}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("the aliment %d,%d=%d\n ",i,j,arrey[i][j]);
        }
        
    }
    
    return 0;
}