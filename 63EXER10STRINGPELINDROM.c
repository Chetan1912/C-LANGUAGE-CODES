#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],str2[100];

    printf("this is the c programm for check a string is pelindrom or not\n");
    printf("please enter your string\n");
    gets(str);
    strcpy(str2,str);
    printf("YOUR REVERSED STRING IS %s\n",strrev(str) );
    if (!strcmp(str,str2))          //for the comparison
    {
        printf("YOUR STRING IS PALINDROM\n");
    }
    else
    {
        printf("YOUR STRING IS NOT A PALINDROM\n");
    }

    return 0;
}