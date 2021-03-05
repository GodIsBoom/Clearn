// 带头结点的单链表的建立、销毁、增删改查
#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

bool InitLinkList(LinkList &L){     //初始化一个带头结点的空链表
    L=(LNode*)malloc(sizeof(LNode));
    if (L==NULL)
    {
        return false;
    }
    L->next=NULL;
    return true;
}

bool Empty(LinkList &L){    //检查链表是否为空
    return (L->next == NULL);
}

LinkList List_TailInsert(LinkList &L){  //尾插法,每次向尾部添加一个结点
    int x;
    L=(LNode*)malloc(sizeof(LNode));
    LNode *s,*r=L;  //r指向上一个,s指向新结点,进行接力连结
    scanf("%d",&x);
    while (x!=10086)    //输入10086停止录入
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;  //新结点装好了数据
        r->next=s;  //上一个结点指向新结点
        r=s;        //r指向新结点
        scanf("%d",&x);
    }
    r->next=NULL;
    return L;
}

LinkList List_HeadInsert(LinkList &L){  //头插法,每次把新数据插到第一个结点,也就是逆序生成
    int x;
    LNode *s;
    L=(LNode*)malloc(sizeof(LNode));
    L->next=NULL;
    scanf("%d",&x);
    while (x!=10086)
    {
        s=(LNode*)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;    //s指向原来的1结点
        L->next=s;          //头结点指向新结点s,s成为新的1结点
        scanf("%d",&x);
    }
    return L;
}

bool ListInsert(LinkList &L,int i,int e){   //按序号插入,找到i-1结点,在后面插入i结点,值为e
    if (i<1)
    {
        return false;
    }
    int j=0;
    LNode *s,*p=L;
    while (p!=NULL&&j<i-1)
    {
        p=p->next;
        j++;
    }//循环结束后,p指向i-1结点
    if (p==NULL)//在找到i-1结点之前就到头了,也就是结点数不足i-1个
    {
        return false;
    }
    
    s=(LNode*)malloc(sizeof(LNode));
    s->data=e;
    s->next=p->next;
    p->next=s;
    return true;
}

int main(){
    LinkList L;
    // InitLinkList(L);
    // List_TailInsert(L);
    List_HeadInsert(L);
    ListInsert(L,3,9999);
    LNode *p=L;
    while (p->next!=NULL)
    {
        p=p->next;
        printf("%d \n",p->data);
    }
    system("pause");   
}