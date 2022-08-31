#include <stdio.h>
int main()
{
    int mark[4];
       for (int  i = 0; i < 4 ; i++ )
       {
           printf("please enter the %d element of 1d arrey\n",i);
           scanf("%d",&mark[i]);
       }
       for (int i = 0; i < 4; i++)
       {
           printf("the element %d =%d\n\a",i,mark[i]);
       }
       
       
    
    return 0;
}