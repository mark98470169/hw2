#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    int i, j;
    for (i = 1; i <= 9; i++){
        int stars;
        int spaces;
        if (i <= 5)
            stars = 2 * i - 1;
        else
            stars = 2 * (10 - i) - 1;
        spaces = (9 - stars) / 2;
        for (j = 1; j <= spaces; j++)
            printf(" ");
        for (j = 1; j <= stars; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
