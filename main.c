#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task 2.25: Даны длины сторон прямоугольного параллелепипеда.
Найти его объем и  площадь боковой поверхности
*/
int main() {
  int V, S_bok, a, b, c; //Initializing Variables

  printf("Enter a, b, c: ");
  scanf("%d%d%d",&a,&b,&c);
    V = a*b*c;
    S_bok = 2*((a*b) + (a*c));
  printf("V = %d, S_bok= %d", V,S_bok);
  return 0;
}
