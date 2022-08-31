#include <stdio.h>
#include <math.h>

int series(int n)
{
    if (n > 0)
    {
        return n * series(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int m, s = 2, x;
    float sum;
    printf("please enter value of x in series : ");
    scanf("%d", &x);
    printf("enter the index no : ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i += 2)
    {
        x = (pow(-1, s++) * pow(x, i));
        sum += (float)x / series(i);
    }
    printf("the sum of series is %f", sum);
    return 0;
}