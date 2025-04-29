//This is a C program to find the sum of odd and even numbers from 1 to N.
#include <stdio.h>
int main(){
    int n,sumodd=0,sumeven=0;
    printf("enter the number n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sumeven=sumeven+i;
        }else{
            sumodd=sumodd+i;
        }
    }
    printf("the sum of odd numbers : %d\n",sumodd);
    printf("the sum of even numbers : %d\n",sumeven);
    return 0;
}