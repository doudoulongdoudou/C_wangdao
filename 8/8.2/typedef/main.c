#include <stdio.h>

//typedef,起别名

//stu 等价于 struct student    pstu等价于struct stduent*
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu,*pstu;

typedef int INGETER;    //特定的地方使用
int main() {
    stu s={0};
    stu *p=&s;
    pstu  p1 =&s;
//    int num=10;
    INGETER num=10;
    printf("num=%d,p->num=%d\n",num,p->num);
    return 0;
}
