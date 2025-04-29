//Calculate sum of a series
#include <stdio.h>
int main (){
    float n;
    scanf("%f",&n);
    float sum=0;
    for(float i=1;i<=n;i+=2){
        sum=sum+1/(i*(i+1));
    }
    printf("%f",sum);
    return 0;
}