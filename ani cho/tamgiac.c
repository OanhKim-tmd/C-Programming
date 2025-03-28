// //     1
// //    121
//      12321
//     1234321
//    123454321

#include <stdio.h>

int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int count=0;
    for(int y=n;y>0;y--){
        count=count+1;
        for(int i=1;i<y;i++){
            printf(" ");
        }
        for(int i=1;i<=count;i++){
            printf("%d",i);
        }
        for(int i=count;i>1;i--){
            printf("%d",i-1);
        }
        printf("\n");
        
    }
    return 0;
}