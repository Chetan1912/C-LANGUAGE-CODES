// sky value is used in this programm for capital latter it starts from A=65,B=66...........
#include <stdio.h>
int main()
{
    int n;
    printf("please enter the value of row n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c", 64 + i); // because sky value for A=65;
        }
        printf("\n");
    }

    return 0;
}