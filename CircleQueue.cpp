#include "header.h"

void InitQueue(SqQueue &qu)
{
    qu.front = qu.rear = 0;
}

int QueueEmpty(SqQueue qu)
{
    if (qu.front == qu.rear) //empty
        return 1;
    else
        return 0;
}

int enQueue(SqQueue &qu, int x)
{
    if ((qu.rear+1)%MAX == qu.front) //the queue is full
        return 0;
    qu.rear  = (qu.rear+1)%MAX; //change the rear position
    qu.data[qu.rear] = x;
    return 1;
}

int deQueue(SqQueue &qu, int &x)
{
    if (qu.front == qu.rear) //empty
    {
        return 0;
    }

    qu.front = (qu.front+1)%MAX;
    x = qu.data[qu.front];
    return 1;
}
