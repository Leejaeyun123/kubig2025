#include "stack.h"

void push(struct stack *ps, int data)
{
    //stack[s.tos] = data;
    //++s.tos;
    (*ps).array[(*ps).tos] = data;
    ++(*ps).tos;
}
int pop(struct stack *ps)
{
    //++s.tos;
    //return s.array[s.tos];
    --(*ps).tos;
    return (*ps).array[(*ps).tos];
}