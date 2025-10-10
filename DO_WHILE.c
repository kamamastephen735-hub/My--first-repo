/*
NAME STEPHEN M KAMAMA 
REGISTRATION NUMBER CT100/G/26235/25
COURSE BSC IT 
DESCRIPTION C PROGRAM FOR PASSWORD FOR DO WHILE
*/

// file: password_do_while.c
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    const char correct[] = "1234";

    do {
        printf("Enter password: ");
        if (scanf("%99s", input) != 1) {
            printf("Input error.\n");
            return 1;
        }
        if (strcmp(input, correct) != 0) {
            printf("Incorrect password. Try again.\n");
        }
    } while (strcmp(input, correct) != 0);

    printf("Access Granted\n");
    return 0;
}