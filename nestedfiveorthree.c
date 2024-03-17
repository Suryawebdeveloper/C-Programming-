// nested if else divisible by 5 or 3     
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter the value of n : ");
        scanf("%d",&n);
        if(n%5 == 0 || n%3 == 0) {
            if (n%15 != 0) {
                printf("the number is divisible by 5 or 3 but not fifteen");
            }
            else{
                printf("the number is divisible by 15");
                }
            }
            else{
                printf("the number is not divisible by 5 or 3");
                }
    getch();
    }
    