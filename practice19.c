#include <stdio.h>
int main()
{
    char input;
    float kmtomile = 0.62137119;
    float kgtopound = 2.20462262;
    float cmtoinch = 0.39370079;
    float inchtofoot = 0.08333333;
    float foottom = 0.08333333;
    float first, second;

    while (1)
    {
        printf("please follow the construction what is givven below\n press q to quit\n 1. press 1 for convert km to mile\n 2. press 2 for convert kg to pound\n 3. press 3 for convert cm to inches \n 4. press 4 for convert inches to foot\n5. press 5 for convert foott to meter\n");
        scanf(" %c", &input);
       
        switch (input)
        {
        case 'q':
            goto end;
            break;
        case '1':
            printf("please enter the quintity in term of km\n");
            scanf("%f", &first);
            second = kmtomile * first;
            printf("you had converted %.2fkm = %.2f mile\n", first, second);
            break;
        case '2':
            printf("please enter the quintity in term of kg\n");
            scanf("%f", &first);

            second = kgtopound * first;
            printf("you had converted %.2fkg = %.2f pound\n", first, second);
            break;
        case '3':
            printf("please enter the quintity in term of cm\n");
            scanf("%f", &first);
            second = cmtoinch * first;
            printf("you had converted %.2fcm= %.2f inch\n", first, second);
            break;
        case '4':
            printf("please enter the quintity in term of inch\n");
            scanf("%f", &first);
            second = inchtofoot * first;
            printf("you had converted %.2finch = %.2f foot\n", first, second);
            break;
        case '5':
            printf("please enter the quintity in term of foot\n");
            scanf("%f", &first);
            second = foottom * first;
            printf("you had converted %.2ffoot = %.2f m\n", first, second);
            break;

        default:
            printf("you had entered the no options");
            break;
        }
    }
end:
    return 0;
}
