#include <stdio.h>
// int gcd(int a,int b){
//     int sum=0;
//     for(int i ;i<=a;i++){
//         if(a%i==0&&b%i==0){
//             sum=i;
//             break;
//         }
//     }
//     return sum;
// }
// int main(){
//     int a,b;
//     printf("enter the numbr a and b:");
//     scanf("%d %d",&a,&b);
//     printf("boi chugn nho nhat cua %d vaf %d la:",a,b,(a*b)/gcd(a,b));
//     return 0;
// }
int main(){
    int a,b;
    printf("enter the number a and b:");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=a*b;i++){
        if(i%a==0&&i%b==0){
            printf("boi chung nho nhat cua %d va %d la %d",a,b,i);
            break;
        }
    }
    return 0;
}