//bài 1: Nhập n, in ra số đảo ngược của n
/*bài 2: Write a program that performs the Collatz Conjecture for a given number N. Print each step until the sequence reaches 1.

Rules:

If N is even, divide it by 2.
If N is odd, multiply it by 3 and add 1.

bài 3: tính tổng các số lẻ từ 1 đến N dùng while loop

bài 4: Nhập 2 số a và b, tìm ước chung lớn nhất của a và b

bài 5: Nhập 2 số a và b, tính lũy thừa a^b*/
/*#include <stdio.h>
    int main (){
    float n;
    printf("enter n: ");
    scanf("%f",&n);
    printf("so nghich dao cua %.1f la : %.1f ",n,1/n);
    return 0;
 }
 */
#include <stdio.h>
#include <math.h>

int main (){
    int n,count;
    printf("enter n:");
    scanf("%d",&n);
    while(n!=0){
        n=n%10;
        count++;
    }
    printf("n la: %d",n);
    return 0;
}



