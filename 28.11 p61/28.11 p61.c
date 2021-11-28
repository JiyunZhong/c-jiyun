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
	//计算数组元素个数
	//int sz = sizeof(arr) / sizeof(arr[0]);//err错误
	//确定趟数
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//防止当数组都是有序的时候一直进行无用比较
		for (j = 0;j <sz-1-i ;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
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
	//数组在传参的时候其实传的是数组首元素的地址
	//排序为升序-冒泡排序
	bubble_sort(arr,sz);
	return 0;
}