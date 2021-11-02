#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
//创造一个学生类型
struct stu
{
	char name[20];
	int age;
	double score;//成绩
};
//创造一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct stu a = { "张三",20,90 };//结构体的创建和初始化
	printf("%s %d %lf\n", a.name, a.age, a.score);
	return 0;
}