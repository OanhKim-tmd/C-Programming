/*Exercise 4: Enter an array of size n, (n is input from the keyboard), then calculate the sum of
all the array elements.*/

#include <stdio.h>
 int main(){
    int n,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=(n-1);i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
   
    printf("the sum of all the array elements =%d",sum);
    return 0;
 }