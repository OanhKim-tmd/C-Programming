//This is a C program to find sum of digits of a number using recursion.
int s(int n){ 
    if(n!=0){
    return (s(n/10)+n%10);}
    else{
        return 0;
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    printf("%d",s(n));
    return 0;
}