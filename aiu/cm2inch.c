#include <stdio.h>




int main(){
    float a;
    printf("so cm can doi la: ");
    scanf("%f",&a);
    printf("%.1fcm = %.3finch\n",a,a/2.54);
    return 0;
}