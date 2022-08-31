#include <stdio.h>
int by_referance(int * add)
{
    *add =50;
}
int main()
{
    int a=90;
    printf ("the value before function= %d\n", a);
    by_referance(&a);
    printf ("the value after function= %d\n", a);
    return 0;
}