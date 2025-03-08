/*Exervise 4:
Write a C function to enter a positive integer number and calculate n! using recursive
function.*/


#include "c4.h"

int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    if(n<=0){
        printf("enter the number bigger than 0");
    }else{
        printf("%d",f(n));
    }
    return 0;
}