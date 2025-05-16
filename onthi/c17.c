//This program increases 1 to all of the given integer digit and print the sum of all digits.
#include<stdio.h>
int main(){
    int n,sum;
    printf("enter thr number n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}