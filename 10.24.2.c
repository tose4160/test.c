//һ������Ŀ��ʹ�õĸ�ʽ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct student//����Ҫ�����ѧ������ϵͳ��д���������棩
{
	char name[20];//����
	int num;//���
	int math;//��ѧ�ɼ�
};
struct Node
{
	struct student data;//������//����ڵ�����
	struct Node* next;//ָ����//ָ����һ���ڵ��ָ��
};
struct Node* creatList()//��������ĺ���
{
	//��̬�����ڴ�������ͷ�ڵ�
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode ��Ϊ�˽ṹ�����
	//����ʹ��ǰ���뱻��ʼ��
	//headNode->data = 1;//��ʼ��ͷ�ڵ�Ϊ1����һ��ָ��ΪNULL����ʾ����Ϊ�գ�
	headNode->next = NULL;//
	return headNode;//���ش�����ͷ�ڵ�
}
//�����ڵ��Ŀ����Ϊ�˲���ڵ㣨Ҫ������Ҫ�У�
struct Node* creatNode(struct student data)//�����½ڵ�ĺ��������ݴ�������ݴ����ڵ�
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//��̬�����������½ڵ�
	//��ʼ���½ڵ������Ϊ����ֵ����һ��ָ��ΪNULL
	newNode->data = data;
	newNode->next = NULL;
	return newNode;//���ش������½ڵ�
}
//��ӡ����ĺ���
void printList(struct Node* headNode)
{
	//������ĵڶ����ڵ㿪ʼ��ӡ��ͷ�ڵ�������ڴ���ʱ���趨��
	struct Node* pMove = headNode->next;
	printf("name\tnum\tmath\n");
	while (pMove)//ֻҪ���ڵ㲻ΪNULL
	{
		printf("%s\t%d\t%d\n", pMove->data.name, pMove->data.num, pMove->data.math);//��ӡ��ǰ�ڵ������
		pMove = pMove->next;//�ƶ�����һ�ڵ�
	}
	printf("\n");//����
}
//����ڵ㣬�����������Ǹ���������ڵ�������Ƕ���
void insertNodeByHead(struct Node* headNode, struct student data)
{
	//1.��������ڵ�
	struct Node* newNode = creatNode(data);//1.����Ҫ����Ľڵ�
	//2.���½ڵ����һ��ָ��ָ��ԭ��ͷ�ڵ����һ���ڵ�
	newNode->next = headNode->next;//�����=��ָ�����˼
	//3.��ͷ�ڵ����һ��ָ��ָ���½ڵ�
	headNode->next = newNode;
}
void deleteNodeByAppoinNum(struct Node* headNode, int num)//ָ��λ��ɾ��//ǰ���ʾɾ�����������ݣ������Ǹ���ָ��Ϊֵ��ָ�����ݣ�����������Ϊ����//ָ�����
{            //ͨ��ָ���ķ�ʽ
	struct Node* posNode = headNode->next;//posNode����ͷ����һ��ȥ��
	struct Node* posNodeFront = headNode;//posNodeFrontҪ��ָ��λ�ã�posNode)ǰ���Ǹ��ڵ�
	if (posNode == NULL)//��ʾ����Ϊ�յ�
	{
		printf("�޷�ɾ������Ϊ��\n");
	}
	else//����λ��
	{
		while (posNode->data.num != num)//ָ���ڵ�����ݲ�����ָ��������
		{
			posNodeFront = posNode;//ǰ��Ľڵ㵽�˺�������ڵ��λ��
			posNode = posNodeFront->next;//��������ڵ㵽����ԭ��λ�õ���һ��
			if (posNode == NULL)//��ʾ����Ϊ�յ�//�ҵ��˱�β
			{
				printf("δ�ҵ������Ϣ�޷�ɾ��\n");
				return;
			}
		}
		posNodeFront->next = posNode->next;//ԭ���Ĺ�ϵ��ͷ-->posNodeFront-->posNode-->(posNode->next),�޸ĺ�ͷ-->posNodeFront-->(posNode->next)
		free(posNode);//ɾ��ָ��//�ͷ���Ӧ���ڴ�ռ�//ɾ�������ָ��λ�õĽڵ�
	}
}

int main()
{
	struct Node* List = creatList();//��������
	struct student info;
	while (1)
	{
		printf("������ѧ�������� ѧ�� ��ѧ�ɼ���");
		scanf_s("%s %d %d",&info.name,&info.num,&info.math);
		setbuf(stdin, NULL);//���ַ�����ͳһ��������һ��
		insertNodeByHead(List, info);//��������
		printf("�Ƿ������Y/N��");
		int choice = getchar();//�������������
		setbuf(stdin, NULL);//��ջ�����
		scanf_s("%d", &choice);
		if (choice == 'N' || choice == 'n')
		{
			break;
		}
	}
	printList(List);//��ӡ
	printf("������Ҫɾ����ѧ����ţ�");
	scanf("%d", &info.num);
	deleteNodeByAppoinNum(List, info.num);
	printList(List);
	system("pause");//�ڴ˴���ͣ
	return 0;
}
//ɾ����ʽ��ָ��λ��ɾ��