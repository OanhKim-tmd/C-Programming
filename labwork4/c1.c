/*Exercise 1:
Write a function in C to find the greatest common divisor (gcd) of two positive integer
numbers.
(a,b)
a>b --> a%b=a , b%a=b

*/

#include "c1.h"

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("UCLN cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}
