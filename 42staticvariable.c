#include <stdio.h>
int b=5;
int func_static(int m)
{
  static int myvar=0;
  myvar++;
    printf("the value of myvar is %d\n",myvar);
return myvar+b ;
}
int main()
 {  static int b=10;   //if b static is not constant it will give error;
    func_static(b);   
    printf("the value of myvar in func is %d\n",func_static(b));
    func_static(b);       //value is increased;
    return 0;
}