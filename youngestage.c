 //write a program to determine the youngest age of three person ram,
 //shyam and ajay
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a,b,c;
        printf("Enter Ram's age : ");
        scanf("%d",&a);
        printf("Enter shyam's age : ");
        scanf("%d",&b);
        printf("Enter ajay's age : ");
        scanf("%d",&c);
        if(a<b && a<c) {
            printf("%d is younger",a);
            }
        if(b<c && b<a) {
            printf("%d is younger",b);
            }
        if(c<a && c<b) {
            printf("%d is younger",c);
            }        
    getch();
    }