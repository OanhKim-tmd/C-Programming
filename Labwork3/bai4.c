/*Exercise 1: Write a C program to enter a natural number n (n > 1), and find all the divisors of n.
Exercise 2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n.
Exercise 3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n
Exercise 4: Write a C program to enter a positive number and calculate product of digits of the
number using modulus operator % and while loop.
Exercise 5: Write a C program to print Fibonnacci series upto n, n is an interger input from the
keyboard.
Exercise 6: Write a C program to find a factorial of n, n is an interger input from the key*/

#include <stdio.h>

int F(int n){
    int result =1;
    while(n>0){
        result=result*(n%10);
        n=n/10;   
    }
    return result;
}

int main(){
    int n,y;
    printf("enter the number:");
    scanf("%d",&n);
    y=F(n);
    if(n<=0){
        printf("Enter the number bigger than 0");
    } else{
        printf("product of digits of the number is %d",y);
    }
    return 0;
}
