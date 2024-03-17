 //write a program to determine the greatest side of three sides of a triangle
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a,b,c;
        printf("Enter 1st side : ");
        scanf("%d",&a);
        printf("Enter 2nd side : ");
        scanf("%d",&b);
        printf("Enter 3rd side : ");
        scanf("%d",&c);
        if(a+b>c && a+c>b && b+c>a) {
            printf("valid triangle");
            }
            else{
                printf("Invalid triangle");
                }
    getch();
    }