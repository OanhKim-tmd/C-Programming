//nhap n , tinh tong chu so cua n
//123 tra lai 6
#include <stdio.h>


int main(){
    int n,sum=0 ;
    printf("enter n: ");
    scanf("%d",&n);
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    printf("ket qua la: %d",sum);
    return 0;
}
