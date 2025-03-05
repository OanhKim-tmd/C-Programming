#include <stdio.h>
//0=ax+b
//vo nghiem  a=0 b#0
//nghiem duy nhat a#0 
// vo so nghiem a=0 b=0 




int main(){
    float a;
    float b;
    float x;
    printf("a la: ",a);
    scanf("%f", &a);
    printf("b la: ",b);
    scanf("%f", &b);
    
    if(a==0&&b==0){
        printf("phuonng trinh vo so nghiem");
    } else if(a==0&&b!=0){
        printf("phuong trinh vo nghiem");
    } else {
        x = -b/a;
        printf("Phuong trinh co nghiem duy nhat la: %.1f ", x );
    }
    
    return 0;
}