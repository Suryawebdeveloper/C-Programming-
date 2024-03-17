    #include<stdio.h>
    #include<conio.h>
    void main() {
         int a,b; // take two integers input a and b where "a>b"
         printf("Enter first no. : ");
         scanf("%d",&a);
         printf("Enter second no. : ");
         scanf("%d",&b);
         int q = a / b;
         int r = a - (b * q); // Dividend = Divisor * Quotient + remainder
         printf("The Remainder is : %d",r); 
         getch();
    }