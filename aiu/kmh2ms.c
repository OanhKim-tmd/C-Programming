#include <stdio.h>
//syntax


int main(){
    float a;
    printf("So km/h can doi la: ");
    scanf("%f",&a);
    printf("%.1f km/h = %.1f m/s",a,a/3.6);
    return 0;
}