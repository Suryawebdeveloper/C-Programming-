#include<stdio.h>
#include<conio.h>
void main() 
{
    int n,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    int count = 0;
    while(n!=0) {
        n=n/10;
        count++;
        }
        printf("the count digit is %d",count);
 getch();
}