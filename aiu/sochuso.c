#include <stdio.h>


int main(){
    int n,count=0;
    printf("enter n: ");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("ket qua la: %d ", count);
    return 0;
    
}