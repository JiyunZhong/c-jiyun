#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>//strlenͷ�ļ�
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
//		Sleep(1000);//�ȴ�һ��
//		system("cls");//�����Ļ
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
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��½ʧ�ܣ��������\n");
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
//		printf("����������:");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}

//�������Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//����
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
//	printf("%d %d %d\n", a, b, c);//���
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

//������ֵ�����Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = 0;
//	//�������Լ����m��n��С���Ǹ�
//	if (m > n)
//		max = n;
//	else
//		max = m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ���ǣ�%d\n", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}
// 
//շת�����
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