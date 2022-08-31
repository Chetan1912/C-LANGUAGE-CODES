#include <stdio.h>
int main()
{
    float a, b, c, d;

    printf("please enter the first number\n");
    scanf("%f", &a);
    printf("please enter the second number\n");
    scanf("%f", &b);
    printf("please enter the third number\n");
    scanf("%f", &c);
    printf("please enter the forth number\n");
    scanf("%f", &d);
  {  if (a >= b && a >= c && a >= d)
    {
        printf("%f is the largest number\n",a);
    }
    if (b >= a && b>= c && b >= d)
    {
        printf("%f is the largest number\n",b);
    }
    if (c >= b && c >= a && c >= d)
    {
        printf("%f is the largest number\n",c);
    }
    if (d >= b && d >= c && d >= a)
    {
        printf("%f is the largest number\n",d);
    }}   
    return 0;
}
