#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 13;
	//��a�Ķ������еĵ����λ�ñ��1
	a = a | (1 << 4);
	printf("%d\n", a);
	//��a�Ķ������еĵ����λ�ñ��0
	a=a & ~(1 << 4);
	printf("%d\n", a);

	return 0;
}