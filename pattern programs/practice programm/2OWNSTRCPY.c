#include <stdio.h>
#include <string.h>

char strcpymy(char *strcopiyed, char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        strcopiyed[i] = str[i];
    }
    strcopiyed[i] = '\0';
}

int main()
{
    char str[50], strcopiyed[50];
    printf("please enter the string you want to copy\n");
    gets(str);

    strcpymy(strcopiyed, str);

    printf(" value of strcopiyed = %s", strcopiyed);
    printf("strcmp=%d", strcmp(strcopiyed, str));
    return 0;
}