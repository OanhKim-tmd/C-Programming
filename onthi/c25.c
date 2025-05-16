/*decimal -> hexadecimal
*/
#include<stdio.h>
int dec2hex(int n){
    int remainder = n%16;
    if(n/16!=0){
        dec2hex(n/16);
    }
    switch (remainder){
        case 10: printf("A");
        break;
        case 11: printf("B");
        break;
        case 12: printf("C");
        break;
        case 13: printf("D");
        break;
        case 14: printf("E");
        break;
        case 15: printf("F");
        break;
        default: printf("%d",remainder);
    }

}
int main(){
    int n;
    printf("Enter the number n:");
    scanf("%d",&n);
    dec2hex(n);
    return 0;
}
