#include <stdio.h>
int main()
{
    char c;
printf("please enter the character you mant to find its type\n");
scanf("%c",&c);
if(c>='a' & c<='z')
{
    printf("the '%c' is a SAMALL ALFABAT\n",c);
}
else if(c>='A' && c<='Z')
{
    printf("the '%c' is a CAPITLE ALFABAT\n",c);
}
 else if(c>='0' && c<'9')
{
    printf("the Entered character is a NUMBER\n",c);
}
else
{
    printf("THE '%c' IS A SPECIAL CHARACTER\n",c);
}

    return 0;
}