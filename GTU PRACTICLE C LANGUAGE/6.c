#include <stdio.h>
int main()
{
    float c,f;
     printf("this is the basic programm to convert tempratur from celsios to fahrainheight\n");
     printf("please enter the tamprature into the celsios\n");
     scanf("%f", & c);
      f= 1.8*c+32;
      printf("the tanprature %0.2f celsios =  %0.2f fehrainheight\n ",c,f);
    return 0;
}