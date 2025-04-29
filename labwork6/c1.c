//Write a C program to add two numbers using pointers.

#include<stdio.h>
int main(){
    int n1,n2,sum;
    int *p1,*p2;
    printf("enter the number n1,n2:");
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    sum=*p1+*p2;
    printf("add two number is:%d",sum);
    return 0;
}