// file: guessing_game.c
/*
NAME STEPHEN M KAMAMA 
REGISTRATION NUMBER CT100/G/26235/25
COURSE BSC. IT
DESCRIPTION A C PROGRAM FOR GUESSING GAME
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secret, guess;
    int attempts = 0;

    srand((unsigned) time(NULL));
    secret = (rand() % 20) + 1; // number in 1..20

    printf("I have chosen a number between 1 and 20. Try to guess it!\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempt%s.\n", attempts, attempts==1 ? "" : "s");
        }
    } while (guess != secret);
    return 0;
}