#include<stdio.h>

int main()
{
    // write variables:- type initialName = value;

    // integers(Numbers)
    // stores whole number without decimals
    int a = 0;

    // float
    // Stores fractional numbers, containing one or more decimals. stores 6-7 decimal digit
    float b = 75.25;

    // double
    // Stores fractional numbers, containing one or more decimals. stores 15 decimal digit
    double d = 35.343434343;

    // char(character)
    //  char use with single quote string only
    char c = 'c';

    // string
    //  string stores with array and also with double quotes
    char s[] = "vish";

    /* basic format specifiers
        %d or %i for int
        %f for float
        %lf for double
        %c for char
        %s for string
    */
    printf("my username is %s\n", s);
    printf("%i\n%f\n%lf\n%c\n%s", a, b, d, c, s);
}