#include <stdio.h>

/*
 * 输入一个整型数，存入变量i，通过子函数change把主函数的变量i除2，然后打印i，
 * 例如输入的为10，打印出5，如果输入的为7，打印出3
 *
 * S-input：10
 * S-output：5
*/

void change(int *j){
    *j = *j/2;
}

int main() {
    int i;
    scanf("%d",&i);
    change(&i);
    printf("%d\n",i);
    return 0;
}