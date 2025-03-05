/*bài 3: tính tổng các số lẻ từ 1 đến N dùng while loop*/
#include<stdio.h>


int main(){
    int n,i=1,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==1){sum=sum+i ;}
        i+=1;
        
    }
    printf("tong so le tu 0 toi %d la: %d",n,sum);
    return 0;
}