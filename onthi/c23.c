//Write a C program that will print the multiplication table of a number.

#include<stdio.h>
int main(){
    int n,mul=0;
    printf("Enter the number n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        mul=n*i;
        printf("%d x %d = %d\n",n,i,mul);
    }
    return 0;
}