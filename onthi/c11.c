#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){  
    printf("%d\n",arr[i]);}
    return 0;
}