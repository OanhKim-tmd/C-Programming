
#include <stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter the natural number:");
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count= count+1;
            }
        } 
    }
    if(count==2){
        printf("day la so ng to");
    }else{
        printf("day khong la so ng to");
    }
   
return 0;
}


