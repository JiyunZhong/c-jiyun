#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 13;
	//把a的二进制中的第五个位置变成1
	a = a | (1 << 4);
	printf("%d\n", a);
	//把a的二进制中的第五个位置变成0
	a=a & ~(1 << 4);
	printf("%d\n", a);

	return 0;
}