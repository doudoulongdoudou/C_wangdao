#include <stdio.h>
#include <stdlib.h>

/*
 * 使用C++的引用，注意提交时把代码选为C++；
 * 在主函数定义字符指针char*p，然后在子函数内malloc申请空间（大小为100个字节），通过fgets读取字符串，然后在主函数中输出；
 * 要求子函数使用C++的引用，注意在C++中从标准输入字符串，需要使用fgets(p,100,stdin)
 *
 * S-input:I love C language
 * S-output:I love C language
 * S-input:how are you
 * S-output:how are you
 * */

//当子函数要修改主函数中的p，那么就加引用。引用如何实现的，完全不需要去关心。
void modify_pointer(char *&p) {
    p=(char *) malloc(100);
    fgets(p,100,stdin); //stdin代表标准输入,fgets是安全的
}

int main() {
    char *p=NULL;
    modify_pointer(p);
    puts(p);
    free(p);    //申请的空间不使用后，记得free，不然容易扣分。
    return 0;
}
