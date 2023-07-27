#include <stdio.h>

void main(){
    //INIT Radius
    float radius;

    //GET Input
    printf("Enter Radius : ");
    scanf("%f", &radius);

    //Calculate Area of Circle
    float areaOfCircle = 3.14 * radius * radius;

    //OUTPUT
    printf("Area Of Circle Is : %f", areaOfCircle);

}