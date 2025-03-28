/*Exercise 6: Enter a string from the keyboard, let’s print the string in reverse.*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int i , leng;
    printf("\n please enter any string:");
    fgets(str,100,stdin); //fgets(str,100,stdin)
    leng=strlen(str);
    printf("\n string after reversing:");
    for(i =leng -1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}