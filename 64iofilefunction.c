#include <stdio.h> //ptr = fopen(“file_location”,”mode”);
int main()         // ptr = fopen(“D:\\file.txt”,”w”);

{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutorial64.c\n";
    char string2[64] = "i am the boss of this planate\n";
    // ****** Writing a file ******
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string2);
    fprintf(ptr, "%s", string);
    fclose(ptr);4
    //  ****** Reading a file ******
    ptr = fopen("myfile.txt", "r");
    fscanf(ptr, "%s", string);
    printf("The content of his file has %s\n", string);
    fclose(ptr);
    return 0;
}
