// take input of ram,shyam and ajay age's and write a program to determine the youngest of three

    #include<stdio.h>
    #include<conio.h>
    void main() {
        int ram,shyam,ajay;
        printf("Enter the age of ram : ");
        scanf("%d",&ram);
        printf("Enter the age of shyam : ");
        scanf("%d",&shyam);
        printf("Enter the age of ajay : ");
        scanf("%d",&ajay);
        if(ram<shyam) {
          if(ram<ajay) 
          printf("%d is youngest",ram);
              else  //ajay<ram
              printf("%d is youngest",ajay);
              }
        if(shyam<ram) {
            if(shyam<ajay)
                printf("%d is youngest",shyam);
                else //ajay<shyam
                    printf("%d is youngest",ajay);
            }      
    getch();
    }