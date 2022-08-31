#include <stdio.h> 
 int main()
{int phy,che,math;
float t;

 printf("PLEASE ENTER YOUR PHYSICS MARKS OF 12 TH SCIENCE EXAM\n");
 scanf("%d", &phy);
 printf("PLEASE ENTER YOUR CHEMISTRY MARKS OF 12 TH SCIENCE EXAM\n");
 scanf("%d", &che);
 printf("PLEASE ENTER YOUR MATHS MARKS OF 12 TH SCIENCE EXAM\n");
 scanf("%d", &math);
 t=(phy+che+math)/3;
 if (t<40 || phy<33 || che<33 || math<33)
 {
     printf("you had failed the 12 the board exam\n");
 }

else  { printf( "you had  passed in the 12 th board exam \n ");}
}