#include <stdio.h> 
 int main(int argc, char const *argv[])
{int n,i;
   printf("please enter the number which count you are wanted to write\n");
     scanf("%d", &n);
     for(i=0; i<n; i++)
     {
         printf("%d\n", i+1);
     }
     printf("the number in the invers\n");
     for (i=n; i; i--)
     printf("%d\n", i);
   return 0;
}
