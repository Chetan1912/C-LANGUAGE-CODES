#include <stdio.h>
#include <string.h>
int main()
{ char name1[20],name4[50];
char name2[20];
char name3[25]= " IS THE FRIEND OF ";
printf("this is the programm to shaw that you are friend of your friend\n");
printf("please enter your name\n");
gets(name1);
printf("please enter the name of your best friend\n");
gets(name2);
puts(strcat(name1,strcat(name3,name2)));
    
    return 0;
}