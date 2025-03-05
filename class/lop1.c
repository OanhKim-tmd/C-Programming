#include <stdio.h>

// Hàm tính trung bình của 2 số
double average2(double a, double b) {
    return (a + b) / 2.0;
}

// Hàm tính trung bình của 4 số bằng cách gọi average2 hai lần
double average4(double a, double b, double c, double d) {
    double avg1 = average2(a, b);  // Trung bình của a và b
    double avg2 = average2(c, d);  // Trung bình của c và d
    return average2(avg1, avg2);   // Trung bình của hai kết quả trên
}

int main() {
    double num1, num2, num3, num4;

    // Nhập 4 số từ bàn phím
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter third number: ");
    scanf("%lf", &num3);

    printf("Enter fourth number: ");
    scanf("%lf", &num4);

    // Gọi hàm và hiển thị kết quả
    printf("Average of %.2lf and %.2lf: %.2lf\n", num1, num2, average2(num1, num2));
    printf("Average of %.2lf, %.2lf, %.2lf, and %.2lf: %.2lf\n", num1, num2, num3, num4, average4(num1, num2, num3, num4));

    return 0;
}
