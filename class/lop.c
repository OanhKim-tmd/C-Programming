#include <stdio.h>

// Hàm tính trung bình của 2 số
double average(double a, double b) {
    return (a + b) / 2.0;
}

int main() {
    double num1, num2;
    
    // Nhập hai số từ bàn phím
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    // Gọi hàm average và hiển thị kết quả
    printf("Average of %.2lf and %.2lf is: %.2lf\n", num1, num2, average(num1, num2));

    return 0;
}
