////ÿ�� PAT �����ڲμӿ���ʱ���ᱻ����������λ�ţ�һ�����Ի���λ��һ���ǿ�����λ����������£��������볡ʱ�ȵõ��Ի���λ���룬���������Ի�״̬��ϵͳ����ʾ�ÿ����Ŀ�����λ���룬����ʱ������Ҫ����������λ����������Щ�����ٵ��ˣ��Ի��Ѿ�����������ֻ�������쵽���Ի���λ�����������㣬�Ӻ�̨������ǵĿ�����λ���롣
//
//�����ʽ��
//�����һ�и���һ�������� N����1000������� N �У�ÿ�и���һ����������Ϣ��׼��֤�� �Ի���λ�� ������λ�š�����׼��֤���� 16 λ������ɣ���λ�� 1 �� N ��š����뱣֤ÿ���˵�׼��֤�Ŷ���ͬ�������κ�ʱ�򶼲���������˷��䵽ͬһ����λ�ϡ�
//
//������Ϣ֮�󣬸���һ�������� M����N�������һ���и��� M ������ѯ���Ի���λ���룬�Կո�ָ���
//
//�����ʽ��
//��Ӧÿ����Ҫ��ѯ���Ի���λ���룬��һ���������Ӧ������׼��֤�źͿ�����λ���룬�м��� 1 ���ո�ָ���
//
//����������
//4
//3310120150912233 2 4
//3310120150912119 4 1
//3310120150912126 1 3
//3310120150912002 3 2
//2
//3 4
//���������
//3310120150912002 2
//3310120150912119 1
////#include<stdio.h>
//#define N 1000
//struct student
//{
//    char num[30];
//    int num1, num2;
//};
//int main()
//{
//    struct student stu[N];
//    int check[1000];
//    int n, m;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %d %d", &stu[i].num[30], &stu[i].num1, &stu[i].num2);
//    }
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++)
//    {
//        if (i == m - 1)
//            scanf("%d", &check[i]);
//        else
//        {
//            scanf("%d ", &check[i]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < m; j++)
//            if (check[i] == stu[j].num1)
//            {
//                printf("%s %d", stu[j].num[30], stu[j].num2);
//            }
//    }
//    return 0;
//}//�ʼ
//#include<stdio.h>
//#define N 1000
//struct student
//{
//    char num[30];
//    int num1, num2;
//};
//int main()
//{
//    struct student stu[N];
//    int check[1000];
//    int n, m;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %d %d", stu[i].num, &stu[i].num1, &stu[i].num2);
//    }
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++)
//    {
//        if (i == m - 1)
//            scanf("%d", &check[i]);
//        else
//        {
//            scanf("%d ", &check[i]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//            if (check[i] == stu[j].num1)
//            {
//                printf("%s %d", stu[j].num, stu[j].num2);
//            }
//    }
//    return 0;
//}//��΢�޸ĺ�2�֣�
//�����û���뻻�з�
//#include<stdio.h>
//#define N 1000
//struct student
//{
//    char num[30];
//    int num1, num2;
//};
//int main()
//{
//    struct student stu[N];
//    int check[1000];
//    int n, m;
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %d %d", stu[i].num, &stu[i].num1, &stu[i].num2);
//    }
//    scanf("%d", &m);
//    for (int i = 0; i < m; i++)
//    {
//        scanf("%d", &check[i]);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//            if (check[i] == stu[j].num1)
//            {
//                printf("%s %d\n", stu[j].num, stu[j].num2);
//            }
//    }
//    return 0;
//}//�޸ĺ�15�֣�
