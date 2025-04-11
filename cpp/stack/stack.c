#include "stack.h"
// #include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initStack(this, int size)
{
    ps->pArr = malloc(sizeof(int) * size);
    assert(ps->pArr != NULL);
    
    ps->size = size;
    ps->tos = 0;
}

void cleanupStack(this->)
{
    free(ps->pArr);
}
void push(this, int data)
{
 
    assert(ps->tos != ps -> size);


    
    this->pArr[this->tos] = data; 
    ++this->tos;
}

int pop(this)
{

  
    assert(this -> tos != 0);
    --this->tos;
   
    return ps->pArr[this->tos];
}