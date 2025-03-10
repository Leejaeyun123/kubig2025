// 짝수 홀수 구별하기 짝수이면 1 홀수이면 9
#include <stdio.h>

int main(void)
{
    int num;
    printf("숫자를 넣으세요: ");
    scanf("%d", &num);

    int is0dd;
    is0dd = (num % 2 == 1);

    printf("num: %d \t is0dd : %d\n", num, is0dd);
    return 0;
}