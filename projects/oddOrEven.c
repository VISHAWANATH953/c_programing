#include <stdio.h>

void main(){
    // even -> 1
    // odd -> 0
    int x;
    printf("1 = True / 0 = False");
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("%d", x % 2 == 0);
}