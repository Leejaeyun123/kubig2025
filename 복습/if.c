#include <stdio.h>

int main(void)
{
    char a;
    int b;
    int c;

    printf("문자를 입력\n");
    scanf("%c", &a);
    printf("문자는 %c다\n", a);
    printf("숫자를 입력\n");
    scanf("%d%d", &b, &c);
    printf("숫자는 %d, %d이다\n", b, c);

    if (a == "a" && b == 5)
    {
        printf("정답1\n");
    }
    else if (a == "b" || c == 6)
    {
        printf("정답2\n");
    }
    else
    {
        ("정답이 아니다");
    }
}