/*Write a C program to solve a system of linear equations with two 
variables ax+by=c and dx+ey=f with the parameters a, b, c, d, e, 
and f input from the keyboard */
#include <stdio.h>

int main(){
    float a,b,c,d,e,f,x,y;
    printf("Nhap a,b,c,d,e,f la:");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
    if((a*e-b*d)==0 && (c*e-b*f)==0 && (a*f-c*d)==0){
        printf("phuogn trinh vo so nghiem");
    } else if((a*e-b*d)==0 && (c*e-b*f)!=0 && (a*f-c*d)!=0){
        printf("phuong trinh vo nghiem");
    } else{
        x=(c*e-b*f)/(a*e-b*d);
        y=(a*f-c*d)/(a*e-b*d);
        printf("x va y lan luot la: %.3f %.3f",x,y);
    }

    return 0;
}
