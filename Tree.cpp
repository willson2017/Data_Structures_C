#include "header.h"

typedef struct BTNode
{
    char data;
    BTNode *left;
    BTNode *right
};


void preorder(BTNode *p)
{
    if (p != NULL)
    {
        visit(p);
        preorder(p->left);
        preorder(p->left);
    }
}


void inorder(BTNode *p)
{
    if (p != NULL)
    {
        inorder(p->left);
        visit(p);
        inorder(p->right);
    }
}


void postorder(BTNode *p)
{
    if (p != NULL)
    {
        postorder(p->left);
        postorder(p->right);
        visit(p);
    }
}
