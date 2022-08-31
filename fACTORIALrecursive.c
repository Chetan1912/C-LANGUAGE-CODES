#include <stdio.h>
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}

int main()
{
    int nume;

        {
        printf("this is the program to print factorial\n so enter the number you want a factorial\n\a");
        scanf("%d", &nume);
        printf("factorial of %d = %d \a", nume, fact(nume));
    }

    return 0;
}