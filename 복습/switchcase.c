#include <stdio.h>

int main()
{
    int a;
    printf("다음 중 하나를 선택하세요.");
    printf("1 입금, 2 출금, 3 송금, 4 조회\n");
    scanf("%d", &a);
    do
    {
        switch (a)
        {
        case 1:
            printf("입금을 선택하셨군요.\n");
            break;

        case 2:
            printf("출금을 선택하셨군요.\n");
            break;

        case 3:
            printf("송금을 선택하셨군요.n");
            break;

        default:
            printf("조회를 선택하셨군요.\n");
        }
    } while (a > 5);
    printf("%d를 선택하셨군요", a);
}