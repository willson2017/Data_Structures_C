#include "header.h"


void Bsearch(int R[], int low, int high, int k)
{
    int mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if (R[mid] == k)
            return mid;
        else if (R[mid] > k)
            high = mid-1;
        else
            low = mid+1;
    }

    return 0;
}

//binary search tree
BTNode* BSTSearch(BTNode *bt, int key)
{
    if (bt == NULL)
        return NULL;
    else
    {
        if (bt->key == key)
            return bt;
        else if (bt->key < key)
            return BSTSearch(bt->lchild, key);
        else
            return BSTSearch(bt->rchild, key);
    }
}


int BSTInsert(BTNode *&bt, int key)
{
    if (bt == NULL)
    {
        bt = (BTNode*)malloc(sizeof(BTNode));
        bt->lchild = bt->rchild = NULL;
        bt->key = key;
        return 1;
    }
    else{
        if (bt->key == key)
        {
            return 0;
        }
        else if (key < bt->key)
            return (BSTInsert(bt->lchild, key));
        else
            return (BSTInsert(bt->rchild, key));
    }

}

void CreateBST(BTNode *&bt, int key[], int n)
{
    int i;
    bt = NULL;
    for (i = 1; i <=n; i++)
    {
        BSTInsert(bt, key[i]);
    }
}




