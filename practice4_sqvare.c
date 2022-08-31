#include <stdio.h> 
 int main()
{ int num;
   printf("please enter the number which numbers sqere table you want\n");
   scanf("%d", &num);
   printf("you had entered the number  \n");
   for (int i = 1; i <= 100; i++)
   {
       printf("%d X %d = %d\n",i, i, i*i);
   }
   


     
   return 0;
}
