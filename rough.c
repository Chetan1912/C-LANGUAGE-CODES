#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // Variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in=1;
        }
        else if (string[i] == '>')
        {
            in = 0;
            goto end;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }   
        end:;
    }
    string[index] = '\0';  // for the last tag <> not print for

    // Remove the trailing spaces from the beginning
    while (string[0] == ' ')
    {
        // Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            /* code */
            string[i] = string[i + 1];
        }
    }
    // Remove the trailing spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    char strings[100];
    printf("PLEASE ENTER YOUR STRING OF HTML WITH TAG TO PARSH THEM\n");
    gets(strings);

    parser(strings);
    printf("The parsed string is\n ~~%s~~", strings);
    return 0;
}
/*
Input:
<h1> This is a heading </h1>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2
*/
