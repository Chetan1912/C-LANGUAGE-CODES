#include <stdio.h>
int main()
{
    float u,t,a,d;
     printf ("this is the programm for the distance travelled by ball\n");
     printf ("please enter the value of time in secend\n");
     scanf("%f",&t);
     printf ("please enter the value of acceleration in m/s^2\n");
     scanf("%f",&a);
     printf ("please enter the value of inisiol velosity in  m/s \n");
     scanf("%f",&u);

    d=u*t+a*t*t;
    printf("the distance travailed by ball= %0.2f",d);
    return 0;
}