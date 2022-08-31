#include <stdio.h>
int main()
{   int n;
    printf("PLEASE ENTER FOR HOW MANNY NO YOU WANT TO CHECK MAX NO : ");
  scanf("%d",&n);
    float num[n],c;
    for (int i = 0; i < n; i++)
    {
        printf("please enter the no %d: ",i+1);
        scanf("%f",&num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(num[i]>=num[i+1] && num[i]>=num[i-1] )
        {
            c=num[i];
        }
    }
    printf("THE MAXIMUM NO IS : %0.4f ",c);
    
    return 0;
}