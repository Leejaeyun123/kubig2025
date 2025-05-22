#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;

    if  (a > 0)
    {
        b = 1;
    }
    else if (a < 0)
    {
        b = 2;
    }
    else if (a == -1)
    {
        b = 3;
    }
    else
    {
        b = 4;
    }
    printf("%d\n", b);

    return 0;
}
