#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

int my_strlen(const char *arr)
{
	int count = 0;
	assert(arr != NULL);
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcd";
	my_strlen(arr);
	printf("%d", my_strlen(arr));
	return 0;
}