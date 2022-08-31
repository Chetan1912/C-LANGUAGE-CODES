#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int tellgoodMorningandreturn(int (*fptr)(int,int))
{
    printf(	"good morning\n");
    printf("the value of sum 1,2 is =%d\n",fptr(1,2));
}
int tellgoodevningandreturn(int (*fptr)(int,int))
{
    printf(	"good evning\n");
    printf("the value of sum 3,5 is =%d\n",fptr(3,5));
}
int main()
{ int(*ptr)(int,int);  //declaration of function pointer
ptr= &sum;     //we can write &sum = sum
tellgoodevningandreturn(ptr);
tellgoodMorningandreturn(ptr);

    return 0;
}