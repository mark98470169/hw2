#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    double sales=0;
    double total=200;
    while(sales != -1) {
        printf("Enter sales in dollars (-1 to end):");
        scanf("%lf",&sales);
        total += sales * 0.09;
        printf("Salary is:%.2f\n", total);
    }
    
}