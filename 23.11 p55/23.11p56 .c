#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印乘法表
void print_table(int n)
{
	int i = 0;
	for (i = 1;i <= n;i++)//打印一行
	{
		int j = 0;
		for (j = 1;j <= i;j++)//打印一列
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
