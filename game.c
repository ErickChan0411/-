//#include <stdio.h>
//#include "game.h"
//#include <string.h>
//
////int key_1 = 0;
////int key_2 = 0;
//
//void keyboard(int x, int* key_1, int* key_2)
//{
//		switch (x)
//		{
//		case 1:
//			*key_1 = 2;
//			*key_2 = 0;
//			break;
//		case 2:
//			*key_1 = 2;
//			*key_2 = 1;
//			break;
//		case 3:
//			*key_1 = 2;
//			*key_2 = 2;
//			break;
//		case 4:
//			*key_1 = 1;
//			*key_2 = 0;
//			break;
//		case 5:
//			*key_1 = 1;
//			*key_2 = 1;
//			break;
//		case 6:
//			*key_1 = 1;
//			*key_2 = 2;
//			break;
//		case 7:
//			*key_1 = 0;
//			*key_2 = 0;
//			break;
//		case 8:
//			*key_1 = 0;
//			*key_2 = 1;
//			break;
//		case 9:
//			*key_1 = 0;
//			*key_2 = 2;
//			break;
//		default:
//			printf("error pleas enter num 1-9:");
//			break;
//		}
//
//}
//
//
//void DisplayBoard(char board[ROW][COL],int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	printf("***** start *****\n");
//	printf("\n");
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (j < COL - 1)
//				printf("  %c  |", board[i][j]);
//			else if (j = COL - 1)
//				printf("  %c  \n",board[i][COL-1]);
//		}
//		if (i < ROW - 1)
//		{
//			for (k = 0; k < COL; k++)
//			{
//				if (k < COL - 1)
//					printf("-----|");
//				else if (k = COL - 1)
//					printf("-----\n");
//			}
//		}
//	}
//	printf("\n");
//	printf("\n");
//}
//
//void InitBoard(int board[ROW][COL], int row, int col)  //ÆåÅÌ³õÊ¼»¯
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			printf(" ");
//		}
//		printf("\n");
//	}
//}
//
//
//void NumEnter(char board[ROW][COL], int row, int col)
//{
//	int key = 0;
//	int key_1 = 0;
//    int key_2 = 0;
//	printf("**** round player ****\n");
//	while (1)
//	{
//		if (row == 3 && col == 3)
//		{
//			printf("1-9 is corresponding with the board,enter num: ");
//			scanf("%d", &key);
//			keyboard(key, &key_1, &key_2);
//			if (board[key_1][key_2] == 0)
//			{
//				board[key_1][key_2] = '*';
//				break;
//			}
//			else
//				printf("this palce had been taken, pleas enter another one:");
//		}
//		else if (row > 3 || col > 3)
//		{
//			Player_Enter(board, row, col);
//			DisplayBoard(board, row, col);
//			ComputerMove(board, row, col);
//			DisplayBoard(board, row, col);
//		}
//	}
//
//
//
//	
//	//if (row_1 - 1 > row && col_1 - 1 > col)
//	//{	
//	//		printf("error, enter right row/col num in %d/%d: ", ROW, COL);
//	//			scanf("%d", &row_1 - 2);
//	//			scanf("%d", &col_1 - 2);
//	//}
//}
//
//void Player_Enter(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("round player:\n");
//	while (1)
//	{
//		printf("Player enter the num, exp:(row(1-%d) col(1-%d)): ", ROW, COL);
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (board[x - 1][y - 1] == 0 )
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//				printf("this palce had been taken, pleas enter another one:");
//		}
//		else
//			printf("error, enter right row/col num in %d/%d: ", ROW, COL);
//
//	}
//}
//
//
//	//keyboard(key, key_1, key_2);
//	//board[key_1][key_2] = '*';
//	//DisplayBoard(board, ROW, COL);
//
//
//	//if (row_1 - 1 > row && col_1 - 1 > col)
//	//{
//	//	printf("error, enter right row/col num in %d/%d: ", ROW, COL);
//	//	scanf("%d", &row_1 - 2);
//	//	scanf("%d", &col_1 - 2);
//	//}
//
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("round computer:\n");
//	while (1)
//	{
//		x = rand() % row;
//		y = rand() % col;
//		if (board[x][y] == 0)
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//
//}
//
//char Win(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	int b = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != 0)
//		{
//			return (board[i][1]);
//		}
//	}
//	for (j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != 0)
//		{
//			return (board[1][j]);
//		}
//	}
//
//		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != 0)
//		{
//			return (board[1][1]);
//		}
//		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != 0)
//		{
//			return (board[1][1]);
//		}
//
//		if (1 == FULL(board, ROW, COL))
//		{
//			return 'q';
//		}
//}
//int FULL(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == 0)
//				return 0;
//		}
//	}
//	return 1;
//}
//
//void Win_check(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		char tmp = Win(board, ROW, COL);
//		if (tmp == '*')
//		{
//			printf("you win!");
//			break;
//		}
//		else if (tmp == '#')
//		{
//			printf("you lose!");
//			break;
//		}
//		else if (tmp == 'g')
//		{
//			printf("dogfall");
//			break;
//		}
//	}	
//}
