#include "header.h"


int LocateItem(Sqlist L, int x)
{
    int i;
    for(i = 1; i < L.length(); i++)
    {
        if (x < L.data[i])
        {
            return i;
        }
    }
    return i;
}

void insert(Sqlist &L, int x)
{
    int p, i;
    p = LocateEle(L, x);
    for(i = L.length; i >= p; i--)
    {
        L.data[i+1] = L.data[i];
    }
    L.data[p] = x;
    L.length++;
}

int LocateItem(Sqlist L, int e)
{
    int i;
    for(i  = 1; i <= L.length(); i++)
    {
        if (e == L.data[i])
            return i;
    }
    return 0;
}

int insert(Sqlist &L, int p, int e)
{
    int i ;
    if (p < 1 || p > L.length || L.Length == MAX)
    {
        return 0;
    }

    for(i = L.length(); i >= p; i--)
    {
        L.data[i+] = L.data[i];
    }
    L.data[p] = e;
    L.length++;
    return 1;

}


int listDelete(Sqlist &L, int p, int e)
{
    int i;
    if (p < 1 || p > L.length) return 0;
    e = L.data[p];
    for(i = p ; i <= L.length; i++)
        L.data[i] = L.data[i+1];
    L.length--;
    return 1;
}

void InitList(Sqlist &L)
{
    L.length = 0;
}

int GetElem(Sqlist L, int p, int &e)
{
    if (p < 1 || p > L.length)
        return 0;
    e = L.data[p];
    return 1;
}
