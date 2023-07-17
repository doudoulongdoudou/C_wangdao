#include <stdio.h>

/*
 * 输入一个整型数，判断是否是对称数，如果是，输出yes，否则输出no，不用考虑这个整型数过大，int类型存不下，不用考虑负值
 * 例如12321是对称数，输出yes，124421是对称数，输出yes，1231不是对称数，输出no
 *
 * input：一个整型数
 * output：输出yes，或者no
 *
 * S-input：12321
 * S-output：yes
 *
 */

int main() {
    int num, originalNum, reverse = 0;

    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    if (originalNum == reverse)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
