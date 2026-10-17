
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c;

    for (a = 1; a <= 500; a++)
    {
        for (b = a; b <= 500; b++)
        {
            for (c = b + 1; c <= 500; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
