
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(){
    double principal = 5000.0;
    double rate;
    double amount;

    printf("Interest Rate\tAmount on Deposit\n");

    for (rate = 10.0; rate <= 12.0; rate += 0.5)
    {
        amount = principal * pow(1.0 + rate / 100.0, 15);

        printf("%.1f%%\t\t$%.2f\n", rate, amount);
    }

    return 0;
}
