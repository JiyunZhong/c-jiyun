#pragma once
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//���ŵĶ���
#define ROW 3
#define COL 3

//����������
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);
//�����
void Playermove(char board[ROW][COL],int row,int col);
//������
void Computermove(char board[ROW][COL], int row, int col);

//�ж���Ϸ��Ӯ
//���Ӯ�˷��ء���*
//����Ӯ�˷��ء���#
//ƽ�֡���Q
//��Ϸ��������C
char Iswin(char board[ROW][COL],int row,int col);