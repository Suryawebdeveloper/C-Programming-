// Take float input and print the fractional part of the real no.
    #include<stdio.h>
    #include<conio.h>
    void main() {
        float x;
        printf("Enter your decimal no. : ");
        scanf("%f",&x);
        int y = x;
        float z = x - y;
        printf("%d\n\n",y);
        printf("Your fractional part of the given no. is : %f",z); 
    getch();
    }