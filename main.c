#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name: Zlatopolskii 1400 zada4 2.22
*/
int main() {
    //Initializing Variables
    float a , b, A, G;

    printf("enter a, b numbers: ");
    scanf("%f%f",&a,&b);
    a = abs(a);
    b = abs(b);
    printf("mod a:%f, mod b:%f\n",a,b);
    A = (a+b)/2;
    G = sqrt(a*b);
    printf("Sred. arifm.: %f, Sred. geom.: %f",A,G);

    return 0;
}
