#include <stdio.h>

//短路运算  逻辑与和逻辑或

int main() {
    int i = 0;
    int j = 1;
    //当i为假时，不会执行逻辑与后面的表达式，成为短路运算
    i && printf("you can't see me!\n");
    j && printf("you can't see me!\n");
    //等价于下面的if语句
//    if (i) {
//        printf("you can't see me!\n");
//    }

    i = 1;
    j = 0;
    //当i为真时，不会执行逻辑或后面的表达式，成为短路运算
    i || printf("you can't see me!\n");
    j || printf("you can't see me!\n");

    return 0;
}
