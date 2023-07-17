#include <stdio.h>
#include <string.h>
/*读取一个字符串，字符串可能含有空格，将字符串逆转，原来的字符串与逆转后字符串相同，输出0，
 * 原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1。
 * 例如，输入hello，逆转后的字符串为olleh，因为hello小于olleh，所以输出-1
 * 注意最后的判断一定要这么写，因为strcmp标准C中并不是返回-1和1，而是负值和正值
 * int result = strcmp(c,d);
    if(result<0){
        printf("%d\n",-1);
    } else if (result>0){
        printf("%d\n",1);
    } else{
        printf("%d\n",0);
    }
 *
 * input：输入一个字符串，例如hello，当然输入的字符串也可能是how are you，含有空格的字符串
 * output：输出是一个整型数，如果输入的字符串是hello，那么输出的整型数为-1
 *
 * S-input：hello
 * S-output：-1
 *
 * S-input：cba
 * S-output：1
 *
 * S-input：aba
 * S-output：0
 *
 */

int main() {
    char c[100];
    char back[100]={0};//避免后面没有\0结束符
    gets(c);
    int len = strlen(c);
    for (int i = len-1,j=0;j<len; i--,j++) {
            back[j]=c[i];
    }

    int result = strcmp(c,back);
    if(result<0){
        printf("%d\n",-1);
    } else if (result>0){
        printf("%d\n",1);
    } else{
        printf("%d\n",0);
    }

    return 0;
}

