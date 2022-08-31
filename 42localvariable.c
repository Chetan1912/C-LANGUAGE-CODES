#include <stdio.h>
int local_func()
{
  int  local=35;
    printf("the value of local in func is %d\n",&local);
    return local;
}
int main()
{
    int local= 30;
    local_func();               //the address of it is not same bcause it is a local variable//
    printf("the value of local in func is %d\n",&local);

    return 0;
}