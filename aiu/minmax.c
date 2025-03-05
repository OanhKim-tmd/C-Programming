/*Given three numbers and write a C program to find the minimum and the maximum
among these numbers */
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Ba so a,b,c la: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b&&a>=c){
        printf(" so lon nhat la:%d\n",a);
    } else if(b>=a&&b>=c){
        printf(" So lon nhat la: %d\n",b);
    }else{
        printf("so lon nhat la : %d\n",c);
    }
    if(a<=b&&a<=c){
        printf(" so nho nhat la:%d",a);
    } else if(b<=a&&b<=c){
        printf(" So nho nhat la: %d",b);
    }else{
        printf("so nho nhat la : %d",c);
    }

    return 0;
}