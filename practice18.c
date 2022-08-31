#include <stdio.h>

int main()
{
    int num, prime = 1;
    printf("please enter the number which you wanted to  find that this is prime number or not\n");
    scanf("%d", &num);
    if (num == 2)
    {
        printf("This is  a prime number");
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 0)
        {
            printf("This is not  a prime number");
        }
        else
        {
            printf("This is  a prime number");
        }
    }
    return 0;
}