#include <stdio.h>
//  C= 5/9*(F-32)
//  K=C+273

int main(){
    float a;
    float b;
    float c;
    printf("So do F can doi la: ");
    scanf("%f", &b);
    a=(5.0/9)*(b-32);
    c=a+273;
    printf("%.1f do F =%.1f do K",b,c);

    return 0;
}