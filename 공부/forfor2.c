#include <stdio.h>

int main()
{
    int i, n;

    for (i = 0; i < 5; i++)
    {
        for (n = 0; n + i < 5; n++)
            printf("*");
        printf("\n");
    }
    printf("별의 개수는 %d\n다", n);
}
