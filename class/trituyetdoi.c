#include <stdio.h>

int main(){
    float a,e;
    printf("gia tri cua a la: ");
    scanf("%f",&a);
    if(a>0){
        e=a;
        printf("the absolute value of a is : %.1f",e);
    } 
    else if (a<0){
        e=a*(-1);
        printf("the absolute value of a is : %.1f",e);
    } 
    return 0;
}