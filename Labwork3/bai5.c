/*Exercise 1: Write a C program to enter a natural number n (n > 1), and find all the divisors of n.
Exercise 2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n.
Exercise 3: Enter a integer number n and calculate the sum of a series : 1 + 1/2 + 1/3 +...+1/n
Exercise 4: Write a C program to enter a positive number and calculate product of digits of the
number using modulus operator % and while loop.
Exercise 5: Write a C program to print Fibonnacci series upto n, n is an interger input from the
keyboard. 0,1,1,2,3,5,8,13,......
Exercise 6: Write a C program to find a factorial of n, n is an interger input from the key*/

/*#include <stdio.h>

int f(int n){
    int count=3;
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    while(count<=n){
        ++count;
        c=a+b;
        a=b;
        b=c;
        printf("%d ",b); 
    }
   
}


int main(){
    int n,y;
    printf("enter the interger number n:");
    scanf("%d",&n);
    y=f(n);
    if(n>=0){
        printf(".");
    }else{
        printf("enter the number bigger than 0");

    }
    
    return 0;
}*/
#include <stdio.h>

int printFibo(int n){
    int count=3;
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    while(count<=n){
        ++count;
        c=a+b;
        a=b;
        b=c; 
        printf("%d ",b); 
    }
   
}


int main(){
    int n;
    printf("enter the interger number n:");
    scanf("%d",&n);
    if(n>=0){
        printFibo(n);
    }else{
        printf("enter the number bigger than 0");

    }
    
    return 0;
}