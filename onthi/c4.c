#include <stdio.h>
float sum(float a){
    float x=0;
    if(a<=10000){
        x=((2*a-1)*(2*a-1))/(2+sum(a+1));}
    return x ;}
int main(){
    float n=1;
    printf("%f",4/(1+sum(n)));
    return 0;}

