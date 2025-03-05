/*Exercise 1: Write a C program to enter a natural number n (n > 1), and find all the divisors of n.
Exercise 2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n.
Exercise 3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n
Exercise 4: Write a C program to enter a positive number and calculate product of digits of the
number using modulus operator % and while loop.
Exercise 5: Write a C program to print Fibonnacci series upto n, n is an interger input from the
keyboard.
Exercise 6: Write a C program to find a factorial of n, n is an interger input from the keyboard.*/

#include <stdio.h>


int main(){
    int n,i;
    printf("enter the number n (n>1):");
     scanf("%d",&n);
    if(n>=1){
        for(i=1;i<=n;i++){
            if(n%i==0){
            printf("%d\n",i);
        }
        }
    } else{
        printf("Enter the number bigger 1");
    }    
    
    return 0;
}