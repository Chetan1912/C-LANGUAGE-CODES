#include<stdio.h>

int main(){
    // int a; int b=a;
    // int v = 3^3;
    // char dt = '2';
    // float d = (3.0/8-2);
    // printf("%d\n", v);
    // printf("%f\n", d);

    // Q3. Write a program to determine whether a number is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%97);
    if (num%97==0)
    {
        printf("your  number is devided by 97\n");
    }
    else{printf("your number is not devided by the 97\n"); }

   
        return 0;
}