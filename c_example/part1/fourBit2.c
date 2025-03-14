// 볼드, 이탈릭, 쉐도우, 언더라인을 표현하는 변수를 만들어라.
// 비트 연산
#include <stdio.h>
// 볼드 1자리 비트 0b0000001
// 이탈릭 2자리 비트 0b0000010
// 쉐도우 3자리 비트 0b0000100
// 언더라인 4자리 비트 0b0001000
// 볼드이면서 언더라인 0b0001001
#define BOLD 0x01
#define ITALIC (0x01 << 1) // 0x02
#define SHADOW (0x01 << 2) // 0x04
#define UL     (0x01 << 3) // 0x08

void prinAttrib(unsigned char attr);

int main(void)
{
    unsigned char attr; // 8bit 8개 속성.
    attr = attr ^ attr; // 모두 0으로 설정
    attr = attr | BOLD; // attr 볼드로 설정
    prinAttrib(attr);
    printf("attr: 0x%02x\n", attr);
    attr = attr | (ITALIC | SHADOW); // atr 이탈릭 쉐도우 추가
    prinAttrib(attr);
    printf("attr: 0x%02x\n", attr);
    attr = attr & (~BOLD);
    printf("attr: 0x%02x\n", attr);
    prinAttrib(attr);

    return 0;
}

    void prinAttrib(unsigned char attr)
{
    // printf("attr: 0x%02x\n", attr);
    // printf("BOLD : %d\n", !(~(attr | ~BOLD)));
    // printf("ITALIC : %d\n", !(~(attr | ~ITALIC) >> 1));
    // printf("SHADOW : %d\n", !(~(attr | ~SHADOW) >> 2));
    // printf("UL : %d\n", !(~(attr | ~UL)) >> 3);
    // printf("--------------------------------------------\n")
    printf("BOLD : %d\n", !(~(attr | ~BOLD)));
    printf("ITALIC : %d\n", !(~(attr | ~ITALIC) >> 1));
    printf("SHADOW : %d\n", !(~(attr | ~SHADOW) >> 2));
    printf("UL : %d\n", !(~(attr | ~UL)) >> 3);
    printf("--------------------------------------------\n");
}


