#include<stdio.h>
int main()
 { int age;
       printf("please enter your age\n");
       scanf("%d", &age);
       printf("you had enterd %d as your age\n",age);
       if (age<18)
       {
           printf("your age is less therefore you can't vote|\n");
       }
       else if(age>=18)
       { printf("your age is above 18 therefore you can vote|\n");} 
         else if(age>=10)
          {printf("your age is between 10 to 18 so you can vote for kids\n");}  
          return 0;
    }