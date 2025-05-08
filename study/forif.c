// n부터 m까지의 짝수의 개수
#include <stdio.h>

int main()
{
    int i, a, b, x;
    x = 0;
    scanf("%d%d", &a, &b);

    for (i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            x = x + 1;
        }
    }
    printf("짝수의 개수는 %d다.", x);
}