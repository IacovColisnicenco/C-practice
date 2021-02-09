#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name:
*/
int main() {
    //Initializing Variables
    float P, a, b, d;

    printf("Find the perimeter of a rectangle, enter a, b: ");
    scanf("%f%f",&a,&b);

    P = 2*(a + b);
    d = sqrt((a*a) + (b*b));

    printf("Perimeter of a rectangle P=%f\n", P);
    printf("Diagonal length of a rectangle d=%f",d);   


    return 0;
}
