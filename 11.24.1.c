//ʵ��ͳ�������ַ��� (�Իس����з�Ϊ������־) ��Ԫ����ĸ�ĸ�����
//#include<stdio.h>
//int main()
//{
//    char s[100], alpha[] = { 'a', 'e', 'i', 'o', 'u' };
//    int num[5] = { 0 };
//    int i = 0, k;
//    while ((s[i] = getchar()) != '\n')
//        i++;
//    s[i] = '\0';
//    i = 0;
//    while (s[i] != '\0')
//    {
//        for (k = 0; k < 5; k++)
//            if (s[i] == alpha[k] )
//            {
//                num[k]++;;
//            }
//        i++;
//    }
//    for (k = 0; k < 5; k++)
//        printf("%c:%d\n", alpha[k], num[k]);
//    return 0;
//}
//����Ϊʵ�����۰���ҵĳ�������ա�ע���۰�����㷨Ҫ�����������������ġ�
//#include <stdio.h>  
//int binary_search(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//    int mid;
//    int found = -1;
//    while (left <= right) {
//
//        mid = left + right;
//        if (arr[mid] == target) {
//
//            found = arr[mid]
//                ;
//            break;
//        }
//        else if (arr[mid] < target) 
//        {
//            left = mid + 1;
//        }
//        else 
//        {
//            right = mid - 1;
//        }
//    }
//    return found;
//}
//
//int main() {
//    int arr[] = { 2, 3, 4, 10, 40, 56, 70, 90, 96, 101 };
//    int target;
//    int result;
//    scanf_s("%d", &target);
//    result = binary_search(arr, 10, target);
//    if (result == -1) {
//        printf("Not Found\n");
//    }
//    else {
//        printf("arr[%d]:%d\n", result, arr[result]);
//    }
//    return 0;
//}
//����һ��ʮ��������a��Ȼ������һ��n(nΪ2��8��16)����aת��Ϊn�������������
//#include <stdio.h>
//int main()
//{
//    unsigned int a, n, i = 0;
//    int arr[100] = { 0 };
//    scanf_s("%u %u", &a, &n);
//    if (n != 2 && n != 8 && n != 16)
//        return 0;
//    do {
//        arr[i++] = a % n;
//        a = a / n;
//        
//    } while (a != 0);
//    for(i--;i>=0;i--)
//    {
//        if (n == 16 && arr[i] > 9)//����������ǻ��з��ʳ�ͻ�������λ�ã�//���˺þò��ҵ���Ϊi���޷������Σ��������i�����-1���Գ����˷��ʳ�ͻ
//            printf("%c", 'A' + arr[i] - 10);
//        else
//            printf("%d",arr[i]);
//    }
//
//    return 0;
//}
//#include <stdio.h>  

