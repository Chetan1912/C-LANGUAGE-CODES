#include <stdio.h>
int main()
{
    float pr1, pr2, total;
    int rank;
    system("cls");
    printf("*****************WELCOME TO MERIT CALCULATOR***************\n\n");
    printf("THIS IS THE PROGRAMM FOR CALCULATE APROX MARIT RANK IN 2022 :\n");
    printf("\nNOTE : THIS IS THE APROXIMATE RANK IT'S MAY CHANGE LIT BIT\n\n");
    printf("PLEASE ENTER YOUR SCIENCE PERSENTILE IN BOARD : ");
    scanf("%f", &pr1);
    printf("\nPLEASE ENTER YOUR GUJCAT PERSENTILE IN BOARD : ");
    scanf("%f", &pr2);
    printf("\nYOUR RANK IS CALCULATED BASED ON 50 pr GUJCAT 50 pr BOARD\n");
    pr1 = (100 - pr1) * 0.5; // after the minus ;
    pr2 = (100 - pr2) * 0.5; // after the minus ;
    total = pr1 + pr2;
    rank = total * 27500 / 100;
    printf("**********************************************************\n");
    printf("*    YOUR MARIT RANK IN 2022  IS  =  %d OUT OF 29000   *\n", rank);
    printf("**********************************************************\n");
    getchar();
    getchar();

    return 0;
}