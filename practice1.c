#include <stdio.h>
int main()
{
int num;
printf("Enter the number what you want to write the multiplication table\n");
scanf("%d", &num);
for (int i=0; i<10; i++)
printf("%d X %d = %d\n",num, i+1,(i+1)*num);
return 0;
}

