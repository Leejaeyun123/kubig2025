#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void initQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = 0;
}
void push(Queue *pq, int data)
{
    if (pq->rear == QUEUESIZE)
    {
        fprintf(stderr, "queue is full.\n");
        exit(1);
    }

    pq->array[pq->rear] = data;
    ++pq->rear;
}

int pop(Queue *pq)
{
    if (pq->rear == pq->front)
    {
        fprintf(stderr, "queue is empty.\n");
        exit(2);
    }

    int i = pq->front;
    ++pq->front;

    return pq->array[i];
}
