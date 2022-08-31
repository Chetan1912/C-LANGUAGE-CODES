#include <stdio.h>
#include <string.h>

struct cricket
{
    char player[30];
    char team[15];
    float avg;
};

int main()
{
    struct cricket c[50], cp;
    int i, j;
    char temp[30];
    for (i = 0; i < 5; i++)
    {
        getchar();
        printf("PLEASE ENTER YOUR TEAM PLAYER IN CAPITAL %d :", i + 1);
        gets(c[i].team);

        printf("\nNAME : ");
        gets(c[i].player);

        printf("\nAVARAGE : ");
        scanf("%f", &c[i].avg);
    }
    for (i = 0; i < 49; i++)
    {
        for (j = i + 1; j < 50; j++)
        {
            if (strcmp(c[i].team, c[j].team) > 0)
            {
                cp = c[i];
                c[i] = c[j];
                c[j] = cp;
            }
        }
    }
    // printing the inforamation;
    for (i = 0; i < 50; i++)
    {
        printf("TEAM = %s\tPLAYER = %s\tAVARAGE=%f\n\n", c[i].team, c[i].player, c[i].avg);
    }
    return 0;
}