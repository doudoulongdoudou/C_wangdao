#include <stdio.h>

//�߼�������븳ֵ�����
//�ж�����

int main() {
    int year, i,j=1;
    while(scanf("%d",&year))
    {
        //������Ҫ�Ӷ�������ţ���ס���ȼ���
        if(year%4==0 && year%100!=0 || year%400==0){
            printf("%d������!\n",year);
            break;
        } else{
            printf("%d��ƽ��!\n",year);
            break;
        }
    }

    //��������
    //���j=6��i=1,��0��������1
    i=!!j;
    printf("i=%d\n",i);

    return 0;
}
