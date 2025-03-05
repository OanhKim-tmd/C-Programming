/*Exercise 3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n */
#include <stdio.h>

int main(){
    float n = scanf("Nhập số thực n:");
    float sum = 1;
    printf("enter n:");
    scanf("%f",&n);
    for(int i=1;i<=n;i++){
        sum=sum+1/n;
    }
    printf("the sum of a series: 1+1/2+1/3+..+1/n la: %.3f",sum);
    return 0;
}