#include <stdio.h>


int main(){
    float a;
    printf("So do can doi la: ");
    scanf("%f",&a);
    printf("%.1f degrees = %.1f radian\n",a,a*3.14/180);
    return 0;
    }