#include <stdio.h>

//逻辑运算符与赋值运算符
//判断闰年

int main() {
    int year, i,j=1;
    while(scanf("%d",&year))
    {
        //尽量不要加多余的括号，记住优先级！
        if(year%4==0 && year%100!=0 || year%400==0){
            printf("%d是闰年!\n",year);
            break;
        } else{
            printf("%d是平年!\n",year);
            break;
        }
    }

    //自右至左
    //如果j=6，i=1,非0数都看作1
    i=!!j;
    printf("i=%d\n",i);

    return 0;
}
