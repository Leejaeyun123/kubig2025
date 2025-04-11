#include "stack.h"
// #include <stdlib.h>
#include <cstdio>
#include <cassert>

void initStack(this, int size)
{
    this->pArr = malloc(sizeof(int) * size);
    assert(this->pArr != NULL);
    
    this->size = size;
    this->tos = 0;
}

void cleanuthistack(this->)
{
    free(this->pArr);
}
void push(this, int data)
{
 
    assert(this->tos != this -> size);


    
    this->pArr[this->tos] = data; 
    ++this->tos;
}

int pop(this)
{

  
    assert(this -> tos != 0);
    --this->tos;
   
    return this->pArr[this->tos];
}

// 111