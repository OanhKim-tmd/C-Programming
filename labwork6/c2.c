// Write a C function to swap two variables using pointers.

#include <stdio.h>
int main(){
    float a,b,c;
    float *p1,*p2;
    printf("enter the number ;");
    scanf("%f %f",&a,&b);
    p1=&a;
    p2=&b;
    c=*p1;
    *p1=*p2;
    *p2=c;
    printf("%.1f %.1f",a,b);

    return 0;
}