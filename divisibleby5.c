    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter a number : ");
        scanf("%d",&n);
        if(n % 5 == 0) {
        printf("Divisible by 5");
        }
        else{
            printf("Not Divisible by 5");
        }
    getch();
    }