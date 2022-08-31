#include <stdio.h>
int main()
{
    int n,count=0;
    float he,we;
    printf("please enter the number of person you want to check \nheight>170\n weight<50\n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf(" %d : please enter your height\n ",i);
        scanf("%f",&he);
        printf("      please enter your weight\n ");
        scanf("%f",&we);
        if(he>=170 && we<=50)
        {
            count ++;
        }
        
    }
    printf("the %d student have height>=170 and weight<=50 both",count);
    
    return 0;
}