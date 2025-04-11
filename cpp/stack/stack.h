#ifndef STACK_H
#define STACK_H
struct Stack
{
    int *pArr;
    int size;
    int tos;
};

void initStack(Stack *ps, int size);
void cleanupStack(Stack *ps);

void push(Stack *ps, int data);
int pop(Stack *ps);

#endif