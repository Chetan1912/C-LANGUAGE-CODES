#include<stdio.h>
int main()
{    int c;
   printf("please enter your special number\n");
   scanf("%d", &c);
   for(int i=1; i<=10; i++)
   printf("%d X %d = %d\n" ,c, i, i*c );
   return 0;
}
