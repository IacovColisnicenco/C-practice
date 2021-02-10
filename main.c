#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name: 2.24 1400 zada4, Zlatopolskii
*/
int main() {
    //Initializing Variables, three-variable solution
    int a,b,c;

printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
c = a + b;
printf("Sum is: %d",c );
c = abs(a - b);
printf("\nDifference is: %d",c );
c = a*b;
printf("\nMultiplication is: %d",c );
//divide
c = a/b;
printf("\nDivide: %d",c );




    return 0;
}
