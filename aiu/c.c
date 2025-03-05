#include <stdio.h>

int calculateProduct(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10;
        n /= 10;
    }
    return product;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Enter a number bigger than 0\n");
    } else {
        int result = calculateProduct(n);
        printf("Product of digits of the number is %d\n", result);
    }
    return 0;
}