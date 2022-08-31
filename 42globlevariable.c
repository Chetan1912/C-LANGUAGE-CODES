#include <stdio.h>
int m=5;   // globle variable should be declared before function;
int b=345;
int func1(int b)
{
 printf("the value of m in func1 is %d\n",m);
 printf("the value of b in func1 is %d\n",b);
 return b;
}

int main()
{  b=0;
    printf("the value of m in main function is %d\n",m);
     func1(b);
     printf("the value of b in func 1 is %d\n",func1(m));
 printf("the value of b in main function is %d\n",b); // local function get presidence over globel b

    return 0;
}