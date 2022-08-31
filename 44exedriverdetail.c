#include <stdio.h>
#include <stdlib.h>
struct driver
{
    char name[20];
    int lino, TIME;
    char route[50];
    float km;
};

int main()
{
    int n;
    printf("please enter the number of driver here\n");
    scanf("%d", &n);
    struct driver dr[n];

    for (int i = 1; i <= n; i++)
    {
        printf("\nPLEASE ENTER YOUR NAME DRIVER NO %d  : ", i);
        getchar(); // we had written getchar here because when we put enter after the printf statment it will take enter as astring
        gets(dr[i - 1].name);
        printf("\nPLEASE ENTER YOUR LICENCE NO         : ");
        scanf("%d", &dr[i - 1].lino);
        printf("\nPLEASE ENTER YOUR TODAYS ROUTE       : ");

        getchar();
        gets(dr[i - 1].route);

        printf("\nPLEASE ENTER YOUR DRIVING KM OF TODAY: ");
        scanf("%f", &dr[i - 1].km);
        printf("\nPLEASE ENTER YOUR DRIVING TIME IN  HR: ");
        scanf("%d", &dr[i - 1].TIME);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("THE DETAIL OF THE DRIVER NO : %d \n ", i);
        printf("NAME            = %s\n", dr[i - 1].name);
        printf("LICENCE NO      = %d\n", dr[i - 1].lino);
        printf("ROUTE           = %s\n", dr[i - 1].route);
        printf("DRIVING DISTANCE= %f\n", dr[i - 1].km);
        printf("time of driving = %d\n", dr[i - 1].TIME);
        printf("\n\n");
    }
    printf("NOTE : DRIVE SAFELY BE HAPPY\n");

    return 0;
}