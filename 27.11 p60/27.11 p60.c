#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//double Pow(int n, int k)
//{
//	int i = 0;
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / Pow(n, -k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret=Pow(n ,k);
//	printf("%lf\n", ret);
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}