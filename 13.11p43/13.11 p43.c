#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�100��200������
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		//2��i-1֮�������ȥ�Գ�i�����ܲ�������
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
//�Ż�
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 101;i <= 200;i+=2)//ż��������������
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
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����Խ���60���ػ����������ȡ���ػ�����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"ȡ���ػ�")==0)
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
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 60");
	//����goto
	while(1)
	{
		printf("��ע����Խ���60���ػ����������ȡ���ػ�����ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "ȡ���ػ�") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	
	return 0;
}