//int main() {
//    unsigned int a, n;
//    int arr[100] = { 0 }; // ����һ����СΪ100������  
//    int i = 0;
//
//    // ʹ�� %u ��ȡ unsigned int  
//    printf("Enter an unsigned integer and base (2, 8, or 16): ");
//    if (scanf_s("%u %u", &a, &n) != 2) {
//        fprintf(stderr, "Invalid input.\n");
//        return 1; // ������Чʱ����  
//    }
//
//    if (n != 2 && n != 8 && n != 16) {
//        fprintf(stderr, "Base must be 2, 8, or 16.\n");
//        return 1; // ������Чʱ����  
//    }
//
//    // ����ת��  
//    do {
//        arr[i] = a % n;
//        a = a / n;
//        i++;
//
//        if (i >= 100) { // ��ֹԽ��  
//            fprintf(stderr, "Too many digits.\n");
//            return 1; // �������鷶Χʱ����  
//        }
//
//    } while (a != 0);
//
//    // ����������  
//    for (i--; i >= 0; i--) { // �����һ��λ�ÿ�ʼ���  
//        if (n == 16 && arr[i] > 9) {
//            printf("%c", 'A' + arr[i] - 10);
//        }
//        else {
//            printf("%d", arr[i]);
//        }
//    }
//    printf("\n"); // ������з�  
//
//    return 0;
//}
//�����ʽ:
//�����һ�и�������������m��n��1��m, n��6�������m�У�ÿ�и���n������������Կո�ָ���
//
//�����ʽ��
//ÿ�������Ӧ������Ԫ��֮�͡�
//
//����������
//3 2
//6 3
//1 - 8
//3 12
//
//���������
//10
//7
//#include <iostream>
//using namespace std;
//const int MAXM = 6;
//const int MAXN = 6;
//
//int main()
//{
//    int i, j, m, n, sum;
//    int a[MAXM][MAXN];
//
//    cin >> m >> n;
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < n; j++) {
//
//            scanf_s("%d", &a[i][j]);
//
//        }
//    }
//
//    for (j = 0;j < n; j++)
//    {
//        sum = 0;//����ĳ�ʼ����������
//
//        for (i = 0; i < m; i++)
//        {
//            sum += a[i][j];
//        }
//        cout << sum << endl;
//    }
//    return 0;
//}
//����һ���ַ�����ͳ��������ĵ��ʲ������
//#include <stdio.h>
//
//int findLongest(char str[]);
//
//int main()
//{
//    char sArr[100] = { 0 };
//    int loc, i;
//
//    gets(sArr);
//
//    loc =findLongest(sArr) ;
//
//    for (i = loc; sArr[i] != ' ' && sArr[i] != '\0'; i++)
//        putchar(sArr[i]);
//
//    return 0;
//}
//
//int findLongest(char str[])
//{
//    int i = 0, Loc = 0, len = 0, lLoc = 0;
//    while (str[i] != '\0')
//    {
//        while (str[i] == ' ')
//            i++;
//        lLoc = i;
//        while (str[i] != ' ' && str[i] != '\0')
//            i++;
//        if (i - lLoc > len)
//        {
//            len = i - lLoc;
//            Loc = lLoc;
//        }
//    }
//    return Loc;
//}
//#include <stdio.h>  
////����ֱ����������ѡ������������û�뵽��
//int main() {
//    int arr[10], maxIndex = 0, minIndex = 0;
//
//    // ��ȡ��������  
//    for (int i = 0; i < 10; i++) {
//        scanf_s("%d", &arr[i]);
//        // �ҵ����ֵ����Сֵ������  
//        if (arr[i] > arr[maxIndex]) {
//            maxIndex = i;
//        }
//        if (arr[i] < arr[minIndex]) {
//            minIndex = i;
//        }
//    }
//
//    // �������ֵ����Сֵ��λ��  
//    int temp = arr[maxIndex];
//    arr[maxIndex] = arr[minIndex];
//    arr[minIndex] = temp;
//
//    // ������������ָ����ʽ  
//    printf("�����������:");
//    for (int i = 0; i < 10; i++) {
//        printf("%d", arr[i]);
//        if (i < 9) {
//            printf(" ");  // �����ּ���ӿո����һ�����ֲ��ӿո�  
//        }
//    }
//    printf("\n"); // ����  
//
//    return 0;
//}
//���д����fun���ú����Ĺ������ƶ��ַ����е����ݡ��ƶ��Ĺ������£��ѵ�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m + 1�������ַ��Ƶ��ַ�����ǰ����
//
//�����ʽ :
//��������д�����ʽ�����磺������һ���и���2������ֵ������1000������A��B��
//
//�����ʽ :
//�����������������ʽ�����磺��ÿһ�����룬��һ�������A + B��ֵ��
//
//�������� :
//���������һ�����롣���磺
//
//abcdefg
//3
//�������:
//�����������Ӧ����������磺
//
//defgabc
#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>  
//#include <string.h>  
//void fun(char str[], int m) {
//    int len = strlen(str);
//    if (m < 0 || m > len) {
//        printf("Invalid m\n");
//        return;
//    }
//
//    // Create a temporary array to hold the rearranged string  
//    char temp[1001]; // Assuming the max length of string is 1000  
//
//    // Copy the part from m+1 to end of the string  
//    strncpy(temp, str + m, len - m);
//
//    // Copy the first part from the beginning to m  
//    strncpy(temp + (len - m), str, m);
//
//    // Null terminate the new string  
//    temp[len] = '\0';
//
//    // Print the result  
//    printf("%s\n", temp);
//}
//
//int main() {
//    char str[1001];
//    int m;
//
//    // Input string and m  
//    //printf("Enter a string (max 1000 characters): ");  
//    scanf("%s", str);
//    printf("Enter m: ");
//    scanf("%d", &m);
//
//    // Call the function to rearrange the string  
//    fun(str, m);
//
//    return 0;
//}
