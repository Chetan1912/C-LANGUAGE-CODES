
#include <stdio.h>
int main()
{
    int n,a=0, b=1;
    printf("this is the programm to find n no of fibonachi series\n");
    printf("please enter the number till where you want to find fibonachi series\n");
    scanf("%d", &n);
    if (n == 1 || n == 2)
    {
        if (n == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("1,1\n");
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
             b=a+b;
             a=b-a;
             printf("%d",a);
             if (i==n-1)
             {
                 goto end;
             }
             else
             {
                 printf(",");
             }
             
        }
        
    }
    
    end:
    return 0;
}