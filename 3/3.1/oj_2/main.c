#include <stdio.h>

/*
 * 你的任务是计算a+b
 * input：输入包含a和b，通过空格隔开
 * output：需要输出a、b的和
 * S-input：1 4
 * S-output：5
 * */

int main() {
    int a, b,res;
    scanf("%d %d",&a,&b);
    res = a+b;
    printf("%d\n",res);
    return 0;
}
