#include <stdio.h>

int main(void)
{
    int a;
    printf("1~10까지의 숫자만 입력 : \n");
    scanf("%d", &a);

    if (a <= 10)
    {
        printf("ok\n");
    }
    else
        printf("no\n");
}