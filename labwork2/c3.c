/*Exercise 1: Write a C program to convert a temperature form Centigrade to Fahrenheigh. 
Exercise 2: Given three numbers and write a C program to find the minimum and the maximum 
among these numbers (a,b,cc)
Exercise 3: Write a C program to swap the values of two variables without using a third one. 
Exercise 4: Enter a year in the format of Gregorian calendar and check if it is a leap year or not. 
Leap years refer to the years that divisible by 4 but not 100, or divisible by 400. 
Exercise 5: Write a C program to solve a system of linear equations with two variables 
ax+by=c and dx+ey=f with the parameters a, b, c, d, e, and f input from the keyboard 
Exercise 6: Using switch…case statement, enter any month in the numeric format and display 
the number of days in that month.*/

#include <stdio.h>


int main(){
    float a,b;
    printf("enter two number : ");
    scanf("%f %f",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap the values of two variables is:  %.1f , %.1f",a,b);
    return 0;
}