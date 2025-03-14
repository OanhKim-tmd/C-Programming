/*Exercise 2:
Use the gcd function in the previous exercise to find the greatest common divisor of four
positive integer numbers.*/

#include <stdio.h>
#include "c2.h"
int main() {
    int a, b, c ,d,y,z;
    printf("Nhap bon so nguyen: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    y=ucln(a,b);
    z=ucln(c,d);
    printf("UCLN cua %d, %d,%d va%d la: %d\n", a, b, c, d, ucln(y,z));
    return 0;
}
