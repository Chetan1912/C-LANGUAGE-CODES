#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n; i++)
    {
        b = a + b; // 1 for iteration 1
        a = b - a; // 1 for iteration 1
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n", number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}
