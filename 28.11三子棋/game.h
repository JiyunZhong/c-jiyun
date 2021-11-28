#pragma once
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//符号的定义
#define ROW 3
#define COL 3

//函数的声明
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家走
void Playermove(char board[ROW][COL],int row,int col);
//电脑走
void Computermove(char board[ROW][COL], int row, int col);

//判断游戏输赢
//玩家赢了返回——*
//电脑赢了返回——#
//平局——Q
//游戏继续——C
char Iswin(char board[ROW][COL],int row,int col);