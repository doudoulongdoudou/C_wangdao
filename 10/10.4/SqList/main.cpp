#include <stdio.h>

#define MaxSize 50
//让顺序表存储其他类型元素时，可以快速完成代码修改
typedef int ElemType;
typedef struct {
    ElemType data[MaxSize];
    int length;
}SqList;

//顺序表的插入，因为L会改变，因此我们这里要用引用，i是插入的位置
bool ListInsert(SqList &L,int i,ElemType element){
    //判断i是否合法
    if(i<1 || i>L.length){
        return false;
    }
    //如果存储空间满了，就不能插入
    if(L.length==MaxSize){
        //未插入返回false
        return false;
    }
    //把后面的元素依次往后移，空出位置，放入要插入的元素
    for (int j =L.length; j >=i; j--) {
        L.data[j]=L.data[j-1];
    }
    //放入要插入的元素
    L.data[i-1]=element;
    //顺序表长度要加1
    L.length++;
    return true;
}

//打印顺序表
void PrintList(SqList L){
    int i;
    for (int i = 0; i < L.length; i++) {
        printf("%3d",L.data[i]);
    }
    printf("\n");
}

//删除顺序表中的元素,i是要删除的元素的位置，e是为了获取被删除的元素的值
bool ListDelete(SqList &L,int i,ElemType &e){
    //判断要删除的元素位置是否合法
    if(i<1 || i>L.length){
        return false;
    }
    //保存要删除的元素的值
    e=L.data[i-1];
    //
    for (int j = i; j < L.length; j++) {
        L.data[j-1]=L.data[j];
    }
    //顺序表长度-1
    L.length--;
    return true;
}

//查找某个元素的位置，扎到了返回对应位置，没找到就返回0
int LocateElem(SqList L, ElemType element){
    for (int i = 0; i < L.length; i++) {
        if(element==L.data[i]){
            //因为i是数组的下标，加1以后才是顺序表的下标
            return i+1;
        }
    }
    //循环没找到，返回0
    return 0;
}

//顺序表的初始化及插入操作实战
int main() {
    //定义一个顺序表，变量L
    SqList L;
    //ret是用来装函数的返回值
    bool ret;
    //放入元素
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    //设置长度
    L.length=3;
    ret= ListInsert(L,2,60);
    if(ret){
        printf("insert sqlist success\n");
        PrintList(L);
    } else{
        printf("insert sqlist failed\n");
    }

    printf("----------------------------\n");

    //删除的元素存入del中
    ElemType del;
    ret=ListDelete(L,1,del);
    if(ret){
        printf("delete sqlist success\n");
        printf("delete element=%d\n",del);
        PrintList(L);
    } else{
        printf("delete sqlist failed\n");
    }

    //存储元素位置
    int pos;
    pos=LocateElem(L,60);
    if(pos){
        printf("find this element\n");
        printf("element pos=%d\n",pos);
    } else{
        printf("didn't find this element\n");
    }

    return 0;
}
