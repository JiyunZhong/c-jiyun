<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*if (1)*/
//	while (1)
//		printf("ja\n");
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
// 
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺\n");
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N):\n");
//	//int tmp = 0;
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int cr = getchar();
//	if (cr == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("ʧ��\n");
//	return 0;
//}
// 
//int main()
//{
//	int x;
//	int y;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//			/*break;*/
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//    printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	int ergebnis = 1;
//	do
//	{
//		i++;
//		ergebnis *= i;
//	} while (i <= n-1);
//	printf("%d", ergebnis);
//	return 0;
//}

//��1��+2��������+n!
//int main()
//{
//	int i = 0, n = 0, r = 0;
//	int ret = 1;
//	scanf("%d", &r);
//	int sum = 0;
//	for (n = 1;n <= r;n++)
//	{
//		ret =1;
//		for (i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}

//��
//int main()
//{
//	int i = 0, n = 0, r = 0;
//	int ret = 1;
//	scanf("%d", &r);
//	int sum = 0;
//	for (n = 1;n <= r;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ����֣���arr������������в���k��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե�һ��Ԫ�صĴ�С
	//���������Ԫ�ظ���
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*if (1)*/
//	while (1)
//		printf("ja\n");
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
// 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
// 
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺\n");
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N):\n");
//	//int tmp = 0;
//	while (getchar() != '\n')
//	{
//		;
//	}
//	int cr = getchar();
//	if (cr == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("ʧ��\n");
//	return 0;
//}
// 
//int main()
//{
//	int x;
//	int y;
//	for (x = 0, y = 0;x < 2 && y < 5;++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
// 
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//			/*break;*/
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	int sum = 1;
//	for (i = 1;i <= n;i++)
//	{
//		sum = sum * i;
//	}
//    printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	int ergebnis = 1;
//	do
//	{
//		i++;
//		ergebnis *= i;
//	} while (i <= n-1);
//	printf("%d", ergebnis);
//	return 0;
//}

//��1��+2��������+n!
//int main()
//{
//	int i = 0, n = 0, r = 0;
//	int ret = 1;
//	scanf("%d", &r);
//	int sum = 0;
//	for (n = 1;n <= r;n++)
//	{
//		ret =1;
//		for (i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}

//��
//int main()
//{
//	int i = 0, n = 0, r = 0;
//	int ret = 1;
//	scanf("%d", &r);
//	int sum = 0;
//	for (n = 1;n <= r;n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ����֣���arr������������в���k��7����ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);//�ܴ�С���Ե�һ��Ԫ�صĴ�С
	//���������Ԫ�ظ���
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����\n");
	}
	return 0;
>>>>>>> b002a3aa975519cc7619aca1c078b1b14ee75f74
}