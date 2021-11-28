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
	//存储数据-二维数组
	char board[ROW][COL];
	//初始化棋盘-初始化空格
	Initboard(board,ROW,COL);
	//打印棋盘-本质是打印数组的内容
	DisplayBoard(board,ROW,COL);
	char ret = 0;//接受游戏状态
	while (1)
	{
		//玩家走
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断是否玩家赢得游戏
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑走
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
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
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，重新选择");
			break;
		}
	} while (input);

	return 0;
}