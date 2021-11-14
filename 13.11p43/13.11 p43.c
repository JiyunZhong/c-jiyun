#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断100到200的素数
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		//2到i-1之间的数字去试除i，看能不能整除
//		for (j = 2;j < i; j++)
//		{
//			if (i % j == 0)

//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count=%d\n", count);
//	return 0;
//}
//优化
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)//偶数不可能数素数
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2;j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag==1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	flag:
//	printf("hehe\n");
//	printf("haha\n");
//	goto flag;
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意电脑将在60秒后关机，如果输入取消关机，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"取消关机")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");
	//不用goto
	while(1)
	{
		printf("请注意电脑将在60秒后关机，如果输入取消关机，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "取消关机") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	return 0;
}