#ifndef STACK_H
#define STACK_H

struct Stack
{
    private:

    int *pArr;
    int size;
    int tos;
    public;

    Stack(int size);
    ~Stack();

    void push(int data);
    int pop();
};

#endif