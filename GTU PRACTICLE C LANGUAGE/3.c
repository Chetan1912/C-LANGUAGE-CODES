#include <stdio.h>
int main()
{
    int p,n;
    float i,r;
    printf("this is the basic programm to calculate the simple intrest\n");
    printf("please enter the monney you want from the bank\n");
    scanf("%d", &p);
    printf("please enter the rate of intrest you want from the bank\n");
    scanf("%f", &r);
    
    printf("please enter the year for  you want from the bank\n");
    scanf("%d", &n);
    i=(p*r*n)/100;
    printf(" the simple intrest = %0.2f rs\n", i);

    
    return 0;
}