 // Write a program to swap two values 
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a,b,c;
        printf("Enter the value of a : ");
        scanf("%d",&a);
        printf("Enter the value of b : ");
        scanf("%d",&b);
        c = a;
        a = b;
        b = c;
        printf("After swap value of a : %d\n",a);
        printf("After swap value of b : %d",b);
    getch();
    }