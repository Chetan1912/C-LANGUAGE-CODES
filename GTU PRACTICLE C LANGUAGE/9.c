#include <stdio.h>
int main()
{
    int phy,che,math;

    printf("this is the programm to check weither the student is fail or pass\n");
    printf("please enter maths marks of student\n");
    scanf("%d", &math);
    printf("please enter physics marks of student\n");
    scanf("%d", &phy);
    printf("please enter chemistry marks of student\n");
    scanf("%d", &che);
if (phy>=33 && math>=33 && che>=33)
{
    printf("the student is passed in the exam\n");
}
else
{
    printf("the student is fail in the exam\n WORK HARD");
}



    return 0;
}