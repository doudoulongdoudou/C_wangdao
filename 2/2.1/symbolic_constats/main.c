#include <stdio.h>

//���ų�����ϰ

#define PI 3+2

int main() {

    //1.����
    int i = PI * 2;
    //i=7,��Ϊ���ﶨ���PIΪ3+2������int i = 3+2*2,PI��ֱ�Ӱ������Ž�ȥ�ġ�
    printf("i=%d\n", i);
    //����i��size��СΪ4���ֽ�
    printf("i�Ŀռ��С=%d���ֽ�\n", sizeof(i));


    //2.������
    float f = 3e-3;
    printf("f = %.3f\n", f);

    //3.�ַ���
    char c = 'a';
    printf("c = %c\n", c);  //%c���ַ���ʽ���
    printf("c = %d\n", c);  //%d����ֵ��ʽ���  a��ASCIIֵΪ97��AΪ65
    //��Сдת��
    printf("c�Ĵ�дΪ%c\n",c-32);

    //4.�ַ�����
    /*
     * �ַ�������˫����
     * �������ɽ�����־�������� \0 �ģ�\0 ���Զ��ӵ��Ҳ����������������ֽ�����Ҫ+1=5���ֽ�
     */
    char s[] = "abcd";
    printf("s = %c\n",s[4]);

    return 0;
}