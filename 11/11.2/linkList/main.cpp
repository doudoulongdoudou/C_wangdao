#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode {
    //数据域
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

//尾插法新建链表
//LNode*是结构体指针，和LinkList完全等价
void list_tail_insert(LNode* &L){
    //申请头结点空间，头指针指向头结点
    L = (LinkList) malloc(sizeof(LNode));
    L->next=NULL;
    ElemType x;
    scanf("%d", &x);
    //s用来指向申请的新结点,r始终指向链表尾部
    LNode *s, *r=L;
    while (x!=9999){
        s = (LinkList) malloc(sizeof(LNode));
        s->data = x;
        //新结点给尾结点的next指针
        r->next=s;
        //r要指向新的尾部
        r=s;
        scanf("%d",&x);
    }
    //让尾结点的next为NULL
    r->next=NULL;
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

//尾插法新建链表
int main() {
    //L是链表头指针，是结构体指针类型
    LinkList L;
    //输入数据可以为3 4 5 6 7 9999，尾插法新建链表
    list_tail_insert(L);
    //打印链表
    print_list(L);
    return 0;
}
