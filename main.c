#include <stdio.h>

#include <stdlib.h>

#include <math.h>

/*
Version: 1.1
Task name: 2.30.	 Выпуклый четырехугольник задан координатами своих
вершин. Найти площадь этого четырехугольника как сумму площадей треугольников

! Программу можно улучшить добавив единицы измерения для периметра и площади.
*/
int main() {
  //Initializing Variables
  float x1, x2, y1, y2, z1, z2, w1, w2; //координаты вершин четырехугольника
  int a, b, c, d, e; //длины сторон
  float P, S, p; // P - периметр, S - площадь, p - полупериметр.
  float S2, p2, S_quadrangle; // P - периметр, S - площадь, p - полупериметр.

  puts("Please enter x1, x2, y1, y2, z1, z2, w1, w2 coordinates: ");
  scanf("%f %f %f %f %f  %f %f", & x1, & x2, & y1, & y2, & z1, & z2, & w1, w2);

  //формула нахождения длины вектора
  a = pow(x1 - x2, 2) + pow(y1 - y2, 2);
  a = sqrt(a);
  b = pow(x2 - z1, 2) + pow(y2 - z2, 2);
  b = sqrt(b);
  c = pow(z1 - x1, 2) + pow(z2 - y1, 2);
  c = sqrt(c);

  //Вычислим стороны четырехугольника d, e
  d = pow(y1 - z1, 2) + pow(y2 - z2, 2);
  d = sqrt(d);
  e = pow(z1 - w1, 2) + pow(z2 - w2, 2);
  e = sqrt(e);

  p2 = 0.5 * (b + d + e);
  S2 = p2 * (p2 - d) * (p2 - b) * (p2 - e);

  P = a + b + c; //периметр треугольника

  p = 0.5 * (a + b + c);

  //Формула Герона
  S = p * (p - a) * (p - b) * (p - c);
  S = sqrt(S);

  S_quadrangle = S + S2;

  printf("Area of a quadrangle = %f", S_quadrangle);
  return 0;
}
