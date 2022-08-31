#include <stdio.h>
void print(char str[])
{
    int i=0;
    while (str[i] !='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    
}
int main()
{
    char name[]={ 'c','h','e','t','a','n','\0'};
    print(name);
    return 0;
}