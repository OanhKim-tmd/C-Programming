// Write a C program to access an array’s elements using pointers

#include<stdio.h>
int main(){
    int arr[5]={5,10,15,20,25};
    int *p;
    p=&arr[0];
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}