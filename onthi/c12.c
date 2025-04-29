//Write a C Program to check whether a given number is even or odd.
#include<stdio.h>
int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    if(n%2==0){
        printf("This is even number.");
    }else{
        printf("This is odd number");
    }
    return 0;
}