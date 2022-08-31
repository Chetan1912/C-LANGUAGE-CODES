#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n ;
    char *ptr;
    for (int i = 0; i < 3; i++)
    {
        printf("please enter the length of your  emploee id employee no %d : \n",i+1);
        scanf("%d",&n);
        //not the part of the exercise
        //if we tack two variable and stores some value on it it  will nat tack because when wee press enter it will tack enter as a character
        ptr =(char*) calloc((n+1),sizeof(char));
        printf("please enter your employee id\n");
        getchar(); //always use getchar()before gets() function; because it will  take enter as a input
        gets(ptr);  // here we had not written & ptr because the ptr is a address and 5s is used
        printf("your employee id is : %s \n",ptr);
        free(ptr);
    }
    
  

    return 0;
}