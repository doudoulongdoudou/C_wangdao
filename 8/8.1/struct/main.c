#include <stdio.h>

//结构体
//结构体对齐
//******结构体的大小必须是其最大成员的整数倍
//***浮点型分为float和double，float占4个字节，double占8个字节。
//short占2个字节，char占1个字节。
//如果两个小存储之和是小于最大程度8，那么他们就结合在一起

struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};

int main() {
    //变量的名字不要和结构名字重名,即s不要叫student；
    struct student s={1001,"syu",'M',20,90,"Zhejiang"};
    //定义一个结构体数组变量
    struct student sarr[3];
    //结构体输出必须单独去访问内部的每个成员
    printf("%d %s %c %d %f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);

//    scanf("%d%s %c%d%f%s",&s.num,&s.name,&s.sex,&s.age,&s.score,&s.addr);
    for (int i = 0; i < 3; i++) {
        scanf("%d%s %c%d%f%s",&sarr[i].num,&sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,&sarr[i].addr);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d %s %c %d %f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex,sarr[i].age,sarr[i].score,sarr[i].addr);
    }

    return 0;
}
