//�� n λѧ����һ��ѧ����Ϣ��Ӧ�������ݣ����������ĳɼ�����ѧ�ɼ���Ӣ��ɼ�����������ʹ�ýṹ��������������ݽ��д洢�������ÿ�ſ�Ŀ�ɼ���ߵ�ѧ����Ϣ��
//
//�����ʽ :
//��һ������һ��ż�� n(1��n��10)��
//���������� n �У�ÿ�а���һ���ַ��� str�������Ǹ����� a, b, c���ÿո�ָ���(3��str.length��10, 0��a, b, c��100)��
//
//�����ʽ :
//���ÿ�ſ�Ŀ����߳ɼ�ѧ����������Ϣ���������ֶ����߳ɼ�ѧ�������������Ⱥ�һ�������
//
//�������� :
//input01:
//
//4
//bob 60 70 80
//alice 70 80 90
//wade 90 90 70
//hali 89 78 67
//�������:
//output01:
//
//wade 90 90 70
//wade 90 90 70
//alice 70 80 90
//#include <stdio.h>  
//#include <string.h>  
//
//#define MAX_STUDENTS 10  
//#define MAX_NAME_LENGTH 11  
//
//typedef struct {
//    char name[MAX_NAME_LENGTH];
//    int chinese;
//    int math;
//    int english;
//} Student;
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    Student students[MAX_STUDENTS];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%s %d %d %d", students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
//    }
//
//    int maxChinese = -1, maxMath = -1, maxEnglish = -1;
//
//    // Find the maximum scores for each subject  
//    for (int i = 0; i < n; i++) {
//        if (students[i].chinese > maxChinese) {
//            maxChinese = students[i].chinese;
//        }
//        if (students[i].math > maxMath) {
//            maxMath = students[i].math;
//        }
//        if (students[i].english > maxEnglish) {
//            maxEnglish = students[i].english;
//        }
//    }
//
//    // Output the students with the highest scores  
//    for (int i = 0; i < n; i++) {
//        if (students[i].chinese == maxChinese) {
//            printf("%s %d %d %d\n", students[i].name, students[i].chinese, students[i].math, students[i].english);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (students[i].math == maxMath) {
//            printf("%s %d %d %d\n", students[i].name, students[i].chinese, students[i].math, students[i].english);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (students[i].english == maxEnglish) {
//            printf("%s %d %d %d\n", students[i].name, students[i].chinese, students[i].math, students[i].english);
//        }
//    }
//
//    return 0;
//}
//
//����n�����ѵ���Ϣ���������������ա��绰���룬����Ҫ���д���򣬰�������Ӵ�С��˳���������ͨѶ¼����Ŀ��֤�����˵����վ�����ͬ��
//
//�����ʽ :
//
//�����һ�и���������n�� < 10�������n�У�ÿ�а��ա����� ���� �绰���롱�ĸ�ʽ����һλ���ѵ���Ϣ�����С�������
//	�ǳ��Ȳ�����10��Ӣ����ĸ��ɵ��ַ����������ա���yyyymmdd��ʽ�����ڣ����绰���롱�ǲ�����17λ�����ּ� + �� - ��ɵ��ַ�����
//
//	�����ʽ :
//
//��������Ӵ�С������ѵ���Ϣ����ʽͬ�����
//
//�������� :
//���������һ�����롣���磺
//
//3
//zhang 19850403 13912345678
//wang 19821020 + 86 - 0571 - 88018448
//qian 19840619 13609876543
//�������:
//�����������Ӧ����������磺
//
//wang 19821020 + 86 - 0571 - 88018448
//qian 19840619 13609876543
//zhang 19850403 13912345678
//#include<stdio.h>
//#include<string.h>
//struct tong {
//	char name[11];
//	int b;
//	char num[20];
//}temp;
//int main() {
//
//	int i, n, j;
//	struct tong t[20];
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%s %d %s", t[i].name, &t[i].b, t[i].num);
//	}
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (t[j].b > t[j + 1].b) {
//				temp = t[j];
//				t[j] = t[j + 1];
//				t[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		printf("%s %d %s\n", t[i].name, t[i].b, t[i].num);
//	}
//	return 0;
//}
//����һ�����ѧ����Ϣ�Ľṹ�����ͣ�ѧ����Ϣ������ѧ�š��������Ա�Ժϵ��Ҫ������5��ѧ���������Ϣ�󣬰���ѧ��˳�������Щѧ������Ϣ��Ȼ������Ժϵ���ƣ�ͳ�Ʋ������Ժѧ��������
//
//�����ʽ :
//5��ѧ����Ϣ��1��Ժϵ���ơ�
//
//�����ʽ :
//��ѧ���������5��ѧ����Ϣ��1����ӦѧԺ��ѧ��������
//
//�������� :
//���������һ�����롣���磺
//
//03 ���� �� �����
//01 �Դ� �� �����
//02 Ǯ�� Ů ��е
//05 ���� �� ��е
//04 ���� Ů ��ľ
//�����
//������� :
//�����������Ӧ����������磺
//
//01 �Դ� �� �����
//02 Ǯ�� Ů ��е
//03 ���� �� �����
//04 ���� Ů ��ľ
//05 ���� �� ��е
//2
//#include <stdio.h>  
//#include <string.h>  
//
//#define MAX_STUDENTS 5  
//#define MAX_NAME_LENGTH 50  
//#define MAX_DEPT_LENGTH 50  
//
//// ����ѧ����Ϣ�ṹ��  
//typedef struct {
//    char id[10];         // ѧ��  
//    char name[MAX_NAME_LENGTH]; // ����  
//    char gender[10];     // �Ա�  
//    char department[MAX_DEPT_LENGTH]; // Ժϵ  
//} Student;
//
//// �������ڰ�ѧ�űȽ�����ѧ���ĺ���  
//int compare(const void* a, const void* b) {
//    return strcmp(((Student*)a)->id, ((Student*)b)->id);
//}
///*compare�������ڱȽ�����Student�ṹ���ѧ�ţ�id�����Ա����������ͨ������ת����voidָ��ת��ΪStudentָ�룬Ȼ��ʹ��strcmp�����Ƚ�����ѧ���ַ���*///��
//int main() {
//    Student students[MAX_STUDENTS];
//    char queryDept[MAX_DEPT_LENGTH];
//
//    // ����ѧ����Ϣ  
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        scanf("%s %s %s %s", students[i].id, students[i].name, students[i].gender, students[i].department);
//    }
//
//    // ��ѧ������  
//    qsort(students, MAX_STUDENTS, sizeof(Student), compare);
//    //ʹ��qsort������students�������������Ҫ��������ָ�롢����Ԫ������������Ԫ�صĴ�С�ͱȽϺ��������������ѧ�Ŷ�ѧ����Ϣ��������
//    // ���ѧ����Ϣ  
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        printf("%s %s %s %s\n", students[i].id, students[i].name, students[i].gender, students[i].department);
//    }
//
//    // ����Ժϵ����  
//    scanf("%s", queryDept);
//
//    // ͳ�Ʋ������Ժϵѧ������  
//    int count = 0;
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        if (strcmp(students[i].department, queryDept) == 0) {
//            count++;
//        }
//    }
//    /*��ʼ��countΪ0������ͳ�Ʒ���������ѧ��������ѭ������ѧ����Ϣ����ʹ��strcmp�Ƚ�ÿ��ѧ����Ժϵ�Ƿ���queryDept��ͬ�������ͬ����count��1��*/
//    printf("%d\n", count);
//
//    return 0;
//}
//����һ����ʾƽ��ֱ������ϵ�µ�����Ľṹ�����ͣ���������������꣬�����������Ľṹ�����ͱ����У�����һ���Զ��庯�����㲢�������������е����ꡣ
//
//�����ʽ :
//����������ꡣ
//
//�����ʽ :
//�е����ꡣ
//
//�������� :
//���������һ�����롣���磺
//
//(10.24, 5.8)(-10.24, -5.8)
//������� :
//    �����������Ӧ����������磺
//
//    (0.00, 0.00)
//#include <stdio.h>  
//
//typedef struct {
//    double x;
//    double y;
//} Point;
//
//Point calculateMidPoint(Point p1, Point p2) {
//    Point midPoint;
//    midPoint.x = (p1.x + p2.x) / 2;
//    midPoint.y = (p1.y + p2.y) / 2;
//    return midPoint;
//}
//
//int main() {
//    Point p1, p2;
//
//    // ���������������  
//   // printf("����������������꣬�ÿո�ָ����磺10.24 5.8 -10.24 -5.8����\n");  
//    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
//
//    // �����е�  
//    Point midPoint = calculateMidPoint(p1, p2);
//
//    // ������  
//    printf("(%.2f,%.2f)\n", midPoint.x, midPoint.y);
//
//    return 0;
//}
////ͻȻ�䷢���ýṹ�����һ�·��ض��ֵ
//��Ҷ�֪��������Ҫ�Ŷӵġ�ĳҽԺΪ�������ϰ��׵Ĵ�ͳ���£��涨�Ŷӹ������£�
//
//�����ˣ����䲻С��60�����ڷ������ˣ�����С��60��֮ǰ��
//��ͯ�����䲻����14�����������ˣ��������14��С��60��֮ǰ��
//���������ˣ����������������С��֮ǰ����������ͬ�������������ں�����֮ǰ��
//���ڶ�ͯ������С�������������֮ǰ����������ͬ�������������ں�����֮ǰ��
//���������ˣ����������ں�����֮ǰ��
//��ĳ���ҽԺ����n�����ˣ�������Ŷ���Ϣ����ţ����������䣬��ţ������У�����ǰ������ŶӺ��˳��ţ�����ǲ��˵����ҽԺ��˳��š���źͱ�Ŷ���1��ʼ��
//
//�����ʽ :
//��һ������һ��������n(1 < n��100)����ʾĳ���ҽԺ�����Ĳ�������������������n�У����У���i(1��i��n)�Ǳ��Ϊi�Ĳ�����Ϣ�����������������ո���ַ��������Ȳ�����20�������䣨����������
//
//	�����ʽ :
//�����n�У���ʾ����ҽԺ�Ŷӹ����źöӵĲ�����Ϣ��ÿ����һ�����˵���Ϣ��������š����������䡢��š�ÿ�е�ÿ��������֮����һ���ո�
//
//�������� :
//8
//Zhaoliu 66
//Zhangsan 8
//Lisi 19
//Wangwu 80
//Sunqi 2
//Qianba 80
//Wu 15
//Zhoujiu 2
//�������:
//1 Wangwu 80 4
//2 Qianba 80 6
//3 Zhaoliu 66 1
//4 Sunqi 2 5
//5 Zhoujiu 2 8
//6 Zhangsan 8 2
//7 Lisi 19 3
//8 Wu 15 7
//#include <stdio.h>  
//#include <stdlib.h>  
//#include <string.h>  
//
//typedef struct {
//    int id;        // ���  
//    char name[21]; // ����  
//    int age;      // ����  
//} Patient;
//
//// �ȽϺ�������������  
//int compare(const void* a, const void* b) {
//    Patient* p1 = (Patient*)a;
//    Patient* p2 = (Patient*)b;
//
//    // 1. �����ˣ���60���ڷ������ˣ�<60��֮ǰ  
//    if (p1->age >= 60 && p2->age < 60) {
//        return -1;
//    }
//    if (p1->age < 60 && p2->age >= 60) {
//        return 1;
//    }
//
//    // 2. ��ͯ����14���������ˣ�>14��<60��֮ǰ  
//    if (p1->age <= 14 && p2->age > 14 && p2->age < 60) {
//        return -1;
//    }
//    if (p1->age > 14 && p1->age < 60 && p2->age <= 14) {
//        return 1;
//    }
//
//    // 3. ���������ˣ����������������С��֮ǰ  
//    if (p1->age >= 60 && p2->age >= 60) {
//        if (p1->age > p2->age) return -1;
//        if (p1->age < p2->age) return 1;
//    }
//
//    // 4. ���ڶ�ͯ������С�������������֮ǰ  
//    if (p1->age <= 14 && p2->age <= 14) {
//        if (p1->age < p2->age) return -1;
//        if (p1->age > p2->age) return 1;
//    }
//
//    // 5. ���������ˣ����������ں�����֮ǰ  
//    return p1->id - p2->id;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    Patient patients[n];
//
//    // ��ȡ������Ϣ  
//    for (int i = 0; i < n; i++) {
//        patients[i].id = i + 1; // ��Ŵ�1��ʼ  
//        scanf("%s %d", patients[i].name, &patients[i].age);
//    }
//
//    // ������  
//    qsort(patients, n, sizeof(Patient), compare);
//
//    // ����źöӵĲ�����Ϣ  
//    for (int i = 0; i < n; i++) {
//        printf("%d %s %d %d\n", i + 1, patients[i].name, patients[i].age, patients[i].id);
//    }
//
//    return 0;
//}
//#include <stdio.h>  
//
//int main() {
//    int number;
//    int sum, n;
//    double average;
//    n = 0;
//    sum = 0;
//
//    while (1) {  // This will create an infinite loop until we break it  
//        scanf_s("%d", &number);
//        if (number < 0) {  // Let's assume we stop input if we enter a negative number  
//            break;
//        }
//
//        if (number % 2 == 0) {
//            sum += number;
//            n++;
//        }
//    }
//
//    if (n > 0) {
//        average = (double)sum / n;  // Calculate average if n is greater than 0  
//    }
//    else {
//        average = 0.0;  // Avoid division by zero  
//    }
//
//    printf("%.2lf\n", average);
//    return 0;
//}
//
#include<stdio.h>
int de(int i);
int main()
{
    int i, j, count = 0;
    //for (i = 100; i <= 200; i++)
    //{
    //    if (de(i)==1)
    //    {
    //        printf("%5d", i);
    //        //count++;
    //    }
    //    if (count % 8 == 0)
    //        printf("\n");
    //}//��һ�������Ǵ�ġ�
    //return 0;
    for (i = 100; i <= 200; i++)
        {
        if (de(i) == 1)
        {
            printf("%5d", i);
            count++;
            if (count % 8 == 0)
                printf("\n");
        }
        }
        return 0;
}
int de(int i)
{
    for (int j = 2; j * j < i; j++)//jҪ��2��ʼ�����￪ʼ��д��1�����Ҹ�����
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;

}