/*kiem tra xem so a co phai so ng to hay khong*/
#include <stdio.h>
/*flag =1 
a%i==0 ==> flag=0 thoat khoi vong for
neu flag =1 thi la so ng to 
neu flag=0 thi khong phai so ng to */

int main(){
    int a,flag=1;
    printf(" nhap so a la:");
    scanf("%d",&a);
    for(int i=2; i<a; i++){
        if(a%i==0){
        flag=0;
        break;}
    }
        if(flag==1){
            printf("day la so ng to");
        } else{
            printf("day khogn phai so ng to");
        }

    return 0;
}