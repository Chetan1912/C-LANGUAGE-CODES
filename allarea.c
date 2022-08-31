#include <stdio.h>
int main()
{
    float ac,ar,as,at,r,h;
    int n;
    printf("|* THIS IS THE PROGRAMM FOR CALCULATE THE AREA AND DESIGNED BY\n\t--- MAURYA SHIVAM*|\n");
     printf("** PLEASE FOLLOW BELLOW INSTRUCTION**\n");
     printf(" 11 - FOR THE AREA OF CIRCLE\n ");
     printf(" 22 - FOR THE AREA OF RECTANGLE\n ");
     printf(" 33 - FOR THE AREA OF SQUARE\n ");
     printf(" 44 - FOR THE AREA OF TRIANGLE\n ");
     scanf("%d",&n);
     switch (n)
     {
     case 11:
         printf("PLEASE ENTER THE RADIUS OF CIRCLE\n");
         scanf("%f",&r);
         ac= 3.14*r*r;
         printf("THE AREA OF CIRCLE IS %0.2f\n",ac);
         break;
      case 22:
         printf("PLEASE ENTER THE LEANGTH OF RECTANGLE\n");
         scanf("%f",&r);
         printf("PLEASE ENTER THE WIDTH OF RECTANGLE\n");
         scanf("%f",&h);
          ar= r*h;
         printf("THE AREA OF RECTANGLE IS %0.2f\n",ar);
         break;
      case 33:
         printf("PLEASE ENTER THE LENGTH OF THE SQUERE\n");
         scanf("%f",&r);
          as= r*r;
         printf("THE AREA OF SQUARE IS %0.2f\n",as);
         break;
      case 44:
         printf("PLEASE ENTER THE LENGTH OF BASE OF TRIANGLE\n");
         scanf("%f",&r);
          printf("PLEASE ENTER THE LENGTH OF HEIGHT OF TRIANGE\n");
         scanf("%f",&h);
         at= 0.5*r*h;
          printf("THE AREA OF TRIANLE IS %0.2f\n",at);
         break;   
     default: printf("***** PLEASE ENTER THE VALID NO GIVEN ABOVE*****\n");
         break;
     }
    return 0;
}