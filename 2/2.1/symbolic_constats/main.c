#include <stdio.h>

//符号常量练习

#define PI 3+2

int main() {

    //1.整型
    int i = PI * 2;
    //i=7,因为这里定义的PI为3+2，所以int i = 3+2*2,PI是直接搬下来放进去的。
    printf("i=%d\n", i);
    //变量i的size大小为4个字节
    printf("i的空间大小=%d个字节\n", sizeof(i));


    //2.浮点型
    float f = 3e-3;
    printf("f = %.3f\n", f);

    //3.字符型
    char c = 'a';
    printf("c = %c\n", c);  //%c以字符形式输出
    printf("c = %d\n", c);  //%d以数值形式输出  a的ASCII值为97，A为65
    //大小写转换
    printf("c的大写为%c\n",c-32);

    //4.字符串型
    /*
     * 字符串型是双引号
     * 并且是由结束标志———— \0 的，\0 是自动加的且不输出，所以下面的字节数需要+1=5个字节
     */
    char s[] = "abcd";
    printf("s = %c\n",s[4]);

    return 0;
}
