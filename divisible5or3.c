 //Take positive integer input and tell if it is divisible by 5 or 3
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter any positive integer : ");
        scanf("%d",&n);
        if(n % 5 == 0 || n % 3 == 0) {
            printf("%d is divisible by 5 or 3",n);
            }
            else{
                printf("%d is not divisible by 5 or 3",n);
                }
    getch();
    }