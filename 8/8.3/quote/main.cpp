#include <stdio.h>

//C++引用的讲解
//在子函数内修改主函数的普通变量的值

//当你要在子函数中修改主函数的变量的值，就用引用，若不需要修改就不用
//形参中写&，要称为引用
void modify_num(int &b){
    b=b+1;
}

int main() {
    int a=10;
    modify_num(a);
    printf("after modify_num a=%d\n",a);
    return 0;
}
