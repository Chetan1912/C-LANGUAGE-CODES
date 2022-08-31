#include <stdio.h>
int ispalindrom(int n)
{
  int reverce = 0, reminder;
  while (n != 0)
  {
    reminder = n % 10;
    reverce = reverce * 10 + reminder;
    n /= 10;
  }
  return reverce;
}
int main()
{   int number,c;
   printf("THIS IS THE PROGRAMM TO CHECK A NO IS palindrom OR NOT\n ");
   // palindrome no is a number  ex 10101 =10101(reverce)
   scanf("%d",&number);
   c=ispalindrom(number);
   if (c==number)
   {
     printf("THE NUMBER %d IS A PALINDROM NO\n",number);
   }
   else
   {
     printf("THE NUMBER %d IS NOT A PALINDROM NO\n",number);
   }
   
   
  return 0;
}