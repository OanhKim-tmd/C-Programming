//Sum of digits in a C program allows a user to enter any number, divide that number into individual numbers, and sum those individual numbers
#include<stdio.h>
int main(){
    int n,sum;
    printf("enter the number n:");
    scanf("%d",&n);
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d",sum);
return 0;
}