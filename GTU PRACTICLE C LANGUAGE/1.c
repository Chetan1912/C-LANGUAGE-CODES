#include <stdio.h>
int main()
{ float a,b,c,d,e,f;
 printf ( "this is a unick calculator\n");
 printf("please enter the first number you want to add , substract , multiply or devide\n");
  scanf("%f",&a);
  printf("please enter the second number you want to add , substract , multiply or devide\n");
  scanf("%f",&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;

   printf("the addition of the number = %0.2f\n",c);


   printf("the substraction of the number = %0.2f\n",d);
   
   printf("the multiplication of the number = %0.2f\n",e);
   
   printf("the devidation of the number = %0.2f\n",f);
   
   return 0;



   



}