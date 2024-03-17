 // take 3 int input and print the greatest of them
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int a,b,c;
        printf("Enter value a : ");
        scanf("%d",&a);
        printf("Enter value b : ");
        scanf("%d",&b);
        printf("Enter value c : ");
        scanf("%d",&c);
        if(a>b) {
            if(a>c)
                printf("%d is greatest",a);
                    else // a<c
                        printf("%d is greatest",c);
                }
        if(b>a) {
            if(b>c)
                printf("%d is greatest",b);
                    else // b<c
                        printf("%d is greatest",c);
                     }   
    getch();
    }