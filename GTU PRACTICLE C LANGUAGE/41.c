#include <stdio.h>
int main()
{
    char str[100];
    printf("please enter the string : ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 123)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("the capital lattered string  is : %s", str);
}