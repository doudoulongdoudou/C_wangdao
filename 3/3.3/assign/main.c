#include <stdio.h>

//赋值运算

int main() {

    int a = 1,b=2;
    //=左边是变量，不能放表达式,否则会报错
    //a+25=b;
    b = a+25;

    //a=a+3;
    //简写
    a+=3;
    b*=2;

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    //sizeof是一个运算符,求常量或者变量的空间大小
    int num = 0;
    printf("num's size is %d\n", sizeof(num));

    return 0;
}
