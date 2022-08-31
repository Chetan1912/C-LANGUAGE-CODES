#include <stdio.h>
#include <math.h>
int power(int a, int b)
{
    long long int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p *= a;
    }
    return p;
}
int main()
{
    int n, i;
    long long int c, d;
    printf("PLEASE ENTER WHICH NO'S POWER YOU WANT TO FIND : ");
    scanf("%d", &n);
    printf("PLEASE ENTER HOW MANY POWER OF %d YOU WANT TO FIND : ", n);
    scanf("%d", &i);
    d = pow(n, i);       //by pow function;
    printf("\nTHE ANSWER OF %d ^ %d = %d", n, i, d);
    c = power(n, i);
    printf("\nTHE ANSWER OF %d ^ %d = %d", n, i, c);

    return 0;
}