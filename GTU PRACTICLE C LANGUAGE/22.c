#include <stdio.h>
#include <string.h>
int main()
{
    int n, mark1, mark2, mark3;
    float add;
    char sub1[25], sub2[25], sub3[25];
    printf("this is the c programm for the calculate n number of students 3 subjects marks\n");
    printf("please enter the number of student : ");
    scanf("%d", &n);
    printf("please enter the name of three subjects \n");

    scanf("%s",&sub1);  //in this computer its not taking sub 1 i dont know why?
    scanf("%s",&sub2);  // please include string.h for use gets function of c othervice tack error;
    scanf("%s",&sub3);// we have to use gets function for the strings for include space from user
   
    for (int i = 1; i <= n; i++)
    {
        printf("\nenter the marks for student %d ", i);
        for (int j = 1; j <= 3; j++)
        {
            if (j == 1)
            {
                printf("\nplease enter your %s's marks\n", sub1);
                scanf("%d", &mark1);
            }
            if (j == 2)
            {
                printf("please enter your %s's marks\n", sub2);
                scanf("%d", &mark2);
            }
            if (j == 3)
            {
                printf("please enter your %s's marks\n", sub3);
                scanf("%d", &mark3);
            }
            add = (float)(mark1 + mark2 + mark3) / 3; // typecasting for float answer
        }
        printf("the avvrage of student no %d : %0.2f \n", i, add);
    }
    return 0;
}