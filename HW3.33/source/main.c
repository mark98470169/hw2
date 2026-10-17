#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int l=0, w=0;
	scanf("%d%d", &l, &w);
	int i, j;
	for (int i= 1;i <= l;i++) {
		for (int j = 1;j <= w;j++) {
			if (i == 1 || i == l || j == 1 || j == w)
				printf("+");
			else
				printf(" ");
		}printf("\n");
	}
}