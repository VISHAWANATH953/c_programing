#include <stdio.h>

void main(){
    // Intializing Sides
    float sides;
    
    //Get Input From User
    printf("Enter A Sides : ");
    scanf("%f", &sides);

    //Calculating Area Of Squre
    float areaOfSquare = sides * sides;

    //Output : Showing Result
    printf("Area is : %f", areaOfSquare);

}