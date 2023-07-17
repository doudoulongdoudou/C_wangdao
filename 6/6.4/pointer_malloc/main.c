#include <stdio.h>
#include <stdlib.h> //malloc使用的头文件
#include <string.h>

int main() {
    int size;   //size代表我们要申请多大字节的空间
    char *p;    //void*类型的指针不能偏移的，因此不会定义无类型指针
    scanf("%d", &size);
    //malloc返回的void*代表无类型指针
    p = (char *) malloc(size);
//    p[0]='H';
//    p[1]='O';
//    p[2]='W';
//    p[3]='\0';
    strcpy(p,"mallloc success");
    puts(p);
    free(p);    //释放申请的空间,给的地址必须是最初malloc返回给我们的地址
    printf("free success!\n");
    return 0;
}
