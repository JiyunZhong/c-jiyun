#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

//如果要打印10*10的棋盘就不行
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0;i < row;i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if(i<row-1)//最后一次不打印分隔
//			printf("---|---|---\n");
//		
//	}
//}

//优化
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0;j < col;j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
			/*printf("---|---|---\n");*/
	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入下棋坐标：>");
		scanf("%d %d", &x, &y);
		//判断坐标合理性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标不合理，请重新输入\n");
		}
	}
}
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int Isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行是否相同
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
		//err
		/*int j = 0;
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == board[i][j+1] && board[i][j+1] == board[i][j+2] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}*/
	}
	//判断三列是否相同
	for (i = 0;i < col;i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
		//err
		/*int j = 0;
		for (j = 0;j < col;j++)
		{
			if (board[j][i] == board[j][i + 1] && board[j][i + 1] == board[j][i + 2] && board[j][i] != ' ')
			{
				return board[j][i];
			}
		}*/
	}
	//判断对角线是否相同
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//是否平局
	//如果棋盘满了返回——1，不满返回——0
	int ret=Isfull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	//继续
	return 'C';
}