#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task name: 2.31.	 Известна стоимость 1 кг конфет, печенья и яблок. Найти
стоимость всей покупки, если купили x кг конфет, у  кг печенья
и  z кг яблок.

пример как делать не нужно, слишко много переменных. Лучше делать обобщенно, можно использовать циклы
для автоматизации.
*/
int main() {
    //Initializing Variables
float price_bonbons, price_cookies, price_apples;
float cost_bonbons, cost_cookies, cost_apples, total_cost; //input data
float amount_bonbons, amount_cookies, amount_apples; //input data

printf("Enter cost bonbons, cost cookies, cost apples (RUB) ex- 90 45 10: \n");
scanf("%f %f %f", &cost_bonbons,  &cost_cookies,  &cost_apples );
printf("Enter amount bonbons, amount_cookies, amount_apples (kg) ex- 1 2 3: \n");
scanf("%f %f %f", &amount_bonbons,  &amount_cookies,  &amount_apples );


price_bonbons = cost_bonbons/amount_bonbons;
price_cookies = cost_cookies/amount_bonbons;
price_apples = cost_apples/amount_apples;

cost_bonbons = price_bonbons*amount_bonbons;
cost_cookies = price_cookies*amount_cookies;
cost_apples = price_apples*amount_apples;

total_cost = cost_bonbons + cost_cookies + cost_apples;

printf("Total cost: %f", total_cost);


return 0;
}
