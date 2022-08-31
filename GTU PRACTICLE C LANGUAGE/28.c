#include <stdio.h>
int main()
{
    int x, fa = 1, n;
    float sum = 0, si = 1, fm = 1;
    printf("we can evaluate the series : =1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9!:\n please enter the value of x\n");
    scanf("%d", &x);
    printf("please enter the value of x power for the series\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fa *= i;
        si *= (-x);

        fm += si / (float)fa;
    }
    printf("THE VALUE OF SERIES =  %0.4f\n ", fm);
    return 0;
}