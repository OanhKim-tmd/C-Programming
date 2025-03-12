/*Exercise 2:
Use the gcd function in the previous exercise to find the greatest common divisor of four
positive integer numbers.*/

#include <stdio.h>
int ucln(int x, int y) {
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

// int ucln2(int c,int d){
//     while (d != 0) {
//         int temp = d;
//         d = c % d;
//         c = temp;
//     }
//     return c;
// }
int main() {
    int a, b, c ,d,y,z;
    printf("Nhap bon so nguyen: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    y=ucln(a,b);
    z=ucln(c,d);
    // while (z!=0){
    //     int temp=z;
    //     z=y%z;
    //     y=temp;
    // }
    printf("UCLN cua %d, %d,%d va%d la: %d\n", a, b, c, d, ucln(y,z));
    return 0;
}
