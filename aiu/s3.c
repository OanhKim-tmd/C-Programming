/*Exercise 2: Write a C program to enter a natural number n (n > 1), and find all the prime
numbers from 1 to n.
tim so ng to tu 1 toi n
cho i chay tu 1 toi n
tim so ng to cho tung i 
check xem i co chia het cho cac so khac no va 1 hay khong 
 */

#include <stdio.h>

int main (){
    int n;
    printf("enter n(n>1):");
    scanf("%d",&n);
    if(n<=1){
        printf("so nay <= 1\n");
    }
    for ( int i=2;i <= n; i++){
        for(int e=2;e<i;e++){
            if(i%e!=0){
                printf("%d",e);
            }
        }

    };

    return 0;
}