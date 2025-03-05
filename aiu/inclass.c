/* tạo hai biến trong c floatfloat và cho người dùng nhập hai biến , sử dụng lệnh prinf và scanf 
tính tổng tích thương hiệu của hai số
tính tổng tích thương hiệu của hia số ra màn hình */
#include <stdio.h>


int main(){
    float a,b;
    printf("enter a and b:\n");
    scanf("%f %f",&a,&b);
    printf("tong cua hai so la :%.1f\n",a+b);
    printf("hieu cua hai so la:%.1f\n", a-b);
    printf("tich cua hai so la: %.1f\n ", a*b);
    printf("thuong cua hai so la :%.1f\n", a/b);

}