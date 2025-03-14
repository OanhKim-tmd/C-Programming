#include <stdio.h>

long long f(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result=result*i;
    }
    return result;
}

int fac(int n){
if(n>=1)
    return (n*fac(n-1));
else
    return 1;
}
