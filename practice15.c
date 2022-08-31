#include <stdio.h> 
 int main(int argc, char const *argv[])
{ int n,f=1;
   printf("please enter the number which factorial you are wanted to find\n");
     scanf("%d", &n);

     for(int i=1; i<=n; i++)
     {
         f *= i;

     } printf("the value of factorial %d is %d\n",n,f);
   return 0;
}
