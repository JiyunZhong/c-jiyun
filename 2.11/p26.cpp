#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
//����һ��ѧ������
struct stu
{
	char name[20];
	int age;
	double score;//�ɼ�
};
//����һ���������
struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct stu a = { "����",20,90 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", a.name, a.age, a.score);
	return 0;
}