#include <stdio.h> 
 int main(int argc, char const *argv[])
{ int n,i, sum=0;

   printf("please enter the number which numbers multiplication tabels sum \n");
   scanf("%d", &n);
   for(int i=1; i<=10; i++)
   {
        printf("%d x %d = %d\n", n , i, n*i);
 sum += n*i;
    
   }    
      printf("sum of the table %d is  = %d\n ",n, sum);

   return 0;
}
