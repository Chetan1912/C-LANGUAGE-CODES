// First, write the given binary number and count the powers of 2 from right to left (powers starting from 0)
// Now, write each binary digit (right to left) with the corresponding powers of 2 from (right to left), such that first binary digit (MSB) will be multiplied with the greatest ...
// Add all the products in the above step
#include <math.h>

#include <stdio.h>
int todecimal(int bno)
{
    int dno = 0, i = 0, rem;
    while (bno != 0)
    {
         rem = bno % 10;     //1%10=1
        bno /= 10;
        dno += rem * pow(2, i);
        i++;
    }
    return dno;
}
int todecimal(int bno);
int main()
{
    int bno;
    int dno;
    printf("Enter a binary number: ");
    scanf("%ld", &bno);
    dno = todecimal(bno);
    printf("The decimal value is:%d\n", dno);
    return 0;
}
