#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;*/
//
//	int a = 3;
//	int b = 5;
//	//����
//	int c = 0;//��ƿ
//	printf("a=%d b=%d", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d b=%d", a, b);
//
//	������ʹ�õ���������
//	/*int a = 3;
//	int b = 5;
//	printf("a=%d b=%d", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d b=%d", a, b);*/
//	�������̫�󳬹�int�����ޣ��ͻ����
//
//	int a = 3;
//	/*int b = 5;
//	printf("a=%d b=%d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//
//	return 0;*/
//
//
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int a = 13;
//	int i = 0;
//	int count = 0;
//	for (i = 1;i < 32;i++)
//	{
//		if (a & 1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}

int main()
{
	int a = 13;
	a = a | (1 << 4);
	printf("%d", a);
	return 0;
}