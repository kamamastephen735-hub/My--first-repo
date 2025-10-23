/*
Name STEPHEN M KAMAMA
Registration number CT100/G/26235/25
Course BSC IT
Description FARE CALCULATION 
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}