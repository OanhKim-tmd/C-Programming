#include <stdio.h>
#define C 3.14 
/*hello.s
dịchchương trình bằng câu lệnh gcc, chạy nó bằng file example
*/

int main(){
    float a;
    scanf("%f",&a);
    printf("ket qua la: %.1f",C*a);
    return 0;
}