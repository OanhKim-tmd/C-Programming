//This program takes a number as input and finds a greater number of the entered number using same digits.
#include<stdio.h>
int sum(int n){
    int result=0;
    while(n>0){
        n=n/10;
        result++;
    }
    return result;
}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    int arr[sum(n)];
    int digits=sum(n);
    for(int i=0;i<digits;i++){
        arr[i]=n%10;
        n=n/10;
    }
    for(int i = 0; i < digits; i++){
        for(int j=0;j<digits-1;j++){
            int temp;
            if(arr[j]< arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
   for(int i=0;i<digits;i++){
        printf("%d",arr[i]);
    }
return 0;
}