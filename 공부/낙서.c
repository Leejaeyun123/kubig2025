#include <stdio.h>

    int main(){
        int a;
        int b;
        printf("두 수를 입력\n");
        scanf("%d%d", &a, &b);

        printf("나머지 : %d\n", a % b);
}