#include <stdio.h>

/*
 * 某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求正好40张，且每种票子至少一张。问：有几种换法？
 * input：无输入
 * output：一个数，表示共有多少种换法
 * S-input：无
 * S-output：不能告知，因为只有一个数，偷偷告诉你小于100
 * */

int main() {
    int num = 0;
    for (int i = 1; i < 100/1; i++) {
        for (int j = 1; j < 100/2; j++) {
            for (int k = 1; k < 100/5; k++) {
                for (int l = 1; l < 100/10; l++) {
                    if (i + j + k + l == 40 && i*1+j*2+k*5+l*10==100) {
                        num++;
                    }
                }
            }
        }
    }
    printf("%d\n",num);
    return 0;
}
