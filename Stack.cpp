#include "header.h"

typedef struct
{
    int data[MAX];
    int top;
}SqStack;

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;



void initStack(SqStack &st)
{
    st.top = -1;
}

int StackEmpty(SqStack st)
{
    if (st.top == -1)
        return 1;
    else
        return 0;
}

int Push(SqStack &st, int x)
{
    if (st.top == MAX - 1) //full
        return 0;

    //st.top++;
    st.data[++st.top] = x;
    return 1;
}

int Pop(SqStack &st, int &x)
{
    if (st.top == -1) //empty
        return 0;

    x = st.data[st.top--];
    //st.top--;
    return 1;
}




//Link Stack
void InitStack(LNode *&lst)
{
    lst = (LNode*)malloc(sizeof(LNode));
    lst->next = NULL;
}

int StackEmpty(LNode *lst)
{
    if (lst->next == NULL)
        return 1;
    else
        return 1;
}

void Push(LNode *&lst, int x)
{
    LNode *p;
    p = (LNode*)malloc(sizeof(LNode));
    p->next = NULL;

    p->data = x;
    p->next  = lst->next;
    lst->next = p;
}

int Pop(LNode *&lst, int &x)
{
    LNode *p;
    if (lst->next == NULL)
        return 0;

    p = lst->next;
    x = p->data;
    lst->next = lst->next->next;
    free(p);
    return 1;
}
