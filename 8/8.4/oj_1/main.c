#include <stdio.h>

/*
 * 输入一个学生的学号，姓名，性别，用结构体存储，通过scanf读取后，然后再通过printf打印输出
 *
 * S-input：101 xiongda m
 * S-output：101 xiongda m
 * */

typedef struct student{
    int num;
    char name[20];
    char sex;
}stu;

int main() {
    stu s;
    scanf("%d%s %c",&s.num,&s.name,&s.sex);
    printf("%d %s %c\n",s.num,s.name,s.sex);
    return 0;
}
