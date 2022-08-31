#include <stdio.h>
struct student
   
{     char name[50]; 
    float mark;
    int age;
    char add[100], cource[30];
    int  favno;
    
};

int main()
{ struct student s1 ;
printf("please enter your name\n");//BIG NOTE ALL THE CHAR SHOULD BE IN LINE
gets(s1.name);
printf("please enter your cource in which you are\n");  //BIG NOTE ALL THE CHAR SHOULD BE IN LINE
gets(s1.cource);
printf("please enter your address\n");//BIG NOTE ALL THE CHAR SHOULD BE IN LINE
gets(s1.add);
printf("please enter your marks\n");
scanf("%f", &s1.mark);
printf("please enter your age\n");
scanf("%d", &s1.age);


printf("please enter your favuright no\n");
scanf("%d",&s1.favno);
printf("\n\n\n\n");
printf("ARE YOU SURE THIS IS TRUE INFORMASION\n");
printf(" NAME          : \t %s\n   ",s1.name);
printf(" MARKS         : \t %0.2f\n   ",s1.mark);
printf(" AGE           : \t %d\n   ",s1.age);
printf(" ADDRESS       : \t %s\n   ",s1.add);
printf(" COURCE        : \t %s\n   ",s1.cource);
printf(" FAVRAIGHT NO  : \t %d\n   ",s1.favno);

    
    return 0;
}