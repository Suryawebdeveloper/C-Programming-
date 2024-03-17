 //Take positive integer input and tell if it is a three digit no. or not
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter a positive int : ");
        scanf("%d",&n);
        if(n>99 && n<1000) {
            printf("it is a three digit no.");
            }
            else{
                printf("it is not three digit no.");
                }
    getch();
    } 