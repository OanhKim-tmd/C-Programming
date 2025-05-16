//This is a C program to find sum of digits of a number using recursion.
#include<stdio.h>
int s(int n){
    if(n!=0){
        return  (n%10+s(n/10));
    }else{
        return 0;
    }
}
int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    printf("%d",s(n));
    return 0;
}