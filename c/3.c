#include<stdio.h>
int main(){
    char str[100];
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);
    int length=0;
    while(str[length]!='\0'){
        if(str[i]==0){
            length='\n';
            break;
        }
        length++;
    }
    for(int i=length;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}