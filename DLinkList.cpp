#include <stdio.h>
#include <stdlib.h>

typedef struct DNode
{
    int data;
    struct DNode *prior,*next;
}DNode,*DLinkList;

bool InitDLinkList(DLinkList &L){
    L=(DNode*)malloc(sizeof(DNode));
    if (L==NULL)
    {
        return false;
    }
    L->next=NULL;
    L->prior=NULL;
    return true;
}

bool Empty(DLinkList &L){
    if (L->next==NULL)
    {
        return true;
    }else return false;
}

bool InsertNextNode(DNode *p,DNode *s){
    if (p==NULL||s==NULL)
    {
        return false;
    }
    if (p->next!=NULL`)
    {
        p->next->prior=s;
    }
    
    s->next=p->next;
    s->prior=p;
    p->next=s;
    return true;
}

bool DeleteNextNode(DNode *p){
    if (p==NULL||p->next==NULL)
    {
        return false;
    }
    DNode *q=p->next;
    p->next=q->next;
    if (q->next!=NULL)
    {
        q->next->prior=p;
    }
    free(q);
    return true;
}



