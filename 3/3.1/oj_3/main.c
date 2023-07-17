#include <stdio.h>

/*
 * 读取一个65到122之间的整型数，然后以字符形式输出它，比如读取97，输出字符a
 * input：读取一个整型数，整型数大于等于65，小于等于122
 * output：输出整型数在ASIIC表中对于的字符
 * S-input：97
 * S-output：a
*/

int main() {
    int a;
    scanf("%d",&a);
    printf("%c\n",a);
    return 0;
}
