/*Exercise 1:
Write a function in C to find the greatest common divisor (gcd) of two positive integer
numbers.
(a,b)
a>b --> a%b=a , b%a=b

*/

#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}
