#include<stdio.h>
int main()
{ int leap;

 printf(" ENTER A YEAR \n");
 scanf("%d", &leap);
 if(leap%4==0)
 { printf ("%d IS A LEAP YEAR\n", leap);
 }
 else{ printf("%d IS NOT A LEAP YEAR\n", leap);}
 return 0;
}
