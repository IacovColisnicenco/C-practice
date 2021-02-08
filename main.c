#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name:
*/
int main() {
    //Initializing Variables
    float  e, f, g , h;
    float a,b,c;

    printf("enter e,f,g,h - values: ");
    scanf("%f%f%f%f",&e,&f,&g,&h);

    a = (e + f/2)/3;
    b = abs(h*h - g);
    c = (g*g - 2*g*h + h*h) - 3*sin(e);

    printf("func. values a= %f, b =%f, c = %f\n",a,b,c); 

    return 0;
}
