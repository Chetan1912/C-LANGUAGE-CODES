#include <stdio.h>
int main()
{
    float num;
    printf("this is the programm for the check  the number is  +ve, -ve or 0\n");
    printf("please enter the number you want to check \n");
    scanf("%f", &num);
    if (num>=0)
    {
        if (num==0)
        {
            printf("the numer is equal to 0\n");
        }
       else 
        {printf("the number is positive\n");}
    }
    else
    {
        printf("the number is negetive\n");
    }
    
    
    return 0;
}