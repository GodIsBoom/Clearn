#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

bool InitLinkList(LinkList &L){
    L=(LNode*)malloc(sizeof(LNode));
    if (L==NULL)
    {
        return false;
    }
    L->next=NULL;
    return true;
}

bool Empty(LinkList &L){
    return (L->next == NULL);
}

LinkList List_TailInsert(LinkList &L){
    int x;
    L=(LNode*)malloc(sizeof(LNode));
    LNode *s,*r=L;
    scanf("%d",&x);
    while (x!=10086)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        r->next=s;
        r=s;
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

int main(){
    LinkList L;
    InitLinkList(L);
    List_TailInsert(L);
    LNode *p=L;
    while (p->next!=NULL)
    {
        p=p->next;
        printf("%d \n",p->data);
    }
    system("pause");
    
}