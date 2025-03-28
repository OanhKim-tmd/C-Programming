#include <stdio.h>

int main(){
    int A[2][3] = {
    {1,2,3}, 
   {4,5,6}
    };
    for(int j =0; j<2; j++)
    {
        for (int k = 0; k<3; k++)
        {printf("%d \t", &A[j][k]);}
        printf("\n");
    }
}