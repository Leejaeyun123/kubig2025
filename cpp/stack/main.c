#include <stdio.h>
#include "stack.h"

int main()
{
    Stack s1(10), s2(100);
    // s1.initStack(&s1, 10);
    // s2.initStack(&s2, 100);

    s1.push(100);
    s1.push(200);
    s1.push(300);
    printf("s1 1st pop(): %d\n", s1.pop());
    printf("s1 2nd pop(): %d\n", s1.pop());
    printf("s1 3rd pop(): %d\n", s1.pop());

    s2.push(900);
    s2.push(800);
    s2.push(700);
    printf("s2 1st pop(): %d\n", s2.pop());
    printf("s2 2nd pop(): %d\n", s2.pop());
    printf("s2 3rd pop(): %d\n", s2.pop());
    // cleanupStack(&s1);
    // cleanupStack(&s2);
    return 0;
}
