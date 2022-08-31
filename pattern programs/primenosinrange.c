#include <stdio.h>
// int isprime(int n)                         // with the function 
// {
//     for (int i = 2; i*i<=n; i++)
//     {
//         if (n%i==0)
//         {
//             return 0;
//         }
        
//     }
//     return 1;
// }
int main()
{
    int n1, n2,count;
    printf("PLEASE ENTER THE LOWER RANGE  N1 : ");
    scanf("%d", &n1);
    printf("PLEASE ENTER THE LOWER RANGE  N1 : ");
    scanf("%d", &n2);
    for (int i = n1; i <= n2; i++) // we can use function above
    {
        // if(isprime(i)) {
        //     printf("%d,",i);       // with the function
        // }                          //with the function

         if (i == 2)                    //without function;
    {
        printf("2,");
    }
    else
    {   count=0;
        for (int j = 2; j <= n2; j++)
        {
            if (i%j == 0)
            {
                count++;
            }
        }
        if (count < 2)
        {
            printf("%d,", i);
        }
        
    }
        
    }
    return 0;
}