#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.0
Task name:
*/
int main() {
    //Initializing Variables
float a,b,c, e,f,g,h;

printf("enter values for variables e, f, g: ");
scanf("%f%f%f",&e,&f,&g);

  a = e - 3/f;
  a = abs(a);
  a = pow(a,3);
  a = sqrt(a);
  a = a + g;

  b = sin(e) + ((1 + (cos(2)*h))/2);

  c = (33*g)/(e*f-3);

  printf("val. func. a= %f,\nval. func. b= %f,\n val. func. c= %f",a,b,c );


    return 0;
}
