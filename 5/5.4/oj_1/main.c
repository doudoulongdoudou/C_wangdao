#include <stdio.h>
#include <string.h>
/*
 * 输入N个数（N小于等于100），输出数字2的出现次数；
 * 解题提示：整型数组读取5个整型数的方法如下：
 * int a[100];
 * for(int i=0; i<5; i++){
 * scanf("%d",&a[i]);
 * }
 *
 * intput：输入的格式是两行，第一行输入要输的元素个数，比如5，第二行输入1 2 2 3 2，那么输出结果为3，因为2出现了3次
 * output：统计数字2出现的次数
 *
 * S-input：
 * 5
 * 1 2 2 3 2
 * S-output：
 * 3
 */

int main() {
    int N,count=0;
    scanf("%d",&N);
    char arr[100];
    for (int i = 0; i < N; i++) {
        scanf("%s",&arr[i]);
    }
    for (int j = 0; j < N; j++) {
        if(arr[j]=='2'){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
