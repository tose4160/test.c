#include<stdio.h>
void loveyou(int n);
int main()
{
	int n;
	scanf_s("%d", &n);
	loveyou(n);
	return 0;
}
void loveyou(int n)
{
	int a, b, c;
	if (n > 1)
	{
		loveyou(n - 1);
		printf("I Love You %d\n", n);//ÿһ�εݹ鿪ʼ��λ��
	}
	printf("I Love You %d\n", n);//ͻȻ���֣���һ��Ҳ����ŵݹ�

}//���ǵݹ������λ��
//�ع����⣺������������n�Σ�����ÿһ�εĵ��ö���ʹa,b,c�⼸���������±�����
//�ռ临�Ӷ�S��n�� = O(n),ÿ���õ��ڴ�k�����˶��ٴ�n,������k(n)
//�ռ临�Ӷȵ��ں������õ����