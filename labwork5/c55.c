// #include <stdio.h>
// #define SQUARE(x) x*x 
// int main(){
//     int a=3;
//     printf("%d",SQUARE(a+1));
//     return 0;
// }
// int main(){
//     printf("Hello USTHer!");
//     printf("LS luv you");
//     return 0;
// }
#include <stdio.h>

// int main(void){
//     char gretting[] = "Hello";
//     int size = 5;
//     for (int i =0;i<size;i++)
//     {
//     printf("The charactor #%d is %c\n", i+1, gretting[i]);
//     }
//     return 0;
//     }



 int main(void){
 char subject_names[5][30] = {"Linear Algebra", "Calculus", "Physics", "Computer Architecture", "Basic Programming"};
 int size = 5;
 for (int i=0;i<size;i++)
 {
 
 printf("The subject #%d is %s\n", i+1, subject_names[i]);}
 return 0;
 }
// void input_matrix(int row ,int col,float matrix[row][col])
// {
//     for (int i=0 ; i<row,i++){
//         for(int j=0;j<col;j++){
//             printf("matrix element A[%d][%d]=",i,j);
//             scanf("%f",&matrix[i][j]);
//         }
//     }
// }