#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name: 2.24 1400 zada4, Zlatopolskii
Эту задачу можно решить с двумя переменными, но возрастает число команд ввода/выода
*/
int main() {
    //Initializing Variables, two-variable solution
    int a,b;

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a = a + b;
printf("Sum is: %d",a );

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a = abs(a - b);
printf("\nDifference is: %d",a );

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a = a*b;
printf("\nMultiplication is: %d",a );
//divide
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
a = a/b;
printf("\nDivide: %d",a );




    return 0;
}
