#include <stdio.h>



int main(){
    int a;
    printf("nhap so nam: ");
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) || a%400==0){
        printf("Day la nam nhuan");
    } else{
        printf("Day khong la nam nhuan");
    }
}