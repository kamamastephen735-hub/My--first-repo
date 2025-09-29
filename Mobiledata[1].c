/*
Name: Stephen M Kamama
Registration number: CT/100/G/26235/25
Course: BSc IT
Unit: introduction to programming and problem solving 
Description: C program for mobile data Bundles purchase 
*/

#include <stdio.h>

int main() {
    int choice;

    // Display menu
    printf("Internet Data Bundles:\n");
    printf("1. 100 MB  - KES 50\n");
    printf("2. 500 MB  - KES 200\n");
    printf("3. 1 GB    - KES 350\n");
    printf("4. 2 GB    - KES 600\n");

    // Ask user for choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Process choice using switch
    switch (choice) {
        case 1:
            printf("You selected: 100 MB - Cost: KES 50\n");
            break;
        case 2:
            printf("You selected: 500 MB - Cost: KES 200\n");
            break;
        case 3:
            printf("You selected: 1 GB - Cost: KES 350\n");
            break;
        case 4:
            printf("You selected: 2 GB - Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}





    