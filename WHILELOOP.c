// file: atm_withdrawla.c 
/*
NAME STEPHEN M KAMAMA 
REGISTRATION NUMBER CT100/G/26235/25
COURSE BSC IT
DESCRIPTION C PROGRAM FOR WHILE LOOP FOR BANK ATM WITHDRAWAL 
*/

#include <stdio.h>

int main(void) {
    double balance;
    printf("Enter initial account balance: ");
    if (scanf("%lf", &balance) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    while (balance > 0.0) {
        double withdraw;
        printf("\nCurrent balance: %.2f\n", balance);
        printf("Enter amount to withdraw (enter 0 to stop): ");
        if (scanf("%lf", &withdraw) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        if (withdraw == 0.0) {
            printf("Withdrawal session ended by user.\n");
            break;
        } else if (withdraw < 0.0) {
            printf("Enter a positive amount.\n");
        } else if (withdraw > balance) {
            printf("Insufficient funds. You tried to withdraw %.2f but balance is %.2f\n", withdraw, balance);
        } else {
            balance -= withdraw;
            printf("Withdrawal successful. New balance: %.2f\n", balance);
        }
    }

    if (balance <= 0.0) {
        printf("\nAccount balance is zero or negative. No more withdrawals allowed.\n");
    }

    printf("Session finished.\n");
    return 0;
}
    