//Calculate the sum of digits of a number( 123 → 6  ,  1234 → 10 )
#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){      
        sum=sum+n%10;
        n=n/10;  
    }
    printf("%.1d",sum);
    return 0;
}