//account creation,pin generation, withdrawal,min balance threshold
#include <stdio.h>
#include <stdlib.h>

int main() {
    int accountNumber, pin, enteredPin;
    float balance, withdrawAmount;
    float minBalance = 1000;


    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);


    printf("Set your 4-digit PIN: ");
    scanf("%d", &pin);

    printf("\nAccount created successfully!\n");

    
    printf("\nEnter PIN to withdraw money: ");
    scanf("%d", &enteredPin);

    if (enteredPin == pin) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawAmount);

        if (withdrawAmount <= balance) {
            balance -= withdrawAmount;
            printf("Withdrawal successful!\n");
        } else {
            printf("Insufficient balance!\n");
        }
    } else {
        printf("Incorrect PIN!\n");
        return 0;
    }
    if (balance < minBalance) {
        printf("Warning: Balance below minimum threshold!\n");
    }

    printf("Remaining Balance: %.2f\n", balance);

    return 0;
}