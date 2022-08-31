#include <stdio.h>
int main()
{
    char str[50], pre, after;
    int i;
    printf("please enter the string : ");
    gets(str);
    printf("please enter the character you want to remove in string and replace : ");
    scanf("%c", &pre);
    getchar(); // getchar because of enter buffer;
    printf("please enter the character you want to replace in string : ");
    scanf("%c", &after);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == pre)
        {
            str[i] = after;
        }
    }
    printf("THE REPLACED STRING IS : \n");
    printf("%s", str);

    return 0;
}
