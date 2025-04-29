// tìm mean . median,mode.yeuanh
#include <stdio.h>
int main()
{
    int arr[] = {1 , 5, 1, 2, 4, 2, 3, 1, 8, 6, 7, 9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    float sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i]+sum;

    }
    printf("mean equal:%.3f",sum/n);
    /////////////////////////////////////////////////
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n - 1; i++){
            int temp;
            if (arr[i] > arr[i + 1]){
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    if(n%2==0){
        float median ;
        median=(float)(arr[n/2]+arr[(n/2)+1])/2;
        printf("\n%.3f",median);
    } else{
        int i=(n/2)+1;
        float median=arr[i];
        printf("\n%.3f",median);
    }

////////////////////////////////////////////////////////

int count=0;
int a=0;
for(int i=0;i<n;i++){
    count=0;
    for(int j=i;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }

    }
    
    if(count>a){
        a=count;
       
    }
}
for(int i=0;i<n;i++){
    count=0;
    for(int j=i;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }

    }
    
    if(count==a){
        printf("%d ",arr[i]);
       
    }
}
return 0;
}