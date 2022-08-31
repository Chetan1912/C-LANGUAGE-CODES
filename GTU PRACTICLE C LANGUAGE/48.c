#include <stdio.h>
char changec(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            str[i] = str[i] - 32;
        }
    }
}
int main()
{
    char str[50];
    printf("please enter the string : ");
    gets(str);
    changec(str);
    printf("the changed string is = %s", str);
}