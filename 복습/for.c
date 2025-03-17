#include <stdio.h>

void main()
{
    int i, n;
    char name[10];
    printf("반복하고 싶은 말은?:");
    scanf("%s", name);
    printf("몇번 반복할까요?:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%s \n", name);
    }
    printf("\n %s를 %d반복", name, n);
}
