#include <stdio.h>

int main(){
    int n=5,l=3;
    
    while(l<=n){
        if(n%l==0){
            printf("\n %d",l);
        }
        l++;
    }
}