#include <stdio.h>
int main()
{
    int n,revers=0,reminder,a,c;
    printf("please enter the no you want to add first and last digit\n");
    scanf("%d",&n);
   a=n%10;
    while(n!=0)
    {
       reminder=n%10;
       revers=revers*10 + reminder;
       n=n/10;

    }
   c=revers%10;
  
   printf("sum of first and last digit is = \n %d + %d = %d",c,a,a+c);
   


    return 0;
} 
//              or
//              #include <stdio.h>

// int main()
// {
//     int num, sum=0, firstDigit, lastDigit;

//     /* Input a number from user */
//     printf("Enter any number to find sum of first and last digit: ");
//     scanf("%d", &num);
    
//     /* Find last digit to sum */
//     lastDigit = num % 10;
    

//     /* Copy num to first digit */
//     firstDigit = num;

//     /* Find the first digit by dividing num by 10 until first digit is left */
//     while(num >= 10)
//     {
//         num = num / 10;
//     }
//     firstDigit = num;


//     /* Find sum of first and last digit*/
//     sum = firstDigit + lastDigit; 

//     printf("Sum of first and last digit = %d", sum);

//     return 0;
// }