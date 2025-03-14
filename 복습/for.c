#include <stdio.h>

int main()
{
    int i;
    char a;
    printf("이름을 입력");
    scanf("%c", &a);
    for (i = 1; i <= 5; i++)
    {
        printf("%c \n", a);
    }
    printf("%c\n를 5번 반복하였습니다.", a);
}