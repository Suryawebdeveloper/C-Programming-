#include<stdio.h>
#include<conio.h>
void main() 
{
    int n,ld;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    
    while(n!=0) {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
        }
        printf("the sum of all digit is %d",sum);
 getch();
}