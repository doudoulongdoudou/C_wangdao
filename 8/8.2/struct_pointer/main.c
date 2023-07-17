#include <stdio.h>

//结构体指针

struct student{
    int num;
    char name[20];
    char sex;
};

int main() {
    struct student s={1001,"syu",'M'};
    struct student sarr[3]={1001,"lilei",'M',1005,"zhangsan",'M',1007,"lili",'F'};

    //定义一个结构体指针变量
    struct student *p;
    p=&s;
    //方法一,通过结构体指针去访问成员
//    printf("%d %s%c\n",(*p).num,(*p).name,(*p).sex);

    //推荐用方法二
    //方法二，通过结构体指针去访问成员
    printf("%d %s %c\n",p->num,p->name,p->sex);

    p=&sarr;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    p=p+1;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
