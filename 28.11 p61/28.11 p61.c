#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 4;j++)
//		{
//			/*printf("%d ", arr[i][j]);*/
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		/*printf("\n");*/
//	}
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for (i = 0;i < 12;i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//	return 0;
//}

void bubble_sort(int arr[],int sz)
{
	//��������Ԫ�ظ���
	//int sz = sizeof(arr) / sizeof(arr[0]);//err����
	//ȷ������
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;//��ֹ�����鶼�������ʱ��һֱ�������ñȽ�
		for (j = 0;j <sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//�����ڴ��ε�ʱ����ʵ������������Ԫ�صĵ�ַ
	//����Ϊ����-ð������
	bubble_sort(arr,sz);
	return 0;
}