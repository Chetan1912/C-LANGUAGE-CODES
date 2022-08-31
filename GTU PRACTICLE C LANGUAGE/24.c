#include <stdio.h>
int main()
{   
    int n, count = 0;
    printf("this is the program for the check the no is prime or not\n");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("2 : is a prime no\n");
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count < 2)
        {
            printf(" %d : is a prime no ", n);
        }
        else
        {
            printf("%d : is not a prime no",n);
        }
    }
      
    return 0;
}