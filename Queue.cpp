#include "header.h"

//link Queue
void InitQueue(LiQueue *&lqu)
{
    lqu = (LiQueue *)malloc(sizeof(LiQueue));
    lqu->front = lqu->rear = NULL;
}

int QueueEmpty(LiQueue *lqu)
{
    if (lqu->rear == NULL || lqu->rear == NULL)
        return 1;
    else
        return 0;
}

void enQueue(LiQueue *&lqu, int x)
{
    QNode *p;
    p = (QNode *)malloc(sizeof(QNode));
    p->data = x;
    p->next = NULL;
    if (lqu->rear == NULL)
        lqu->front = lqu->rear = p;
    else
    {
        lqu->rear->next = p;
        lqu->rear = p;
    }
}


int deque(LiQueue *&lqu, int &x)
{
    QNode *p;
    if(lqu->rear == NULL)
    {
        return 0;
    }
    p = lqu->front;
    if (lqu->front == lqu->rear)
        lqu->front = lqu->rear = NULL;
    else
        lqu->front = lqu->front->next;
    x = p->data;
    free(p);
    return 1;
}
