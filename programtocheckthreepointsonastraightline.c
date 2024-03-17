#include<stdio.h>
#include<conio.h>
void main() {
    double x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1 : ");
    scanf("%lf\n",&x1);
    printf("Enter the value of x2 : ");
    scanf("%lf\n",&x2);
    printf("Enter the value of x3 : ");
    scanf("%lf\n",&x3);
    printf("Enter the value of y1 : ");
    scanf("%lf\n",&y1);
    printf("Enter the value of y2 : ");
    scanf("%lf\n",&y2);
    printf("Enter the value of y3 : ");
    scanf("%lf\n",&y3);
    double m1 = (y2 - y1)/(x2 - x1);
    double m2 = (y3 - y2)/(x3 - x2);
    if(m1 == m2)
        printf("three points are fall on single straight line");
    else
        printf("the points does not fulfill the required condition");
    getch();
}