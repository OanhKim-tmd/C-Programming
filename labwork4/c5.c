/*Exercise 5:
Write two C functions to calculate x^n , n and x are input from the keyboard by the normal function and recursive function.
Note: All the functions should be defined in two separated files: *.h and *.c*/

#include "c5.h"

int main(){
    int x,n;
    printf(" enter the number x,n:");
    scanf("%d %d",&x,&n);
    printf("x^n = %d",f(x,n));
    return 0;
}