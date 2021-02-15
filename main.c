#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task name: 2.28.	 Даны основания равнобедренной трапеции и  угол при
большем основании. Найти площадь трапеции.
*/
int main() {
    //Initializing Variables
    float a, b, angle, angle_rad, S, h;

    puts("Please enter trapezoid base, a(min base), b(max base): ");
    scanf("%f%f",&a,&b);
    puts("Please enter angle (in degree) exemple value - 30, 45 etc.: ");
    scanf("%f", &angle);
    angle_rad = (angle*3.14)/180; //переводим градусы в радианы т.к функция tanf() принимает аргумент в радианах
    h = 2*tanf( angle_rad );
    S = ((a + b)/2)*h;

    printf("Trapezoid area %f", S);


    return 0;
}
