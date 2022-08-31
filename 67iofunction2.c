#include <stdio.h>
int main()
{ //**************1.fgetc***************
    FILE *ptr = NULL;
    ptr = fopen("67myfile2", "r");
    char c = fgetc(ptr);
    printf("the character array in fgetc was %c\n", c);

    c = fgetc(ptr); // if we will run multiple time it get next character
    printf("the character array2 in fgetc was %c\n", c);
    fclose(ptr);
    //**************2.fgets***************
    ptr = fopen("67myfile2", "r");
    char str[50];
    fgets(str, 10, ptr); // the lenght of arry is lengh-1 beacause last character is null terminated character
    printf("the  string printed by the fget  %s \n", str);
    fclose(ptr);
    // if file is not closed the first  2 character was readed by fgetc so next latter string is printed
    //**************3.fputc***************
    //dont open in r mode
    ptr = fopen("67myfile2", "a+");      //check it with the mode = a,w+,a+;
    fputc('c',ptr);    //you can insurt only one character in fputc function
    fputs("inserted by fputs",ptr);
    //r+ : jo likha h uski jagah pe print karega;
    //w+=w : sab mitake likhega;
    //a= a+: type multiple time a string or char in end;

    return 0;
}