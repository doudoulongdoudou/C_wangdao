#include <stdio.h>

//循环while,for,  continue,break

int main() {

    //1.计算1到100之间的和 (while)
    int i = 1, total1 = 0;
    while (i <= 100) {
        total1 += i;
        i++;
    }
    printf("1-100 total1 = %d\n", total1);

    //2.计算1到100之间的和 (for循环)
    int total2 = 0;
    for (int j = 1; j <= 100; j++) {
        total2 += j;
    }
    printf("1-100 total2 = %d\n", total2);

    //3.计算1到100之间的奇数和 (continue)
    int total3 = 0;
    for (int k = 1; k <= 100; k++) {
        if (k % 2 == 0) {
            continue;   //continue下面的代码均不会得到执行
        }
        total3 += k;
    }
    printf("1-100 odd number total3 = %d\n", total3);

    //break
    int m,total4 =0;
    for (m = 1; m <= 100; m++) {
        if (total4 > 2000) {
            break;  //当和大于2000时，循环结束
        }
        total4 += m;
    }
    printf("total4 = %d, m= %d \n",total4,m);   //total4 = 2016, m= 64,这里64是没有加上去的，当m=64时跳出循环

    return 0;
}
