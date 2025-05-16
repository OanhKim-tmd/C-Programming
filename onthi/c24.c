//The program takes the range and finds all the prime numbers between the range and also prints the number of prime numbers.
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number n:");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        count =0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                count ++;
            }
        }
        if(count == 0){
            printf("%d ",i);
        }
    }
    return 0;
} 