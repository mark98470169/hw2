#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,j;
	for(i=1;i<=10;i++){
		for (j = 0;j < i;j++)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	for (i = 1;i <= 10;i++) {
		for (j = 11;j > i;j--)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	for (i = 1;i <= 10;i++) {
		for (j = 1;j < i;j++)
			printf("%s", " ");
		for (j = 11;j > i;j--)
			printf("%s", "*");
		printf("\n");
	}
	printf("\n");
	for (i = 1;i <= 10;i++) {
		for (j = 10;j > i;j--)
			printf("%s", " ");
		for (j = 0;j < i;j++)
			printf("%s", "*");
		printf("\n");
	}
}