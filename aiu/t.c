// bai 6: tinh 1+1/2+1/3+1/4+...+1/n :))))))))))))))))))))) ( chu y kieu du lieu, dung float ) 

#include <stdio.h>

int main(){
    int n;
    float sum=1;
    printf("tinh tong gia tri cua 1+1/2+1/3+...+1/n, voi n la: ");
    scanf("%d",&n);
    for(float i=2 ;i<=n ;i+=1){
        sum=sum+1/i;
    }
    printf("ket qua la: %f ",sum );
    return 0;
}