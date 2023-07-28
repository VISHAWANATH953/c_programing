#include <stdio.h>

void main(){
    int userAge, age = 18;
    printf("Enter Your Age : ");
    scanf("%d", &userAge);
    if(userAge >= age){
        printf("You are eligible for voter ID& driver licence.");
    }else{
        printf("You are not eligible.");
    }
}