#include <stdio.h>
int main()
{ int F,C,K;
int upper,lower,step;

printf("this  is a table of the fahranhAight and celcious \n");
printf("fahranhaight\tcelcious\tkalvin\n");

for ( F=0; F<=300; F=F+20) 
{     
    C=5*(F-32)/9;
    K=C+273;
    printf("%d\t\t%d\t\t%d\n",F,C,K);
    
}





}