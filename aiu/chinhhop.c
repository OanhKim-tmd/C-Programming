// bai 2: tinh chinh hop voi hai bien la n va k (n!/(n-k!)) to hop chap k cua n 

// bai 4: tim tat ca cac uoc cua n vidu : 28 thi in ra 1 2 4 7 14 28
// bai 5: kiem tra xem n co phai so nguyen to hay khong 
// bai 6: tinh 1+1/2+1/3+1/4+...+1/n :))))))))))))))))))))) ( chu y kieu du lieu, dung float ) 

#include <stdio.h>


int main(){
    int n,k,sum=1,A,sum1=1;
    printf("Tinh chinh hop chap k cua n, n va k lan luot la: ");
    scanf("%d ", &n);
    scanf("%d", &k);
    A=n-k;
    for (int i=1;i<=n;i++){
        sum=sum*i;
    }
    for(int e=1;e<=A;e++){
        sum1=sum1*e;   
    }
    printf("Ket qua la: %d",sum/sum1);


    return 0;
}
