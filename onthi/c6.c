#include <stdio.h>
#include <string.h>

int main(){
    int x, *p;

    x = 3, p = &x;
    *p = 9;

    printf("%d", x);
    printf("%d", *p);
    printf("%d", x);
}