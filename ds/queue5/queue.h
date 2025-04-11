#ifndef QUEUE_H
#define QUEUE_H
// #define QUEUESIZE 100
typedef struct queue
{
    // int array[QUEUESIZE];

    void *pArr;
    int size;
    int eleSize;
    int rear;
    int front;
} Queue;

void initQueue(Queue *pq, int size, int eleSize);
void cleanupQueue(Queue *pq);
void push(Queue *pq, const void *pData);
int pop(Queue *pq, void *pData);

#endif