#include <stdio.h>
int main()
{
    printf("THE DATE OF TODAY IS  :  %s\n",__DATE__);
    printf("THE TIME  IS          :  %s\n",__TIME__);
    printf("THE FILE NAME IS      :  %s\n",__FILE__);
    printf("THE CURRENT LINE NO IS:  %d\n",__LINE__);
    printf("FILE USES ANSI STANDARD OR NOT : %d\n",__STDC__);
    return 0;
}