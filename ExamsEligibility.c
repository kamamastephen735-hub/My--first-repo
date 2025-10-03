/*
Name: Stephen M Kamama
Registration number: CT/100/G/26235/25
Course: BSc IT
Unit: introduction to programming and problem solving 
Description: checking if a student is eligible for final exams
*/

#include <stdio.h>

int main() {
    float attendance, average_marks;

    // Input student details
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}



    
