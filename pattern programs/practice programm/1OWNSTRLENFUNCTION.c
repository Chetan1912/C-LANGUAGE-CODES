#include <stdio.h>
 char strLENGTH( char str[])
 {      int i=0;  
        char *ptr=str; 

     while ( *ptr != '\0')
     {
           i++;
           ptr++; 
     }
       
      printf(" LEANGTH OF YOUR SRING IS = %d",i);
     
 }

int main()
{
    char str[50],strcopiyed[50];
    printf("please enter the string you want to copy\n");
    gets(str);
    strLENGTH(str);
    return 0;
}