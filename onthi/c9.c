#include<stdio.h>
int main(){
    char arr[15]="Hello World";
    char *ptr;
    ptr = arr;
    printf("%c",ptr[1]);
    return 0;
}