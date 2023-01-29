//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include "game.h"
//
//void menu()
//{
//		printf("\n");
//		printf("**********************************\n");
//		printf("****     1.paly    0. exit    ****\n");
//		printf("**********************************\n");
//		printf("\n");
//		printf("make your choice:");
//}
//
//void game()
//{
//	int inp = 0;
//	srand((unsigned int)time(NULL)); //随机数 时间戳
//	menu();
//	do
//	{
//		scanf("%d",&inp);
//		switch(inp)
//		{
//		case 1:
//			printf("\n");
//			sanziqi();
//			printf("\nwanna try again? (1.paly /0. exit):");
//			break;
//		case 0:
//			printf("\n");
//			printf("game exit, done\n");
//			break;
//		default:
//			printf("error,press 1 to paly / 0 to exit):");
//			break;
//		}
//	} while (inp);
//}
//
//void sanziqi()
//{
//	char board[ROW][COL] = {0};
//	InitBoard(board, ROW, COL);
//	DisplayBoard(board, ROW, COL);
//	while(1)
//	{	
//		NumEnter(board, ROW, COL);
//		//Win(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		char tmp2 = Win(board, ROW, COL);
//		if (tmp2 == '*')
//		{
//			printf("you win!");
//			break;
//		}
//		else if (tmp2 == '#')
//		{
//			printf("you lose!");
//			break;
//		}
//		else if (tmp2 == 'q')
//		{
//			printf("the board is FULL, dogfall!");
//			break;
//		}
//
//		ComputerMove(board, ROW, COL);
//		//Win(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		//Win_check(board, ROW, COL);
//			char tmp = Win(board, ROW, COL);
//			if (tmp == '*')
//			{
//				printf("you win!");
//				break;
//			}
//			else if (tmp == '#')
//			{
//				printf("you lose!");
//				break;
//			}
//			else if (tmp == 'q')
//			{
//				printf("the board is FULL, dogfall!");
//				break;
//			}
//	
//		//system("cls");
//	}
//}
//
//int main()
//{
//	game();
//	return 0;
//}