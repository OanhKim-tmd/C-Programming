// bai 5: kiem tra xem n co phai so nguyen to hay khong 
#include <stdio.h>

int main(){
    int n,i;
    printf("kiem tra n la so nguyen to hay khong, voi n la: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
    if(n%i==0){
        printf("day khong la so ng to");
        return 0;}}
        printf("day la so ng to"); 
 
    return 0;
}