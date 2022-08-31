#include <stdio.h>
#include <stdlib.h>
int main()
{                   // use of realloc
    int *ptr, n, N; // N is the new memorry allocated by user
    printf("please enter the size of array you want to creat\n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d the eliment od arrey\n", i);
        scanf("%d", &ptr[i]); // ptr[i]=*ptr + i;
    }
    for (int i = 0; i < n; i++)
    {
        printf("the value of the %d eliment of arrey is %d\n", i, ptr[i]);
    } // use of realloc
    // use of realloc is to reallocate the same mammory
    printf("please enter the size of new array you want to creat enter value of N\n");
    scanf("%d", &N);
    ptr = (int *)realloc(ptr, N * sizeof(int));
    for (int i = 0; i < N; i++)
    {
        printf("enter the %d the eliment of new reallocated arrey\n", i);
        scanf("%d", &ptr[i]); // ptr[i]=*ptr + i;
    }
    for (int i = 0; i < N; i++)
    {
        printf("the value of the %d eliment of new reallocated arrey is %d\n", i, ptr[i]);
    }
 free(ptr);
    return 0;
}