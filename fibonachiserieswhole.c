#include <stdio.h>
int fibonachi(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return fibonachi(n - 1) + fibonachi(n - 2);
    }
}
int main()
{
    int no;
    printf("please enter the number till what no you want to wrire fibonachi series\n\a");
    scanf("%d", &no);

    for (int i = 0; i < no; i++)
    {
        printf("%d", fibonachi(i));
        if (i == no - 1)
        {
            goto end;
        }

        printf(",");
    }

end:
    return 0;
}