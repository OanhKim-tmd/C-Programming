// tim min cua mot array nhap tu ban phim bang pointer
#include<stdio.h>

int main(){
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int *p;
    p = &arr[0];
    for(int i;i<n;i++){
        if(*p<arr[i]){
            p++;
        }else{
            *p=arr[i];
        }
    }
    printf("%d",*p);
    return 0;
}



// for(int i=1;i<n;i++){
    //     if(*p>arr[i]){
    //         *p=arr[i];
    //     }
    // }
    // printf("%d",*p);