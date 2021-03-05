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
        s->data=x;  //新结点装好数据
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

bool ListInsert(LinkList &L,int i,int e){   //按序号向后插入,找到i-1结点,在后面插入i结点,值为e
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

bool ListPriorInsert(LNode *p,int e){   //在指定节点之前添加一个数,结点s还是只能在后面添加,但数据可以放到之前的结点p
    if (p==NULL)
    {
        return false;
    }
    LNode *s=(LNode*)malloc(sizeof(LNode));
    if (s==NULL)
    {
        return false;   //检查内存分配是否成功
    }
    s->data=p->data;    //新结点拿到p的数
    p->data=e;          //p拿到需要前插的数
    s->next=p->next;    //建立s到p的链接
    p->next=s;
    return true;
}

bool ListDelete(LinkList &L,int i,int &e){   //按序号删除结点
    if (i<1)
    {
        return false;
    }
    
    int j=0;
    LNode *p=L,*q;
    while (p!=NULL&&j<i-1)
    {
        p=p->next;
        j++;
    }       //找到了i-1结点p
    if (p==NULL||p->next==NULL)
    {
        return false;
    }       //判断i结点是否存在
    q=p->next;  //找到要删除的i结点q
    e=q->data;  //用e存储即将要删除的值
    p->next=q->next;    //p指向q的下一结点
    free(q);    //释放q
    return true;
}

int main(){
    int e;
    LinkList L;
    // InitLinkList(L);
    // List_TailInsert(L);
    List_HeadInsert(L);
    ListInsert(L,3,9999);
    // ListDelete(L,3,e);
    LNode *p=L;
    while (p->next!=NULL)
    {
        p=p->next;
        printf("%d \n",p->data);
    }
    system("pause");   
}