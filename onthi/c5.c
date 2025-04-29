#include <stdio.h>
int fac(int a){
    if(a>1)
    return a*fac(a-1);
}
int main (){
    int n;
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}