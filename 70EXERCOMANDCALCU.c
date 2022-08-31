#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *opp;
    int num1, num2;
    opp=argv[1];
    num1 = atoi(argv[2]); // atoi is the function of the stdlib.h
    // it convert string into the intiger;
    num2 = atoi(argv[3]);
    if (strcmp(opp, "add") == 0 || strcmp(opp, "addition") == 0)
    {
        printf("addition=%d+%d=%d\n", num1, num2, num1 + num2);
    }
    else if (strcmp(opp, "sub") == 0 || strcmp(opp, "substraction") == 0)
    {
        printf("substraction=%d-%d=%d\n", num1, num2, num1-num2);
    }
  
    else if (strcmp(opp, "mul") == 0 || strcmp(opp, "multiplication") == 0)
    {
        printf("multiplycation=%d*%d=%d\n", num1, num2, num1 * num2);
    }
    else if (strcmp(opp, "div") == 0 || strcmp(opp, "devidetion") == 0)
    {
        printf("devidatsub=%d/%d=%d\n", num1, num2, num1/num2);
    }
    else
    {
        printf("you had given a wrong argument please  follow instruction next time\n");
        printf("arguments first 3 character, number1, num2");
    }
    

    return 0;
}
