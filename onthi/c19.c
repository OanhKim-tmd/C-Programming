//This is a C program to Increase 1 to all of the given Integer Digit
#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter the number n:");
    scanf("%d",&n);
    while(n>0){
        sum=sum+(n%10+1);
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}