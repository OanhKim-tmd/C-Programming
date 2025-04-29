#include<stdio.h>
#include<math.h>
int main(){
    float a=1,b=2,c=1,delta,x1,x2;
    delta=b*b-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("x1=%.2f\nx2=%.2f",x1,x2);
    return 0;
}