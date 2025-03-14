#include <stdio.h>

int main(void)
{
    int man, woman;
    double sum, manRate, womanRate;

    printf("Input man, woman : ");
    scanf("%d %d", &man, &woman);
    sum = man + woman ;
    manRate = man/sum * 100;
    womanRate = woman/sum * 100;
    printf("PLUS %d + %d = %d\n", man, woman, man + woman);

    printf("남자의 수는 %d명이고 여자의 수는 %d명이다.\n", man, woman);
    printf("총 수는 %.f명\n남자의 비율은 %.2f%%\n남자의 비율은 %.2f%%\n", sum, manRate, womanRate);
    return 0;
}