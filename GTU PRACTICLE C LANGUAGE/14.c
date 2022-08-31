#include <stdio.h>
int main()
{
    int n;
    printf("enter the number for the day\n");
    scanf("%d",&n);

    switch(n)
    {case 1 : printf("sunday\n");
    break;
    case 2 : printf("monday\n");
    break;
    case 3 : printf("tuesday\n");
    break;
    case 4 : printf("wedensday\n");
    break;
    case 5 : printf("thusday\n");
    break;
    case 6 : printf("friday\n");
    break;
    case 7 : printf("saturday\n");
    break;
    default : printf("please enter the valid no\n");
    }
    
    return 0;
}