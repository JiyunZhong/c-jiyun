#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ�˷���
void print_table(int n)
{
	int i = 0;
	for (i = 1;i <= n;i++)//��ӡһ��
	{
		int j = 0;
		for (j = 1;j <= i;j++)//��ӡһ��
		{

			printf("%2d*%2d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}
