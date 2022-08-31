#include <stdio.h>
int main()
{
    int age;

    printf("please add your age for age varify\n");
    printf("please add 1 if you are above 18\n");
    printf("please add 2 if you are below 18\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1:
        printf("you are eligible for the vote\n");
        break;
    case 2:
        printf("you are note eligible for the vote\n");
        break;
    default:
        printf("you have to only chouse 1 or 2\n");
    }

    return 0;
}
