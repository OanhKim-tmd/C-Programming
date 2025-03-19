/*Exercise 3: Write a C program to sort an array of n elements in an increasing order (n is
constant) by three different methods: bubble sort, insertion sort and selection sort.*/

//Bubble sort

#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Nhap so thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    int min=arr[0];
    int temp=0;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=temp;
            min=arr[i];
            printf("%d ",min);
        }
        
    }
    return 0;
}