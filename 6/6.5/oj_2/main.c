#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，
 * 字符串的输入长度小于最初的整型数大小，最后输出输入的字符即可
 * （无需考虑输入的字符串过长，超过了内存大小）
 *
 * 注意下面问题：
 *  char *p;
    scanf("%d",&n);
    p=malloc(n);
    scanf("%c",&c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
    gets(p);
    注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作

    S-input:
    10
    hello

    S-output:
    hello
*/

int main() {
    int size;
    char *p;
    char c;
    scanf("%d",&size);
    scanf("%c",&c);
    p=(char *) malloc(size);
    gets(p);
    //gets()被去掉了，是因为它不安全，会造成访问越界
    //可以使用fgets(p,size,stdin);
//    fgets(p,size,stdin);
    puts(p);
    free(p);
    return 0;

}
