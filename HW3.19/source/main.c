#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double principal = 0, rate = 0,loan=0;
	int days = 0;
	while (principal != -1) {
		printf("Enter loan principal(-1 to end):");
		scanf("%lf", &principal);
		printf("Enter interest rate:");
		scanf("%lf", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &days);
		loan = principal * rate * days / 365;
		printf("The interest charge is $%.2lf", loan);
		printf("\n");
	}

}