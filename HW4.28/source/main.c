
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int paycode;
    int hours, pieces;
    double salary, rate, sales;

    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1)
    {
        switch (paycode)
        {
        case 1:
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);

            printf("Manager's pay is: $%.2f\n", salary);
            break;

        case 2:
            printf("Enter hours worked: ");
            scanf("%d", &hours);

            printf("Enter hourly rate: ");
            scanf("%lf", &rate);

            if (hours <= 40)
            {
                salary = hours * rate;
            }
            else
            {
                salary = 40 * rate
                    + (hours - 40) * rate * 1.5;
            }

            printf("Hourly worker's pay is: $%.2f\n", salary);
            break;

        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);

            salary = 250.0 + sales * 0.057;

            printf("Commission worker's pay is: $%.2f\n", salary);
            break;

        case 4:
            printf("Enter pieces produced: ");
            scanf("%d", &pieces);

            printf("Enter pay per piece: ");
            scanf("%lf", &rate);

            salary = pieces * rate;

            printf("Pieceworker's pay is: $%.2f\n", salary);
            break;

        default:
            printf("Invalid paycode. Please enter 1 to 4.\n");
            break;
        }

        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}
