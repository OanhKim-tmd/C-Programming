/*Exercise 1: Write a C program to find the minimum and maximum number in a given series
of n numbers stored in a static or dynamic (from the keyboard) array.*/

#include <stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Min = %d Max = %d",min,max);
    return 0;
}