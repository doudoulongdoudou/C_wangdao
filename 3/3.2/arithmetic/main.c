#include <stdio.h>

//������������ϵ�����


int main() {
    int result = 4 + 5 * 2 - 6 / 3 + 11 % 4;
    //4+10-2+3=15
    printf("result=%d\n", result);
    printf("--------------\n");

    //��ϵ��������ȼ�С�����������
    int a;
    while (scanf("%d", &a)) {
        if (3 < a && a < 10) {
            printf("a����3��10֮��\n");
        } else {
            printf("a����3��10֮��\n");
        }
    }

    return 0;
}
