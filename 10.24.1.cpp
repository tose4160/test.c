//�����ǽ��ṹ�������ṹ�������ӵ�һ��
//��̬����һ������+ģ�黯���
//1.��������(����һ����ͷ��ʾ��������
//2.�����ڵ�
//3.����ڵ�
//4.ɾ������
//5.��ӡ���������������ԣ�
//����1�������ͷheadNode(�ṹָ�룩��α�ɽṹ�������
//�𣺶�̬�ڴ�����
//��ͷ������
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;//������//����ڵ�����
	struct Node* next;//ָ����//ָ����һ���ڵ��ָ��
};
struct Node* creatList()//��������ĺ���
{
	//��̬�����ڴ�������ͷ�ڵ�
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//headNode ��Ϊ�˽ṹ�����
	//����ʹ��ǰ���뱻��ʼ��
	headNode->data = 1;//��ʼ��ͷ�ڵ�Ϊ1����һ��ָ��ΪNULL����ʾ����Ϊ�գ�
	headNode->next = NULL;//
	return headNode;//���ش�����ͷ�ڵ�
}
//�����ڵ��Ŀ����Ϊ�˲���ڵ㣨Ҫ������Ҫ�У�
struct Node* creatNode(int data)//�����½ڵ�ĺ��������ݴ�������ݴ����ڵ�
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
	while (pMove)//ֻҪ���ڵ㲻ΪNULL
	{
		printf("%d\t", pMove->data);//��ӡ��ǰ�ڵ������
		pMove = pMove->next;//�ƶ�����һ�ڵ�
	}
	printf("\n");//����
}
//����ڵ㣬�����������Ǹ���������ڵ�������Ƕ���
void insertNodeByHead(struct Node* headNode,int data)
{
	//1.��������ڵ�
	struct Node* newNode = creatNode(data);//1.����Ҫ����Ľڵ�
	//2.���½ڵ����һ��ָ��ָ��ԭ��ͷ�ڵ����һ���ڵ�
	newNode->next = headNode->next;//�����=��ָ�����˼
	//3.��ͷ�ڵ����һ��ָ��ָ���½ڵ�
	headNode->next = newNode;
}
void deleteNodeByAppoin(struct Node* headNode, int posData)//ָ��λ��ɾ��//ǰ���ʾɾ�����������ݣ������Ǹ���ָ��Ϊֵ��ָ�����ݣ�����������Ϊ����
{            //ͨ��ָ���ķ�ʽ
	struct Node* posNode = headNode->next;//posNode����ͷ����һ��ȥ��
	struct Node*posNodeFront = headNode;//posNodeFrontҪ��ָ��λ�ã�posNode)ǰ���Ǹ��ڵ�
	if (posNode == NULL)//��ʾ����Ϊ�յ�
	{
		printf("�޷�ɾ������Ϊ��\n");
	}
	else//����λ��
	{
		while (posNode->data != posData)//ָ���ڵ�����ݲ�����ָ��������
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
	insertNodeByHead(List, 1);//������ͷ������ڵ�1
	insertNodeByHead(List, 2);//������ͷ������ڵ�2
	insertNodeByHead(List, 3);//������ͷ������ڵ�3
	printList(List);//��ӡ//�����321
	deleteNodeByAppoin(List, 2);//ɾ��2
	printList(List);//��ӡ
	system("pause");//�ڴ˴���ͣ
	return 0;
}
//ɾ����ʽ��ָ��λ��ɾ��