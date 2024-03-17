 // Write a program to swap the two int value withour using third variable 
 // using operator (+,-,*,/)
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a = 10,b = 20;
        clrscr();
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swap value of a : %d\n",a);
        printf("After swap value of b : %d",b);
    getch();
   }