//bai 4: tim tat ca cac uoc cua n vidu : 28 thi in ra 1 2 4 7 14 28

#include <stdio.h>


int main(){
    int n,i,D;
    printf("tim uoc cua n, voi n la:");
    scanf("%d", &n);
    for( i=1; i<=n; i++){
       if( n/i==1 && n/i==n){
        printf(" %d", i);
       }
    }
   
    return 0;
}