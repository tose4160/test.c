//��дһ������int fun(int* s, int t, int* k)���书���ǣ����������������Ԫ���������е��±꣬�������k��ָ�Ĵ洢��Ԫ�С�
//�������룺5
//34 76 45 87 23
//Ԥ�������
//please input number :
//5 integers :
//    max : a[3] = 87"
//��ȷ���룺
#include <stdio.h>  
#define N 20  

int fun(int* s, int t, int* k)
{
    int max, i;
    max = *s; // ��ʼ�����ֵΪ����ĵ�һ��Ԫ��  
    *k = 0; // ��ʼ���±�Ϊ0  

    for (i = 1; i < t; i++) { // �ӵڶ���Ԫ�ؿ�ʼ����  
        if (*(s + i) > max) { // �����ǰԪ�ش��ڵ�ǰ���ֵ  
            max = *(s + i); // �������ֵ  
            *k = i; // �������ֵ���±�  
        }
    }

    return max; // �������ֵ����ѡ��  
}

int main() {
    int n;
    printf("please input number:\n");
    scanf("%d", &n);

    int a[N];
    printf("%d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_index;
    fun(a, n, &max_index); // ���ú������������鼰�䳤�Ⱥ�max_index�ĵ�ַ  

    printf("max:a[%d]=%d\n", max_index, a[max_index]);

    return 0;
}
//***********************
//�ҵĴ��룺
#include<stdio.h>
#include<string>
#define N 20
int fun(int* s, int t, int* k)
{
    int max, i;
    max = *s;
    *k = 0;
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (*(s + i) > max)
        {
            t = *(s + i);
            *(s + i) = max;
            max = t;
            (*k)++;
        }
    }
    return 0;
}
int main()
{
    int a[N], i, n, mindex, * p = &mindex;
    printf("please input number:\n");
    scanf("%d", &n);
    printf("%d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    fun(a, n, p);
    //printf("%d\n",mindex);
    printf("max:a[%d]=%d\n", *p, a[mindex]);
    return 0;
}
/*����Ҫ�� #include <string>:

C ������û�� #include <string> ͷ�ļ��� string �� C++ ��һ���֣�Ӧ��ɾ�����ͷ�ļ���
strlen(s)��ʹ�ô��� :

    strlen ���������ڼ����ַ������ȵģ��� s ��һ�����������ָ�룬�������ַ������ָ�롣�����������飬����Ӧ���ò��� t ����������������
    δ��ʼ�������ֵ���±� :

max ����ʼ��Ϊ* s�����ھ����������¹�������������Ӧ����ѭ���и��²����±�* k ��Ҫ���ҵ��µ����ֵʱ���¡���ˣ�* k Ӧ���ҵ�����ֵʱ���³ɵ�ǰ������
����δ����ı��� :

mindex �� p ����û�ж��壬Ӧ���滻Ϊ���ʵı�����
ʹ��ѭ��������ݲ����� :

ѭ����û��������ʵ�ֲ��֣�ȱ���ж����ֵ���߼���
����Ĵ�ӡ��� :

printf("max:a[%d]=%d\n", *p, a[mindex]); �е�* p �� mindex ���ǲ��Ϸ��ġ��ڴ��������У�Ӧ�ô�ӡ* k �� max*/
//#include <stdio.h>  
//#include <string.h>  
//#include <ctype.h>  
//
//void fun(char* S) {
//    int len = strlen(S);
//    int newLen = len; // ���ַ����ĳ���  
//
//    // �������ַ����ĳ���  
//    for (int i = 0; i < len; i++) {
//        if (isdigit(S[i])) { // ����Ƿ�Ϊ�����ַ�  
//            newLen++; // ��������֣���������1  
//        }
//    }
//
//    char result[newLen + 1]; // �������ַ���  
//    int j = 0; // ���ַ���������  
//
//    for (int i = 0; i < len; i++) {
//        result[j++] = S[i]; // ����ԭ�ַ�  
//
//        if (isdigit(S[i])) {
//            result[j++] = '*'; // �����ֺ������*  
//        }
//    }
//
//    result[j] = '\0'; // �������ַ���  
//    printf("%s\n", result); // ��ӡ���  
//}
//*********************8*****/
// ����fun�Ĺ�����:���β�S��ָ�ַ����е�ÿ�������ַ�֮�����һ�����磺�β�S��ָ�ַ���Ϊ:def35adh3kjsdf7��ִ�н��Ϊ:def3*5*adh3*kjsdf7*��
//int main() {
//    char str[] = "def35adh3kjsdf7"; // �����ַ���  
//    fun(str); // ���ú���  
//    return 0;
//}
//#include <stdio.h>  
//#include <string.h>  
//
//void fun(char* S) {
//    int len = strlen(S);
//    // ����һ���㹻��Ŀռ�����������ַ�����ַ���  
//    char result[2 * len + 1]; // �����ԭ�ַ������ȵ�����  
//    int j = 0; // result������  
//
//    for (int i = 0; i < len; i++) {
//        result[j++] = S[i]; // ���Ƶ�ǰ�ַ�  
//        // ����������ַ��������һ�� '*' �ַ�  
//        if (S[i] >= '0' && S[i] <= '9') {
//            result[j++] = '*';
//        }
//    }
//    result[j] = '\0'; // ��β�����ַ���������  
//
//    // ��������ƻ�ԭ�ַ���  
//    strcpy(S, result);
//}
//
//int main() {
//    char str[100] = "def35adh3kjsdf7"; // ԭ�ַ���  
//    fun(str);
//    printf("%s\n", str); // ������  
//    return 0;
//}
void fun(char* s) 
{ int i, j, n;
for (i = 0; s[i] != '\0'; i++) 
{
    n = strlen(s); 
    if (*(s + i) >= 48 && *(s + i) <= 58)
    { 
        for (j = n; j > i; j--) 
        {
        s[j] = s[j - 1];
        } 
        s[i] = '*';
    }
}
//���еĴ���
//strlen(s)��λ�ã�
//strlen(s)�������ѭ���ڼ���ģ�ʵ����ÿ��ѭ��������Ҫ���¼����ַ������ȡ����������Ӳ���Ҫ�Ŀ�������Ӧ�������ѭ��ǰ����һ���ַ������Ȳ��洢��һ�������С�
//
//����Խ�磺
//�������ַ����в����ַ�ʱ��û�п��ǵ��ַ����Ľ�β��־'\0'�����ԭ�ַ����ĳ���Ϊn�������ַ���ᵼ��ʵ��ռ�õ��ڴ泬��n���Ӷ����ܵ��»����������
//
//�����δ�����ַ������ȣ�
//����'*'���ַ����ĳ���������1����ʹ�õ�n��û�и��£�����ܵ��� j > i ����������Խ�����
//
//ѭ�������������У�
//�ڲ���'*'��i������������һ���ַ�������ͣ���ڵ�ǰ'*'�ϣ����ܵ�������ѭ����
//#include <stdio.h>  
//#include <string.h>  
//
//void fun(char* s) {
//    int i, j, n;
//    n = strlen(s); // �ȼ����ַ�������  
//    for (i = 0; i < n; i++) {
//        if (s[i] >= '0' && s[i] <= '9') { // ʹ���ַ�����  
//            // ��ҪΪ���ַ������ռ�  
//            for (j = n; j > i; j--) {
//                s[j ] = s[j-1]; // ����ƶ��ַ�  
//            }
//            s[i+1] = '*'; // �ڵ�ǰλ�ú�һ��λ�ò���'*'  
//            n++; // �ַ�����������  
//            i++; // �����²����'*'  
//        }
//    }
//    s[n] = '\0'; // ȷ���ַ�����'\0'��β  
//}
//***************************
// ��дһ������int fun(int *s,int t,int *k)���书���ǣ����������������Ԫ���������е��±꣬�������k��ָ�Ĵ洢��Ԫ�С�
//�ṩ��˼·���������
//������������ַ�����ĩβ��ǰ������for(i = n - 1; i >= 0; i--)������ֹ���ƶ��ַ���ʱ�򸲸���δ������ַ���
//
//�ƶ��ַ����ڲ������ַ�ʱ����ĩβ��ʼ�ƶ��ַ����Ա���δ�����ֵ������ԡ�
//
//���³��ȣ��ڲ����ַ������ n ��ֵ��ȷ������ӳ���ַ����ĳ��ȡ�
#include <stdio.h>  
#include <string.h>  

void fun(char* s, char c) {
    int i, j, n;
    n = strlen(s); // ��ȡ�ַ�����ʼ����  

    // ���ַ�����ĩβ��ʼ��������ֹ����δ������ַ�  
    for (i = n - 1; i >= 0; i--) {
        if (s[i] == c) {
            // ��������ַ�ƥ�䣬���ƶ�ÿ���ַ����Ҳ�  
            for (j = n; j > i; j--) {
                s[j + 1] = s[j]; // �����ƶ��ַ�  
            }
            s[i + 1] = c; // ��ƥ���ַ�������ַ�  
            n++; // �����ַ�������  
        }
    }
    s[n] = '\0'; // ȷ���ַ�����null��β  
}

int main() {
    char str[100] = "baacda"; // �洢Ҫ������ַ���  
    char ch;

    printf("The string:  %s\n", str);
    printf("Input a character:  ");
    scanf(" %c", &ch); // ע��ո������֮ǰ�Ļ��з�  

    fun(str, ch);
    printf("The result is:  %s\n", str);

    return 0;
}
#include <stdio.h>  
#include <string.h>  

void fun(char* s, char c) {
    int i, j, n;
    n = strlen(s); // ��ȡ�ַ�������  

    for (i = 0; i < n; i++) {
        if (s[i] == c) {
            // ���ַ���ĩβ��ǰ�ƶ��ַ�  
            for (j = n; j > i; j--) {
                s[j + 1] = s[j]; // �����ƶ��ַ��������ռ�  
            }
            s[i + 1] = c;  // �ڵ�ǰλ�ú�����ַ�  
            n++;           // �����ַ�������  
            i++;           // �����Ѳ�����ַ�  
        }
    }
    s[n] = '\0'; // ȷ���ַ�����null��β  
}

int main() {
    char str[100] = "baacda";
    char ch;

    printf("The string:  %s\n", str);
    printf("Input a character:  ");
    scanf(" %c", &ch); // ע��ո������֮ǰ�Ļ��з�  

    fun(str, ch);
    printf("The result is:  %s\n", str);

    return 0;
}