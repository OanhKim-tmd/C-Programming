#include <stdio.h>


int main(){
    float a,b;
    printf("hai gia tri can xap xep tu thap toi cao la: ");
    scanf(" %f ",&a);
    scanf("%f",&b);
    if(a>b){
        printf("Ket qua la: %.1f,%.1f",a,b);
    } else if(a==b) {
        printf(" Day la hai so bang nhau");
    } else {
        printf(" Ket qua la : %.1f,%.1f",b,a);
    }
    return 0;
}