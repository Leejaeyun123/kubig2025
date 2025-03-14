// 1~10까지 while로 출력하기
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 10)
    {
        printf("%d번 출력입니다.\n", i + 1);
           ++i;
    }
    return 0;
}