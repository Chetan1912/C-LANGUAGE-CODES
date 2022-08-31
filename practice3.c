#include<stdio.h>
int main()
{ int sub;
     printf("PLEASE ENTER 1 IF YOU HAD PASSED MATHS AND SCIENCE BOTH IN THE 10 TH \n");
     printf("PLEASE ENTER 2 IF YOU HAD PASSED MATHS OR SCIENCE ONLY IN THE 10 TH \n");
     scanf("%c", &sub);
     if (sub==1)
     {
         printf("congractulation you had passed the 10 th maths and science\n");
         printf("YOU HAVE WON 45 RS FOR ACHIVE THIS TARGET\n");
     }
     else if (sub==2)
     {
         printf("congractulasion you had passed \n you have won 15 rs");

     }
     
     else 
     {
        printf("you are not eligibal for the any gifts\n");
     }
     
return 0;



}