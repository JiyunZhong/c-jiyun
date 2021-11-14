<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	/*for (y = 1000;y <= 2000;y++)
	{
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
		}
	}
	if (y % 400 == 0)
	{
		printf("%d ", y);
		count++;
	}*/
	for (y = 1000;y <= 2000;y++)
	{
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount =%d\n", count);
	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	/*for (y = 1000;y <= 2000;y++)
	{
		if (y % 4 == 0)
		{
			if (y % 100 != 0)
			{
				printf("%d ", y);
				count++;
			}
		}
	}
	if (y % 400 == 0)
	{
		printf("%d ", y);
		count++;
	}*/
	for (y = 1000;y <= 2000;y++)
	{
		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\ncount =%d\n", count);
	return 0;
>>>>>>> 337e473fd0897d95c432094d2b2f8007383d70e3
}