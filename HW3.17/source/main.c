#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int account;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;
    double newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    while (account != -1)
    {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);

        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit)
        {
            printf("\nAccount: %d\n", account);
            printf("Credit Limit: %.2f\n", creditLimit);
            printf("Balance: %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\nEnter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}
