#include <stdio.h>
int main()
{
    float a,b,c;
    printf("this is the basic programm to inter change the two number\n");
    printf("please enter the  1 st  number\n");
    scanf("%f",&a);
        printf("please enter the  2 nd  number\n");
    scanf("%f",&b);
    printf("the 1 st number before inter change = %0.2f\n",a);
printf("the 2 nd number before inter change = %0.2f\n",b);
    c=a;
    a=b;
    b=c;
     
printf("the 1 st number after inter change = %0.2f\n",a);
     printf("the 2 nd number after inter change = %0.2f\n",b);
    return 0;
}