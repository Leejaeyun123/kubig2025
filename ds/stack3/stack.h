#ifndef STACK_H
#define STACK_H
#define STACKSIZE 100
typedef Stack
{
    int array[STACKSIZE];
    int tos;
} Stack;

void initStack(Stack stack *ps);

void push(Stack stack *ps, int data);
int pop( Stack stack *ps);

#endif