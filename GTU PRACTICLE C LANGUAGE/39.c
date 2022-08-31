#include <stdio.h>
int main()
{
    char str[50], delete;
    int j = 0, i;
    printf("please enter the string : ");
    gets(str);
    printf("please enter the character you want to delete in string ");
    scanf("%c", &delete);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != delete)
        {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
    printf("THE Removed character  STRING IS : \n");
    printf("%s", str);

    return 0;
}
