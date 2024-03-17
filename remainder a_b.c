// Find the remainder whrn a is divided by b when a>b    
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a,b;
        printf("Enter value a : ");
        scanf("%d",&a);
        printf("Enter value b : ");
        scanf("%d",&b);
        int q = a / b ; //a>b
        int r = a - (b * q) ;
        printf("The remainder is : %d",r);
    getch();
    }