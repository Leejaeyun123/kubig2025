#include <stdio.h>

int main()
{
    int a;
    do
    {
        printf("메뉴를 고르세요\n");
        printf("1.짜장면\n");
        printf("2.짬뽕\n");
        printf("3.볶음밥\n");
        printf("4.탕수육\n");
        scanf("%d", &a);
    } while (a > 4);
    printf("%d를 선택하셨습니다.", a);
}