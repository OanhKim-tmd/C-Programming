#include <stdio.h>
#include <math.h>
//ax^2 + bx +c 
//delta=b^2-4ac
// delta>0 có hai nghiem phan biet 
// delta =0 co nghiem keo x=-b/2a
// delta <0 phuogn trinh vo nghiem.


int main(){
    float a,b,c,d;
    printf("a la: ");
    scanf("%f", &a);
    printf("b la: ");
    scanf("%f", &b);
    printf("c la: ");
    scanf("%f", &c);
    d = b*b - 4*a*c;
    if( d > 0 ){
        printf("Phuong trinh co hai nghiem x1 vaf x2 lan luot la: %.1f , %.1f ", (-b+ sqrt(d))/(2*a) , (-b - sqrt(d))/(2*a));
    } else if(d==0){
        printf("Phuong trinh trinhco nghiem kep la: %.1f ", -b/(2*a));
    } else{
        printf("Phuong trinh vo nghiem");
    }

    return 0;
}