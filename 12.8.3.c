//有 n 位学生，一个学生信息对应四种数据：姓名、语文成绩、数学成绩和英语成绩，整数。请使用结构体数组对以上数据进行存储，并输出每门科目成绩最高的学生信息。
//
//输入格式 :
//第一行输入一个偶数 n(1≤n≤10)。
//接下来输入 n 行，每行包含一个字符串 str，三个非负整数 a, b, c，用空格分隔。(3≤str.length≤10, 0≤a, b, c≤100)。
//
//输出格式 :
//输出每门科目中最高成绩学生的完整信息。（若出现多个最高成绩学生，按照输入先后一并输出）
//
//输入样例 :
//input01:
//
//4
//bob 60 70 80
//alice 70 80 90
//wade 90 90 70
//hali 89 78 67
//输出样例:
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
//输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。
//
//输入格式 :
//
//输入第一行给出正整数n（ < 10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”
//	是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及 + 、 - 组成的字符串。
//
//	输出格式 :
//
//按照年龄从大到小输出朋友的信息，格式同输出。
//
//输入样例 :
//在这里给出一组输入。例如：
//
//3
//zhang 19850403 13912345678
//wang 19821020 + 86 - 0571 - 88018448
//qian 19840619 13609876543
//输出样例:
//在这里给出相应的输出。例如：
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
//定义一个存放学生信息的结构体类型，学生信息包括：学号、姓名、性别、院系。要求输入5个学生的相关信息后，按照学号顺序输出这些学生的信息，然后输入院系名称，统计并输出该院学生人数。
//
//输入格式 :
//5个学生信息和1个院系名称。
//
//输出格式 :
//按学号排序输出5个学生信息，1个相应学院的学生人数。
//
//输入样例 :
//在这里给出一组输入。例如：
//
//03 张三 男 计算机
//01 赵大 男 计算机
//02 钱二 女 机械
//05 王五 男 机械
//04 李四 女 土木
//计算机
//输出样例 :
//在这里给出相应的输出。例如：
//
//01 赵大 男 计算机
//02 钱二 女 机械
//03 张三 男 计算机
//04 李四 女 土木
//05 王五 男 机械
//2
//#include <stdio.h>  
//#include <string.h>  
//
//#define MAX_STUDENTS 5  
//#define MAX_NAME_LENGTH 50  
//#define MAX_DEPT_LENGTH 50  
//
//// 定义学生信息结构体  
//typedef struct {
//    char id[10];         // 学号  
//    char name[MAX_NAME_LENGTH]; // 姓名  
//    char gender[10];     // 性别  
//    char department[MAX_DEPT_LENGTH]; // 院系  
//} Student;
//
//// 函数用于按学号比较两个学生的函数  
//int compare(const void* a, const void* b) {
//    return strcmp(((Student*)a)->id, ((Student*)b)->id);
//}
///*compare函数用于比较两个Student结构体的学号（id），以便后续的排序。通过类型转换将void指针转换为Student指针，然后使用strcmp函数比较两个学号字符串*///。
//int main() {
//    Student students[MAX_STUDENTS];
//    char queryDept[MAX_DEPT_LENGTH];
//
//    // 输入学生信息  
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        scanf("%s %s %s %s", students[i].id, students[i].name, students[i].gender, students[i].department);
//    }
//
//    // 按学号排序  
//    qsort(students, MAX_STUDENTS, sizeof(Student), compare);
//    //使用qsort函数对students数组进行排序。需要传入数组指针、数组元素数量、单个元素的大小和比较函数。这样会基于学号对学生信息进行排序。
//    // 输出学生信息  
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        printf("%s %s %s %s\n", students[i].id, students[i].name, students[i].gender, students[i].department);
//    }
//
//    // 输入院系名称  
//    scanf("%s", queryDept);
//
//    // 统计并输出该院系学生人数  
//    int count = 0;
//    for (int i = 0; i < MAX_STUDENTS; i++) {
//        if (strcmp(students[i].department, queryDept) == 0) {
//            count++;
//        }
//    }
//    /*初始化count为0，用于统计符合条件的学生数量。循环遍历学生信息，并使用strcmp比较每个学生的院系是否与queryDept相同。如果相同，则count加1。*/
//    printf("%d\n", count);
//
//    return 0;
//}
//定义一个表示平面直角坐标系下点坐标的结构体类型，输入两个点的坐标，存放在所定义的结构体类型变量中，调用一个自定义函数计算并输出这两个点的中点坐标。
//
//输入格式 :
//两个点的坐标。
//
//输出格式 :
//中点坐标。
//
//输入样例 :
//在这里给出一组输入。例如：
//
//(10.24, 5.8)(-10.24, -5.8)
//输出样例 :
//    在这里给出相应的输出。例如：
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
//    // 输入两个点的坐标  
//   // printf("请输入两个点的坐标，用空格分隔（如：10.24 5.8 -10.24 -5.8）：\n");  
//    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
//
//    // 计算中点  
//    Point midPoint = calculateMidPoint(p1, p2);
//
//    // 输出结果  
//    printf("(%.2f,%.2f)\n", midPoint.x, midPoint.y);
//
//    return 0;
//}
////突然间发现用结构体可以一下返回多个值
//大家都知道看病是要排队的。某医院为发扬尊老爱幼的传统美德，规定排队规则如下：
//
//老年人（年龄不小于60）排在非老年人（年龄小于60）之前；
//儿童（年龄不大于14）排在年轻人（年龄大于14且小于60）之前；
//对于老年人，年龄大者排在年龄小者之前，若年龄相同，则先来者排在后来者之前；
//对于儿童，年龄小者排在年龄大者之前，若年龄相同，则先来者排在后来者之前；
//对于年轻人，先来者排在后来者之前。
//设某天该医院来了n个病人，请给出排队信息（序号，姓名，年龄，编号），其中，序号是按规则排队后的顺序号，编号是病人到达该医院的顺序号。序号和编号都从1开始。
//
//输入格式 :
//第一行输入一个正整数n(1 < n≤100)，表示某天该医院到来的病人总数。接下来输入n行，其中，第i(1≤i≤n)是编号为i的病人信息，包括姓名（不含空格的字符串，长度不超过20）和年龄（正整数）。
//
//	输出格式 :
//输出共n行，表示按该医院排队规则排好队的病人信息，每行是一个病人的信息，包括序号、姓名、年龄、编号。每行的每两个数据之间留一个空格。
//
//输入样例 :
//8
//Zhaoliu 66
//Zhangsan 8
//Lisi 19
//Wangwu 80
//Sunqi 2
//Qianba 80
//Wu 15
//Zhoujiu 2
//输出样例:
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
//    int id;        // 编号  
//    char name[21]; // 姓名  
//    int age;      // 年龄  
//} Patient;
//
//// 比较函数，用于排序  
//int compare(const void* a, const void* b) {
//    Patient* p1 = (Patient*)a;
//    Patient* p2 = (Patient*)b;
//
//    // 1. 老年人（≥60）在非老年人（<60）之前  
//    if (p1->age >= 60 && p2->age < 60) {
//        return -1;
//    }
//    if (p1->age < 60 && p2->age >= 60) {
//        return 1;
//    }
//
//    // 2. 儿童（≤14）在年轻人（>14且<60）之前  
//    if (p1->age <= 14 && p2->age > 14 && p2->age < 60) {
//        return -1;
//    }
//    if (p1->age > 14 && p1->age < 60 && p2->age <= 14) {
//        return 1;
//    }
//
//    // 3. 对于老年人，年龄大者排在年龄小者之前  
//    if (p1->age >= 60 && p2->age >= 60) {
//        if (p1->age > p2->age) return -1;
//        if (p1->age < p2->age) return 1;
//    }
//
//    // 4. 对于儿童，年龄小者排在年龄大者之前  
//    if (p1->age <= 14 && p2->age <= 14) {
//        if (p1->age < p2->age) return -1;
//        if (p1->age > p2->age) return 1;
//    }
//
//    // 5. 对于年轻人，先来者排在后来者之前  
//    return p1->id - p2->id;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    Patient patients[n];
//
//    // 读取病人信息  
//    for (int i = 0; i < n; i++) {
//        patients[i].id = i + 1; // 编号从1开始  
//        scanf("%s %d", patients[i].name, &patients[i].age);
//    }
//
//    // 排序病人  
//    qsort(patients, n, sizeof(Patient), compare);
//
//    // 输出排好队的病人信息  
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
    //}//这一整个都是错的。
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
    for (int j = 2; j * j < i; j++)//j要从2开始，这里开始就写的1，把我干蒙了
    {
        if (i % j == 0)
        {
            return 0;
        }
    }
    return 1;

}