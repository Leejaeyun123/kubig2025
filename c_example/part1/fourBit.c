// 볼드, 이탈릭, 쉐도우, 언더라인을 표현하는 변수를 만들어라.
// 비트 연산
#include <stdio.h>
// 볼드 1자리 비트 0b0000001
// 이탈릭 2자리 비트 0b0000010
// 쉐도우 3자리 비트 0b0000100
// 언더라인 4자리 비트 0b0001000
// 볼드이면서 언더라인 0b0001001

int main(void)
{
    unsigned char attr; // 8bit 8개 속성.
    attr = attr ^ attr; // 모두 0으로 설정
    attr = attr | 0b00000001; // attr 볼드로 설정
    printf("attr: 0x%02x\n", attr);
    attr = attr | (0b0000010 + 0b00000100); // atr 이탈릭 쉐도우 추가
    printf("attr: 0x%02x\n", attr);
    attr = attr & (~0b00000001);
    printf("attr: 0x%02x\n", attr);
    return 0;
}