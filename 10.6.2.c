#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int numToGuess, userGuess;
    srand(time(NULL));  // �������������������

    numToGuess = rand() % 100 + 1;  // ���� 1 �� 100 ֮��������

    do 
    {
        printf("���������Ĳ²�: ");
        scanf_s("%d", &userGuess);

        if (userGuess > numToGuess) 
        {
            printf("���µ����ִ��ˣ������ԣ�\n");
        }
        else if (userGuess < numToGuess) 
        {
            printf("���µ�����С�ˣ������ԣ�\n");
        }
    } 
    while (userGuess != numToGuess);

    printf("��ϲ�����¶��ˣ�\n");

    return 0;
}
/*��������������ʱû��������������ӣ���û�е��� ?srand(time(NULL))? ������ôÿ�����г���ʱ�����ɵ���������н�������ͬ�ġ�

��ΪĬ������£����û���������ӣ��������������ʹ��һ���̶���Ĭ�����ӣ�����ÿ�γ������еĽ����Ԥ������ͬ�������������������*/