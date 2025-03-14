#include <stdio.h>

int main(void)
{
    char ch;
    char str[100];

    printf("문자를 입력하세요:");
    ch = getc(stdin);
    printf("입력한 문자를 %c입니다.", ch);

    ch = getchar();
    printf("입력한 문자는 %c입니다.", ch);
    scanf("%s", str);
    printf("입력한 문자열은 %s입니다.", str);
}