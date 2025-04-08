#ifndef STACK_H
#define STACK_H

struct stack
{
    int array[100];
    int tos;
};

void push(struct stack *ps, int data);
int pop(struct stack *ps);

#endif