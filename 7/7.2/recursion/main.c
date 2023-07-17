#include <stdio.h>
/*
 * 递归
 * 1.阶乘
 * 2.走台阶--一次只能走1个或2个台阶，走n个台阶有几种方法？
 * 递归的核心是找公式
 * 要有结束条件
 * */

int f(int n){
    //一定要有结束条件
    if(1==n){
        return 1;
    }
    return n*f(n-1);    //写公式
}

//上台阶，到第n个台阶，有多少种方法
int step(int n){
    if(1==n|| 2==n){
        return n;
    }
    return step(n-1)+ step(n-2);
}

int main() {
    int n;
    scanf("%d",&n);
    printf("f(%d)=%d\n",n,f(n));
    printf("step(%d)=%d\n",n, step(n));
    return 0;
}
