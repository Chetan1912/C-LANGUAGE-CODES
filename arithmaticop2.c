#include <stdio.h>
int main()
{
      int a, b, c, d;
      printf("please enter a\n");

      scanf("%d", &a);
       printf("please enter b\n");

      scanf("%d", &b);
       printf("please enter c\n");

      scanf("%d", &c);
       printf("please enter d\n");

      scanf("%d", &d);
      printf("a+b+c+d=%d\n", a + b + c + d);
      printf("a+b-c-d=%d\n", a + b - c - d);
      printf("a*b*c*d=%d\n", a * b * c * d);
      printf("a+b+c-d=%d\n", a + b + c - d);
      printf("a-b-c-d=%d\n", a - b - c - d);
      printf("a+b*c+d=%d\n", a + b * c + d);
      return 0;
}