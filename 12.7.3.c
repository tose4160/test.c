//���������һ�ۿ���ֱ�ӿ�����
//#include<stdio.h>
//struct S {
//    int a;
//    int b;
//} data[3] = { 20, 200, 40, 400, 60, 600 };
//
//int main() {
//    struct S p = data[2];
//    printf("%d", ++(p.a));
//}
//�ṹ�嶨��:
//
//struct S ������һ���ṹ�壬�������������ͳ�Ա��a �� b��
//    �ṹ������ :
//
//data[3] ��һ���ṹ�����飬�������� struct S ���͵�Ԫ�ء�
//������ʼ��Ϊ {
//    20, 200, 40, 400, 60, 600
//}��
//data[0] �� a = 20 �� b = 200
//data[1] �� a = 40 �� b = 400
//data[2] �� a = 60 �� b = 600
//������:
//
//    �� main() �����У�struct S p = data[2]; ������ data �ĵ�����Ԫ�أ�����Ϊ 2����ֵ�� p�����ԣ�
//        p.a ��ֵ�� 60��p.b ��ֵ�� 600��
//        �����ʹ�ӡ :
//
//    ��� printf("%d", ++(p.a)); ���Ƚ� p.a ���� 1��Ȼ���ӡ�µ�ֵ��
//        ++(p.a) �� p.a �� 60 ��Ϊ 61��
//        printf ��������� 61��
// ***************************
// �󲿷����ƹؼ��ֵ����֣�
//auto���ǹؼ��֡�
//enum���ǹؼ��֡�
//include�����ǹؼ��֣�����Ԥ����ָ�
//switch���ǹؼ��֡�
//typedef���ǹؼ��֡�
//continue���ǹؼ��֡�
//signed���ǹؼ��֡�
//union���ǹؼ��֡�
//scanf�����ǹؼ��֣�����һ���⺯����
//if���ǹؼ��֡�
//struct���ǹؼ��֡�
//type�����ǹؼ��֡�
//***********************
//struct {
//
//    int num;
//
//    float age;
//
//}student;
//
//struct student std1��
//������һ�������ṹ�壬��������һ�г���ʹ��"struct student std1;"������һ���ṹ��������ýṹ�岢û�б�����Ϊ "student"��
//����Ǵ��ġ�
//******************************
//ͨ�����ѡ����������һ�¹������֪ʶ
//A.����������ĵ�ַ��������Ա�ĵ�ַ����ͬһ��ַ
//������ȷ�ġ�������(union) �ĳ�Ա����ͬһ���ڴ�����������ĵ�ַ�����κ�һ����Ա�ĵ�ַ��ͬ��
//
//B.�������ڵĳ�Ա�����ǽṹ����, ��֮��Ȼ
//���˵���Ǵ���ġ�������ĳ�Ա�����ǲ�ͬ���͵ģ����ǽṹ�壨struct������ֱ�ӱ�����Ϊ������ĳ�Ա�����Ҫ�ڹ�������ʹ�ýṹ�壬
//�﷨���ǿ��Եģ���˵����֮��Ȼ������������ĳ�Ա�����ǽṹ�������ǲ�׼ȷ�ģ���Ϊ�޷������������͵ı�����Ϊ�ṹ��ĳ�Ա��
//
//C.����һʱ��, ����������ĸ���Աֻ��һ����Ч
//������ȷ�ġ���Ϊ���г�Ա����ͬһ���ڴ棬���κ�ʱ�̹�����ĸ���Աֻ����һ����Ч��
//
//D.�������Է���һ�����������
//��Ҳ����ȷ�ġ��������Է��ع��������͵ı�������Ϊ����ֵ��
// ****************************
//ͦ�鷳�����˺þã���Ҫ��̫������
#include <stdio.h>
struct st {
    char c;
    char s[80];
};
struct  st a[4] = { {'1',"123"}, {'2',"321"}, {'3',"123"}, {'4',"321"} };
char* f(struct st* t);

int main()
{
    int k;

    for (k = 0; k < 4; k++) {
        printf("%s", f(a + k));
    }

    return 0;
}

char* f(struct st* t)
{
    int k = 0;

    while (t->s[k] != '\0') {
        if (t->s[k] == t->c) {
            return t->s + k;
        }
        k++;
    }

    return t->s;
}
//��������123213321