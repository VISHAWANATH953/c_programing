#include <stdio.h>

void main(){
    // arithmetic instructions
    int a,b,add,sub,mul,rem,div;
    a = 3;
    b = 5;
    add = a + b;
    sub = a - b;
    mul = a * b;
    rem = a % b; //modular operator
    div = a / b;
    printf("sum:%d sub:%d mul:%d rem:%d div:%d",add,sub,mul,rem,div);
    
    //operator precedence
    // * , / , % > + ,- >=
    // also first bracket
    // associativity (for same precedence)
    // Left 2 Right

    //relational operators
    // ==,>,>=,<,<=,!=
    //if output 1 means true
    //else output 0 means false
    //in we have not have true or flase
    printf("%d \n", 3==3);
    printf("%d \n", 3!=2);
    printf("%d \n", 3>4);
    printf("%d \n", 4<3);
    printf("%d \n" ,5<=5);
    printf("%d \n", 6>=5);

}