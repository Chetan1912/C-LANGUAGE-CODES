#include <stdio.h>
void display();

int main()
{
    int a;
    printf("initializing display function\n");
    display();
    printf("display function finised its work\n");

    return 0;
}

void display()
{
    printf("this is display\n");
}