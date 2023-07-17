#include <stdio.h>

//1.字符数组
//2.scanf读取字符串

//模拟printf("%s",c)操作
void print(char d[]){
    int i=0;
    while (d[i]){
        printf("%c",d[i]);
        i++;
    }
    printf("\n");
}

//输出字符串乱码时，要去查看字符数组中是否存储了结束符‘\0’
int main() {
//    char c[5] = {'W','D','X','L','Y'};
    char c[11] ="wangdaoxly";   //最后会有一个结束标志\0，所以需要11位，c[10]就会访问越界,输出会有乱码
    printf("%s\n",c);   //使用%s来输出一个字符串，直接把字符数组名放到printf后面位置

    char d[5] ="how";
    print(d);

    //2.scanf读取字符串
    //scanf读取字符串操作，会自动往字符数组中放结束符\0
    //scanf在使用%s读取字符串时，会忽略空格和回车（这一点与%d和%f类似）
    char m[10];
    scanf("%s",m);  //字符数组名m中存储了数组的起始地址，因此不需要取地址（即不需要加&）
    printf("%s\n",m);
    return 0;
}
