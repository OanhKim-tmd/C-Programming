#include <stdio.h>
// Bai 1 : tinh giai thua n!=1.2.3.4...n
// bai 2: tinh chinh hop voi hai bien la n va k 
// bai 3: tinh to hop voi hai bien la n va k
// bai 4: tim tat ca cac uoc cua n vidu : 28 thi in ra 1 2 4 7 14 28
// bai 5: kiem tra xem n co phai so nguyen to hay khong 
// bai 6: tinh 1+1/2+1/3+1/4+...+1/n :))))))))))))))))))))) ( chu y kieu du lieu, dung float ) 
int main(){
    int n;
    int sum = 0 ;
    printf(" Nhap n tu ban phim: ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
        sum = sum + i*i ; 
    }
    printf(" tong so chan la: %d ", sum);
    return 0;
}