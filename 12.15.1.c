/*���ַ������±�Ϊ����λ���ϵ���ĸת��Ϊ��д*/��
//#include <stdio.h>  
//#include <ctype.h>  
//
//void fun(char* ss) {
//    for (int i = 0; ss[i] != '\0'; i++) {
//        // ֻ���������±���ַ�  
//        if (i % 2 != 0 && isalpha(ss[i])) {
//            ss[i] = toupper(ss[i]);
//        }
//    }
//}
//
//int main() {
//    char ss[100];
//    // ��ȡ�����ַ���  
//    scanf("%s", ss);
//
//    // ���ú��������ַ���  
//    fun(ss);
//
//    // ������  
//    printf("%s\n", ss);
//
//    return 0;
//}

//ѡ�����򷨸պ���ð�������෴��
//void selectionSort(int* arr, int n) {
//    for (int i = 0; i < n - 1; i++) {
//        // ���赱ǰiλ�õ�Ԫ������Сֵ  
//        int minIndex = i;
//
//        // ��δ���򲿷����ҵ���Сֵ������  
//        for (int j = i + 1; j < n; j++) {
//            if (*(arr + j) < *(arr + minIndex)) {
//                minIndex = j;  // ������Сֵ������  
//            }
//        }
//
//        // ������ǰλ�ú��ҵ�����Сֵ��λ��  
//        if (minIndex != i) {
//            int temp = *(arr + i);
//            *(arr + i) = *(arr + minIndex);
//            *(arr + minIndex) = temp;
//        }
//    }
//}
//���������Ԫ�ص����ֵ
//�Ӽ������벻����50���Ǹ�������������Ϊ��ֵʱ����ʾ����������Ա��������е����ֵ��
//�����ʽ :
//��һ���и���������50���Ǹ��������ո�ָ������Ը���������
//�����ʽ :
//�������������ʽ������е����ֵ���������
//#include <stdio.h>  
//
//int main() {
//    int num;
//    int max = -1; // ��ʼ�����ֵΪ-1����ʾû����Ч����  
//    int firstInput = 1; // ���ڼ���Ƿ�����Ч����  
//
//    printf("�����벻����50���Ǹ��������Ը�������: \n");
//
//    while (1) {
//        scanf("%d", &num); // �ӱ�׼�����ȡ����  
//        if (num < 0) { // �����븺�������������  
//            break;
//        }
//
//        if (firstInput) { // ��һ����Ч����  
//            max = num; // �������ֵ  
//            firstInput = 0; // ����Ѿ�����Ч����  
//        }
//        else if (num > max) { // �����������ִ���Ŀǰ�����ֵ  
//            max = num; // �������ֵ  
//        }
//    }
//
//    if (firstInput) { // ���û����Ч����  
//        printf("NULL!\n");
//    }
//    else {
//        printf("max=%d\n", max); // ������ֵ  
//    }
//
//    return 0; // ����ɹ�����  
//}//���˼άֵ��ѧϰ
// //�ú�����ָ�뽫������ĸ�ַ����ĵ�һ����ĸ��ɴ�д��ĸ��������ĸ���Сд��ĸ����main�����н����ַ��������룬�ı����ַ��������Ҳ��main������ʵ�֡�
//#include <stdio.h>  
//#include <string.h>  
//#include <ctype.h>  
//
//void convert_case(char* str) {
//    if (str != NULL && strlen(str) > 0) {
//        // Convert the first character to uppercase  
//        str[0] = toupper(str[0]);//toupper�������ַ�����ĺ�������Сд��ĸ�᷵�ش�д��ĸ������Ĳ���Сд��ĸ�ͷ�������������isupper�ܹ��ж�����ַ��Ƿ�ΪСд��ĸ
//
//        // Convert the rest of the characters to lowercase  
//        for (int i = 1; str[i] != '\0'; i++) {
//            str[i] = tolower(str[i]);
//        }
//    }
//}
//
//int main() {
//    char input[256]; // Buffer to hold the input string  
//
//    //printf("�������ַ���: ");  
//    fgets(input, sizeof(input), stdin);
//
//    // Remove the newline character from fgets input  
//    input[strcspn(input, "\n")] = '\0';//strcspn��input�ĵ�һ���ַ���ʼ����\n'����
//    //�ٸ����ӣ�char str1[]="abcdef"
//    //char str2[]="cf"  strcspn(str1,str2)�᷵��2����Ϊ��str1�У��ӿ�ʼ���������ַ�������Ϊ2��֮ǰ�Ĳ���û�г���str2�е��ַ������ڵ������ַ�c��str2�г�����
//
//    convert_case(input);
//
//    printf("%s\n", input);
//
//    return 0;
//}
//�鿴ѧ���ɼ�
//��3��ѧ����ÿ��ѧ����4�ſγ̵ĳɼ���Ҫ�����û�����ѧ������Ժ��������ѧ����ȫ���ɼ�����ָ�뺯����ʵ�֡�������Ŵ�1��ʼ��������ҷ�Χ������Ҫ���������ʾ��
//
//PS����Щѧ���ɼ��ֱ�Ϊ��
//
//60, 70, 80, 90
//
//56, 89, 67, 88
//
//34, 78, 90, 66
//
//�����ʽ:
//����Ҫ���ҵ�ѧ����š�
//
//�����ʽ :
//�����ѧ����ȫ���ɼ����ɼ�֮���ÿո�ָ�������2λС����ע�����һ���ɼ���Ŀո��뻻�С�
//
//�������� :
//2
//������� :
//	56.00 89.00 67.00 88.00
//	�������� :
//	-1
//	������� :
//	Erro
//#include <stdio.h>  
//
//void printGrades(int grades[][4], int studentIndex) {
//    // ʹ��ָ�뺯�����ʸ�ѧ���ĳɼ�  
//    int* studentGrades = grades[studentIndex];
//
//    for (int i = 0; i < 4; i++) {
//        printf("%.2f", (float)studentGrades[i]);
//        if (i < 3) {
//            printf(" ");
//        }
//    }//��δ����б�Ҫע��һ��
//    printf("\n");
//}
//
//int main() {
//    int grades[3][4] = {
//        {60, 70, 80, 90},
//        {56, 89, 67, 88},
//        {34, 78, 90, 66}
//    };
//
//    int studentIndex;
//
//    // ����ѧ�����  
//    scanf("%d", &studentIndex);
//
//    // ��������Ч�ԣ���1��ʼ�����ת��Ϊ0������  
//    if (studentIndex < 1 || studentIndex > 3) {
//        printf("Erro\n");
//    }
//    else {
//        printGrades(grades, studentIndex - 1);
//    }
//
//    return 0;
//}
//����һ���ַ�����һ���ַ�ch�����ַ��������е�ch�ַ�ɾ����������ַ�����Ҫ����ָ��ʵ�֡�
//Ҫ����͵��ú��� delchar(char* s, char ch);
//#include <stdio.h>  
//
//void delchar(char* s, char ch) {
//    char* d = s; // ָ��Ŀ���ַ�����ָ��  
//    while (*s) { // �� s ָ����ַ���Ϊ '\0' ʱѭ��  
//        if (*s != ch) { // �����ǰ�ַ�����Ҫɾ�����ַ�  
//            *d++ = *s; // ����ǰ�ַ����Ƶ�Ŀ��λ�ò��ƶ�ָ��  
//        }
//        s++; // �ƶ�Դ�ַ�����ָ��  
//    }
//    *d = '\0'; // ����Ŀ���ַ���  
//}
//
//int main() {
//    char ch;
//    char str[100]; // �����ַ����Ϊ 99 ���ַ���������ֹ����  
//
//    // �����ַ�  
//   // printf("������Ҫɾ�����ַ�: ");  
//    scanf(" %c", &ch); // ע��ǰ��Ŀո��Ժ���ǰ��Ļ��з�  
//
//    // �����ַ���  
//    //printf("�������ַ���: ");  
//    scanf(" %[^\n]", str); // ��ȡ�����ո�������ַ��� �������������΢��һ�£� 
//
//    // ����ɾ���ַ�����  
//    delchar(str, ch);
//
//    // ������  
//    printf("%s\n", str);
//
//    return 0;
//}
// ָ������������
//����һ���У�����10�������Ѱ������źá���Ҫ���һ�������ܹ��Ѵ�ָ��λ�ÿ�ʼ��n�����������������в�����µ��������У�����������ʱҪ��ʹ��ָ�뷽����
//
//�����ʽ :
//����������С�
//��һ������10������n
//i
//?
//���Կո�ָ����֡���1��n��10000��
//�ڶ�����������ʼ��λ�ú�������
//
//�����ʽ :
//���������10�����֣��Կո�ָ����֡�
//
//�������� :
//2 4 6 8 10 12 14 16 18 20
//4 5
//������� :
//	2 4 6 16 14 12 10 8 18 20
//#include <stdio.h>  
//
//void reverse(int* arr, int start, int n) {
//    int end = start + n - 1; // The end position of the subarray to reverse  
//    while (start < end) {
//        // Swap the elements  
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//        start++;
//        end--;
//    }
//}
//
//int main() {
//    int arr[10];
//    // Read the 10 integers into the array  
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // Read the start position and number of elements to reverse  
//    int startPos, num;
//    scanf("%d %d", &startPos, &num);
//
//    // Adjust to 0-based index  
//    startPos -= 1;
//
//    // Call the reverse function  
//    reverse(arr, startPos, num);
//
//    // Print the modified array  
//    for (int i = 0; i < 10; i++) {
//        if (i > 0) {
//            printf(" ");
//        }
//        printf("%d", arr[i]);
//    }
//    printf("\n");
//
//    return 0;
//}