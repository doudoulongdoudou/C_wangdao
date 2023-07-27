#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
    //数据域
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

//LNode*是结构体指针，和LinkList完全等价
void list_head_insert(LNode *&L) {
    //申请头结点空间，头指针指向头结点
    L = (LinkList) malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d", &x);
    //用来指向申请的新结点
    LNode *s;
    s = (LinkList) malloc(sizeof(LNode));
//    s->next=NULL;
//    s->data = x;
//    //头结点的next，就指向了第一个结点
//    L->next = s;
    while (x != 9999) {
        s = (LinkList) malloc(sizeof(LNode));
        s->data = x;
        //s的next指向原本链表的第一个结点
        s->next=L->next;
        //头结点的next，指向新结点
        L->next=s;
        scanf("%d",&x);
    }
}

//链表打印
void print_list(LinkList L){
    L=L->next;
    while (L!=NULL){
        printf("%3d",L->data);
        L=L->next;
    }
    printf("\n");
}

//头插法新建链表
int main() {
    //L是链表头指针，是结构体指针类型
    LinkList L;
    //输入数据可以为3 4 5 6 7 9999，头插法新建链表
    list_head_insert(L);
    //打印链表
    print_list(L);
    return 0;
}
