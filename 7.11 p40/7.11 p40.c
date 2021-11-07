#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>//strlen头文件
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//等待一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}
// 
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误请重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("登陆失败，密码错误\n");
//	}
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("************1.play***********\n");
//	printf("************0.exit***********\n");
//	printf("*****************************\n");
//}
//void game()
//{
//	
//	int ret= rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//三个数从大到小排列
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//输入
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);//输出
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//给两个值求最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	//假设最大公约数是m和n中小的那个
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数是：%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}
// 
//辗转相除法
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int t = 0;
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("%d\n", n);
	return 0;
}