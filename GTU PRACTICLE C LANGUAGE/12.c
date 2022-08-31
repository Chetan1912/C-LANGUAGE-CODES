#include <stdio.h>
int main()
{      int a,b,c,d,e,f;
float p;

    printf(" enter your  no out of 100 of 5 subject\n");
    printf("***********************************************************************************************************\n");
    printf(" enter maths marks\n");
    scanf("%d",&a);

    printf(" enter BE marks\n");
    scanf("%d",&b);
    printf(" enter PHYSICS marks\n");
    scanf("%d",&c);
    printf(" enter PPS marks\n");
    scanf("%d",&d);
    printf(" enter EG marks\n");
    scanf("%d",&e);
    
    printf("***********************************************************************************************************\n");

    f=a+b+c+d+e;
    printf("YOUR TOTAL MARKS = %d\n",f);

    p=f/5;
    printf("YOU GOT %0.2f persentage in exam\n",p);
   printf("************************************************************************************************************\n");

    if (p>=80)
    {
        printf("DISTINCTION\n");
    }
    else if (p<80 & p>=60)
    {
        printf("FIRST CLASS\n");
    }
    else if (p<60 & p>=40)
    {
        printf("SECOND CLASS\n");
    }else
    {
        printf("FAIL\n");
    }
    printf("***********************************************************************************************************\n");
    
    getchar();
    return 0;
}