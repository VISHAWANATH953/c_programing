#include <stdio.h>

void main(){
    char ch;
    printf("Enter Char: ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("%c is uppercase", ch);
    }else if(ch >= 'a' && ch <= 'z'){
        printf("%c is lowercase",ch);
    }else{
        printf("Invalid!");
    }

}