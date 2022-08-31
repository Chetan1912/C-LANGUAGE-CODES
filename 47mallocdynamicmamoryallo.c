#include <stdio.h>
#include <stdlib.h>
int main()
{   //use of malloc
int *ptr,n;
printf("please enter the size of array you want to creat\n");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
for (int i = 0; i < n; i++)
{
    printf("enter the %d the eliment od arrey\n",i);
    scanf("%d",&ptr[i]);       //ptr[i]=*ptr + i;   // here the & is used because the %d is used
}
for (int i = 0; i < n; i++)
{
    printf("the value of the %d eliment of arrey is %d\n",i,ptr[i]);
}

    
    return 0;
}