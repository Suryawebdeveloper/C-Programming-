// divisible by 5 and 3     
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        if(n%5 == 0) {
            if (n%3 == 0) {
            printf("the number is divisible by 5 and 3");
            }
            else{
                printf("the number is not divisible by 5 and 3");
                }
            }
            else{
                printf("the number is not divisible by 5 and 3");
                }
    getch();
    }
    