// bai 3: tinh to hop voi hai bien la n va k(n!/(k!*(n-k)!))

#include <stdio.h>

int main(){
    int n,k,tu=1,mau1=1,mau2=1,A;
    printf("to hop chan k cua n, voi n va k lan luot la: ");
    scanf("%d %d",&n,&k);
    A=n-k;
    for(int i=1;i<= n;i++){
        tu=tu*i;
    }
    for( int e=1;e<=k;e++){
        mau1=mau1*e;
    }
    for(int a=1;a<=A;a++){
        mau2=mau2*a;
    }
    printf("ket qua la: %d ", tu/(mau1*mau2));
    return 0;
}