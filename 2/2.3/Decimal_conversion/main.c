#include <stdio.h>

//进制转换

//英特尔的CPU采用了小端方式进行数据存储，因此低位在前，高位在后。
//所以debug时查看内存空间时显示为 7b 00 00 00

int main() {
    int i = 123;
    /*
     * 八进制：int i = 0173
     * 十六进制：0x7b
    */
    printf("i = %d\n",i);//十进制输出
    printf("i的八进制数为%o\n",i);//八进制输出
    printf("i的十六进制数为%x\n",i);//十六进制输出

    return 0;
}
