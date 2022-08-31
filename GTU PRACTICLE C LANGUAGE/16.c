#include <stdio.h>
int main()
{
    int a;
    printf("please enter the number you want to check odd or even\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the lase digit of the number is even\n");
    }
    else{
        printf("the last digit of number is odd\n");
    }
    return 0;
}