// 1D
/*
Name STEPHEN M KAMAMA
Registration number CT100/G/26235/25
Course BSC IT
Description HOTEL TOTAL RECORD REVENUE FOR SEVEN DAYS
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0;
    int i;

    printf("Enter revenue for each day of the week (7 values):\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    printf("\nTotal weekly revenue = %.2f\n", total);
    printf("Average daily revenue = %.2f\n", total / 7);

    return 0;
}