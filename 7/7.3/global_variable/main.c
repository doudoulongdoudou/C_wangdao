#include <stdio.h>
//不建议使用全局变量，初试没有禁止但尽量不要用，但是公司一般禁止使用
int i=10;   //i是一个全局变量

void print(int i){  //形参可以看成一个局部变量
    printf("I am print i = %d\n",i);
}

int main() {
    //局部变量只在离自己最近的大括号内有效
    //在大括号外，你是无法调用j的，比如不能printf("j=\n",j);
    {
        int j =5;
    }

    //for循环括号内定义的变量，循环体外不可以
    //比如在大括号外不能printf("k=\n",k);
    //但是可以把int k 定义在循环体前面
//    for (int k = 0; k < ; k++) {
//
//    }

    //如果局部变量与全局变量重名，那么将采取就近原则，即实际获取和修改的值是局部变量的值。
    //int i=6;
    printf("main i =%d\n",i);
    i=5;
    print(i);
    print(3);
    return 0;
}
