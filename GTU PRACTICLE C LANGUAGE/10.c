#include<stdio.h>
int main()
{
float a,b,c;
printf("this is the programm for theck which no is max out of it\n");
printf("enter the first no\n");
scanf("%f",&a);
printf("enter the second no\n");
scanf("%f",&b);
printf("enter the third no\n");
scanf("%f",&c);

if (a>b)
{
    if(a>c)
    {
        printf("A IS THE MAXIMUM NO AMONG THREE\n");
    }
    
}
else if (b>a & b>c)
{
    printf("B IS THE MAXIMUM NO AMONG THREE\n");
}
else if (c>a & c>b)
{
    printf("C IS THE MAXIMUM NO AMONG THREE\n");
}
else if (a==c & a>b)
{
    printf(" there is two no a and c are the maximum no\n ");
}
else if (a==b & a>c )
{
    printf(" there is two no a and b  are the maximum no\n ");
}
else if (b==c & b>a )
{
    printf(" there is two no c and b  are the maximum no\n ");
}
    
    return 0;  
}