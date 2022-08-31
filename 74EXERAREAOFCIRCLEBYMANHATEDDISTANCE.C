#include <stdio.h>
#include <math.h>
#define pi 3.142857
float eutliddistance(int x1, int y1, int x2, int y2)
{

    float d, d1, d2, totaldis;
    d1 = (x1 - x2) * (x1 - x2);
    d2 = (y1 - y2) * (y1 - y2);
    d=d1+d2;
    totaldis = pow(d,0.5) ;   // we can use sqrt(num) for squere root;
    return totaldis;
}
float area(float a)
{   
    float area= pi*a*a;
    return area;
}

main()
{
    int x1, y1, x2, y2;
    float d,a;
    printf("this is the programm to print the area of circle by eutlidiandistance\n");
    printf("please enter the x1 : ");
    scanf("%d", &x1);
    printf("\nplease enter the y1 : ");
    scanf("%d", &y1);
    printf("\nplease enter the x2 : ");
    scanf("%d", &x2);
    printf("\nplease enter the y2 : ");
    scanf("%d", &y2);
    d = eutliddistance(x1, y1, x2, y2);
    printf("the distance btween 2 points =  %0.4f\n", d);
    a= area(d);
    printf("THE AREA OF CIRCLE WHICH RADIUS IS THE EUTLID DISTANCE = %0.4f\n ",a);
}