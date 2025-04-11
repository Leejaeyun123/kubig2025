#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void initQueue(Queue *pq, int size, int eleSize)
{
    pq->pArr = malloc(eleSize * size);
    assert(pq->pArr);

    pq->eleSize = eleSize;
    pq->size = size;
    pq->rear = 0;
    pq->front = 0;
}

void cleanupQueue(Queue *pq)
{
    free(pq->pArr);
}

void push(Queue *pq, const void *pData)
{
    assert(pq->rear != pq->size);

    memcpy((unsigned char*)pq->pArr + pq->rear * pq->eleSize, pData, pq->eleSize);
    ++pq->rear;
}

int pop(Queue *pq, void *pData) // 반환 타입을 int로 수정
{
    if (pq->rear == pq->front) {
        return -1; // 큐가 비어있을 경우 오류 코드 반환
    }

    int i = pq->front;
    ++pq->front;

    memcpy(pData, (unsigned char*)pq->pArr + i * pq->eleSize, pq->eleSize);
    return 0; // 성공적으로 데이터를 꺼냈을 경우 0 반환
}