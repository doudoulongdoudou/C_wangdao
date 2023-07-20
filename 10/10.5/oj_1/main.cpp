#include <stdio.h>

/*
 * 初始化顺序表（顺序表中元素为整型），里边的元素是1，2，3，
 * 然后通过scanf读取一个元素（例如插入的是6），插入到第2个位置，打印输出顺序表，
 * 每个元素占3个空格，格式为  1  6  2  3，
 * 然后scanf读取一个整型数，是删除的位置（例如输入为1），
 * 然后输出顺序表6 2 3，假如输入的位置不合法，输出false字符串。
 * S-input： 6
 *           1
 * S-output：  1  6  2  3
 *             6  2  3
 * */

#define MaxSize 6
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int len;
}SqList;

//插入操作
bool listInsert(SqList &L, int pos, ElemType elem){
    if(pos<1 || pos>L.len){
        return false;
    }

    if(L.len==MaxSize){
        return false;
    }

    for (int i = L.len; i >= pos; i--) {
        L.data[i]=L.data[i-1];
    }
    L.data[pos-1]=elem;
    L.len++;
    return true;
}

//删除
bool listDel(SqList &L,int pos, ElemType &del){
    if(pos<1 || pos>L.len){
        return false;
    }
    del=L.data[pos-1];
    for (int i = pos; i <L.len; i++) {
        L.data[i-1]=L.data[i];
    }
    L.len--;
    return true;
}

//打印结果
void printList(SqList L){
    for (int i = 0; i < L.len; i++) {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}

int main() {
    //插入
    int num1,num2;
    bool ret;
    scanf("%d",&num1);
    scanf("%d",&num2);
    SqList L;
    L.data[0]={1};
    L.data[1]={2};
    L.data[2]={3};
    L.len=3;
    ret=listInsert(L,2,num1);
    if(ret){
        printList(L);
    }
    //删除

    ElemType del;
    ret = listDel(L,num2,del);
    if(ret){
        printList(L);
    } else{
        printf("false\n");
    }


    return 0;
}
