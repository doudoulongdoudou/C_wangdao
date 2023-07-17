#include <stdio.h>

/*
 * 判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
 * input：输入一行，只有一个整数x(0<=x<=10000)
 * output：输出只有一行字符
 *
 * S-input：2000
 * S-output：yes
 *
 * S-input：1999
 * S-output：no
 */

int main() {
    int year;
    scanf("%d",&year);
    //题目中没有用说明输入值的范围错误的话输出某值（例如error或wrong），就不用考虑
//    while (year>=0 && year<=10000){
        if(year%4==0 && year%100!=0 || year%400==0){
            printf("yes\n");
//            break;
        } else{
            printf("no\n");
//            break;
        }
//    }
    return 0;
}
