
////��C�����У�enum��ö�٣����ڶ���һ�����������ͳ�����ö���е�ÿ��ֵ�Զ���0��ʼ������������ʽָ��������ֵ��������������������ö�ٶ��壺
//enum data
//{
//    MIN,        // Ĭ��ֵΪ 0  
//    first = 15, // �ֶ�ָ��Ϊ 15  
//    last = 20,  // �ֶ�ָ��Ϊ 20  
//    total,      // �̳���һ�������ֵ���� 21  
//    num = 50,   // �ֶ�ָ��Ϊ 50  
//    MAX = 1000  // �ֶ�ָ��Ϊ 1000  
//};
//����������壬���ǿ���ȷ������ֵ��
//
//MIN ��ֵΪ�� 0����Ϊ�ǵ�һ��δ��ʾָ����ö�ٳ�����
//total ��ֵΪ�� 21����Ϊ������last��20���Ļ����ϵ����õ��ģ�
//��ˣ����ǣ�
//
//MIN ��ֵΪ�� 0
//total ��ֵΪ�� 21
// //************************
//#include <stdio.h>
//struct stu
//{
//    int x;
//    int* y;
//}*p;
//int dt[4] = { 10,20,30,40 };
//struct stu a[4] = { 40,&dt[0],50,&dt[1],60,&dt[2],70,&dt[3] };
//int main()
//{
//    p = a;
//    printf("%d,", ++p->x);
//    printf("%d,", (++p)->x);
//    printf("%d", ++(*p->y));
//    return 0;
//}
//���з���
//��һ�У�printf("%d,", ++p->x);
//
//p->x��������a[0].x����40��
//ʹ��++p->x��ʹ���ֵ����1�����41��ͬʱp->x����41��
//������Ϊ 41, ��
//�ڶ��У�printf("%d,", (++p)->x);
//
//++pʹ��pָ����һ���ṹ�壬��a[1]��
//��ʱp->x��Ӧ����50��
//��ˣ�������Ϊ 50, ��
//�����У�printf("%d", ++(*p->y));
//
//��ʱp->y��a[1].y����ָ��& dt[1]��
//dt[1]ԭ�ȵ�ֵ��20��
//* p->y�����õõ�dt[1]��ֵ20��ִ��++(*p->y)�Ὣ��ֵ����1�����ֵ����21��
//��ʱ��dt[1]�洢��ֵ����Ϊ21���������Ϊ 21��
//��ϸ˵��
//������ִ�е�������ʱ��ͨ��(*p->y)ȡ����ָ���dt[1]��ֵ20��Ȼ��ִ��++��������ʾ����dt[1]��ֵ����1�������ֱ���޸�dt[1]���ڴ��д洢��ֵ���������20�����21��������������������21��
//
//���ս��
//�Ѹ��е�����������������������Ϊ��
//
//41, 50, 21
//*******************
//���������λѧ��ѧ�š�����
//#include <stdio.h>  
//
//int main(void)
//{
//    struct student
//    {
//        int num;
//        char name[10];
//    } stu[3], * ptr;
//    int i;
//
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%d,%s", &stu[i].num, stu[i].name);
//    }
//
//    for (ptr = stu; ptr < stu + 3; ptr++) // ָ��ptr��stu��ʼ��ֱ��stu����Ľ���  
//    {
//        printf("%d,%s\n", ptr->num, ptr->name);
//    }
//
//    return 0;
//}
// ��ܿܿ�����У�����ÿ���˶����Լ���һЩ���ԣ�ÿ���˶���һ�����߶�������Լ��ı�ǩ��
// ����ͬ��ϷӢ�������е�Ӣ��һ����һ��Ӣ��������Ѫ������������������һϵ�����ԣ�Ȼ����Щ���Զ���һ���ض�����ֵ����ʶ���ǵ�ǿ������������Ӣ�۽�ɫ��ͨ���乥�����Ƚϣ������Ӧ����Ϣ��
//#include<stdio.h>
//struct Hero {
//    char name[20];//Ӣ�۵�����
//    double Health_value;//Ӣ�۵�Ѫ��
//    int aggressivity;//������
//};
//int main() {
//    struct Hero
//        hero[2]
//        ;//��������struct Hero��Ӣ��
//    for (int i = 0; i < 2; i++)//��ʼ��ÿ��Ӣ�۵Ļ�������
//        scanf_s("%s %lf %d", &hero[i].name, &hero[i].Health_value, &hero[i].aggressivity);// ��ȡӢ�����֣�����ʹ�������С  
//    if (
//        hero[0].aggressivity > hero[1].aggressivity
//        )
//    {
//        printf("Ӣ�� %s �Ĺ���������Ӣ�� %s �Ĺ�����\n", hero[0].name, hero[1].name);
//    }
//    else
//    {
//        printf("Ӣ�� %s �Ĺ���������Ӣ�� %s �Ĺ�����\n", hero[1].name, hero[0].name);
//    }
//
//    return 0;
//}