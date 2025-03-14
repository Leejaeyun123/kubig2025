// 임의의 char를 scanf로 하나 받아서 대문자인지 소문자인지 출력하세요.
# include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 하나 넣으세요 : ");
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        printf("%c는 대문자입니다\n.", ch);
    } 
    else if ('a' <= ch && ch <= 'z')
    {    
        printf("%c는 소문자입니다.\n", ch);
    }
    else
    {
        printf("%c는 영문자가 아닙니다.\n", ch);
    }
        return 0;
}