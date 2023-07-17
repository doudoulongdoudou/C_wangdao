#include <stdio.h>
#include <string.h>

//gets和puts
//strlen、strcat、strcpy、strcmp
int main() {
    char c[20];
    char d[100]="world";
    char e[100];

    //gets中放入我们字符数组的数组名即可
    gets(c);

    //等价于printf("%s\n",c); puts内放的参数是字符数组名
    puts(c);

    //strlen统计字符串长度
    int len = strlen(c);
    printf("len = %d\n",len);

    //strcat把d中的字符串拼接到c中，
    strcat(c,d);
    puts(c);

    //strcpy把c中的字符串复制给e
    strcpy(e,c);
    puts(e);

    //strcmp比较两个字符串的大小
    //c大于“how”，返回值是正值，相等是0，c小于“how”，返回值是负值
    printf("c?d=%d\n", strcmp(c,"how"));

    return 0;
}
