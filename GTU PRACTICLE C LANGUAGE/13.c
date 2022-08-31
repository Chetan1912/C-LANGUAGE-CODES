#include <stdio.h>
int main()
{
    float da, hra, ma, pf, gross, basic, nt;
    printf("this is the basic programm for calculate the salary of the person\n");
    printf("please enter the basic salary of employ\n");
    scanf("%f", &basic);
    da = 0.1 * basic;
    hra = 0.075 * basic;
    pf = 0.125 * basic;
    ma = 300;
    gross = da + hra + basic + ma;

    nt = gross - pf;
    printf("                                                                                                                                                                                                                                                                                                                      \n");
    printf("da    =     %f\n", da);
    printf("                                                                                                                                                                                                                                                                                                                      \n");
    printf("hra   =     %f\n", hra);
    printf("                                                                                                                                                                                                                                                                                                                     \n");
    printf("pf    =     %f\n", pf);
    printf("                                                                                                                                                                                                                                                                                                                      \n");
    printf("ma    =     %f\n", ma);
    printf("                                                                                                                                                                                                                                                                                                                       \n");
    printf("gross =     %f\n", gross);
    printf("                                                                                                                                                                                                                                                                                                                   \n");
    printf("net   =     %f\n", nt);
    
    return 0;
}