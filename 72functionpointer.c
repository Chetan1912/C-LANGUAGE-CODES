#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{     printf("JUST FOR SE THE FONCTIN WORKING OR NOT\n the sum of 1  ,  2 is= %d\n",sum(1,2));
    int(*ptr)(int,int);          //declaration of function pointer 
    ptr = &sum;    //we can write &sum = sum //creating a function pointer;
 int c=(*ptr)(10,2);             //dereferencing the function pointer
 printf("the value of c is %d\n",c);
    
    return 0;
}