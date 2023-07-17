#include <stdio.h>

//算术运算符与关系运算符


int main() {
    int result = 4 + 5 * 2 - 6 / 3 + 11 % 4;
    //4+10-2+3=15
    printf("result=%d\n", result);
    printf("--------------\n");

    //关系运算符优先级小于算术运算符
    int a;
    while (scanf("%d", &a)) {
        if (3 < a && a < 10) {
            printf("a是在3到10之间\n");
        } else {
            printf("a不在3到10之间\n");
        }
    }

    return 0;
}
