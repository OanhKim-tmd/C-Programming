/*Exercise 1:
Write a function in C to find the greatest common divisor (gcd) of two positive integer
numbers.
(a,b)
a>b --> a%b=a , b%a=b

*/

#include <stdio.h>

int F(int a,int b){
    int c = a;
    a=a%b;
    b=b%a;
    b=c;
    return c;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",f(a,b));
    return 0;
}