#include <stdio.h>

int main(void)
{   
    int i, j;

    for (i = 0; i < 5; i++)     
    {
        for (j = 5; j > i; j--)
        {
            printf("*");            // 역피라미드
        }
        printf("\n");
    }
    /*for (i = 0; i < 5; i++)
    {
        for (j = 0; j < i+1; j++)
        {
            printf("*");            // 피라미드
        }
        printf("\n");
    }*/
    return 0;
}