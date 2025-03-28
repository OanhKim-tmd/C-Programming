/*Exercise 5: Enter a matrix A of size n, (n is input from the keyboard), let’s calculate:
- The sum of all the matrix A’s elements
- Print the transposed matrix of A
- (option)The Determinant of the matrix A
- (option) The inversed matrix of A*/

#include <stdio.h>

int main (){
    int n;
    printf("a matrix A of size n,enter n(n>1):");
    scanf("%d",&n);
    int arr[n][n];


    // //////////////////////////////////////////////////
    int sum=0;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("nhap so thu %d hang %d :\n",i,j);
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("the sum of all the matrix A's elements:%d",sum);
    
    ////////////////////////////////////////////////////
    
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int arr[j][i];
            printf("nhap so thu %d hang %d :\n",i,j);
            scanf("%d",&arr[i][j]);
            printf("%d",&arr[i][j]);
        }
    }


    return 0;
}