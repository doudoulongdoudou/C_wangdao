#include <stdio.h>

/*
 * 利用while或者for循环计算n!的值
 * 提示：n!=1*2*3...*n
 *
 * input：一个正整数n，1<=n<=10
 * output：n!的值
 *
 * S-input：2
 * S-output：2
 * */

int main() {
    int n,res=1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if(n>10 || n<1){
            break;
        }
        res*=i;
    }
    printf("%d\n",res);

    return 0;
}
