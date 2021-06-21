#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Version: 1.1
Task id: 2.33
Source: Д. Златопольский "1400 задач по программированию"
*/
int main()
{
    //Initializing
    int age1, age2;
    int arithmetic_mean;
    int age_diff_from_arithm_mean1, age_diff_from_arithm_mean2;

    printf("Please enter age one:\n");
    scanf("%d", &age1);
    printf("Please enter age two:\n");
    scanf("%d", &age2);

    arithmetic_mean = (age1 + age2) / 2;
    age_diff_from_arithm_mean1 = arithmetic_mean - age1;
    age_diff_from_arithm_mean2 = arithmetic_mean - age2;

    printf("Age difference from arithmetic mean: %d\n", abs(age_diff_from_arithm_mean1), age_diff_from_arithm_mean1);
    printf("Age difference from arithmetic mean: %d\n", abs(age_diff_from_arithm_mean2), age_diff_from_arithm_mean2);

    return 0;
}
