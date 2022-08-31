#include <stdio.h> 
 int main()
{float income,tax=0;
   printf(" PLEASE ENTER YOUR  YEARLY INCOME \n");
   scanf("%f", &income);
   
  { if (income<500000 && income>250000)
   {    tax =tax + 0.05*(income - 250000);
      
   }
    if (income>=500000 && income<1000000)
   {    tax= tax + 0.20*(income - 500000);
      
   }
    if (income>=1000000)
   {    tax= tax +  0.30*(income - 1000000);
      
   }  printf("YOUR NET INCOME IS TO PAY 26 TH NOVEMBER IS %f\n", tax);
  }
   return 0;
}
