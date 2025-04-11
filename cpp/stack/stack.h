#ifndef STACK_H
#define STACK_H

struct stack
{

    int *pArr;
    int size;
    int tos;

    Stack(int size);
    ~Stack();

    void push(int data);
    int pop();
};

#endif