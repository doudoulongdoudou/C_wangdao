#include <stdio.h>

/*
 * 假如有n个5台阶，一次只能上一个台阶或两个台阶，请问走到第n个台阶有几种走法？
 * 为便于读者理解题意，这里举例说明如下：
 * 假如有3个台阶，那么总计就有3种走法：第1种为每次上1个台阶，上3次；
 * 第2种为向上2个台阶，再上1个台阶；
 * 第3种为向上1个台阶，再上2个台阶。
 * 输入为n,输出为走到第n个台阶有几种走法
 *
 * S-input：1
 * S-output：1
 * S-input：3
 * S-output：3
 *
 * */

int step(int n) {
    if (1 == n || 2 == n) {
        return n;
    }
    return step(n - 1) + step(n - 2);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n", step(n));
    return 0;
}
