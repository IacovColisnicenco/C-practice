#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task name: 2.29.	 Треугольник задан координатами своих вершин.
Найти периметр и  площадь треугольника.

! Программу можно улучшить добавив единицы измерения для периметра и площади.
*/
int main() {
    //Initializing Variables
  float x1,x2,y1,y2,z1,z2; //координаты вершин треугольника
  int a,b,c; //длины сторон
  float P, S, p; // P - периметр, S - площадь, p - полупериметр.

  puts ("Please enter x1, x2, y1, y2, z1, z2 coordinates: ");
  scanf("%f %f %f %f %f %f", &x1,&x2,&y1,&y2,&z1,&z2);


  //формула нахождения длины вектора
  a = pow(x1-x2, 2) + pow(y1-y2, 2);
  a = sqrt(a);
  b = pow(x2 - z1, 2) + pow(y2 - z2, 2);
  b = sqrt(b);
  c = pow(z1 - x1, 2) + pow (z2 - y1, 2);
  c = sqrt(c);

  P = a + b + c;

  p = 0.5*(a + b + c);

  //Формула Герона
  S = p*(p-a)*(p-b)*(p-c);
  S = sqrt(S);

printf("P - perimeter = %f, S - area = %f",P, S );
    return 0;
}
