/*Exercise 2: Write a C program to enter a positive integer number n and calculate the sum of
even and odd numbers from 1 to n.*/

#include <stdio.h>
int main(){
  int n;
  printf("Enter a positive number n:");
  scanf("%d",&n);
  int sume=0,sumo=0;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      sume=sume+i;
    }else{
      sumo=sumo+i;
    }
  }
  printf(" the sum of even is:%d\n the sum of odd:%d",sume,sumo);
  return 0;
}