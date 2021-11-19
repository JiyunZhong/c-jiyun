#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//闰年函数
//int is_leap_year(int y)
//{
//	/*if ((y % 4 == 0 && y % 100!=0)||(y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//	//改进
//	return((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int num = 0;
//	for (y = 1000;y <= 2000;y+=2)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			num++;
//		}
//	}
//	printf("\n%d", num);
//	return 0;
//}

int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//找不到
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//找到了就返回找到位置的下标
	//找不到就返回-1
	int ret=binary_search(arr,key,sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}