#include <stdio.h>

int main() {
    float a; // Biến Celsius
    float b; // Biến Fahrenheit
    float c; // Biến Kelvin

    printf("So do F can doi la: ");
    scanf("%f", &b); // Nhập giá trị Fahrenheit

    // Sửa biểu thức toán học
    a = (5.0 / 9) * (b - 32); // Chuyển từ F sang C
    c = a + 273.15;          // Chuyển từ C sang K

    // Xuất kết quả với 1 chữ số thập phân
    printf("%.1f do F = %.1f do K\n", b, c);

    return 0;
}