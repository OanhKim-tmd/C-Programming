#include "bai6.h"


int main(){
    int n,y;
    printf("Enter the number n:");
    scanf("%d",&n);
    y=f(n);
    if(n>0){
        printf("%d",y);
    }else{
        printf("Please, enter the number bigger than 0.");
    }
    return 0;
}