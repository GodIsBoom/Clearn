#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

bool InitLinkList(LinkList &L){
    L=NULL;
    return true;
}