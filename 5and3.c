 //Take positive integer input and tell if it is divisible by 5 and 3
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter a positive int : ");
        scanf("%d",&n);
        if(n % 5 == 0 && n % 3 == 0) {
            printf("%d is divisible by 5 and 3",n);
            }
            else{
                printf("%d is not divisible by 5 and 3",n);
                }
    getch();
    }