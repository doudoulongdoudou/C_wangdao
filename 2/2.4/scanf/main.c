#include <stdio.h>

//scanf的使用

//scanf用来读取标准输入，scanf把标准输入的内容需要放到某个变量空间里，因此变量必须取地址
int main() {
    int i, ret;
    char c;
    float f;

    scanf("%d", &i);
    printf("i = %d\n", i);

    //清空标准输入缓冲区
    fflush(stdin);
    scanf("%c", &c);
    printf("c is %c\n", c);

    //%d %f都不需要清空缓冲区，只有字符串型需要清空缓存区
    scanf("%f", &f);
    printf("f = %f\n", f);

    //scanf一次读取多种数据类型
    //%c前面需要添加空格，除非%c在开头
    ret = scanf("%d %c%f", &i, &c, &f); //ret是scanf匹配成功的个数
    printf("i=%d,c=%c,f=%.2f\n", i, c, f);

    return 0;
}
