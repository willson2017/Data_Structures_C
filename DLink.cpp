#include "header.h"


void CreateDlistR(DLNode *&L, int a[], int n)
{
    DLNode *s, *r;
    int i;
    L = (DLNode*)malloc(sizeof(DLNode));
    L->next = NULL;
    r = L;
    for(i = 1; i <= n; i++)
    {
        s = (DLNode*)malloc(sizeof(DLNode));
        s->data = a[i];
        r->next = s;
        s->prior = r;
        r = s;
    }
    r->next = NULL;
}

DLNode* FindNode(DLNode *C, int x)
{
    DLNode *p = C->next;
    while(p != NULL)
    {
        if (p->data == x)
            break;
        p = p->next;
    }

    return p;
}
