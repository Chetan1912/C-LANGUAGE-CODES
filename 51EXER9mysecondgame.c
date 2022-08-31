#include <stdio.h>
#include <stdlib.h> //for srand function
#include <time.h>
int genratornor(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
end:
    printf("********************** WELCOME TO THE GAME OF ROCK,PAPER, SISSOR **********************\n ");
    int a, again, b, comscore = 0, playerscore = 0, n; // a=player chosen no b= computer chosen no
    printf("PLEASE ENTER HOW MANY TIME YOU WANT TO PLAY WITH COMPUTER\n");
    scanf("%d", &n);

    printf("please enter the following instructions\n1 : ROCK \n2 : PAPER \n3 : SIZER\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("player TURN : %d\n", i + 1);
        printf("PLEASE ENTER YOUR CHOICE : ");
        scanf("%d", &a);
        if (a == 1)
        {
            printf("YOU HAD CHOSEN  : ROCK\n");
        }
        else if (a == 2)
        {
            printf("YOU HAD CHOSEN  : PAPER\n");
        }
        else if (a == 3)
        {
            printf("YOU HAD CHOSEN  : SISSOR\n");
        }
        printf("\n\nCOMPUER TURN : %d\n", i + 1);
        b = genratornor(3) + 1;
        if (b == 1)
        {
            printf("COMPUTER HAD CHOSEN  : ROCK\n");
        }
        else if (b == 2)
        {
            printf("COMPUTER HAD CHOSEN  : PAPER\n");
        }
        else if (b == 3)
        {
            printf("COMPUER HAD CHOSEN  : SISSOR\n");
        }
        if (a == 1 && b == 1)
        {
            printf("SCORE TIED IN TURN NO  :  %d\n", i + 1);
            comscore += 1;
            playerscore += 1;
        }
        else if (a == 2 && b == 2)
        {
            printf("SCORE TIED IN TURN NO  :  %d\n", i + 1);
            comscore += 1;
            playerscore += 1;
        }
        else if (a == 3 && b == 3)
        {
            printf("SCORE TIED IN TURN NO  :  %d\n", i + 1);
            comscore += 1;
            playerscore += 1;
        }
        else if (a == 1 && b == 2)
        {
            printf("COMPUTER GOT IT ! TURN : %d \n", i + 1);
            comscore += 1;
        }

        else if (a == 1 && b == 3)
        {
            printf("YOU GOT IT ! TURN : %d \n", i + 1);
            playerscore += 1;
        }
        else if (a == 2 && b == 1)
        {
            printf("YOU GOT IT ! TURN : %d \n", i + 1);
            playerscore += 1;
        }
        else if (a == 2 && b == 3)
        {
            printf("COMPUTER GOT IT ! TURN : %d \n", i + 1);
            comscore += 1;
        }

        else if (a == 3 && b == 1)
        {
            printf("COMPUTER GOT IT ! TURN : %d \n", i + 1);
            comscore += 1;
        }
        else if (a == 3 && b == 2)
        {
            printf("YOU GOT IT TURN : %d \n", i + 1);
            playerscore += 1;
        }
        printf("\nEND OF ROUND NO : %d\n", i + 1);
        printf(" YOUR SCORE : %d\n COMPUTER SCORE : %d\n", playerscore, comscore);
        printf("ENTER\n\n");
        getchar();
        getchar(); // for store the enter by the user
       
    }
    printf("YOUR SCORE : %d \nCOMPUTER SCORE : %d\n", playerscore, comscore);
    if (playerscore > comscore)
    {
        printf("*********** YOU WIN  THE GAME BY POINT : %d ***********\n", playerscore - comscore);
    }

    else if (playerscore < comscore)
    {
        printf("*********** COMPUTER  WIN  THE GAME BY POINT : %d ***********\n", comscore - playerscore);
        printf("                    TRY NEXT TIME                                                    \n");
    }

    else if (playerscore == comscore)
    {
        printf("*********** THE MATCH IS TYED ***********\n");
        printf("              TRY NEXT TIME              \n");
    }
             //125 to 130 for play again
            printf("PLEASE ENTER PLAY AGAIN : 1\t\t QUIT : 2\n ");
            scanf("%d", &again);
            if (again == 1)
            {
                goto end;
            }
            
        

    return 0;
}