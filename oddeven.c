    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter a number : ");
        scanf("%d",&n);
        if(n % 2 == 0) { //even no.
        printf("Even number");
        }
        if(n % 2 != 0) { //odd no.
        printf("Odd number"); 
        }
    getch();
    }