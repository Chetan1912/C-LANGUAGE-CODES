// for change in desimle to nary :
// To convert decimal to nary numbers, proceed the steps given below:

// Divide the given decimal number by “2” where it gives the result along with the remainder.
// If the given decimal number is even, then the result will be whole and it gives the remainder “0”
// If the given decimal number is odd, then the result is not divided properly and it gives the remainder “1”.
#include <stdio.h>
int main()
{
    int n, rem, i = 0, arr[i];
    printf("please enter the desimal no : ");
    scanf("%d", &n);
    while (n != 0) // while loop is only for this
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }

    return 0;
}