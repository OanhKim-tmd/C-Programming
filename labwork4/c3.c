/*Exercise 1:
Write a function in C to find the greatest common divisor (gcd) of two positive integer
numbers.
Exercise 2:
Use the gcd function in the previous exercise to find the greatest common divisor of four
positive integer numbers.
Exercise 3:
Write two C functions that compute f(x)=2.5x and g(x,y)=xy
Exervise 4:
Write a C function to enter a positive integer number and calculate n! using recursive
function.
Exercise 5:
Write two C functions to calculate xn , n and x are input from the keyboard by the normal function and recursive function.
Note: All the functions should be defined in two separated files: *.h and *.c*/

#include <stdio.h>

float f(float x){
    float e;
    e=2.5*x;
    return e;
}

float g(float x,float y){
    return x*y;
}

int main(){
    float x,y;
    printf("enter the number x and y:");
    scanf("%f %f",&x,&y);
    printf(" f(x) =%.3f \n g(x,y)=%.3f\n",f(x),g(x,y));
    return 0;
}




