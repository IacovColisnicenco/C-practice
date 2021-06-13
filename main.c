#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task name: 2.32 Zlatopoliskii 1400 zada4 po programmirovaniu
*/
int main() {
    //Initializing Variables
int display_cost, system_unit_cost, keyboard_cost, mouse_cost;
int total_computer_cost1, total_computers_cost3, total_computers_costN;
int computers_amount;

printf("Display cost\n:");
scanf("%d",&display_cost);

printf("System unit cost\n:");
scanf("%d",&system_unit_cost);

printf("Keyboard cost:\n");
scanf("%d",&keyboard_cost);

printf("Mouse cost\n:");
scanf("%d",&mouse_cost);

printf("Enter computers amount\n:");
scanf("%d",&computers_amount);

total_computer_cost1 = display_cost + system_unit_cost + keyboard_cost + mouse_cost;
total_computers_cost3 = total_computer_cost1 * 3;
total_computers_costN = total_computer_cost1 * computers_amount;

printf("3 computers cost - %d\n", total_computers_cost3);
printf("N computers cost - %d\n", total_computers_costN);

    return 0;
}
