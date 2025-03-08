#include <stdio.h>

int f(int x,int n){
    int result = 1;
    for(int i=1;i<=n;i++){
        result=result*x;
    }
    return result;
}