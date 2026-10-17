#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int hours = 0;
	double rate = 0,salary=0;
	while (hours != -1) {
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hours);
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%lf", &rate);
		if (hours > 40)
			salary = (40+ (hours - 40) * 1.5)*rate;
		else
			salary = hours * rate;
		printf("Salary is $%.2f\n", salary);
	}
}