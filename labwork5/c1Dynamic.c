/*Exercise 1: Write a C program to find the minimum and maximum number in a given series
of n numbers stored in a static or dynamic (from the keyboard) array.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int *arr= (int*)malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
        printf("Nhap phan tu thu %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0; i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("So lon nha la: %d\nSo be nhat la : %d",max,min);
    return 0;
}