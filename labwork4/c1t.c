#include <stdio.h>
int main(){
    int a, b, cd;
    printf("enter the number :\n");
    scanf("%d %d" ,&a, &b);
    for (int i =1; i<=a; i++)
        {if ((a%i==0)&&(b%i==0))
        cd=i;
    }
    printf(" %d",cd);
    return 0;
}