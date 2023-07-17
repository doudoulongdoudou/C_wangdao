#include <stdio.h>

/*
 * 读取一个整型数，字符，浮点数，分别到变量i,j,k中，然后将i,j,k直接相加并输出，小数点后保留两位小数，不用考虑输入的浮点数的小数部分超过两位
 *input：一个整型数，字符，浮点数
 * output：i,j,k三个变量的求和值
 * S-input：10 a 98.3
 * S-output：205.30
 */

int main() {
    int i;
    char j;
    float k;
    scanf("%d %c%f",&i,&j,&k);
    printf("%0.2f\n",i+j+k);
    return 0;
}
