#include<stdio.h>
#include"ex4.h"
int main(){
    int a,b;
    printf("Enter the number a and b:");
    scanf("%d %d",&a,&b);
    printf("gcd of %d and %d is:%d",a,b,gcd(a,b));
    return 0;
}