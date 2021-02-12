#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task name: 2.24.
Даны координаты на плоскости двух точек. Найти расстояние между этими точками.
*/
int main() {
    //Initializing Variables
    float S, x1, x2, y1, y2;
    puts("Please enter x1, y1 coordinates for point A:");
    scanf("%f%f",&x1,&y1);
    puts("Please enter x2, y2 coordinates for point B:");
    scanf("%f%f",&x2,&y2);

    S = (pow(x2 - x1, 2)) + (pow(y2 - y1, 2));
    S = sqrt(S);
    printf("Distance between two points: %f", S);
    return 0;
}
