#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <iostream>
#include <string>

using namespace std;

#define MAX 100
typedef struct
{
    int data[MAX];
    int length;
} Sqlist;

typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;


typedef struct DLNode
{
    int data;
    struct DLNode *prior;
    struct DLNode *next;
} DLNode;


typedef struct
{
    int data[MAX];
    int front;
    int rear;
}SqQueue;


typedef struct QNode
{
    int data;
    struct QNode *next;
}QNode;

typedef struct LiQueue
{
    QNode *front;
    QNode *rear;
}LiQueue;

#endif // HEADER_H_INCLUDED
