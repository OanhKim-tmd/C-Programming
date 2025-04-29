// This is a C Program which calculates the number of integers divisible by 5 in the given range.
#include<stdio.h>
void main(){
    int a,b,count=0,sum=0;
    printf("Enter the number a and b:");
    scanf("%d %d",&a,&b);
    printf("integers divisible by 5 : ");
    if (a>b){
        a=a*b;
        b=a/b;
        a=a/b;
    }
    for(int i=a;i<=b;i++){
        if(i%5==0){
            printf("%d ",i);
            count++;
            sum=sum+i;
        }
    }
    printf("\nthe number integers divisible by 5 is: %d\n",count);
    printf("the dum of integers divisible by 5 equal:%d",sum);
}
