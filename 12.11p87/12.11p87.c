#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	struct Stu s;//创建对象
//	return 0;
//}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	int sum = 0;
	/*for (i = 1;i <= n;i++)
	{
		ret *= i;
		sum += ret;
	}*/
	int j = 0;
	for (j = 1;j <= n;j++)
	{
		ret = 1;
		for (i = 1;i <= j;i++)
		{
			ret *= 1;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}