#include <stdio.h>
int main()
{
    char c;
    printf("please enter the character you want to check its type\n");
    scanf("%c",&c);
if(c>=65 && c<=90)    //ascii value for A-Z is 65 to 90
{
    printf("'%c' IS A 'CAPITAL ALFABAT' LATTER\n",c);
}
else if(c>=97 && c<=122)    //ascii value for a-z is 97-122
{
    printf("'%c' IS A 'SMALL ALFABAT' LATTER\n",c);
}
else if(c>=48 && c<=57)    //ascii value for 0-9 is 48-57
{
    printf("'%c' is A 'NUMBER'\n",c);
}
else
{
    printf("'%c' IS  A 'SYMBOL'\n",c);
}

   printf("THANK YOU ");
    return 0;
}