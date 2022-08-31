#include<stdio.h>

int main()
{ float a,h,b;

printf(" this is the program to find the aria of a triangle\n");


printf("please enter the base lenth in cm\n");
scanf("%f",&b);


printf("please enter the height lenth in cm\n");
scanf("%f",&h);
a=h*b*0.5;
printf("the aria= %0.2f cm \n ",a);
    
    return 0;
}