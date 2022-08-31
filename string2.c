#include <stdio.h>
int main()
{
    char str[100];
    printf("please enter the str");
    gets(str);
    printf("using printf\n %s\n", str);
    printf("using puts\n\a");
    puts(str);
    return 0;
}