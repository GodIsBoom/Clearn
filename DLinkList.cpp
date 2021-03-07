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
    if (p->next!=NULL)
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

DLinkList List_HeadInsert(DLinkList &L){  //头插法,每次把新数据插到第一个结点,也就是逆序生成
    int x;
    DNode *s;
    L=(DNode*)malloc(sizeof(DNode));
    L->next=NULL;
    L->prior=NULL;
    scanf("%d",&x);
    while (x!=10086)
    {
        s=(DNode*)malloc(sizeof(DNode));
        s->data=x;
        s->next=L->next;    //s指向原来的1结点
        s->prior=L;
        L->next=s;          //头结点指向新结点s,s成为新的1结点
        scanf("%d",&x);
    }
    return L;
}

DLinkList List_TailInsert(DLinkList &L){  //尾插法,每次向尾部添加一个结点
    int x;
    L=(DNode*)malloc(sizeof(DNode));
    DNode *s,*r=L;  //r指向上一个,s指向新结点,进行接力连结
    scanf("%d",&x);
    while (x!=10086)    //输入10086停止录入
    {
        s=(DNode*)malloc(sizeof(DNode));
        s->data=x;  //新结点装好数据
        s->prior=r;
        r->next=s;  //上一个结点指向新结点
        r=s;        //r指向新结点
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

int main(){

    DLinkList L;
    List_HeadInsert(L);
    DNode *p=L;

    while (p->next!=NULL)
    {
        p=p->next;
        printf("%d \n",p->data);
    }

    system("pause");
    return 0;
}