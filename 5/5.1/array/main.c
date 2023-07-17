#include <stdio.h>

//1.一维数组
//2.数组访问越界
//3.数组的传递

//数组名传递到子函数后，子函数的形参接收到的是数组的起始地址，因此不能把数组的长度传递给子函数
void print(int a[],int length){
    for (int i = 0; i < length; i++) {
        printf("%d\n",a[i]);
    }
    a[3]=20;
}

int main() {
    int a[5]={1,2,3,4,5};
    int m =10;
    int n=20;
    //访问越界
    a[5]=6;
    a[6]=7;
    printf("n=%d\n",n);   //访问越界会造成数据异常，n原本是20，但结果输出为n=7

    print(a,5); //数组在传递给子函数时，它的长度传递不过去
    printf("a[3]=%d\n",a[3]);
    return 0;
}
