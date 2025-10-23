/*
Name STEPHEN M KAMAMA
Registration number CT100/G/26235/25
Course BSC IT
Description CONVERT TO CELSIUS
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(fahrenheit));
    return 0;
}