#include<stdio.h>
int main(){
    char str[100];
    int length=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0'){
        if(str[length]=='\n'){
            str[length]='\0';
            break;
        }

        length++;
    }
    printf("%d",length);
    return 0;
}