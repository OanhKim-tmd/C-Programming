
#include <stdio.h>
// int main(){
//     int n;
//     int count=0;
//     printf("enter the natural number:");
//     scanf("%d",&n);
//     if(n>0){
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 count= count+1;
//             }
//         } 
//     }
//     if(count==2){
//         printf("day la so ng to");
//     }else{
//         printf("day khong la so ng to");
//     }
   
// return 0;
// }

int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    for (int i=2;i<n;i++){
    if(n%i==0){
        printf("day khong la so nguyen to ");
        return 0;}}
        printf(" day la so ng to");

    return 0;
}


