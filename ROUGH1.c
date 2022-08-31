#include <stdio.h>

void main()
{
    int n, temp, arr[n];
    printf("please enter the number of aliment in arrey\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("please enter the %d  no eliment\n  ", i);
        scanf("%d", &arr[i]);
    }

    printf("before\n");
    for (int i = 0; i < n; i++)
    {
        printf("the %d no eliment = %d\n", i, arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {

        temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }
    printf("after\n\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("the %d no eliment = %d\n", i, arr[i]);
    }
    
}