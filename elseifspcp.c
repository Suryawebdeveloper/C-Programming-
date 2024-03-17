 // elseif sp and cp
    #include<stdio.h>
    #include<conio.h>
    void main() {
        int sp,cp;
        printf("Enter sp : ");
        scanf("%d",&sp);
        printf("Enter cp : ");
        scanf("%d",&cp);
        if(sp>cp)
            printf("Profit");
        else if(cp>sp)
            printf("Loss");
        else 
            printf("No profit, No loss");    
    getch();
    }