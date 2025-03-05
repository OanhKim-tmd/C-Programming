#include <stdio.h>
// Bai 1 : tinh giai thua n!=1.2.3.4...n

int main(){
    int n;
    printf("So n la: ");
    scanf("%d",&n);
    int sum=1;
    for(int i=1;i<=n;i++){
        sum=sum*i;
     }
    printf(" n!= %d",sum);

return 0;
}