/*
Name: Stephen M Kamama
Registration number: CT/100/G/26235/25
Course: BSc IT
Unit: introduction to programming and problem solving 
Description: C program calculating the water bills 
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user for input
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else if-else
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + (units - 30) * 25.0;
    } else {
        bill = (30 * 20.0) + (30 * 25.0) + (units - 60) * 30.0;
    }

    // Display total bill with 2 decimal places
    printf("Total water bill: KES %.2f\n", bill);

    return 0;
}



    
