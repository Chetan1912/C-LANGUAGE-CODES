#include <stdio.h>     //note : run command by .\filename than command
int main(int argc, char const *argv[])
{
    printf("the no of arguments is %d\n",argc);
    for(int i=0; i< argc; i++)
    {
        printf("the argument no %d = %s\n",i,argv[i]);
    }
    return 0;
}
