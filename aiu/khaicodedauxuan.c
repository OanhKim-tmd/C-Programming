/*tinh chu vi va dien tich hinh chu nhat*/

#include <stdio.h>


int main(){
    float a,b;
    printf("Canh cua hinh chu nhat lan luot la:");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("dien tich hcn la: %.1f\n",a*b);
    printf("chu vi hcn la: %.1f",(a+b)*2);
    return 0;
}