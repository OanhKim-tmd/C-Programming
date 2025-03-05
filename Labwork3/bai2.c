
#include <stdio.h>
int main(){
    int i,n;
    printf("enter the natural number:");
    scanf("%d",&n);
    if(n>2&&(n!=1||n!=2)){
        for(i=2;i<n;i++){
            if(n%i==0){
                printf("Day khong la so ng to");
                break;
            }else{
                printf("day la so ng to");
                break;
            }
        
        }
    } else if(n==1||n==2){
        printf("Day khong la so nguyen to");
    } else {
        printf("ban can nhap so lon hon 0");
    }
    
   
return 0;
}


