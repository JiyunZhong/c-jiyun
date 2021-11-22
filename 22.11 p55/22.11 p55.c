#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求1到100有几个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//简化
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1;i <= 100;i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}