#include <stdio.h>

void main()
{
    // arithmetic instructions
    int a, b, add, sub, mul, rem, div;
    a = 3;
    b = 5;
    add = a + b;
    sub = a - b;
    mul = a * b;
    rem = a % b; // modular operator
    div = a / b;
    printf("sum:%d sub:%d mul:%d rem:%d div:%d", add, sub, mul, rem, div);

    // operator precedence
    //  * , / , % > + ,- >=
    //  also first bracket
    //  associativity (for same precedence)
    //  Left 2 Right

    // relational operators
    //  ==,>,>=,<,<=,!=
    // if output 1 means true
    // else output 0 means false
    // in we have not have true or flase
    printf("%d \n", 3 == 3);
    printf("%d \n", 3 != 2);
    printf("%d \n", 3 > 4);
    printf("%d \n", 4 < 3);
    printf("%d \n", 5 <= 5);
    printf("%d \n", 6 >= 5);

    ////logical operators
    //&&,||,!
    printf("%d \n", 3 == 3 && 4 == 4); // foucs on false
    printf("%d \n", 3 == 3 || 3 == 4); // foucs on true
    printf("%d \n", !(5 < 1));         // flip that logic

    ////assignment operators
    //+=,-=,*=,/=,%=
    printf("%d -", a);
    a += 5;
    printf("%d -\n", a);

    printf("%d -", b);
    b -= 1;
    printf("%d -\n", b);

    /// conditional operators
    // if > else if > else
    int age = 18;
    int userAge = 19;
    if (userAge > age)
        printf("eligiable \n"); // one statement for no curly bracraces
    else if (userAge == age)
        printf("you are eligiable");
    else
    {
        printf("your are not eligiable \n");
        printf("get out from here \n");
    }

    ////ternary
    // condition ? run if ture : run if flase;
    userAge > age ? printf("eligiable \n") : printf("not eligiable");

    ////switch
    int day = 5;
    switch (day)
    {
    case 5:
        printf("number was five");
        break;
    case 6:
        printf("number was six");
        break;
    default:
        printf("number was %d", day); 
        break;
    }

    ////Loop Control Instructions
    //for,while,do while loop
    for(int i =1;i<=1000;i =i+1){
        printf("%d \n",i);
    }
    //increment operator
    //i++ use then increase (post increment)
    //++i increase then use (pre increment)
    //decrement operator
    //i-- use the decrement (post decrement)
    //--i decrement the use (pre decrement)
    
    //float
    for(float f=1.0; f<=5.0;f++){
        printf("%f \n", f);
    }
    
    //char
    for(char ch = 'A'; ch <= 'Z'; ch++){
        printf("%c \n", ch);
    }

    //infinite loop
    // for(int infinite = 1; ;i++){
    //     printf("%d \n", infinite);
    // }

    ////while
    int w = 1;
    while (w<=5)
    {
       printf("Hello Wordl \n");
       w++;
    }
    
    //do while loop
    do{
        printf("%d \n",w);
        w++;
    }while(w<=5); 
    
}