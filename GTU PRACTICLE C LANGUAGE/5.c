#include <stdio.h>
int main()
{
    float k,m,f,i,c;
    printf("this is the basic programm to convert the pera meter\n");

 printf("   please enter the distance into km      \n");
 scanf("%f" , &k);
 m=1000*k;
 f= k*3280;
 i= k*10.079;
 c = k*100000;
 printf("the  distance  converted from  %0.2f km to %0.2f miter \n ",k,m);
    
 printf("the  distance  converted from  %0.2f km  to %0.2f feat \n ",k,f);
 
 printf("the  distance  converted from  %0.2f km to %0.2f inches \n ",k,i);
 
 printf("the  distance  converted from  %0.2f km to %0.2f centimeter\n ",k,c);
 
 
    
    return 0;
}