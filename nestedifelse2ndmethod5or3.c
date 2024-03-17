 // 2nd method of nested if else divisible by 5 or 3 but not 15
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int n;
        printf("Enter value n : ");
        scanf("%d",&n);      
        if(n%5 == 0 || n%3 == 0 && n%15 != 0) {
            printf("the no. is divisible by 5 or 3 but not 15");
            }
            else 
                printf("the no. is not divisible by 5 or 3");
    getch();
    }