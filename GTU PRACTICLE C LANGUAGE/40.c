#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], rev[100];
    int j, i;
    printf("please enter the string : ");
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < strlen(str); i++)
    {
        rev[i] = str[j--];
    }
    rev[i] = '\0';
    printf("THE REVERSED STRING IS : \n");
    printf("%s", rev);
}