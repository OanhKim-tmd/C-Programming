/*
tinh giai thua cua so n nhap tu ban phim bang function
vd : 5!=5.4.3.2.1= 120
*/

#include <stdio.h>


int F(int n ){
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
    } 
    return result;
}

int main(){
    int n,y;
    printf("enter the number: ");
    scanf("%d",&n);
    y=F(n);
    printf("%d",y);
    return 0;
}
