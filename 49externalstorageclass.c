#include <stdio.h>
#include "extern49.c"
int external()
{
    extern int sum;   //tack presidence of external(globle)
    return sum;
}
int main()
{ extern int sum;
    printf("%d\n",sum);   // takes value of extern.c
    //if we will make local variable it  will consider local value
    printf("the extern sum printed is = %d",external());
    return 0;
}