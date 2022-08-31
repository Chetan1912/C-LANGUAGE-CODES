#include <stdio.h>
int main()
{
  int R, H, r, m;
  float P;
  m = 2;
  P = 3.14;
  printf("ARE YOU WANTED TO FIND THE AREA OF CIRCLE\n SO PLEASE ENTER THE RADIUS OF THE CIRCLE\n");
  scanf("%d", &R);
  printf("YOUR RADIUS IS %d\n", R);
  printf("AREA OF YOUR CIRCLE IS = %f X %d X %d = %f\n", P, R, R, P * R * R);
  printf("ARE YOU ALSO WANT TO FIND THE AREA OF CYLANDER\n PLEASE ENTER THE RADIUS OF THE CYLANDER\n");
  scanf("%d", &r);
  printf(" PLEASE ENTER THE height OF THE CYLANDER\n");
  scanf("%d", &H);
  printf("AREA OF CYLANDER IS = %d X %f X %d X %d = %f\n", m, P, r, H, m * P * r * H);
  return 0;
}