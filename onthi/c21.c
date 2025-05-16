/*This C program reads a matrix A (MxN) & finds the following using functions
a) Sum of the elements of each row
b) Sum of the elements of each column
c) Find the sum of all the elements of the matrix*/

#include<stdio.h>
int main(){
    int m,n;
    printf(" enter the number of row:");
    scanf("%d",&m);
    printf("enter the number of column:");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the number of row %d , column %d : \n ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("input of matrix:\n");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0 ; i<n;i++){
            sum=sum+arr[j][i];
        }
        printf("sum of row %d is :%d\n",j+1,sum);
        
        
    }
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0 ; i<m;i++){
            sum=sum+arr[i][j];
        }
        printf("sum of colomn %d is :%d\n",j+1,sum);
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
    }
    printf("Sum of the element of matrix is : %d",sum);
    return 0;
}