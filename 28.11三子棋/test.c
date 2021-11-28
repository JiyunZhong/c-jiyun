#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*********************************\n");
	printf("************   1.play   *********\n");
	printf("************   0.exit   *********\n");
	printf("*********************************\n");
}

void game()
{
	//�洢����-��ά����
	char board[ROW][COL];
	//��ʼ������-��ʼ���ո�
	Initboard(board,ROW,COL);
	//��ӡ����-�����Ǵ�ӡ���������
	DisplayBoard(board,ROW,COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�����
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж��Ƿ����Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);

	return 0;
}