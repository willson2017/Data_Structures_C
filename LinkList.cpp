#include <iostream>
using namespace std;


void merge(LNode *&A, LNode *&B, LNode *&C)
{
    LNode *p = A->next;
    LNode *q = B->next;
    LNode *r;
    C = A;
    C->next = NULL;
    free(B);
    while(p != NULL && q != NULL)
    {
        if (p->data < q->data)
        {
            r->next = p;
            p = p->next;
            r = r->next;
        }
        else{
            r->next = q;
            q = q->next;
            r = r->next;
        }
    }
    r->next = NULL;
    if(p != NULL)
    {
        r->next = p;
    }
    if (q != NULL)
    {
        r->next = q;
    }
}

void CreateListR(LNode *&C, int a[], int n)
{
        LNode *s, *r;
        int i;
        C = (LNode*)malloc(sizeof(LNode));
        C->next = NULL;
        r = C;
        for(i = 1; i <= n; i++)
        {
            s = (LNode*)malloc(sizeof(LNode));
            s->data = a[i];
            r->next = s;
            r = r->next;
        }

        r->next = NULL;
}

void CreateListF(LNode *&C, int a[], int n)
{
    LNode *S;
    int i;
    C = (LNode*)malloc(sizeof(LNode));
    C->next = NULL;
    for(i = 1; i <= n; i++)
    {
     S = (LNode*)malloc(sizeof(LNode));
     S->data = a[i];
     S->next = C->next;
     C->next = S;
    }
}


void merge(LNode *&A, LNode *&B, LNode *&C)
{
    LNode *p = A->next;
    LNOde *q = B->next;
    LNode *s;
    C = A;
    C->next = NULL;
    free(B);

    while(p != NULL && q != NULL)
    {
        if (p->data <= q->data)
        {
            s = p;
            p = p->next;
            s->next  = C->next;
            C->next = s;
        }
        else{
            s = q;
            q = q->next;
            s->next = C->next;
            C->next = s;
        }
    }

    while(p != NULL)
    {
        s = p;
        p = p->next;
        s->next = C->next;
        C->next = s;
    }

    while(q != NULL)
    {
        s = q;
        q = q->next;
        s->next = C->next;
        C->next = s;
    }
}

int SearchAndDelete(LNode *&C, int x)
{
    LNode *p, *q;
    p = C;
    while(p->next != NULL)
    {
        if (p->next->data == x)
            break;
        p = p->next;
    }
    if (p->next == NULL)
    {
        return 0;
    }
    else
    {
        q = p->next;
        p->next = p->next->next; //p->next = q->next;
        free(q);

        return 1;
    }

}

